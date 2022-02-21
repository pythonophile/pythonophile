import os
bid = {}
end = False
def totl_bid(bidRecord):
    highstBid = 0
    winer = ""
    for bider in bidRecord:
        bid_amount = bidRecord[bider]
        if bid_amount>highstBid:
            highstBid = bid_amount
            winer = bider
    print(f"The winner is {winer} and win with ${highstBid}")
    

while end is not True:
    os.system('cls')
    name = input("What is your name?: ")
    amount = int(input("Enter the amount for bid?: $"))
    bid[name] = amount
    again = input("Do you have more bids.'yes' or 'no'. ")
    if again=='no':
        end = True
        os.system("cls")
        totl_bid(bid)
        input()#For pausing program
    elif again=='yes':
        os.system('cls')
    else:
        os.system('cls')
        end = True
        print("No Command in my memory.Run Again...\n\n")
        totl_bid(bid)
        input()#For pausing program