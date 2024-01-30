// // 1
// #include <stdio.h>

// int max(int, int, int);
// int min(int, int, int);

// int main(void)
// {
//     int num1, num2, num3;
//     printf("정수 세개 입력 :");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     printf("최댓값은 %d. \n", max(num1, num2, num3));
//     printf("최솟값은 %d. \n", min(num1, num2, num3));
//     return 0;
// }

// int max(int num1, int num2, int num3)
// {
//     if (num1>num2)
//         if (num1>num3)
//             return num1;
//         else
//             return num3;
//     else
//         if (num2>num3)
//             return num2;
//         else
//             return num3;
// }

// int min(int num1, int num2, int num3)
// {
//     if (num1<num2)
//         if (num1<num3)
//             return num1;
//         else
//             return num3;
//     else
//         if (num2<num3)
//             return num2;
//         else
//             return num3;
// }


// 2
#include <stdio.h>

double CelToFah(double c)
{
    return 1.8*c+32;
}

double FahToCel(double f)
{
    return (f-32)/1.8;
}

int main(void)
{
    int choice;
    double temp;
    printf("섭씨는 1, 화씨는 2. 선택 :");
    scanf("%d", &choice);
    printf("기온을 입력 :");
    scanf("%lf", &temp);
    if (choice==1)
        printf("화씨 기온은 %f. \n", CelToFah(temp));
    else if (choice==2)
        printf("섭씨 기온은 %f. \n", FahToCel(temp));
    else
        printf("잘못 선택!");
    return 0;
}

