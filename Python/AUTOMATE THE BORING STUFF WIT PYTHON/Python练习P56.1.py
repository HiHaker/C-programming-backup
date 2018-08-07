#collatz序列
def collatz(number):
    if number%2==0:
        print(str(number//2))
        return number//2
    else :
        print(str(3*number+1))
        return 3*number+1
print('Please enter a integer number:')
back=int(input())
while True:
    back=collatz(back)
    if back==1:
        break
