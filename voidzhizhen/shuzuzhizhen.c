#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    char *cBooks[]={
        "关羽",
        "张飞",
        "赵云",
        "马超",
        "黄忠"
    };
    
    // 用指向指针的的指针来指向指针数组
    char **byHero;
    char **ilove[4];
    byHero = &cBooks[5];

    ilove[0]=&cBooks[0];
    ilove[1]=&cBooks[1];
    ilove[2]=&cBooks[2];
    ilove[3]=&cBooks[3];

    printf("Fishc:%s\n",*byHero);
    printf("Fishc:%s\n",*byHero);

    for (int  i = 0; i < 4; i++)
    {
        /* code */printf("%s\n",ilove);
    }
    return 0;

}
