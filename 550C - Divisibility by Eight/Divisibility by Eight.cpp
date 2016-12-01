#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int divisable;
    cin >> s;
    s = "00" + s;
    for(int i = 0; i<s.length(); i++)
    {
        for(int j = i+1; j<s.length(); j++)
        {
            for(int k = j+1; k<s.length(); k++)
            {
                divisable=(s[i]-'0')*100 + (s[j]-'0')*10 + (s[k]-'0');
                if(divisable%8 == 0)
                {
                    cout << "YES" << endl;
					cout << divisable <<endl;
					return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
