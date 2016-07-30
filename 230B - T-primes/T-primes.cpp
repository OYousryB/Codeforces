#include <iostream>
#include <cmath>
using namespace std;
int a[1000100];
void isans()
{
    for (int i = 1; i <= 1000000; i++)  a[i] = 1;
    a[1] = 0;
    for (int i = 2; i <= 1000000; i++)
    { 
        if ((long long)i * i <= 1000000 && a[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                    a[j] = 0;
            }       
        }
    } 
}
int main(){
    int n;
    cin >> n;
    isans();
    while(n--)
    {
        long long x;
        cin >> x;
        long long num = sqrt(x);
        if (num * num == x && a[num])
            cout << "YES\n";
        else
            cout << "NO\n";
    } 
    return 0;
}
/*
int main() 
	{
		long long  n,x,count=0 ;
		cin>> n;
		long long  arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			for(int j=1;j<=arr[i];j++)
	  		{
	     	 if(arr[i]%j==0)
	      		{
		          count++;
	     	 	}	
	  		}
  			if(count==3)
     	 	cout<<"YES"<<endl;
     		 else
     	 	cout<<"NO"<<endl;
     	 	count =0;
 		
		}
	
	
     	 	
		return 0;
	}
*/
