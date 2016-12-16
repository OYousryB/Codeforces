#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,votes=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
		cin>>a[i];
    sort(a+1,a+n);
    if(a[0]>a[n-1])
		cout<<0;
    else
    {
        while(a[0]<=a[n-1])
        {
            a[0]++;
            votes++;
            a[n-1]--;
            sort(a+1,a+n);

        }
    cout<<votes<<endl;
}
return 0;
}
