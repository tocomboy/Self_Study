#include <stdio.h>

int main(){ // 어렵게 생각하지 말기. 쉽게 풀 수 있으면 쉽게쉽게
    char name[51], rank[3];
    double credit, credit_sum=0, rank_credit_multiply=0, rank_grade;
    int i;
    for(i=0; i<20; i++){
        scanf("%s %lf %s", name, &credit, rank);
        if (rank[0] == 'A') rank_grade = 4.0;
        else if (rank[0] == 'B') rank_grade = 3.0;
        else if (rank[0] == 'C') rank_grade = 2.0;
        else if (rank[0] == 'D') rank_grade = 1.0;
        else if(rank[0] == 'F') rank_grade = 0.0;
        else if (rank[0] == 'P') continue;
        if (rank[1] == '+') rank_grade += 0.5; // 0는 0이므로 계산 불필요.
        credit_sum += credit;
        rank_credit_multiply += rank_grade * credit;
    }
    printf("%lf", rank_credit_multiply / credit_sum);

    return 0;
}

/* ///////// 원인 불명의 이유로 틀림.
double Change_Rank(char rank[]) {
    double result = 0;
    if (rank[0] == 'A') result += 4.0;
    else if (rank[0] == 'B') result += 3.0;
    else if (rank[0] == 'C') result += 2.0;
    else if (rank[0] == 'D') result += 1.0;
    else if (rank[0] == 'P') result += -1.0; // F, - 는 0이라 필요 X
    if (rank[1] == '+') result += 0.5;

    return result;
}

int main() {
    char name[51], rank[3];
    int i;
    double Number_Rank, credit_sum = 0, credit_rank_multiply = 0, Average, credit;

    for (i = 0; i < 20; i++) {
        scanf("%s %lf %s", name, &credit, rank);
        rewind(stdin);
        Number_Rank = Change_Rank(rank);
        if (Number_Rank != -1.0) { // P가 아닐 경우
            credit_rank_multiply += credit * Number_Rank;
            credit_sum += credit;
        }
    }
    Average = credit_rank_multiply / credit_sum;
    printf("%lf", Average);


    return 0;
}
*/