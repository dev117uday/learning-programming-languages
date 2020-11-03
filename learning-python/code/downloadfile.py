from urllib import request

download_1 = 'https://dev117uday.github.io/m_site/desktop_site.html'


def download_web_file(url_file):
    response = request.urlopen(url_file)
    file_html = response.read()
    file_str = str(file_html)
    lines = file_str.split("\\n")
    fw = open('index.html', 'w')
    for line in lines:
        fw.write(line+"\n")


def printing_file():
    fr = open('index.html', 'r')
    file_read = fr.read()
    print(file_read)


download_web_file(download_1)
printing_file()
