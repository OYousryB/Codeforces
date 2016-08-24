#include <iostream>
using namespace std;

int main()
{
    int a, b, i, s=0, n, x, k, m;
    cin >> n >> m >> k;
    
    for (i=0;i<n;i++)
    {
        cin >> a;
        if (a==2){
            if(k>0) 
				k--;
            else{
                if(m>0)
			 		m--;
                else s++;
            }
        }
        if (a==1){
           if(m>0)
				m--;
           else s++;
        }
    }
    cout << s << endl;
    return 0;
}
