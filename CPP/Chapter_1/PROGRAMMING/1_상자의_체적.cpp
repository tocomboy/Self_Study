#include <iostream>
using namespace std;

int main(){
    int length, height, width;
    cout << "길이 : ";
    cin >> length;
    cout << "너비 : ";
    cin >> height;
    cout << "높이 : ";
    cin >> width;
    cout << "체적 : " << length*height*width << endl;

    return 0;
}