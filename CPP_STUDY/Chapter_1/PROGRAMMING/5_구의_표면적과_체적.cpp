#include <iostream>
#include <math.h>
using namespace std;
float pi = 3.14;

int main(){
    float r;
    cin >> r;
    float A = 4 * pi * pow(r, 2), V = 4/3 * pi * pow(r, 3);
    
    cout << "���� ǥ���� : " << A << "���� ü�� : " << V << endl;
    
    return 0;
}
