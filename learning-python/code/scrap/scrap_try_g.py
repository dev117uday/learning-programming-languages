from bs4 import BeautifulSoup
import requests

barcodeDatax = "8908000097933"
USER_AGENT = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/61.0.3163.100 Safari/537.36'}

google_url = 'https://www.google.com/search?q={}'.format(barcodeDatax)

response = requests.get(google_url, headers=USER_AGENT).text
soup = BeautifulSoup(response, 'lxml')
answer = []

for article in soup.find_all('a'):
    hx = article.find('h3', class_='LC20lb DKV0Md')
    if hx != None:
        hx = str(hx)
        start = '<h3 class="LC20lb DKV0Md">'
        end = '</h3>'
        x = (hx.split(start))[1].split(end)[0]
        x = x[:-3]
        answer.append(x)
    else:
        pass

answer = answer[0:3]
