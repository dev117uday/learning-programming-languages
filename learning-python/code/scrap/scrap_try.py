from bs4 import BeautifulSoup
import requests

barcodeDatax = "8908000097933"
google_url = 'https://www.google.com/search?q={}'.format(barcodeDatax)

source = requests.get(google_url).text

soup = BeautifulSoup(source, 'lxml')

for article in soup.find_all('a '):
    hx = article.find('h3', class_='LC20lb DKV0Md')
    print(hx)

