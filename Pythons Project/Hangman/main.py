import os
import random
import randomn
from ascii import stages

chose = random.choice(randomn.name) #A word list for chosing random name
display = [] #Empty list
life = 6

from ascii import logo
os.system('cls')
print(logo)

for _ in range(len(chose)): #IT SAys that print _ eqal to the length of chosen word
    display += "_"
print(display)    

end = False
while not end:
    guess = input("Guess a letter ").lower()#Gusee a letter and turned it in lower case
    
    if guess in display:
        print("You already guess the letter ")
    for position in range(len(chose)):
        later = chose[position]
        if later==guess:
            display[position] = later

    print(f" {' '. join(display)}")
    print(f'{stages[life]}')
    print(f"You chose correct latter and  your lifes are {life}")
    if guess not in chose:
        os.system('cls')
        print (f"\n\n\nYou chose the latter '{guess}' which is not present in my chosen list.You lose a life ")
        life -= 1
        print(f"\nNow your lifes are {life}")
        
        if life == 0:
            end = True
            print(f"You loss..the correct word is {chose}")
    if "_" not in display:
      end = True
      print('you win')
    print(f'{stages[life]}')
input()