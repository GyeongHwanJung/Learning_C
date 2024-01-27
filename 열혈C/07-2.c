// // 1
// #include <stdio.h>

// int main(void)
// {
//     int count=0, num=0, total=0;

//     while(count<5)
//     {
//         printf("정수를 입력하세요 : ");
//         scanf("%d", &num);
//         while(num<1)
//         {
//             printf("1보다 큰 정수를 다시 입력하세요 : ");
//             scanf("%d", &num);
//         }
//         total=total+num;
//         count++;
//     }
//     printf("입력한 숫자들의 합은 %d 입니다.", total);
//     return 0;
// }

// 2
#include <stdio.h>

int main(void)
{
    int count=0, num=0, total=0;
    char str[10] = "o ";

    while(count<5)
    {
        num = 0;
        while(num<count)
        {
            printf("%s", str);
            num++;
        }
        printf("* \n");
        count++;
    }
    return 0;
}
