#include <iostream>
using namespace std;

int main(){
    double height, inch = 2.54, feet = 12 * inch;
    cout << "Ű(cm) : ";
    cin >> height;
    
    cout << height << "cm�� ";
    cout << (int)(height/feet) << "��Ʈ ";
    height = height/inch - (int)(height/feet)*12;
    cout << height << "��ġ�Դϴ�.";
    

    return 0;
}