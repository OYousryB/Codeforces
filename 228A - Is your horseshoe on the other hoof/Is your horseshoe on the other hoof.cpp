#include <cstdio>
#include<iostream>
using namespace std;

int main(){
    long colors[4]; 
	for(int k = 0; k < 4; k++)
	{
		scanf("%ld", colors + k);
	}
    int output = 0;
    if(colors[1] == colors[0]){++output;}
    if(colors[2] == colors[0] || colors[2] == colors[1]){++output;}
    if(colors[3] == colors[0] || colors[3] == colors[1] || colors[3] == colors[2]){++output;}
    cout<<output<<endl;
    return 0;
}
