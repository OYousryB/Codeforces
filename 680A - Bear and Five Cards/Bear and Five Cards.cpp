#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a[5];
    for(int i=0;i<5;i++)
		 cin>>a[i];
 
    sort(a,a+5);
    if(a[4]==a[3]&&(a[0]==a[1]&&a[0]==a[2])){
        cout<<min(a[1]+a[0]+a[2],a[3]+a[4]);
        return 0;
    }
    if(a[1]==a[0]&&(a[2]==a[3]&&a[2]==a[4])){
        cout<<min(a[2]+a[3]+a[4],a[1]+a[0]);
        return 0;
    }
    
    for(int i=4;i>0;i--){
        if(a[i]==a[i-1]&&a[i]==a[i-2]){
            a[i]=0;a[i-1]=0;a[i-2]=0;
			break;
        }
        else if(a[i]==a[i-1]&&a[i]!=a[i-2]){
            a[i]=0;a[i-1]=0;
			break;
        }
    }
        cout<<a[0]+a[1]+a[2]+a[3]+a[4];
    return 0;
}
