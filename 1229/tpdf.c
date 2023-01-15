#include<stdio.h>
#include<stdlib.h>
typedef struct Date
{
    /* data */
    int year;
    int month;
    int day;
}DATE , *PDATE;

int main(int argc, char const *argv[])
{
    struct Date *date;
    date = (PDATE)malloc(sizeof(PDATE));
    date->day = 29;
    date->month=12;
    date->year=2022;
    printf("%d-%d-%d",date->day,date->month,date->year);
    return 0;
}
