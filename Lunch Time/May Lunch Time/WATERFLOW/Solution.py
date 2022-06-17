t = int(input())
for i in range(0,t):
    w,x,y,z = input().split()
    water = int(y)*int(z) + int(w)
    if(water>int(x)):
        print("overflow")
    elif(water==int(x)):
        print("filled")
    elif(water<int(x)):
        print("unfilled")
