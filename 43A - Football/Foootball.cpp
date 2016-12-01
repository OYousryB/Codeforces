#include <iostream>
#include <string>
using namespace std;
int main(){
    string var,t1,t2;
    int c1=1 ,c2=0,n;
     cin >> n;
     cin >> var;
     t1= var;
     for(int i=0; i<n-1;i++){
         cin >> var;
         if(var == t1)
             c1++;
        else{
           t2 = var;
           c2++;
        }
     }
        if(c1 > c2)
            cout << t1 << endl;
        else
            cout << t2 << endl;
    return 0;
}
