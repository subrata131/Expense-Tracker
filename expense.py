expense=[]

def addexpe():
    category =input("Enter catagory(Food/Transport/Shopping/Others):")
    amount =float(input("Enter amount:"))

    exp = {
    "category":category,
    "amount":amount
    }
    expense.append(exp)
    print("Expense added successfully!!")
def showexpe():
    if len(expense)==0:
        print("No expense recorded")
        return
    
    print("\n......Expense List.....")
    for i  in range(1,len(expense)+1):
        exp=expense[i-1]
        print(f"{i}.Category:{exp['category']}|Amount:{exp['amount']}")

def total():
    total=sum(exp["amount"] for exp in expense)
    print(f"\nTotal Expense:{total}")

while True:
    print("\n.....Personal Expense Tracker....")
    print("\n1: Add Expense\n2: Show Expense\n3: Total Expense\n4:Exit")
    choice=input("Enter your Choice:")
    if choice =="1":
        addexpe()
    elif choice=="2":
        showexpe()
    elif choice=="3":
        total()
    elif choice=="4":
        print("Exiting.....")
        break
    else:
        print("Invalid Input...")