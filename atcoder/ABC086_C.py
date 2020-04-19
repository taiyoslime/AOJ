N=int(input())
_t = 0
_x = 0
_y = 0
flag = True
for i in range(N):
    t,x,y = map(int,input().split())
    if abs(x - _x) + abs(y - _y) > t - _t or (t - _t - (x - _x + y - _y))%2 !=0 :
        flag = False
        break
    _t, _x, _y = t, x, y
if flag:
    print("Yes")
else:
    print("No")
