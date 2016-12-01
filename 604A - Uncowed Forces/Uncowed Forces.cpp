#include <iostream>
#include <algorithm>
using namespace std;
double m[5],w[5];
int main(){
	double successful,unsuccessful,x=500,total=0,hacked=0;
	for(int i=0;i<5;i++){
		cin >> m[i];
	}
	for(int i=0;i<5;i++){
		cin >> w[i];
	}
	cin >> successful >> unsuccessful;
	for(int i=0;i<5;i++){
		total+=max(0.3*x,(1-m[i]/250)*x-50*w[i]);
		x+=500;
	}
	hacked=(successful*100) - (unsuccessful*50);
	cout << total +hacked << endl;
	return 0;
}
	
