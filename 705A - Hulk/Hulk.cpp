#include <iostream>  
#include <cstdio>  
using namespace std;  
int main()  
{  
    int n;  
    cin>>n;  
    for (int i=1;i<=n;i++)
        {
            if (i%2) 
				cout<<"I hate ";
            else 
				cout<<"I love ";
            if (i==n) 
				cout<<"it"<<endl;
            else
				cout<<"that ";
        }
    cout<<endl;  
    return 0;  
}  
/*
  for(int i=1;i<n;i++)  
    {  
        if(i%2)  
          cout<<"I hate that ";  
        else  
          cout<<"I love that ";  
    }  
    if(n%2)  
      cout<<"I hate it";  
    else  
      cout<<"I love it";  
*/
