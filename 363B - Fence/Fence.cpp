#include <iostream>
using namespace std;
int main()
{
	int n,k;
	int sum=0,pos=0,minv;
	cin >> n >> k;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<k;i++){
		sum+=arr[i];
	}
	
	minv=sum;
	int j=0;
	
	for(int i=k;i<n;i++){	
		sum=sum+arr[i]-arr[j];
		if(minv>sum){
			minv=sum;
			pos=i-k+1;
		}
		j++;
	}
	cout << pos+1 << endl;
		
	return 0;	
}
