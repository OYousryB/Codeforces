#include <iostream>
#include <algorithm>
using namespace std;
long long int a[1000000];
int main(){
    long long int n;
    cin>> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0; i<n/2;i= i+2){
        swap(a[i],a[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout << a[i]<< " ";
    }
    return 0;
}