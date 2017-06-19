#include <iostream>
#include <set>
using namespace std;
long long int arr[10000099];
int main(){
	long long int n,k,m=0;
	cin >> n >> k;
	for (long long int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(long long int i=1;i<=n;i++){
		m+=i;
            if(m>=k)
               {
                   m-=i;
                    break;
               }

	}
	cout << arr[k-m-1]<<endl;
}
