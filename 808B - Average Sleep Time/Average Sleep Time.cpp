#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
  int n,i,j,k,m;
  double a[200005]={0},ans=0,c=0,out=0;

  cin>>n>>k;
  for(i=1;i<=n;i++)
  {
      cin>>a[i];
  }
  for(i=1;i<k;i++)
  {
      ans+=a[i];
  }
  for(i=k;i<=n;i++)
  {
    ans+=a[i]-a[i-k];
    out+=ans;
    c++;
  }
  out=out/c;
	cout<<fixed<<setprecision(6)<< out << endl;
  return 0;
}