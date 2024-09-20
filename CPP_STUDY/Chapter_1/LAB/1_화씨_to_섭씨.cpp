#include <iostream>
using namespace std;

int main(){
    float F_temp, C_temp; 
    cin >> F_temp;
    C_temp = (F_temp-32)*5/9; // È­¾¾ -> ¼·¾¾ º¯È¯
    cout << "¼·¾¾ ¿Âµµ´Â " << C_temp << "ÀÔ´Ï´Ù." << '\n';

    return 0;
}