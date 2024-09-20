#include <iostream>
using namespace std;

int main(){
    int answer = 59, tries = 0, guess;
    do {
        cout << "정답을 추측하여 보시오: ";
        cin >> guess;
        tries++;

        if(guess > answer){
            cout << "제시한 정수가 높습니다.\n";
        }
        if(guess < answer){
            cout << "제시한 정수가 낮습니다.\n";
        }
    }while(guess != answer);

    cout << "축하합니다. 시도 횟수=" << tries << endl;

    return 0;
}