from selenium import webdriver
import re
import time
bos = webdriver.Chrome(executable_path='20230107\chromedriver.exe')
bos.get('http://47.99.42.39:1235/')
bos.find_element_by_xpath('/html/body/form/input[1]').send_keys('4310341')
bos.find_element_by_xpath('/html/body/form/input[2]').click()
# print(bos.page_source)
ex = '<br>进度(.*?)<br>状态'
result  = re.findall(ex,bos.page_source)
print('进度{}'.format(result[0]))
