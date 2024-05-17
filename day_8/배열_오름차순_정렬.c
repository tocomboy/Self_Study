#include <stdio.h>

int main(){
    int data[7] = {6, 3, 9, 7, 2, 4, 1};
    int i, j, smallest;
        for(i=0; i<6; i++){
            for(j=i+1; j<7; j++){
                if(data[i] > data[j]){
                smallest = data[j];
                data[j] = data[i];
                data[i] = smallest;
            }
        }
    }
    for(i=0; i<7; i++){
        printf("%d ", data[i]);
    }
    return 0;
}