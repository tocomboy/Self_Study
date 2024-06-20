#include <stdio.h>
#include <malloc.h>

void Get_name(char* name) {
    printf("Your Name : ");
    gets(name); // &(*name) == name
    rewind(stdin);
}

int main() {
    char* p_name;
    p_name = (char*)malloc(32);
    if (p_name != NULL) {
        Get_name(p_name);
        printf("Hi~ %s\n", p_name); // p_name == &(*p_name)
        free(p_name); // 까먹지 않게 중요함.
    }
    else {
        printf("Memory allocation error!");
    }
    return 0;
}