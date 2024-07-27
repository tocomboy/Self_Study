#include <iostream>
using namespace std;

int main(){
    float F_temp, C_temp; 
    cin >> C_temp;
    F_temp = (C_temp*9/5)+32; // ¼·¾¾ -> È­¾¾ º¯È¯
    cout << "¼·¾¾ ¿Âµµ´Â " << F_temp << "ÀÔ´Ï´Ù." << '\n';

    return 0;
}