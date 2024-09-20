#include <iostream>
using namespace std;

int main(){
    int x = 0, y = 0, z = 0;
    cout << (2 > 3 || 6 > 7) << endl;
    cout << (2 || 3 && 3 > 2) << endl;
    cout << (x = y = z = 1) << endl; // x = 1 / y = 1 / z = 1
    cout << (- ++x + y--) << endl; // x = 2 / x = -2 / y = 1 / 끝나고 y = 0 -> -2 + 1 = -1로 출력

    return 0;
}