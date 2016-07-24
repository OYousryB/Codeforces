#include <iostream>

using namespace std;

int main() {  
    int n, temp, numGroups = 0;
    int sizeGroups[5];
    for (int i = 0; i < 5; i++) sizeGroups[i] = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sizeGroups[temp]++;
    }
    numGroups += sizeGroups[4] + sizeGroups[3];
    int x;
    if (sizeGroups[1] > sizeGroups[3]) {
        sizeGroups[1] -= sizeGroups[3];
    } else {
        sizeGroups[1] = 0;
    }
    int y = sizeGroups[2] / 2;
    sizeGroups[2] -= y * 2;
    numGroups += y;
    numGroups += sizeGroups[2];
    if (sizeGroups[1] * 2 >= sizeGroups[2]) {
        sizeGroups[1] -= sizeGroups[2] * 2;
        sizeGroups[2] = 0;
    }
    numGroups += sizeGroups[1] / 4;
    sizeGroups[1] = sizeGroups[1] % 4;
    if (sizeGroups[1] > 0) {
        numGroups++;
    }
    cout << numGroups << "\n";
    return 0;
}
