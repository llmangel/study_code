#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10
int main(int argc, char const *argv[])
{
    // int *ptr = NULL;
    // int i;
    // ptr = (int*)malloc(N*sizeof(int));
    // return 0;
    // if (ptr == NULL)
    // {
    //     exit(1);        /* code */
    // }
    // memset(ptr,0,N*sizeof(int));
    // for ( i = 0; i < N; i++)
    // {
    //     /* code */printf("%d",ptr[i]);
    // }
    // putchar('\n');
    // free(ptr);
/*
    申请10个内存空间，然后不够用就申请20个，把10个拷贝到20个，释放第一个十个内存空间
    int *ptr1= NULL;
    int *ptr2=NULL;
    ptr1 = (int*)malloc(10*sizeof(int));
    ptr1 = (int*)malloc(20*sizeof(int));
    memcpy(ptr2,ptr1,10);
    free(ptr1);
    return 0;
*/
// 用户不断输入数字，直到输入-1才结束，打印数字
    int i,num;
    int count = 0;
    int *ptr = NULL;//注意这里必须初始化为null
    do
    {
        /* code */printf("请输入一个整数，-1表示结束");
        scanf("%d",&num);
        ptr  = (int*)realloc(ptr,count*sizeof(int));
        if (ptr == NULL)
        {
            /* code */exit(1);
        }
        ptr[count-1]=num;
    } while (num!=-1);
    
    printf("输入的整数，分别是：");
    for (int i = 0; i < count; i++)
    {
        /* code */printf("%d",ptr[i]);
    }
    putchar('\n');
    return 0;
    
}
