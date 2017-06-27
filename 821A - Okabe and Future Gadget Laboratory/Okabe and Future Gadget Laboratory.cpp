#include <iostream>
using namespace std;
int arr[51][51];
bool check(int row, int col,int n){
	if(arr[row][col]==1)
		return true;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[row][i]+arr[j][col]==arr[row][col]){
				//cout << arr[row][i]<<" + "<<arr[j][col]<< " =" << arr[row][col]<<endl;
				return true;
			}		
		}
	}
	return false;
}

int main(){
	int n,x=0,y=0;
	cin >> n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			cin >> arr[i][j];
		}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(!check(i,j,n)){
				cout <<"NO"<<endl;
				return 0;
			}
				
		}
	}
	cout << "YES"<<endl;
	return 0;
}
		
