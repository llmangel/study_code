print("输入z退出")
one = input()

list1=[]



while(one!="z"):
    list1.append(one)
    if len(list1)<=1:
        print(list1)
    elif len(list1)>1:
        if len(list1)%2==0:
            for i in range(i,len(list1)-1):
                if list1[i]==list1[i+1]:
                    pass
        elif len(list1)%2!=0:
            pass
        
    one = input()

        


