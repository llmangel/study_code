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
    printf("今天学习无类型指针\n");
    line();


    int num;
    int *pi =&num;
    char *ps ="FishC";
    void *pv;
    pv = pi;
    printf("pi:%p,pv:%p\n",pi,pv);
    pv = ps;
    printf("ps:%p,pv:%p\n",ps,pv);

    printf("以下是NULL指针\n");
    line();
    return 0;
}
