// // 1
// #include <stdio.h>

// int main(void)
// {
//     int num1=0, num2=0, total=0;

//     printf("정수 두 개를 입력 : ");
//     scanf("%d %d", &num1, &num2);
//     while (num2<=num1)
//     {
//         printf("두 번째 정수가 첫 번째 정수보다 커야 함. 다시 입력바람 \n");
//         printf("정수 두 개를 입력 : ");
//         scanf("%d %d", &num1, &num2);
//     }

//     for(;num1<=num2;num1++)
//     {
//         total+=num1;
//     }
//     printf("총합은 : %d \n", total);
//     return 0;
// }

// 2
#include <stdio.h>

int main(void)
{
    int i=1, num=0, fac=1;

    printf("정수를 입력 : ");
    scanf("%d", &num);

    for(; i<=num; i++)
    {
        fac=fac*i;
    }
    printf("%d! = %d \n", num, fac);
    return 0;
}
