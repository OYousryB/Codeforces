#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    
    long n; 
	cin >>n;

    long arr[n];
    for(int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}

    bool started(0), done(0), possible(1);
    long start(1), end(1);

    for(int i = 1; i < n; i++){
        if(arr[i - 1] > arr[i] && !started)
			{
				started = 1; 
				start = i;
			}
        if(arr[i - 1] < arr[i] && started && !done)
			{
				done = 1; 
				end = i;
			}
        if(arr[i - 1] > arr[i] && done)
			{
				possible = 0; 
				break;
			}
    }
    
    if(possible && started && !done)
		{
			end = n;
		}
    if((start > 1 && arr[start - 2] > arr[end - 1]) || (end < n && arr[start - 1] > arr[end]))
		{
			possible = 0;
		}

    if(!possible)
		{
			cout<<"no"<<endl;
		}
    else
		{
			cout<<"yes"<<endl; 
			cout<<start<<" "<<end<<endl;
		}
    return 0;
}
