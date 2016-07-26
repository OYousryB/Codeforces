#include <iostream>
#include <stdio.h>
using namespace std;
char s[20];
int flag[10] = {0};
int main()
{
    int n;
    scanf("%d",&n);
   // memset(flag,0,sizeof(flag));
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='4')
        {
            flag[3]+=1;
            flag[2]+=2;
        }
        else if(s[i]=='6')
        {
            flag[5]+=1;
            flag[3]+=1;
        }
        else if(s[i]=='8')
        {
            flag[7]+=1;
            flag[2]+=3;
        }
        else if(s[i]=='9')
        {
            flag[7]+=1;
            flag[3]+=2;
            flag[2]+=1;
        }
        else flag[s[i]-'0']+=1;
    }
    for(int i=7;i>1;i--)
    {
        //cout<<"@"<<flag[i]<<endl;
            while(flag[i])
            {
                printf("%d",i);
                flag[i]-=1;
            }
    }
}
