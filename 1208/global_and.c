#include<stdio.h>
#if 0
int main(int argc, char const *argv[])
{
    /* code */
    int i = 520;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d\n",i);
    }
    printf("after:%d",i);
    
    return 0;
}
#endif



int main(int argc, char const *argv[])
{
    /* code */
    register int i = 1;
    printf("%p",&i);
    return 0;
}

