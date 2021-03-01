def gcd(a, b):
        if a == 0:
                return b
        else:
                return gcd(b%a,a)

def lcm(a,b):
        return (a*b)//gcd(a,b)

a= int(input('First number:'))
b= int(input('Second number:'))

print('gcd =' +str(gcd(a,b)))

#lcm printing
print('LCM : '+str(lcm(a,b)))

