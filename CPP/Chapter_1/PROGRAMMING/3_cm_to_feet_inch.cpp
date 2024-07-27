#include <iostream>
using namespace std;

int main(){
    double height, inch = 2.54, feet = 12 * inch;
    cout << "키(cm) : ";
    cin >> height;
    
    cout << height << "cm는 ";
    cout << (int)(height/feet) << "피트 ";
    height = height/inch - (int)(height/feet)*12;
    cout << height << "인치입니다.";
    

    return 0;
}