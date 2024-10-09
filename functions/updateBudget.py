def budget(type): 
    var = float ()
income = float(input("Hello, this is your financial calculator!\n What is your monthly income?: "))
rent = float(input("What is your monthly rent?: "))
utilities = float(input("What is your monthly utilities?: "))
groceries = float(input("What is your monthly groceries?: "))
transportation = float(input("What is your monthly transportation costs?: "))
savings = income*2
expenses = rent + utilities + groceries + transportation
spend = income - expenses - savings
print(f"Your monthly income is ${income:.2f}\n")
print(f"Your monthly expenses is ${expenses:.2f}\n")
print(f"Your monthly savings is ${savings:.2f}\n")
print(f"Your monthly spending money is ${spend:.2f}\n")
prent = rent/income *100
putilities = utilities/income *100
pgroceries = groceries/income *100
ptransportation = transportation/income *100
psavings = savings/income *100
pexpenses = expenses/income *100
print(f"Your rent is {int(prent)}% of your monthly income\n")
print(f"Your utilities is {int(putilities)}% of your monthly income\n")
print(f"Your groceries is {int(pgroceries)}% of your monthly income\n")
print(f"Your transportation is {int(ptransportation)}% of your monthly income\n")
print(f"Your savings is {int(psavings)}% of your monthly income\n")
print(f"Your expenses is {int(pexpenses)}% of your monthly income\n")
    