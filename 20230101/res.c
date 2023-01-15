/*
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
*/

#include<stdio.h>
void resset(float b){
    int x = 2388 ,y = 1668;
    printf("%.1f,%.1f\n",b*x , b*y);
    
}

int main(int argc, char const *argv[])
{
    float beishu;
    printf("Please input :");
    scanf("%f",&beishu);
    resset(beishu);
    return 0;
}
