A,B = map(int,input().split())
S = input()
L = [str(i) for i in range(10)]
flag = True
for i in range(A+B+1):
    if ( i == A ):
        if (S[i] != "-"):
            flag = False
    else:
        if (not (S[i] in L)):
            flag = False
if flag:
    print("Yes")
else:
    print("No")