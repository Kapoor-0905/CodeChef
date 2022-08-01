t = int(input())
for i in range(t):
  n,k,m = input().split()
  bags = int(k)*int(m)
  quo = int(n)/bags
  rem = int(n)%bags
  if(rem==0):
    print(quo)
  elif(rem!=0):
    print(quo+1)
