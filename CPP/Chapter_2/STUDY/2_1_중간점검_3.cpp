#include <iostream>
using namespace std;

int main(){
    int cup_size;
    cin >> cup_size;

    if(cup_size >= 200){
        cout << "large";
    }else if(cup_size >= 100 && cup_size < 200){
        cout << "medium";
    }else{
        cout << "small";
    }

    return 0;
}