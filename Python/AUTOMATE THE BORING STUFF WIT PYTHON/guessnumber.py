#This is the guess the number game
import random
secretnumber=random.randint(1,20)#create a secretnumber between 1~20
print('Welcome!This is a game of guess a number!')
print('You can guess six times, ready?Begin!')
for guesstaken in range(1,7):#guess seven times
    gamernumber=int(input())
    if gamernumber>secretnumber:
        print('You guess are higher')
    elif gamernumber<secretnumber:
        print('You guess are lower')
    else :
        break
if guesstaken<=7:
    print('WOW!!!Congratulations! You guess it for'+str(guesstaken)+'times')
else :
    print('Sorry,you lose!')
