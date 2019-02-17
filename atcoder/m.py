N = int(input())
A = [int(input()) for i in range(N)]
A.sort()
j = 1
J = 1
ans = 0
for j in range(1,len(A)):
  if (A[j-1] == A[j]):
    J += 1
  else:
    if (J%2 != 0):
      ans += 1
      J = 1
    else:
      J = 1
if (J%2 != 0):
  ans += 1
print(ans)