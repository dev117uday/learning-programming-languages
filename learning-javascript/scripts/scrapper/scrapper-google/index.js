const request = require("request-promise");
const cheerio = require("cheerio");
const url = "https://www.google.co.in/search?q=8904109470196";
(async () => {
    let data = [];
    const response = await request({
        uri: url,
        headers: {
            'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/61.0.3163.100 Safari/537.36',
            'accept-language': "en-GB,en-US;q=0.9,en;q=0.8"
        },
    })
    let $ = cheerio.load(response)
    $('h3[class="LC20lb DKV0Md"]').map((i, elem) => {
        data.push($(elem).text())
    })
    console.log(data)
})()