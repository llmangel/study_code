#include<stdio.h>

int app(int *p){
    *p = *p+1;
}


int main(int argc, char const *argv[])
{
    /* code */
    int A[]={2,4,5,8,1};
    int *p;
    p = A;
    printf("A的地址是：%d\n",A);
    printf("p的地址是：%d\n",p);
    printf("p指向数组的第一位是：%d\n",*p);
    printf("p指向数组的第二位是：%d\n",*(p+1));
    printf("p指向数组的第二位是：%d\n",*(A+1));
    printf("p指向数组的第二位的地址是：%d\n",A+1);//64220020
    printf("p指向数组的第一位的地址是：%d\n",&A[0]);
    printf("A的第一位是：%d\n",*A);
    
}
