#include <iostream>
using namespace std;
int main(){

    const int n = 5;
    int sum = 0;
    for(int p = 0; p < n; p++)
		{
			int temp;
		 	cin>> temp; 
    		sum += temp;
		 }

    if(sum > 0 && sum % n == 0)
		{
			cout<<sum/n<<endl;
		}
    else
		{
			cout<<"-1"<<endl;
		}

    return 0;
}
