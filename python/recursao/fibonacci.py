# sequencia de fibonacci - versão 1

def fib(n):
    if n < 2:
        return 1
    return fib(n - 1) + fib(n - 2)

print(fib(7))


# sequencia de fibonacci - versao 2

# Sequencia de fibonacci 

def fib(n):
    if (n == 0 or n == 1): 
        return(n) #base
    else: 
        return(fib(n-1) + fib(n-2)) #passo

n = 8

for i in range(0,n+1):
    print('a%d = %d' %(i,fib(i)))