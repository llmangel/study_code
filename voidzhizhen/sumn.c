#include<stdio.h>

int sumn();
int main(int argc, char const *argv[])
{
    int k;
    scanf("%d",&k);
    sumn(k);

   
}


int sumn(int n){
    
    int num = 0;
   for (int i = 0; i <= n; i++)
   {
    /* code */num+=i;
   }
   printf("num;%d",num);
    return 0;
}