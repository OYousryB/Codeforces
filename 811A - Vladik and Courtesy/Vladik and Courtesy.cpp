#include <iostream>
using namespace std;
int main(){
	long long int a,b,steps=1,candies=1;
	cin >> a >> b;
	while(true){
		if(steps % 2 !=0){
			if (a- candies < 0){
				cout << "Vladik" <<endl;
				return 0;
			}
			a -=candies;
		}
		else {
			if (b- candies < 0){
				cout << "Valera" <<endl;
				return 0;
			}
			b -=candies;
		}
			
		steps++;
		candies++;
		cout << a << " "<< b<<endl;
		}
			
}