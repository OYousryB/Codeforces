#include <iostream> 
#include <stdio.h>
using namespace std;  
int v[105];  
bool vis[105];  
int main()  
{  
    int n,sum=0,avg;  
    cin>>n;  
    for(int i=1;i<=n;i++)  
    {  
        cin>>v[i];  
        sum+=v[i];  
    }  
    avg=2*sum/n;  
    for(int i=1;i<=n;i++)  
    {  
        if(!vis[i])  
        {  
          for(int j=i+1;j<=n;j++)  
          {  
              if(!vis[j]&&v[i]+v[j]==avg)  
              {  
                  cout<< i << " " << j <<endl;  
                  vis[i]=vis[j]=1;  
                  break;  
              }  
          }  
        }   
    }  
    return 0;  
}  
