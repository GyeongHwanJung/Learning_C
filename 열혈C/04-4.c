// // 1
// #include <stdio.h>

// int main(void)
// {
//     int num;

//     printf("정수 하나를 입력하시라요");
//     scanf("%d", &num);

//     num = ~num;
//     num = num+1;
//     printf("출력값은 %d", num);
//     return 0;
// }

// 2
#include <stdio.h>

int main(void)
{
    int num=3;

    num = num<<3;
    num = num>>2;
    printf("3 x 8 %% 4 = %d", num);
    return 0;
}