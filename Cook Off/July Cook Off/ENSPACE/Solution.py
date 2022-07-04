t = int(input())
for i in range(t):
  n,x,y = input().split()
  if(int(x)+(int(y)*2)<=int(n)):
    print("YES")
  else:
    print("NO")
