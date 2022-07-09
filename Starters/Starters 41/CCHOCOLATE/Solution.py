t = int(input())
for i in range(t):
    x,y,z = input().split()
    a = int(x)*5 + int(y)*10
    print(a//int(z))
