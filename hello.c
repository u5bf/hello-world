#include <stdio.h>
//可以在每个putchar();后再输出一个空格使之成为正菱形
int main(int argc, char **argv)
{
    int i, j, h;
    printf("输入一个奇数：");
    scanf("%d", &h);
    for (i = 1; i <= h; i++)
    {
        if (i <= h / 2 + 1)
        {
            for (j = 1; j <= h / 2 + 1 - i; j++)
                putchar(' ');
            for (j = 1; j <= 2 * i - 1; j++)
                putchar('*');
            putchar('\n');
        }
        else
        {
            for (j = 1; j <= i - h / 2 - 1; j++)
                putchar(' ');
            for (j = 1; j <= 2 * h - 2 * i + 1; j++)
                putchar('*');
            putchar('\n');
        }
    }
    return 0;
}
