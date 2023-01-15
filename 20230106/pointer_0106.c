#include<stdio.h>
#include<string.h>


void print(char const  * C)
{   
    int i = 0;
    // C[0]='A';
    while (C[i]!='\0')
    {
        /* code */
        printf("%c",C[i]);
        i++;
    }
    printf("\n");
    
}

int main(int argc, char const *argv[])
{
    char c[20] = "hello";
    print(c);
    return 0;
}
