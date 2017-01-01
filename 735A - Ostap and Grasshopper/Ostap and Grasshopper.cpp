#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, m;
    string line;
    
    cin >> n>>m;
    cin >> line;
    int locG, locT;
    for (int i = 0; i < line.size(); i++){
        if (line[i] == 'G')
            locG = i;
        if (line[i] == 'T')
            locT = i;
    }
    for (int i = locG;;){
        if (i == locT)
        {
            cout << "YES"<<endl;
            break;
        }
        else if(line[i] == '#'){
            cout << "NO"<<endl;
            break;
        }        
        if (locG <= locT)
            i+=m;
        else 
			i-=m;
        if (i > n || i <0){
            cout << "NO"<<endl;
            break;
        }
    }
    return 0;
}