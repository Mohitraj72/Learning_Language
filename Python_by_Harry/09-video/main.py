# a = "1"
# b = "2"
# a = 1
# b = 2

a = "41"
b = "22 "

print(a+b)
print(int(a) + int(b))

# Python automatically converts
# a to int
a = 7
print(type(a))
 
# Python automatically converts b to float
b = 3.0
print(type(b))
 
# Python automatically converts c to float as it is a float addition
c = a + b
print(c)


print(type(c))