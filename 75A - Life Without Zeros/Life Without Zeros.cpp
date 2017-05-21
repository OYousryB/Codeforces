#include <iostream>
#include <math.h>
using namespace std;

int removeZ(int num){
	int rem,x=0,newN=0;
	while(num!=0)
	{
		rem=num%10;
		if(rem == 0)
			num=num/10;
		else{
			newN+= (rem*pow(10,x));
			num=num/10;
			x++;
		}	
	}
	return newN;
}

int main(){
	int a,b,c,z;
	cin >> a >> b ;
	c = a+b;
	z = removeZ(a) + removeZ(b);
	if(removeZ(c) == z)
		cout << "YES" <<endl;
	else
		cout << "NO" <<endl;
	return 0;
}
