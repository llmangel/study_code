#include<stdio.h>
#include"game.h"


void menu(){
    printf("*************1,play**************\n");
    printf("*************0,exit**************\n");
}
void game(){
    // 创建数组，存放玩家和电脑的棋盘信息
    char board[ROW][COL]={0};// 数组里面的内容全部换成空格
    InitBoard(board,ROW,COL);
    DisplayBoard(board,ROW,COL);
}

void test(){
    int input = 0;

    do
    {
        /* code */
        menu();
        printf("请选择\n");
        scanf("%d",&input);
        if (input==1)
        {
            /* code */
            printf("三子棋\n");
            game();
        }
        else if (input==0)
        {
            /* code */
            printf("退出游戏\n");
            break;
        }
        else printf("选择错误，重新选择\n");
        
        
    } while (input);
    
}

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
