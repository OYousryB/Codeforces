#include <cstdio>
#include <iostream>
using namespace std;
int main(){

    int n(0); 
	cin>>n;

    long manPower(0), untreated(0);

    while(n--){
        int input(0); 
		cin >>input;
        if(input < 0)
			{
				(manPower > 0) ? (--manPower) : (++untreated);
			}
        else
			{
				manPower += input;
			}
    }

    cout <<untreated<< endl;

    return 0;
}
