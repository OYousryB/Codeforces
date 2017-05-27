#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
pair<long int,long int>arr[100000];
int buyers[100000];
int main(){
	int n,f,i,j=0;
	long long sum=0;
	cin>>n>>f;
	for(i=0;i<n;i++){
		cin>>arr[i].first>>arr[i].second;
		sum+=min(arr[i].first,arr[i].second);
	}
	for(i=0;i<n;i++){
		if(arr[i].second > arr[i].first){
			if(arr[i].first*2 < arr[i].second){
				buyers[j]=arr[i].first;
				j++;	
			}
			else{
				buyers[j]=arr[i].second-arr[i].first;
				j++;	
			}
		}	
	}
	sort(buyers,buyers+j);
	int m=j-1;
	if(j > 0)
		for(i=0;i<f;i++){
			sum+=buyers[m];
			m--;
			if(m < 0)
				break;
		}
	cout<<sum<<endl;		
}