#include <iostream>
using namespace std;

int main(){
    char letter;

    while(1){
        cout << "�ҹ��ڸ� �Է��Ͻÿ�(Q�Է½� ����): ";
        cin >> letter;

        if(letter == 'Q') break;
            
        if(letter < 'a' || letter > 'z') continue;
        letter -= 32;
        cout << "��ȯ�� �빮�ڴ� " << letter << "�Դϴ�.\n";
    }

    return 0;
}