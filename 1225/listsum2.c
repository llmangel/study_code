#include<stdio.h>
#define def void
def print(char* A){
    int i = 0;
    while (*(A+i)!='\0')
    {
        /* code */
        printf("%c",A[i]);
        i++;
    }
    printf("\n");
    
}
int main(int argc, char const *argv[])
{
    // int A[] ={1,2,3,4,5};
    // int size = sizeof(A)/sizeof(int);
    // int ans = sumlist(A,size);
    // printf("%d",ans);
    char* C = "HELLO";
    print(C);
    return 0;
}