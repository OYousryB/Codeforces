#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,m,k,arr[100],right=999,left=999;
	cin >> n >> m >> k;
	for(int i=1;i<=n;i++){
		cin >> arr[i];
	}
	int moves=0;
	for(int i = m; i<=n; i++){
			if(arr[i] != 0 && arr[i]<=k){
				right = moves;
				break;
			}
			else
				moves++;
		}
	moves=0;
		for(int i = m; i>0; i--){
			if(arr[i] != 0 && arr[i]<=k){
				left = moves;
				break;
			}
			else
				moves++;
		}
		cout<<min(left, right)*10<<endl;
}
