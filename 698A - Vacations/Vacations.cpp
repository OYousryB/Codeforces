#include <iostream>
using namespace std;
int main()
{
	int n,Days;
	int Gym=0,Code=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>Days;
        if(Days==0||(Days==1&&Code==1)||(Days==2&&Gym==1)){
            Gym=0,Code=0;
			sum++;     
        }
        else if(Days==1){
            Code=1;
            Gym=0; 
        }
        else if(Days==2){
            Code=0;
            Gym=1; 
        }    
        else if(Gym==1){
            Code=1;
            Gym=0; 
        }
        else if(Code==1){
            Code=0;
            Gym=1; 
        }
    }
    cout<<sum<<endl;
}
