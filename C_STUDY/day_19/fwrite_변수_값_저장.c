#include <stdio.h>

int main(){
    int data_1 = 0x00000412;
    int data_2[5] = {0, 1, 2, 3, 4};
    FILE *p_file = fopen("jin.dat", "wb"); // ���� ���� ���̳ʸ� ���� ����
    if(NULL != p_file){ // fwrite(�Է� �ڷ� ���� �ּ�, ���� ũ��, �ݺ� Ƚ��, �Է� ����)
        fwrite(&data_1, sizeof(int), 1, p_file); // data�� ���� �ּ� ���� / 4����Ʈ(int) ũ�� ��ŭ / �ѹ��� / p_file �����Ͱ� ����Ű�� ���Ͽ� ����.

        fwrite(data_2, sizeof(int), 5, p_file); // Ƚ���� ������ �� �ִ� ���� - �迭 ���� ���� ����.

        fwrite(data_2, sizeof(int)*5, 1, p_file); // 10�ٰ� ����

        fwrite(data_2, sizeof(data_2), 1, p_file); // 10�ٰ� ����

        if( 5 == fwrite(data_2, sizeof(int), 5, p_file)){ // fwrite �Լ��� ������ ���� ������ Ƚ���� ��ȯ - �Լ��� �����ϴ� ��쵵 �����Ƿ� if���� ����� ����ó�� ���ֱ�. 
        fclose(p_file);
    }
    else {
        printf("file open fail");
    }

    return 0;
}