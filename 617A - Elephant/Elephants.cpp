#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int N;
	while(scanf("%d",&N)!=EOF)
	{
		int uu,uui;
		uu=N/5;
		uui=N%5;
		if(uui!=0)
			uu++;
		printf("%d\n",uu);
	}
	return 0;
}
