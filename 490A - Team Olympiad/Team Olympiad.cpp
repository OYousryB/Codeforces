#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define size 5005
int arr[size],  a1[size], a2[size], a3[size];
int main()
{
    int n, i;
    int count1 , count2, count3;
    int index1, index2, index3;
    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin>> arr[i];
    }
    count1=count2=count3=0;
    index1=index2=index3=1;
    for(i=1; i<=n; i++)
    {
        if(arr[i]==1)
        {
            a1[index1++] = i;
            count1++;
        }
        if(arr[i]==2)
        {
            a2[index2++] = i;
            count2++;
        }
        if(arr[i]==3)
        {
            a3[index3++] = i;
            count3++;
        }
    }
    int team = min(count1,min(count2, count3));
    cout<< team <<endl;
    for(i=1; i<=team; i++)
    {
        cout << a1[i] <<" "<< a2[i] <<" "<<a3[i] <<endl;
    }
    return 0;
}

