#include <iostream>
#include <algorithm>
using namespace std;
int readerIN[1000000];
int main(){
	int n,r,capacity=0,total=0;
	char c;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> c >> r ;
		if(c =='+'){
			readerIN[r] = 1;
			capacity++;
			total = max(total,capacity);
		}
		else if (c =='-'){
			if(readerIN[r])
				capacity--;
			else
				total++;
		}
	}
	cout << total <<endl;
	return 0;
}
			
