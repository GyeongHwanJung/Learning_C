// // 1
// #include <stdio.h>

// int main(void)
// {
//     int num=1;

//     for(; num<100; num++)
//     {
//         if (num%7==0)
//             printf("%d \n", num);
//         else if (num%9==0)
//             printf("%d \n", num);
//     }
//     return 0;
// }

// // 2
// #include <stdio.h>

// int main(void)
// {
//     int num1, num2;

//     printf("두 정수 입력 :");
//     scanf("%d %d", &num1, &num2);

//     if (num1>num2)
//         printf("%d \n", num1-num2);
//     else if (num1<num2)
//         printf("%d \n", num2-num1);
//     else
//         printf("같은 수를 두번 입력함");
//     return 0;
// }

// // 3
// #include <stdio.h>

// int main(void)
// {
//     int num1, num2, num3, avg;

//     printf("과목별 점수 입력 :");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     avg = (num1+num2+num3)/3;
//     if (avg>=90)
//         printf("A \n");
//     else if (avg>=80)
//         printf("B \n");
//     else if (avg>=70)
//         printf("C \n");
//     else if (avg>=50)
//         printf("D \n");
//     else
//         printf("F \n");
//     return 0;
// }

// 4
#include <stdio.h>

int main(void)
{
    int num1, num2, result;

    printf("두 정수 입력 :");
    scanf("%d %d", &num1, &num2);

    result = num1>num2 ? num1-num2 : num2-num1;
    printf("%d \n", result);
    return 0;
}

// // 1-1
// #include <stdio.h>

// int main(void)
// {
//     int num=1;

//     for(; num<100; num++)
//     {
//         num%7==0 && num%9!=0 ? printf("%d \n", num) : num;
//         num%9==0 ? printf("%d \n", num) : num;
//     }
//     return 0;
// }
