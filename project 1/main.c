#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    for(; ;)
    {


    printf("������Ҫ�������ε�������");
    scanf("%d",&n);
        if( n % 2 == 0)
        {
            printf("���ε�����Ϊ���������������룡\n");
            continue;
        }else;
            for(i = 0; i < (n+1)/2; i++) //��ѭ��������
            {
                for(j = 0; j <= 0.5*n-1.5 - i; j++)//��ѭ��������
                {
                    printf(" ");
                }
                for(j = 0; j <= 2 * i; j++)//��ѭ��������
                {
                    if(i == 0|| i == (n+1)/2-1 || j == 0 || j == 2 * i) // �ڿ�
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            for(i = 0; i < (n-1)/2; i++) //��ѭ��������
            {
                for(j = 0; j <= i; j++)//��ѭ��������
                {
                    printf(" ");
                }
                for(j = 0; j <= n - 3 - 2 * i; j++)//��ѭ��������
                {
                     if(j == 0 || j == (n - 3 - 2 * i)) // �ڿ�
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
    }
    return 0;
}
