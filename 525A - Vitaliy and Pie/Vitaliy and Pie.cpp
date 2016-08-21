#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,i,l,count=0;
    cin >> n;
    cin >> s;
    int a[26];
    for(i=0;i<26;i++)
        a[i] =  0;
    for(i=0;i<s.size();i++)
    {
        if(i%2==0)
            a[s[i]-'a']++;
        else
        {
            if(a[s[i]-'A']==0)
                count++;
            else
                a[s[i]-'A']--;
        }
    }
    cout << count << endl;
    return 0;
}
