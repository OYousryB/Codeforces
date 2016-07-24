#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int n, m, i, j;
    string str;
    
    cin >> n >> m;
    for(i = 1; i <= n; i++)
    {
        if(i % 2)
        {
            str = "";
            for(j = 1; j <= m; j++)
                str += '#';
        }
        else if((i % 2 == 0) && (i % 4 == 0))
        {
            str = "#";
            for(j = 2; j <= m; j++)
                str += '.';
        }
        else
        {
            str = "";
            for(j = 2; j <= m; j++)
                str += '.';
            str += '#';
        }
        cout << str << endl;
    }
    return 0;
}
