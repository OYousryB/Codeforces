#include <iostream>
#include <algorithm>
using namespace std;

int arr[1005],vis[1005];

int main(){
    int n;
    cin>>n;    
	for(int i = 0; i < n; i++)
 		cin >>arr[i];
    
        int cnt = 0,sum = 0,ans = 0,flag = 1;
        while(cnt < n){
        if(flag == 1){
            for(int i = 0; i < n; i++){
                if(!vis[i] && arr[i] <= cnt){
                    vis[i] = 1;
                    cnt++;
                }
            }
            flag = 0;
        }
        else{
            for(int i = n-1; i >= 0; i--){
                if(!vis[i] && arr[i] <= cnt){
                    vis[i] = 1;
                    cnt++;
                }
            }
            flag = 1;
        }
        ans++;
    }
    cout<< ans-1<<endl;
}

