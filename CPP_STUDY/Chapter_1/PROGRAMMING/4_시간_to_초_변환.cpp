#include <iostream>
using namespace std;

int main(){
    int hour, minute, second, time=0;
    cout << "시 : ";
    cin >> hour;
    cout << "분 : ";
    cin >> minute;
    cout << "초 : ";
    cin >> second;

    time += hour*3600 + minute*60 + second;

    cout << hour << "시간" << minute << "분" << second << "초는 " << time << "초입니다." << endl;

    return 0;
}