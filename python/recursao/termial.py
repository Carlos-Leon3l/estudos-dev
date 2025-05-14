#termial 

def termial(n):
  if n == 0:
    return 0
  else:
    return termial(n - 1) + n
  
print(termial(5))