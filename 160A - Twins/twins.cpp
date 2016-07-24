#include <iostream>
#include <stdio.h>
#include <algorithm> 
#include <vector>


using namespace std;

int main()
{
   int n, x,i ,taken,total=0;
   vector <int> coins;
   while(cin >> n){
       for (int k=0;k <n ; k+=1){
       cin>> x;
       coins.push_back (x);
       total = total+ x;
   }
   sort (coins.begin(), coins.end());
   i = coins.size();
   taken =0;
   do{
       
       taken = taken + coins [--i];
       
   } while (total - taken >= taken && (i-1) > -1 );
       
       cout << coins.size() -i;
   }
   return 0;
}
