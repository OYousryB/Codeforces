#include <iostream>
using namespace std;

int main(){
	int k, r;
	cin >> k >> r;
	for( int i = 1; i < 10; i++){
		if(k * i % 10 ==  0 || k * i % 10 == r){
			cout << i << endl;
			break;
		}
	}
	return 0;
}
/* 
int main(){
    int k,r;
    cin>>k>>r;
    int x=0,j=1;
    while(1){
    x+=k ;
    if(x%10==0 || x%10==r){
        cout<<j;
        return 0;
    }
    j++;
    }
    return 0;
}
*/
