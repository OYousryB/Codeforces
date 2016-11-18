#include <iostream>
using namespace std;
int main()
{
   int k2,k3,k5,k6,final=0;
   cin>>k2>>k3>>k5>>k6;
   while ((k2!=0)&&(k5!=0)&&(k6!=0)){
    final+=256;
    k2--,k5--,k6--;
   }
   while((k2!=0)&&(k3!=0)){
		final+=32;
  		k2--,k3--;
  		}
    cout<<final<<endl;
    return 0;
}
