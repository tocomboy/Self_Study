#include <iostream>
using namespace std;

int main(){
    int vowel=0, consonant=0;
    char ch;

    cout << "영문자를 입력하고 컨트롤-Z를 치세오" << endl;
    while(cin >> ch){
        switch(ch){
            case 'a': // break가 없으므로 다음에 오는 case절 -> vowel++ 를 실행함.
            case 'i':
            case 'e':
            case 'o':
            case 'u':
                vowel++;
                break;
            default:
            consonant++;
            break;
        }
    }
    cout << "모음: " << vowel << endl;
    cout << "자음: " << consonant << endl;

    return 0;
}