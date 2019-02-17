n = int(input())
l = list(map(int,input().split()))
a = [0 for i in range(10**6)]
b = [0 for i in range(10**6)]
a_i = 0
b_i = 0
i = 0
for e in l:
    if i%2 == 0:
        a[e]+=1
        if(a[a_i]<=a[e]):
            a_i=e
    else:
        b[e]+=1
        if(b[b_i]<=b[e]):
            b_i=e
    i+=1
a.sort()
a.reverse()
b.sort()
b.reverse()
if a_i != b_i:
    print(n-a[0]-b[0])
else:
    print(n-max(a[0]+b[1],a[1]+b[0]))
