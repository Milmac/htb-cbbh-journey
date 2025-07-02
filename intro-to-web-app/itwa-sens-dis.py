import requests
import re

pattern = "\\w+:\\w+"

url = "http://94.237.61.242:30722"
x = requests.get(url)

result = re.findall(pattern, x.text)
print(result)
