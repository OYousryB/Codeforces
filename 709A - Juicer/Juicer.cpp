#include <iostream>
using namespace std;
int main(){
	int n,b,d,a[100000],sum=0,count=0;
	cin >> n >> b >> d;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]<=b)
			sum+=a[i];
			
		if(sum>d){
			sum=0;
			count++;
		}
	}
		cout<<count<<endl;
		return 0;
	}
	
