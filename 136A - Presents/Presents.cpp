#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <map>
using namespace std;

int main(){
int num_friends, i;
map <int , int> pi;

cin>>num_friends;

for (int x=1; x<=num_friends; x++)
{
cin>>i;
pi[i]= x;
}
for (int x=1; x<=num_friends; x++)
cout << pi[x] << " " ;

}


