#include<bits/stdc++.h>
using namespace std;
int main(){
 long long k,sum = 0, change = 0, done =  0, ans = 0 ; 
 string  n ;
 cin >> k >> n ;
 long long sz = n.size() ;
 for (int i = 0 ; i < sz ; i++){
    sum += (n[i] - '0') ;
 }
 if ( sum <  k ){
    change = k - sum ;
    sort (n.begin() , n.end());
    for (int i = 0 ; i < sz ; i++){
      if (done >= change){
        break ;
      }
      done += ('9' - n[i])  ; 
      ans ++ ;
    }
 }
 cout << ans << endl;
    return 0;
}
