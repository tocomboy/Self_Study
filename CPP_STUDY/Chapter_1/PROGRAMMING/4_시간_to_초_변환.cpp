#include <iostream>
using namespace std;

int main(){
    int hour, minute, second, time=0;
    cout << "�� : ";
    cin >> hour;
    cout << "�� : ";
    cin >> minute;
    cout << "�� : ";
    cin >> second;

    time += hour*3600 + minute*60 + second;

    cout << hour << "�ð�" << minute << "��" << second << "�ʴ� " << time << "���Դϴ�." << endl;

    return 0;
}