#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int y,w,d;
	cin >> y >> w;
	d = max(y,w);
	if(d==1) 
		cout << "1/1" << endl;
	if (d==2)
		cout << "5/6" << endl;
	if (d==3)
 		cout << "2/3" << endl;
	if (d==4)
		cout << "1/2" << endl;
	if (d==5)
		cout << "1/3" << endl;
	if (d==6)
		cout << "1/6" << endl;
		
	return 0;
}
