#include <iostream>
using namespace std;
int main() {
    int n;
	cin>>n;
    if(n % 2==1) {
		cout<<"0"<<endl;
    }
    else {
        n /= 2;
        
        if(n % 2 == 1){
	 	int half = n/2;
	 	cout<<half<<endl;
        }
		else{		
        int half = n / 2 - 1;
        cout<<half<<endl;
		}
    }
    
    return 0;
}
