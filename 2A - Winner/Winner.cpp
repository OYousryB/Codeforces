#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string,int>m1,m2;
string name[1010];
int score[1010];
int main()
{	
	
    int n;
    int maxx=-1005;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>name[i]>>score[i];
        m1[name[i]]+=score[i];
    }
    for(int i=0;i<n;i++)
    {
        if(m1[name[i]]>maxx)
            maxx=m1[name[i]];
    }
    for(int i=0;i<n;i++)
    {
        m2[name[i]]+=score[i];
        if(m2[name[i]]>=maxx && m1[name[i]]>=maxx)
        {
            cout<<name[i]<<endl;
            break;
        }
    }
    return 0;
}
