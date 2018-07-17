import json

with open('company.json') as f:
    company = json.load(f)

print(company)

print(company['cnpj'])