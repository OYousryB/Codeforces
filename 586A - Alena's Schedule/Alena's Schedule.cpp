#include<iostream>
using namespace std;

int array[101];
int main()
{
    int n,count=0;
    cin >> n;
    for(int i=1;i<=n;i++)
       cin>>array[i];

    for(int i=1;i<=n;i++)
    {
        if(array[i]==1)
            count++;
        if(array[i]==0&&array[i-1]==1&&array[i+1]==1)
            count++;
    }
    cout<<count<<endl;
}			
	
	
	
