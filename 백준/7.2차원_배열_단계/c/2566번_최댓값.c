#include <stdio.h>

int main(){
    unsigned int matrix[9][9], i, j, Biggest_in_matrix=0, matrix_i=0, matrix_j=0; // 초기화 안해주니 경고 발생.


    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            scanf("%d", &matrix[i][j]);
            if(Biggest_in_matrix < matrix[i][j]) {
                Biggest_in_matrix = matrix[i][j];
                matrix_i = i;
                matrix_j = j;
            }
        }
    }
    printf("%d\n", Biggest_in_matrix);
    printf("%d %d", matrix_i+1, matrix_j+1);

    return 0;
}