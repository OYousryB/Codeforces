#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	int total=0;
	cin >> a >> b >> c;
	for(int i=1,j=2,k=4;  i<=a && j<=b && k<=c ; i++,j+=2,k+=4){
		if(i%1 == 0 && j%2 == 0 && k%4 == 0){
			total = i+j+k;
		}	
	}
	cout << total << endl;
	return 0;
}