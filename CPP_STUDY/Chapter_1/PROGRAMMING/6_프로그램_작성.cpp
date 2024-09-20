#include <iostream>
using namespace std;

int main(){
    string name, doing;
    cout << "당신의 이름을 입력하시오: ";
    cin >> name;
    cout << name << "씨 무엇을 해드릴까요?" << endl;
    cout << "할일을 입력하시오: ";
    cin >> doing;
    cout << doing << "는 할 수 없습니다.";

    return 0;
}