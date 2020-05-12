

#a, b = (map(int, input('Enter numbers to compute gcd: ').split()))
a, b = map(int, input().split())
def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b, a%b)
        #a, b = max(a, b), min(a, b)
        #a = a%b

print((a*b)//gcd(a,b))
