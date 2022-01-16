#In This Program We Are Going To Check The Length Of Password
#Now we are going to ask username
username = input('What is Your name?? ')
print(username)
#Now we are going to ask user for password
password = input('What is Your password?? ')
print(password)

#Now we are going to take check length
length = len(password)

#Now we are going to hide password in stars
hidepass = '*' * length

#Now we are going to print
print(f'Hello {username} , Your {hidepass}, is {length} character long')