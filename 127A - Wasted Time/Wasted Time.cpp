#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int numPoints, numPapers; 
	cin>> numPoints >> numPapers;
    double distance = 0;
    int oldX = 0, oldY = 0, newX = 0, newY = 0; 
    cin>> oldX >> oldY;
    while(--numPoints){
        cin >>newX >> newY;
        distance += sqrt((newX - oldX)*(newX - oldX) + (newY - oldY)*(newY - oldY));
        oldX = newX; oldY = newY;
    }
    const int speed = 50;
    printf("%.9lf\n", numPapers * distance / speed);
    return 0;
}
