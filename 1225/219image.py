from PIL import Image
print("请输入图片路径：")
tupianlujing = input()
yuantu = Image.open(tupianlujing)
kuan = yuantu.size[0]
high = int(yuantu.size[1])
result = int(high/21*9)# 两边裁切
cut = int((kuan-result)/2)
box = (cut,0,cut+result,high)
cutimage = yuantu.crop(box)
result_image = Image.new('RGB',(result,high))
result_image.paste(cutimage,(0,0),mask=0)
result_image.save('test.jpg')
result_image.show()
