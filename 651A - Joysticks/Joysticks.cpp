#include <iostream>
using namespace std;
int main(){
	int x, y; 
	cin >> x >> y;
	int ans = 0;
    while(x > 0 && y > 0)
    {	
	    if(x == 2 && y == 2) {
            ans++;
            break;
        }
        else if(x == 1 && y == 2) {
            ans++;
            break;
        }
        else if(x == 1 && y == 1) {
            break;
        }
        else if( x >= y ) {
        	x-=2;
        	y++;
        }
		else{
        	y-=2;
        	x++;
        }
        	ans++;	
	    }
	cout<<ans<<endl;
	return 0;
}
			
