import os
import random
listBoard = ["+", "+", "+", "+", "+", "+", "+", "+", "+"]  
def gameboard(count):
    listBoard[count] = "●"
def dawlboard():
    print("\n", listBoard[0], listBoard[1], listBoard[2], "\n", listBoard[3],
          listBoard[4], listBoard[5], "\n", listBoard[6], listBoard[7], listBoard[8],)
def player():

    print("请输入走的地方：1-9,输入z退出")
    player_count = int(input())
    if 1 <= player_count <= 9:
        while True:
            if listBoard[player_count-1] != "●" and listBoard[player_count-1] != "o":
                listBoard[player_count-1] = "o"
                return
            else:
                print("已经有子了，请重新落子")
                player()
                return
    elif player_count == 'z':
        exit()
    else:
        print('输入错误')
def pve_e():
    
    board_i = []
    for i in range(9):
        if listBoard[i] == "+":
            board_i.append(i)
    # ● 找出这些位置，并且随机挑选一个变成●落子
    if len(board_i) > 0:
        listBoard[random.choice(board_i)] = "●"
    else:
        print("游戏结束了")


def shengfu(listBoard):
    if   listBoard[0] == "●" and listBoard[1] == "●" and listBoard[2] == "●":
        print("电脑赢了")
    elif listBoard[3] == "●" and listBoard[4] == "●" and listBoard[5] == "●":
        print("电脑赢了")
    elif listBoard[6] == "●" and listBoard[7] == "●" and listBoard[8] == "●":
        print("电脑赢了")
    elif listBoard[0] == "●" and listBoard[4] == "●" and listBoard[8] == "●":
        print("电脑赢了")
    elif listBoard[2] == "●" and listBoard[4] == "●" and listBoard[6] == "●":
        print("电脑赢了")
    elif listBoard[0] == "●" and listBoard[3] == "●" and listBoard[6] == "●":
        print("电脑赢了")
    elif listBoard[1] == "●" and listBoard[4] == "●" and listBoard[7] == "●":
        print("电脑赢了")
    elif listBoard[2] == "●" and listBoard[5] == "●" and listBoard[8] == "●":
        print("电脑赢了")

    elif listBoard[0] == "o" and listBoard[1] == "o" and listBoard[2] == "o":
        print("你赢了")
    elif listBoard[3] == "o" and listBoard[4] == "o" and listBoard[5] == "o":
        print("你赢了")
    elif listBoard[6] == "o" and listBoard[7] == "o" and listBoard[8] == "o":
        print("你赢了")
    elif listBoard[0] == "o" and listBoard[4] == "o" and listBoard[8] == "o":
        print("你赢了")
    elif listBoard[2] == "o" and listBoard[4] == "o" and listBoard[6] == "o":
        print("你赢了")
    elif listBoard[0] == "o" and listBoard[3] == "o" and listBoard[6] == "o":
        print("你赢了")
    elif listBoard[1] == "o" and listBoard[4] == "o" and listBoard[7] == "o":
        print("你赢了")
    elif listBoard[2] == "o" and listBoard[5] == "o" and listBoard[8] == "o":
        print("你赢了")
    else:
        print("平局")
if __name__ == '__main__':
    k = 0
    dawlboard()# 开始先把棋盘绘制出来
    #固定为玩家先走
    while k<9:
        player()
        os.system("cls")
        dawlboard()

        k+=1
        pve_e()
        os.system("cls")
        dawlboard()
        k+=1
    shengfu(listBoard)