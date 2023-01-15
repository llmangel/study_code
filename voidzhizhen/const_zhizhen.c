#include<stdio.h>
int main(int argc, char const *argv[])
{
    int pi = 3;
    const int cpi = 6;
    const int *pc = &cpi;
    printf("%f\n",pi);
    // int pi = 3.1415926;
    return 0;
}
