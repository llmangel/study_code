#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char first[128] = {0};
    int count = 0;
    while (1)

    {
        int count = 0;
        printf("请开始输入字符串,输入z结束");
        char str[] = "";
        if (str[0]!= 'z')
        {
            gets(str);
            first[count] = str;
            count++;
        }
    }
    printf("%d", count);
    for (int i = 0; i < count; i++)
    {
        /* code */
        printf("%s", first[i]);
    }

    return 0;
}
