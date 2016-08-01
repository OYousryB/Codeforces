#include <iostream>  
#include <algorithm>  
using namespace std;  
 
int main()  
{  
    int t,n,m;  
    bool ok[1000005]; 
    cin>>t;  
    for(int i=1; i<=t; ++i){  
        for(int j=1; j<=t; ++j){  
                int x;  
                cin>>x;  
                if(x==1||x==3)  
                    ok[i]=true;  
            }  
    }  
    int ans=0;  
    for(int i=1; i<=t; ++i){  
        if(!ok[i]) 
			ans++;  
    }  
    cout<<ans<<endl;;  
     for(int i=1; i<=t; ++i){  
         if(!ok[i])  
            cout << " " << i;  
     }  
     if(ans) 
		cout<<""<<endl;  
     return 0;  
}  
