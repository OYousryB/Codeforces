#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <string>
using namespace std;
#define Maxn
 
int A[10000];
int main()
{
    int T;
    int count = 0;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin>>A[i];
    }
    sort(A,A+T);
    for(int i = 0; i < T-1; i++)
    {
        if (A[i] == A[i+1])
        {
            // count++;
            for(int j = i+1; j < T; j++)
            {
                if (A[j] == A[i])
                {
                    A[j] += 1;
                    count++;
                }
            }
        }
    }
	cout << count;
	return 0;
}
