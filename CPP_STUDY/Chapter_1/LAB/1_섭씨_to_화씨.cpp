#include <iostream>
using namespace std;

int main(){
    float F_temp, C_temp; 
    cin >> C_temp;
    F_temp = (C_temp*9/5)+32; // ���� -> ȭ�� ��ȯ
    cout << "���� �µ��� " << F_temp << "�Դϴ�." << '\n';

    return 0;
}