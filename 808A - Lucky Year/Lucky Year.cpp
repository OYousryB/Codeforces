#include <iostream>
using namespace std;
int main(){
	long long int n,rem,c=0,mult=1,first;
	cin >> n;
	if (n<9){
		cout<< 1 <<endl;
		return 0;
	}
	rem = n;
	 while(n >= 9){

 		n=n/10;
	   c++;
 	}
	for(int i=0;i<c;i++){
		mult=mult*10;
	}
	first = rem % mult;
	//cout << first <<endl;
	cout << mult-first<<endl;
	//cout << n ;
}