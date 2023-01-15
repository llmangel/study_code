#include<stdio.h>
struct Date
{
    /* data */
    int month;
    int year;
    int day;
};

struct Book
{
    /* data */
    char title[128];
    char author[40];
    char publisher[40];
    float price;
    struct Date date;
    
};


int main(int argc, char const *argv[])
{
    struct Book b1,b2;
    return 0;
}
