#include <stdio.h>

int main(){
    int data_1, data_2[5];
    FILE *p_file = fopen("jin.dat", "rb");
    if(NULL != p_file){
        fread(&data_1, sizeof(int), 1, p_file); // ó������ 4����Ʈ(int ��) ��ŭ �����͸� �о�� data�� ���� �ּҿ� ������.

        fread(data_2, sizeof(int), 5, p_file); // fwrite �Լ��� ���������� ������.

        fread(data_2, sizeof(int)*5, 1, p_file); // 9�ٰ� ����

        fread(data_2, sizeof(data_2), 1, p_file); // 9�ٰ� ����

        if(5 == fread(&data_1, sizeof(int), 1, p_file)){ // fwrite �Լ��� �����ϰ� ������ �� �����Ƿ� ���ǹ����� Ȯ��. - ������ �ݺ��� Ƚ����ŭ ��ȯ��.

        }

        fclose(p_file);
        printf("file data : %d(0x%04x)\n", data_1, data_1);
    } else {
        printf("file open fail");
    }

    return 0;
}