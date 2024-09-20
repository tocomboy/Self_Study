#include <iostream>
using namespace std;

int main(){
    long long fact = 1; // long 자료형은 크기가 작아서 출력 안됨. 20!을 출력하려면 long long 자료형 사용.
    int n;

    cout << "정수를 입력하시오: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        fact = fact * i;
    }

    cout << n << "!은 " << fact << "입니다.\n";

    return 0;
}