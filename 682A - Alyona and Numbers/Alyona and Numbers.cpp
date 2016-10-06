#include <iostream>
 using namespace std;
 int main()
 {
     long long i,a,b,count=0;

     cin>>a>>b;
     for(i=1;i<=a;i++)
     {
         count+=((i+b)/5-(i/5));
     }
     cout<<count<<endl;
   return 0;
 }
