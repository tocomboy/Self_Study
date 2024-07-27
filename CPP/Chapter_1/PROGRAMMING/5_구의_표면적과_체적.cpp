#include <iostream>
#include <math.h>
using namespace std;
float pi = 3.14;

int main(){
    float r;
    cin >> r;
    float A = 4 * pi * pow(r, 2), V = 4/3 * pi * pow(r, 3);
    
    cout << "구의 표면적 : " << A << "구의 체적 : " << V << endl;
    
    return 0;
}
