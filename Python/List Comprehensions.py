x = int(input())
y = int(input())
z = int(input())
n = int(input())
    
print([[a,b,c] for a in range(x+1) for b in range(y+1) for c in range(z+1) if a+b+c!=n])
    
    
    
#second
x = int(input())
y = int(input())
z = int(input())
n = int(input())

new_list=[]
for a in range(x+1):
  for b in range(y+1):
    for c in range(z+1):
      if a+b+c!=n:
        new_list.append([a,b,c])
      
      
print(new_list)
