#include <stdio.h>

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
        if (Number_Rank != -1) { // P가 아닐 경우
            credit_rank_multiply += credit * Number_Rank;
            credit_sum += credit;
        }
    }
    Average = credit_rank_multiply / credit_sum;
    printf("%lf", Average);


    return 0;
}

/*
ObjectOrientedProgramming1 3.0 A+
IntroductiontoComputerEngineering 3.0 A+
ObjectOrientedProgramming2 3.0 A0
CreativeComputerEngineeringDesign 3.0 A+
AssemblyLanguage 3.0 A+
InternetProgramming 3.0 B0
ApplicationProgramminginJava 3.0 A0
SystemProgramming 3.0 B0
OperatingSystem 3.0 B0
WirelessCommunicationsandNetworking 3.0 C+
LogicCircuits 3.0 B0
DataStructure 4.0 A+
MicroprocessorApplication 3.0 B+
EmbeddedSoftware 3.0 C0
ComputerSecurity 3.0 D+
Database 3.0 C+
Algorithm 3.0 B0
CapstoneDesigninCSE 3.0 B+
CompilerDesign 3.0 D0
ProblemSolving 4.0 P
*/