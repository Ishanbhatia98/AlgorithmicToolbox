n = int(input())
t = 0
if(n%10!=n):
    t+=n//10
    n%=10
if(n%5!=n):
    t+=n//5
    n%=5
if(n!=0):
    t+=n

print(t)
