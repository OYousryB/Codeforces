#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string a,b;
   	cin>>a>>b;
    if(a==b){
        cout<<"-1"<<endl;
    }
    else{
    	if(a.size()>b.size())
			cout<<a.size()<<endl;
		else
        	cout<<b.size()<<endl;
    }

    return 0;
}