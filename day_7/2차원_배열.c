#include <stdio.h>
/*
int main(){
    char data[5][4]; // 5행 4열 (y, x) 
    char data[4][5]; // 4열 5행 (x, y) - 보기에는 편하나 데이터 관리에 있어 어렵기 때문에 전자의 경우를 더 많이 사용함.
    return 0;
}
*/
/*
int main(){
    char temp[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2차원 배열 초기화
    char data[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    return 0;
}
*/
//char temp[M][N]; 2차원 배열과 1차원 배열의 관계성.
//char test[L]; // M * N = L 이라 가정함.
// 이때 test[a] == temp[a/M][a%N]
// temp[b][c] == test[b*N+c]
/*
int main(){ // 1차 배열로 바둑판 정보 저장하고 출력
    char data[13] = {0, 0, 2, 0, 1, 1, 0, 0, 2, 1, 0, 2, 4}; // 3행 4열 바둑판 정보 0 - 없음 / 1 - 검은 돌 / 2 - 흰 돌
    int i, x, y;

    for (i = 0; i < 13; i++){
        x = i%4 + 1; // 열
        y = i/4 + 1; // 행
        printf("%d행 %d열에", y, x);
        switch (data[i]){
            case 0 : 
                printf("는 돌이 놓여 있지 않습니다.\n");
                break;
            case 1 : 
                printf(" 검은 돌이 놓여 있습니다.\n");
                break;
            case 2 : 
                printf(" 흰 돌이 놓여 있습니다.\n");
                break;
            default:
                printf(" 해당 정보가 없습니다.");
                break;
        }
    }

    return 0;
}
*/
int main(){
    char data[3][4] = {{0, 0, 2, 0}, {1, 1, 0, 0}, {2, 1, 0, 2}}; // 3행 4열 바둑판 정보 0 - 없음 / 1 - 검은 돌 / 2 - 흰 돌
    int x, y;

    for(y = 0; y < 3; y++){
        for(x = 0; x < 4; x++){
            printf("%d행 %d열에", y+1, x+1);
            if(data[x][y] == 1) printf(" 흰 돌이 놓여 있습니다.\n");
            else if (data[x][y] == 2) printf(" 검은 돌이 놓여 있습니다.\n");
            else printf("는 돌이 놓여 있지 않습니다\n");
        }
    }
    return 0;
}