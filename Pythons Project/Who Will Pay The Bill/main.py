#Import libraries
import random
import os
import logo

#For ending programs 
end = False

#Create a function for chose random person one of them
def pay(person):
    person.sort() #For sorting names in order
    print(f"\nThe list of the names you are given is {person}") #Displaying names
    chose = random.choice(person)#Chose a person randomly one of them
    print(f"\n\t\t\t\t{chose} will pay the bill.")

#For running program again and again untill condition is not true    
while end is not True:
    os.system('cls')
    print(logo.logo)
    names = input('\nEnter the name of persons using comma ').split(',')#Taking names
    pay(person=names)
    exit = input("\n\nDo you want to exit the program.Type 'yes' for exit the program.")
    os.system('cls')
    #Condition for exit program if it is true
    if exit == 'yes' or exit=='y':
        end = True
        print("\n\n\t\t\tGood Bye...Thanks for using over program..")
input()