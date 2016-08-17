#include <iostream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,f=0;
    string s;
    cin>>s>>n;
    if(s.size() % n != 0)
        cout<<"NO"<<endl;
    else
    {
        int cnt=s.size()/n;
        for(int i=0; i<s.size(); i+=cnt)
        {
            for(int j=0; j<cnt/2; j++)
            {
                if(s[i+j] != s[cnt+i-j-1])
                {
                    f=1;
                    break;;
                }
            }
        }
        if(f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
