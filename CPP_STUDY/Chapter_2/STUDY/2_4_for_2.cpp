#include <iostream>
using namespace std;

int main(){
    long long fact = 1; // long �ڷ����� ũ�Ⱑ �۾Ƽ� ��� �ȵ�. 20!�� ����Ϸ��� long long �ڷ��� ���.
    int n;

    cout << "������ �Է��Ͻÿ�: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        fact = fact * i;
    }

    cout << n << "!�� " << fact << "�Դϴ�.\n";

    return 0;
}