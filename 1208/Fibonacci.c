#include<stdio.h>
int jieche(long long int m ){
    if (m ==1)
    {
return m;
    }
    else{
        return jieche(m-1)*m;
    }
}

int main(int argc, char const *argv[])
{
    printf("%lld",jieche(6));
    return 0;
}

int Fibonacci(long long int n ){
    if (n==1 | n==2)
    {
        /* code */
        return 1;
    }
    else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
    
}