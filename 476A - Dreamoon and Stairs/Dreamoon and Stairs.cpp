#include <iostream>
using namespace std;
int main()
{
    int x, n, m;
    while (cin >> n >> m)
    {
        if (m > n)
            x = -1;
        else
        {
            if (n % 2 == 0)
                x = n / 2;
            else
                x = (n / 2) + 1;
            while (x%m != 0)
            {
                x++;
            }
        }
        
        cout << x;
    }
    
    return 0;
}
/*
int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);

    int minSteps = n / 2 + n % 2;

    if(n < m){puts("-1");}
    else{printf("%ld\n", m * ((minSteps / m) + (minSteps % m > 0))  );}

    return 0;
}
*/
