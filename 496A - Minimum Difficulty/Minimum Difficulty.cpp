#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main(){

    int n; 
	cin>>n;
    int heights[n];

    for(int i = 0; i < n; i++)
		{
			cin>>heights[i];
		}

    int minNew = 1001;
    int maxCur = heights[1] - heights[0];
    for(int i = 1; i < n - 1; i++)
		{
	        if(heights[i + 1] - heights[i - 1] < minNew)
				{
					minNew = heights[i + 1] - heights[i - 1];
				}
	        if(heights[i + 1] - heights[i] > maxCur)
				{
					maxCur = heights[i + 1] - heights[i];
				}
	    }

    int maxDif = maxCur;
    if(minNew > maxDif)
		{
			maxDif = minNew;
		}

    cout<<maxDif<<endl;

    return 0;
}
