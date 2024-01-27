// //1
// #include <stdio.h>

// int main(void)
// {
//     int num=0, count=0;

//     printf("양의 정수 하나 입력 : ");
//     scanf("%d", &num);

//     while(count<num)
//     {
//         printf("Hello World! \n");
//         count++;
//     }
//     return 0;
// }

// //2
// #include <stdio.h>

// int main(void)
// {
//     int num=0, count=0;

//     printf("양의 정수 하나 입력 : ");
//     scanf("%d", &num);

//     while(count<num)
//     {
//         count++;
//         printf("%d ", count*3);
//     }
//     return 0;
// }

// //3
// #include <stdio.h>

// int main(void)
// {
//     int num, added=0;

//     while(1)
//     {
//         printf("양의 정수 입력 : ");
//         scanf("%d", &num);

//         added = added+num;

//         if(num==0)
//         {
//             printf("%d ", added);
//             break;
//         }
//     }

//     return 0;
// }

// //4
// #include <stdio.h>

// int main(void)
// {
//     int num=9, dan=0;

//     printf("몇단? : ");
//     scanf("%d", &dan);

//     while(num>0)
//     {
//         printf("%d x %d = %d \n", dan, num, dan*num);
//         num--;
//     }

//     return 0;
// }

//5
#include <stdio.h>

int main(void)
{
    int num=0, quantity=0, count=0, added=0;
    float mean=0;

    printf("몇개 입력할겨? : ");
    scanf("%d", &quantity);
    count=quantity;

    while(count>0)
    {
        printf("양의 정수 입력 : ");
        scanf("%d", &num);

        added=added+num;
        count--;
    }
    mean = (float)added / quantity;
    printf("입력한 값들의 평균은 : %lf 임. \n", mean);

    return 0;
}