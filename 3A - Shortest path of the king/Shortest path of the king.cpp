#include <iostream>
#include <cmath>
#include <string>
using namespace std;

main()
{
    string s, t;
    cin>>s>>t;

    int a = (int) s[0];
    a = a-96;

    int b = (int) s[1];
    b = b-48;

    int c = (int) t[0];
    c = c-96;

    int d = (int) t[1];
    d = d-48;

    int e = abs(a-c);
    int f = abs(b-d);

    int ruchy;

    if(e>=f)
        ruchy = e;
    else
        ruchy = f;

        cout<<ruchy<<endl;


    for(int i=1; i<=ruchy; i++)
    {
        if(a>c&&b>d)
        {
            cout<<"LD"<<endl;
            a-=1;
            b-=1;
        }
        if(a>c&&b<d)
        {
            cout<<"LU"<<endl;
            a-=1;
            b+=1;

        }
        if(a<c&&b>d)
        {
            cout<<"RD"<<endl;
            a+=1;
            b-=1;

        }
        if(a<c&&b<d)
        {
            cout<<"RU"<<endl;
            a+=1;
            b+=1;

        }
        if(a>c&&b==d)
        {
            cout<<"L"<<endl;
            a-=1;

        }
        if(a<c&&b==d)
        {
            cout<<"R"<<endl;
            a+=1;

        }
        if(a==c&&b>d)
        {
            cout<<"D"<<endl;
            b-=1;

        }
        if(a==c&&b<d)
        {
            cout<<"U"<<endl;
            b+=1;

        }
    }

}
