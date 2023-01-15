# include<stdio.h>

// void指针可以指向任意类型的指针

void  line(){
    for (int i = 0; i < 50; i++)
    {
        /* code */printf("__");
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
 
    printf("以下是NULL指针\n");
    line();

    int *p1 = NULL;
    int *p2 = NULL;
    printf("p1 = %d",*p1);
    printf("p2 = %d",*p2);

    return 0;
}