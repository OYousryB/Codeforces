#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main( )
{
     int a[110];
     int i, j, temp, n ;
     cin>>n;
     for(j=0; j<n; j++)
        cin>>a[j];
     for(j=1;j<n;j++)
     {
          for(i=0; i < n - 1; i++)
          {
               if(a[i]>a[i+1])
               {
                     temp=a[i];
                     a[i]=a[i+1];
                     a[i+1]=temp;
               }
          }
     }

     for ( i = 0 ; i <n ; i++ )
     cout << a[i] << " ";


 }
