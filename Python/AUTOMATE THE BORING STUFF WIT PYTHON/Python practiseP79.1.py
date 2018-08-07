#逗号代码
def transstr(alist):
    astr=''
    for i in range(len(alist)):
        if i==len(alist)-1:
            astr=astr+'and '+str(alist[i])
        else:
            astr=astr+str(alist[i])+','
    return astr
spam=[]
print('Please type some items:')
while True:
    mid=str(input())
    if mid:
        spam.append(mid)
    else:
        break
print(transstr(spam))
            
