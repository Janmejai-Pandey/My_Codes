import requests
from bs4 import BeautifulSoup

url = "https://pocktune.store/?play=07MAEnAaf8jRsdxoZufAV6R1UU7j3ua/ZN0PXG54QsNDUtmTdupSPlNGKufdtV0f/*s*GOmw/kZGtelQFLuiJno8qFNRLvDiNcHZdCrVePod4viXAkTl7BuL8slPzcCHanNmoWu2bsbK9PLyxJEYPjZJ5Oxufs5aB65MACTm9eMam8Cty9RUDP6CuQVwz41VPFEovsgGmVBCTX6L*s*QHr1vy9IlK71r*s*y4XuQhw7g0dP0U="

response = requests.get(url)
soup = BeautifulSoup(response.text, 'html.parser')

print(soup.prettify())
for link in soup.find_all('span', class_='simp-source'):
    href = link.get('data-src')
    print(href)