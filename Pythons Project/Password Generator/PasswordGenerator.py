import random
letter = ['a' , 'b' , 'c' , 'd' ,  'e' , 'f' , 'g' , 'h' , 'i' , 'j' , 'k' , 'l' , 'm' ,'n','o','p','q','r','s','t','u', 'v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
symbol = ['!','@','#','$','%','^','&','(',')','*','_','+','?']
math = ['1','2','3','4','5','6','7','8','9']

symboll = int(input("How many symbol you want "))
numberz = int(input("How many numbers you want "))
letterr = int(input("How many letter you want "))

random_letter = []
for char in range(0 , letterr):
    chara = random.choice(letter)
    random_letter += chara
# print(random_letter)


for char in range(0 , symboll):
    sybols = random.choice(symbol)
    random_letter+=sybols
# print(random_letter)


for char in range(0 , numberz):
    mathe = random.choice(math)
    random_letter+=mathe
# print(random_letter)

random.shuffle(random_letter)
password = ''

for char in random_letter:
    password += char
print(f'Your password is {password} and it is {len(password)} character long.')


exit = input("Press any key for exit the program ") #For exit program
print(exit) 