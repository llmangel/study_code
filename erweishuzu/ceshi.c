#include<stdio.h>
void put(int a,int b){
    printf("%d",a+b);
}
void line(){
    for (int i = 0; i < 50; i++)
    {
        /* code */printf("--");
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    line();
    printf("你好\n");
    int j=1,k=2;
    put(j,k);
    return 0;

}
