n,m = map(int,input().split())
s = [list(map(int,input().split()))+[i] for i in range(m)]
s.sort()
l = [[] for i in range(n)]
for e in s:
    l[e[0]-1] += [e]
s = []
for e in l:
    k = 0
    for i in e:
        s += [[i[0],k+1,i[2]]]
        k += 1
s.sort(key=lambda x: x[2])
for e in s:
    print(str('0'*(6-len(str(e[0]))))+str(e[0])+str('0'*(6-len(str(e[1]))))+str(e[1]))