print("输入倍数")
beishu = input()


def resset(beishu):
    
    x = 2388
    y = 1668
    try:
        float(beishu)
        return float(beishu)*x , float(beishu)*y
    except:
        print('输入错误')

print(resset(beishu=beishu))
print('计算完成，按任意键退出。')
ex= input()
if ex!='':
    exit()
else:
    exit()