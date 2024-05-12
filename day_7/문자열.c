
#include <stdio.h>
/*
int main(){
    char data[6] = {'h', 'a', 'p', 'p', 'y', 0}; // char data[6] = "happy"와 같은 표현임. / 0 은 아스키코드 0번 Null을 의미. - 가독성을 위해 \0으로 사용해도 괜찮음.
    char ment[] = "C programing~";

    printf("%s\n", data);
    printf("%s\n", ment);
    return 0;
}
*/
/*
int main(){
    char data[] = "Don't worry, Be happy!";

    printf("%s\n", data);
    return 0;
}
*/
int main(){
    char data[] = "abc\7d"; // 

    printf("%s\n", data);
    return 0;
}