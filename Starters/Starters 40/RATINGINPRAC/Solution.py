t = int(input())
for i in range(t):
    n = int(input())
    l1=list(map(int,input().split()))
    l2 = sorted(l1)
    if(l1==l2):
        print("YES")
    else:
        print("NO")
