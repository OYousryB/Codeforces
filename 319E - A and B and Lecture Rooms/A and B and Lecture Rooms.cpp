#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
const int maxN = 1e5+1;
const int lgN = 19;
vector<int> G[maxN];
int N, M, d[maxN], p[lgN][maxN], root, size[maxN];

void dfs(int u, int f){
    size[u] = 1;
    for(int i = 0; i < G[u].size(); ++i){
        int v = G[u][i];
        if(v == f) continue;
        else{
            p[0][v] = u;
            d[v] = d[u] + 1;
            dfs(v, u);
            size[u] += size[v];
        }
    }
}

void init(){
    for(int i = 0; i < lgN; ++i){
        p[i][root] = root;
    }
    for(int i = 1; i < lgN; ++i){
        for(int j = 1; j <= N; ++j){
            p[i][j] = p[i-1][p[i-1][j]];
        }
    }
}

int lca(int x, int y){
    if(d[y] > d[x]) swap(x, y);
    for(int i = 0; i < lgN; ++i){
        if((d[x] - d[y]) >> i & 1){
            x = p[i][x];
        }
    }
    if(x == y) return x;
    for(int i = lgN-1; i >= 0; --i){
        if(p[i][x] != p[i][y]){
            x = p[i][x];
            y = p[i][y];
        }
    }
    return p[0][x];
}

int ancestor(int v, int l){
    int res = v;
    for(int i = 0; i < lgN; ++i){
        if(l >> i & 1){
            res = p[i][res];
        }
    }
    return res;
}

int solve(int a, int b){
    int LCA = lca(a, b);
    int da = d[a] - d[LCA];
    int db = d[b] - d[LCA];
    if(db > da){
        swap(a, b);
        swap(da, db);
    }
    if(a == b) return N;
    else if((da + db) & 1) return 0;
    else if(da == db){
        int pa = ancestor(a, da-1);
        int pb = ancestor(b, db-1);
        return size[root] - size[pa] - size[pb];
    }
    else{
        int len = (da + db)/2;
        int pa = ancestor(a, len);
        int pap = ancestor(a, len-1);
        return size[pa] - size[pap];
    }
}

int main(){
    scanf("%d", &N);
    for(int i = 0; i < N-1; ++i){
        int u, v;
        scanf("%d%d", &u, &v);
        G[u].push_back(v);
        G[v].push_back(u);
    }
    root = 1;
    dfs(root, root);
    init();
    scanf("%d", &M);
    for(int i = 0; i < M; ++i){
        int a, b;
        scanf("%d%d", &a, &b);
        int ans = solve(a, b);
        printf("%d\n", ans);
    }
    return 0;
}
