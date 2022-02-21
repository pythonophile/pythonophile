import random
rock = '''
    _______
---' ______)
    (_______)
    (______)                    ROCK
    (_____)
---.(___)
'''

paper = '''
    _____
---' ____)__
      ______)
      _______)                  PAPER
      ______)
---.______)
'''

scissor = '''
   _____
---' ____)___
         ____)
      _______)                  SCISSOR
      (____)
---.__(__)

'''
game_image = [rock,paper,scissor]
your_choice = int(input("What you chose..type 0 for rock, 1 for paper and 2 for scissor "))
print(f"You Chose {game_image[your_choice]}")
cmptr_choice = random.randint(0,2)
print(f"Computer chose {game_image[cmptr_choice]}")

if your_choice>=3 or your_choice<0:
    print("You chose an invalid number,You lOSE!!")
elif cmptr_choice==2 and your_choice==0:
    print("You WIN! ")
elif cmptr_choice==your_choice:
    print("Match Draw")
elif cmptr_choice==0 and your_choice==2:
    print("You LOSE! ")
elif cmptr_choice>your_choice:
    print("You LOSE! ") 
elif cmptr_choice<your_choice:
    print("You WIN! ")
elif your_choice>=3:
    print("You chose an invalid number,You lOSE!!")
    
exit = input("Press any key for exit the program ") #For exit program
print(exit) 