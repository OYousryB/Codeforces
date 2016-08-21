#include <iostream> 
#include <string>
#include <math.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int curr = pow(2,s.length())-2;
    int temp = curr + 2;
    for(int i=0;i<s.length();i++){
        if(s[i] == '4'){
            temp/=2;
			//curr++;
        }
        else if(s[i] == '7'){
            temp/=2;
            curr += temp;
        }
    }
    cout<<curr+1<<endl;
}
