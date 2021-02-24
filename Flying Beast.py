T=int(input())
while (T>0):
  T-=1
  N=int(input())
  s=0
  for i in range(1,N+1):
    s+=i*(N-i)
    
  print(s)
