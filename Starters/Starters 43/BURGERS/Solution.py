t = int(input())
for i in range(t):
    a,b = input().split()
    if(int(a) == int(b)):
        print(a)
    elif(int(a)>int(b)):
        print(b)
    else:
        print(a)
