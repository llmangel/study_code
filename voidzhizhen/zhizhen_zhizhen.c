#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num = 520;
    int *p = &num;
    int **pp = &p;

    printf("num :%d\n",num);
    printf("*p:%d\n",*p);
    printf("**pp :%d\n",**pp);

    return 0;
}
