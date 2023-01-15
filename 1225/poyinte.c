#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    // int a;
    // int *p;
    // p = &a;
    // a = 5;
    // printf("%p\n",p);//输出a的地址，因为p指向a的地址
    // printf("%p\n",&a);//输出a的地址
    // printf("%p\n",&p);//输出指针的地址
    // printf("%d\n",*p);//解引用p，*p = a
    int  a = 1025;
    int *p;
    p=&a;
    printf("size of int = %d\n",sizeof(int));
    printf("p的地址:%d,p的值:%d\n",p,*p);

    char *p0;
    p0 = (char*)p;
    printf("p0的地址:%d,p0的值:%d\n",p0,*p0);
    printf("p0的地址:%d,p0的值:%d\n",p0+1,*(p0+1));

    return 0;
    
}
