import requests


# ima = requests.get("http://47.99.42.39:1235/")

# print(ima.text)
imaa = requests.post("http://47.99.42.39:1235/",data={'type':'text','name':'zh','value':'4310341','type':'submit','name':'cx','value':'查询'},headers={'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/108.0.0.0 Safari/537.36'})
print(imaa.text)