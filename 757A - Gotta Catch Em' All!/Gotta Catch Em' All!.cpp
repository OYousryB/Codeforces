#include <iostream>
#include <string>
using namespace std;
int x1,x2,x3,x4,x5,x6,x7;
int main(){
	string s;
	cin >> s;
	int count=0;
	for(int i=0;i<s.size();i++){
		if(s[i]== 'B')	x1++;
	 	if(s[i]== 'u')	x2++;
		if(s[i]== 'l')	x3++;
		if(s[i]== 'b')	x4++;
		if(s[i]== 'a') 	x5++;
		if(s[i]== 's') 	x6++;
		if(s[i]== 'r')	x7++;
			
	}
	while(x1>0 && x2>1 && x3>0 && x4>0 && x5>1 && x6>0 && x7>0){
		x1--;
		x2=x2-2;
		x3--;
		x4--;
		x5=x5-2;
		x6--;
		x7--;
		count++;
	}
	cout << count << endl;
	return 0;
}