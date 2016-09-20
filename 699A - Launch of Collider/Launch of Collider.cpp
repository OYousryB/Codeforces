#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
int main()
{
    int n , k = 0 ;
    string s ;
    cin >> n >> s ;
    int a[n] , b[n] ;
    for ( int i = 0 ; i < n ; i++ )
   		cin >> a[i] ;
   		
     for ( int i = 1 ; i < n ; i++ ){
             if( s[i] == 'L' && s[i-1] == 'R' ){
                    b[k] =  abs ( a[i] - a[i-1]) / 2 ;
                    k++ ;
             }
     }
     sort ( b , b + k ) ;
     if ( k == 0 )
     	cout << -1 <<endl;
     else
        cout << b[0] <<endl;
    return 0 ;
}
