#include<iostream>
using namespace std;
int main(){
  // freopen("in.in", "r", stdin);
  int n,a,p;
  int money = 0, price = 101;
  cin >>n;
  while(n--){
    cin >> a >> p;
    if(price > p){ price = p; }
    money += price * a;
  }
  cout<< money<<endl;
 return 0;
}
