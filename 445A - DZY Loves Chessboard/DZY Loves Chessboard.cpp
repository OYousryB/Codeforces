#include<iostream>
using namespace std;
char c[105][105];
int n,m;
main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
        	cin >> c[i][j];
    	}
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(c[i][j]=='.'){
                if((i+j)%2){
                    c[i][j]='B';
                }else{
                    c[i][j]='W';
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }
}
