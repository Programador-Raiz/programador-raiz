import json

with open('company.json') as f:
    company = json.load(f)

#print(company)

#print(company['cnpj'])

#print(company['tag1']['tag2'])

for key, value in company.items():
    print(key, value)