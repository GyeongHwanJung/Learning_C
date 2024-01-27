// // 1
// #include <stdio.h>

// int main(void)
// {
//     int dan=1, num=1;

//     for(; dan<10; dan++)
//     {
//         if (dan%2!=0)
//             continue;
//         num=1;
//         for (; num<10; num++)
//         {
//             if (num>dan)
//             {
//                 printf("\n");
//                 break;
//             }
//             printf("%d x %d = %d \n", dan, num, dan*num);
//         }
//     }
//     return 0;
// }

// 2
#include <stdio.h>

int main(void)
{
    int A=0, Z=10;

    for (; A<10; A++)
    {
        for (; Z>0; Z--)
        {
            if (((A*10)+Z)+((Z*10)+A)==99)
                {
                printf("A=%d, Z=%d \n", A, Z);
                break;
                }
        }
    }
    return 0;
}