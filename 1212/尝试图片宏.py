from PIL import Image

im = Image.open(r'D:\desktop\075c46edba05491883ff8c16ea003df7_noop.jpg')
print(im.size)
# Image.eval(im,lambda i:i*2).show()
ima = im.copy()

ima.thumbnail((1080,1920))
ima.show()