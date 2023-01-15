#include<stdio.h>

#define STR(s) # s
#define together(x,y) x##y
#define SHOWLIST(...) printf(#__VA_ARGS__)

int main(int argc, char const *argv[])
{
    int i =1;
    printf("%d",together(1,1));
    SHOWLIST(fic,i,123\n);
    
    return 0;
}
