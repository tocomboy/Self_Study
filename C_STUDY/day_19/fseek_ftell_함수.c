#include <stdio.h>

int main(){
    int file_size = 0;
    FILE *p_file = fopen("tipssoft.dat", "rb");
    if(p_file != NULL){
        fseek(p_file, 0, SEEK_SET); // ������ ���� ��ġ�� �̵�.
        fseek(p_file, 32, SEEK_CUR); // ���� ��ġ���� 32����Ʈ ��ŭ �ڷ� �̵�.
        fseek(p_file, 0, SEEK_END);
        file_size = ftell(p_file); // ���� ���� ��ġ�� ���� ũ�⸦ ����.
        printf("���� ũ�� : %d\n", file_size);
        fclose(p_file);
    } else {
        printf("file fail");
    }
    

    return 0;
}