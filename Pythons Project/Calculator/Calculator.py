import os
#Functions for task done
def sum(num1, num2):
    return num1+num2
def sub(num1, num2):
    return num1-num2
def multiply(num1, num2):
    return num1*num2
def divide(num1, num2):
    return num1/num2
#Operators for task
operator = {
    '+':sum,
    '*':multiply,
    '/':divide,
    '-':sub,
}
#We take first number and then we want to take operator

def calculator():
    os.system("cls")
    num1 = float(input("Enter first number "))
    for symbol in operator:
            print(symbol)

    operations = True
    while operations:
        smbol = input("Enter operator ")
        num2 = float(input("Enter next number "))
        operand = operator[smbol]
        answer = operand(num1, num2)
        print(f'{num1} {smbol} {num2} = {answer}')
        runAgain = input("Do you want more calculations.'y' or 'n'. ")
        if runAgain=='n':
            operations = False
            os.system("cls")
            calculator()
        if runAgain=='y':
            num1 = answer   
calculator()