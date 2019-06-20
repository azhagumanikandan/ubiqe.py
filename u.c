AA=int(input())
BB=list(map(int,input().split()))
CC=[]
for A in range(AA):
    for i in range(A+1,len(BB)):
        if(BB[i]==BB[A]):
          CC.append(BB[A])
if (len(CC)==0):
    print("unique")
else:
    CC.sort()
    li2=set(CC)
    for A in li2:
        print(A,end=" ")
