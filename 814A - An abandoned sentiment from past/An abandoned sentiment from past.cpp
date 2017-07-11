#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int arrA[a]={0};
	int arrB[b]={0};
	for(int i=0;i<a;i++){
		cin >> arrA[i];
	}
	for(int i=0;i<b;i++){
		cin >> arrB[i];
	}
	int j=0;
	sort(arrB, arrB+b, greater<int>());
	for(int i=0;i<a;i++){
		if(arrA[i]==0){
			arrA[i]=arrB[j];
			j++;
		}
	}
//	for(int i=0;i<a;i++){
//		cout << arrA[i]<<" ";
//	}
	for(int i=1;i<a;i++){
		if(arrA[i]<arrA[i-1]){
		cout << "Yes";
		return 0;
		}
	}
	cout << "No" <<endl;
	return 0;		
}
