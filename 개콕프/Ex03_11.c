#include <stdio.h>

int main(void)
{
    char ch;
    int num;
    double fnum;

    printf("ch   의 바이트 크기 : %ld\n", sizeof ch);
    printf("num  의 바이트 크기 : %ld\n", sizeof num);
    printf("fnum 의 바이트 크기 : %ld\n", sizeof fnum);

    printf("3.14f의 바이트 크기 : %ld\n", sizeof 3.14f);

    printf("char   형의 바이트 크기 : %ld\n", sizeof(char));
    printf("short  형의 바이트 크기 : %ld\n", sizeof(short));
    printf("int    형의 바이트 크기 : %ld\n", sizeof(int));
    printf("long   형의 바이트 크기 : %ld\n", sizeof(long));
    printf("float  형의 바이트 크기 : %ld\n", sizeof(float));
    printf("double 형의 바이트 크기 : %ld\n", sizeof(double));

    return 0;
}