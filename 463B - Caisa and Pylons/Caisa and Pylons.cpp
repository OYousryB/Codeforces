#include <iostream>
using namespace std;

int main(){

    long n,output=0; 
	cin >> n;
	
    for(long i = 0; i < n; i++)
		{
	        long height; 
			cin >> height;
			if(output > height)
	        	output = output;
  			else
  				output = height;
	    }

    cout<< output <<endl;

    return 0;
}
