#include <stdio.h>

//FILE *p_file; // ǥ�� ����� ���̺귯���� 'FILE ����ü'�� ������ ������ �����ϰ� ���� ����� �Լ��� ȣ���� �� ���� �� ������ �Ѱ��ֵ��� ������� ����. 
//fseek(p_file, 0, SEEK_SET);

int main(){

    FILE *p_file = fopen("tipssoft.dat", "r"); // ���α׷� �۾� ��ο� �ش� ������ �����ϴ� ���.
    //FILE *p_file = fopen("C:\\tipssoft\\tips.dat", "r"); // ���α׷� �۾� ��ο� �������� �ʴ� ���.
    if(NULL != p_file){ // ���� ���� ����
        printf("opne");
    } else { // ���� ���� ����
        printf("fail");
    }

    return 0;
}