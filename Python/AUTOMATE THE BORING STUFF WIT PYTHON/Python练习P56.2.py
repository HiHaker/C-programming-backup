#collatz序列
def collatz(number):
    if number%2==0:
        print(str(number//2))
        return number//2
    else :
        print(str(3*number+1))
        return 3*number+1
print('Please enter a integer number:')
while True:
    try :
        back=int(input())
        while True:
            back=collatz(back)
            if back==1:
                break
    except ValueError:
        print('Oldiron! Please enter a integer!')
        continue
