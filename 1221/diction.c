#include <stdio.h>



struct Book
    {
        char title[128];
        char author[40];
        float price;
        unsigned int date;
        char publisher[40];
    }book;
    // ={
    //     "Santi","Liucixin","35",{2018,05,06},"Beijing"
    // };

int main(int argc, char const *argv[])
{
    

    printf("书名：%s\n",book.title);
    printf("作者：%s\n",book.author);
    printf("售价：%.2f\n",book.price);
    printf("出版日期：%d\n",book.date);
    printf("出版社：%s\n",book.publisher);



    
    return 0;
}
