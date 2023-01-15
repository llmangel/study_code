from PIL import Image
path = input()
logo = Image.open(path)

logo.save(r"D:\\desktop\\ico\\1.ico",format='ICO')