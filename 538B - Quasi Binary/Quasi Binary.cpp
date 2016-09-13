#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=0;
    for(int i=0;i<s.size();i++)
        len=max(len,s[i]-'0');
    cout<<len<<endl;
    for(int i=0;i<len;i++)
    {
        int flag=0;
        for(int j=0;j<s.size();j++)
        {
            if(!flag)
            {
                if(s[j]=='0')
                    continue;
                else
                {
                    cout<<"1";
                    s[j]--;
                    flag=1;
                }
            }
            else
            {
                if(s[j]=='0')
                    cout<<"0";
                else
                {
                    cout<<"1";
                    s[j]--;
                }
            }

        }
        cout<<" ";
    }
}
