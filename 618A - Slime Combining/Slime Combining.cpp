#include <iostream>
using namespace std;
int main()
{
 int num,arr[64];
 cin>>num;
 int i=0,r;
 while(num!=0)
{
  r = num%2;
  arr[i] = r;
  num /= 2;
  i++;
}
int c =i;
for(int j=i-1;j>=0;j--){
	if(arr[j]==0){
		c--;
		}
	else{
		 cout<<arr[j]*c<< " ";
		 c--;
		}
	}
}
/*
	int n;	
	cin >>n;
	for (int i = 20; i >=0; i--) {
		if ( (n >> i) & 1)
			cout <<i+1 << " ";
	}
	
	return 0;
}
*/
