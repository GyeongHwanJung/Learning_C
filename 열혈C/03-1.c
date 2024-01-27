// // 1
// #include <stdio.h>

// int main(void)
// {
//     int num1, num2;

//     printf("정수 2개를 입력하시라요");
//     scanf("%d %d", &num1, &num2);

//     printf("%d - %d = %d \n ", num1, num2, num1-num2);
//     printf("%d X %d = %d \n", num1, num2, num1*num2);
//     return 0;
// }

// // 2
// #include <stdio.h>

// int main(void)
// {
//     int num1, num2, num3;

//     printf("정수 3개를 입력하시라요");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     printf("%d x %d + %d = %d \n", num1, num2, num3, num1*num2+num3);
//     return 0;
// }

// // 3
// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     int num1;
//     int temp = 2;

//     printf("정수 하나를 입력하시라요");
//     scanf("%d", &num1);

//     printf("%d의 제곱은 %g! \n ",num1, pow(num1, temp));
//     return 0;
// }

// // 4
// #include <stdio.h>

// int main(void)
// {
//     int num1, num2;

//     printf("정수 2개를 입력하시라요");
//     scanf("%d %d", &num1, &num2);

//     printf("%d / %d = %d \n ", num1, num2, num1/num2);
//     printf("%d %% %d = %d \n", num1, num2, num1%num2);
//     return 0;
// }

// 5
#include <stdio.h>

int main(void)
{
    int num1, num2, num3;

    printf("정수 3개를 입력하시라요");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("(%d-%d)x(%d+%d)x(%d%%%d)=%d \n ", num1, num2, num2, num3, num3, num1, (num1-num2)*(num2+num3)*(num3%num1));
    return 0;
}