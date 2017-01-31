#include <iostream>
 using namespace std;
 int main(){
 	
	int n,k,count=0,add;
	int i=1,totalt=0;
	cin >> n >> k ;
	totalt = k;
	while (totalt <= 240 && i<=n){
		add = i*5;
		totalt+= add;
		//cout << add << "    " <<totalt << endl;
		i++;
		if(totalt <= 240)
		count++;
	}
	cout << count << endl;
	return 0;
	
 }