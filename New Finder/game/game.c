#include<stdio.h>
#include"game.h"


void DisplayBoard(char board[ROW][COL],int row,int col){
    int i =0;
    for ( i = 0; i < row; i++)
    {
        /* code */
        // 打印一行的数据
        printf(" %c | %c | %c ");
        printf("---|---|---");
        // 打印分割行
    }
    
}
void InitBoard(int board[ROW][COL],int row ,int col)
{
    for (int i = 0; i < row; i++)
    {
        /* code */
        for (int j = 0; j < col; j++)
        {
            /* code */
            board[i][j];
        }
        
    }
    
}