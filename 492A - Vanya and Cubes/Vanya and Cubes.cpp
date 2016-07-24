#include<iostream>
using namespace std;


int main()
{   

    int n, sum = 0, k = 0,i;
    cin >> n;
    for (i = 1; n>=sum; ++i)
    {
    	k += i;
    	sum += k;


    }
    cout<<i-2<<endl;

    return 0;
}
