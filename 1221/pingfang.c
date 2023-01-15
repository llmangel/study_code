#include<stdio.h>
 
#define squre(x) ((x)*(x))
int main(int argc, char const *argv[])
{
    for (int i = 1; i < 101; i++)

    {
        /* code */
        // squre(i);
        printf("%d的平方是：%d\n",i,squre(i));
    }
    
    return 0;
}
