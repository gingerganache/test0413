#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    for(; ;)
    {


    printf("请输入要绘制菱形的列数：");
    scanf("%d",&n);
        if( n % 2 == 0)
        {
            printf("菱形的列数为奇数，请重新输入！\n");
            continue;
        }else;
            for(i = 0; i < (n+1)/2; i++) //外循环控制列
            {
                for(j = 0; j <= 0.5*n-1.5 - i; j++)//内循环控制行
                {
                    printf(" ");
                }
                for(j = 0; j <= 2 * i; j++)//内循环控制行
                {
                    if(i == 0|| i == (n+1)/2-1 || j == 0 || j == 2 * i) // 挖空
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            for(i = 0; i < (n-1)/2; i++) //外循环控制列
            {
                for(j = 0; j <= i; j++)//内循环控制行
                {
                    printf(" ");
                }
                for(j = 0; j <= n - 3 - 2 * i; j++)//内循环控制行
                {
                     if(j == 0 || j == (n - 3 - 2 * i)) // 挖空
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
    }
    return 0;
}
