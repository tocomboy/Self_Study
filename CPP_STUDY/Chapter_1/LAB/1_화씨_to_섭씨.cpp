#include <iostream>
using namespace std;

int main(){
    float F_temp, C_temp; 
    cin >> F_temp;
    C_temp = (F_temp-32)*5/9; // ȭ�� -> ���� ��ȯ
    cout << "���� �µ��� " << C_temp << "�Դϴ�." << '\n';

    return 0;
}