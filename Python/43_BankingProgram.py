# Python Banking Program

def show_balance(balance):
    print(f"Your balance is ${balance:.2f}")


def deposit(balance):
    amount = float(input("Enter an amount to be deposited : "))
    if amount < 0:
        print("That's not a valid amount.")
        return 0
    else:
        return amount

def withdraw(balance):
    amount = float(input("Enter amount to be withdrawn : "))
    if amount > balance:
        print("Insufficient funds")
        return 0
    elif amount < 0:
        print("Amount must be greater than 0")
        return 0
    else:
        return amount

def main():
    balance = 0
    is_running = True

    while is_running:
        print("*****************")
        print("BANKING PROGRAM")
        print("*****************")
        print("1. Show balance")
        print("2. Deposit")
        print("3. Withdraw")
        print("4. Exit")

        print("*****************")
        choice = input("Enter your choice (1-4) : ")

        if choice == '1':
            print("*****************")
            show_balance(balance)
        elif choice == '2':
            print("*****************")
            balance += deposit(balance)
        elif choice == '3':
            print("*****************")
            balance -= withdraw(balance)
        elif choice == '4':
            is_running = False
        else:
            print("*****************")
            print("That is not a valid choice!")

    print("*****************")
    print("Thank you! Have a nice day!")


main()

