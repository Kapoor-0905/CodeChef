t = int(input())
for i in range(0,t):
    x,y=(input()).split()
    #y=int(input())
    if(int(x)*3 < int(y)*2):
        print(int(x)*3)
    else:
        print(int(y)*2)
