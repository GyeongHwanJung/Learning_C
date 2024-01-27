// // 1-1
// #include <stdio.h>

// int main(void)
// {
//     int num=1, total=0;

//     while (num != 0)
//     {
//         printf("정수 입력(0 to quit) : ");
//         scanf("%d", &num);
//         total += num;
//     }
//     printf("합계 : %d", total);
//     return 0;
// }
// // 1-2
// #include <stdio.h>

// int main(void)
// {
//     int num=0, total=0;

//     printf("정수 입력(0 to quit) : ");
//     scanf("%d", &num);
//     total += num;

//     while (num != 0)
//     {
//         printf("정수 입력(0 to quit) : ");
//         scanf("%d", &num);
//         total += num;
//     }
//     printf("합계 : %d", total);
//     return 0;
// }

// // 2
// #include <stdio.h>

// int main(void)
// {
//     int num=0, total=0;

//     do
//     {
//         total += num;
//         num+=2;
//     }while(num<101);
//     printf("합계 : %d", total);
//     return 0;
// }

// // 3
// #include <stdio.h>

// int main(void)
// {
//     int cur=2, is=0;

//     do
//     {
//         is=1;
//         do
//         {
//             printf("%d x %d = %d \n", cur, is, cur*is);
//             is++;
//         }while (is<10);
//         printf("\n");
//         cur++;
//     }while(cur<10);
//     return 0;
// }
