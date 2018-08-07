catnames=[]
while True:
    print('Enter the name of cat '+str(len(catnames)+1)+'(Or nothing to stop.)')
    name=input()
    if name=='':
        break
    catnames=catnames+[name]
print('The catnames are:')
for name in catnames:
    print(''+name)
