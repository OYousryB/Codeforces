#include <bits/stdc++.h>
using namespace std;
int main(){

    string s; 
    getline(cin,s);
    long i,r; 
    cin>>i;
    r = i%4;
    if(r == 0 || r == 2){
        cout<<"undefined";
        return 0;
    }
    char cw[] = {'^','>','v','<','^','>','v','<'};
    char start_pos = s.at(0);
    char end_pos = s.at(2);
    for(int i = 0;i<8;i++){
        if(start_pos == cw[i]){
            if(end_pos == cw[i+r]){
                cout<<"cw";
            }else{
                cout<<"ccw";
            }
            break;
        }
    }
    return 0;
}