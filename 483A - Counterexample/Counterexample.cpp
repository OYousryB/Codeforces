#include <iostream>
using namespace std;
int main()
{
  long long l,r;
  cin>>l>>r;
  if(r-l<2)
  {
    cout<<-1<<endl;
    return 0;
  }
  if(l%2==0)
  {
    cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    return 0;
  }
  if(r-l==2)
  {
    cout<<-1<<endl;
    return 0;
  }
  cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
  return 0;
}
