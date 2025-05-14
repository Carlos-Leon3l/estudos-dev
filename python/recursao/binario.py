 # binário 
 
def binario(n):
    if n < 2:
        return 1 
    print(n % 2 , end="")
    return binario(n - 1) % 2

print(binario(13))