print("hello, this is a financial calculator!\n")

def input(inputs):
    questions = float(input(f"What is your monthly {inputs}?\n"))
   
    return questions

income= input ("income")
rent = input ("rent")
utilities = input ("utilities ")
groceries = input ("groceries")
transportation = input ("transportation")
saving = income*2
expenses = rent+ utilities + groceries + transportation
spend = income - expenses - saving

def percent(type, amount):
    per = amount/income *100

    return(f"Your {type} is  {per}% income")

print(f"Your monthly income is ${income:.2f}\n")
print(f"Your monthly expenses are ${expenses:.2f}\n")
print(f"Your monthly savings is ${saving:.2f}\n")
print(f"Your monthly spending money is ${spend:.2f}\n")
print(percent("rent",rent))
print(percent("utilities", utilities))
print(percent("groceries", groceries))