import random

def getAnswer(answernumber):
    if answernumber==1:
        return 'It is certain'
    elif answernumber==2:
        return 'It is decidedly so'
    elif answernumber==3:
        return 'Yes'
    elif answernumber==4:
        return 'Reply hazy try again'
    elif answernumber==5:
        return 'Ask again later'
    elif answernumber==6:
        return 'Consentrate and ask again'
    elif answernumber==7:
        return 'My reply is no'
    elif answernumber==8:
        return 'Out look not so good'
    elif answernumber==9:
        return 'very doubtful'
print(getAnswer(random.randint(1,9)))
