#include <iostream>
using namespace std;

int main(){
    int answer = 59, tries = 0, guess;
    do {
        cout << "������ �����Ͽ� ���ÿ�: ";
        cin >> guess;
        tries++;

        if(guess > answer){
            cout << "������ ������ �����ϴ�.\n";
        }
        if(guess < answer){
            cout << "������ ������ �����ϴ�.\n";
        }
    }while(guess != answer);

    cout << "�����մϴ�. �õ� Ƚ��=" << tries << endl;

    return 0;
}