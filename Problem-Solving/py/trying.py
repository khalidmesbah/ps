# print(''' zero
# one
# two
# three''', 1, 2)

# x = input()
# print(type(x))

# print(1,"name",True)

# print(help(print))

# print("a","b","c",sep="*",end="^^")

# print("the number you entered +3 is", int(input("number= "))+3)

# print(5 != True, 5 != False)

# print('A' < 'a')

# print("Jan" in "january")

# print(list(range(10)))
# print(list(range(0, 10, 1)))
# print(list(range(0, 10, 2)))
# print(list(range(10, 0, -1)))
# print(list(range(10, 0, -2)))
# print(10 // 4, 10/4)
# print([1, 2, 3, 4, 5][::-1])
# print("12345"[::-1])
# print(int("12345"[::-1]))
"""
not true = false
true and true = true
false and true = false
true and false = false
true or false = true
 """
# boolean = True or False
# print(boolean)

""" print(3 < 5 != True)
print(3 < 5 != False) """
""" for i in range(5):
    print(end="* "*(i+1))
    print("# "*(5-i))

for i in range(1, 6):
    print("* "*(i))

for i in range(5, -1, -1):
    print("* "*(i+1))
for i in range(5, -1, -1):
    for j in range(5, -1, -1):
        if(i+j < 5):
            print("* ", end="")
    print("") """

""" x = "how are you"
# 1
for i in range(len(x)):
    if(x[i] == "o"):
        continue
    print(x[i])
# 2
for i in range(len(x)):
    if(x[i] != "o"):
        print(x[i]) """


""" for i in range(0, 10, 2):  # 0,10,1
    if(i % 2 == 0):
        print(i)
for i in range(1, 10, 2):  # 0,10,1
    if(i % 2 != 0):
        print(i)
 """
""" for i in range (1,12):
    print(i)
for i in range (11):
    print(i + 1) """

""" fact = 6
for i in range(1, fact):
    fact *= i
print(fact)
 """

""" n = 7
k = n - 1
for i in range(0, n, 2):
    for j in range(k):
        print(end=" ")
    k = k - 2
    for j in range(i+1):
        print(end="* ")
    print() """


""" 

print("triangle 1")
n = 6
for i in range(n):
    k = n - i - 1
    for j in range(k):
        print(end="")
    for j in range(n-k):
        print(end="* ")
    print()
print("triangle 1 reversed")
n = 6
for i in range(n, 0, -1):
    k = n - i
    for j in range(k):
        print(end="")
    for j in range(n-k):
        print(end="* ")
    print()
print("triangle 2")
n = 6
for i in range(n):
    k = n - i - 1
    for j in range(k):
        print(end=" ")
    for j in range(n-k):
        print(end="* ")
    print()
print("triangle 2 reversed")
n = 6
for i in range(n, 0, -1):
    k = n - i
    for j in range(k):
        print(end=" ")
    for j in range(n-k):
        print(end="* ")
    print()
print("triangle 3")
n = 6
for i in range(n):
    k = n - i - 1
    for j in range(k):
        print(end="  ")
    for j in range(n-k):
        print(end="* ")
    print()
print("triangle 3 reversed")
n = 6
for i in range(n, 0, -1):
    k = n - i
    for j in range(k):
        print(end="  ")
    for j in range(n-k):
        print(end="* ")
    print()




 """


""" n = 7
for i in range(0,n,2):
    k = n - i - 1
    for j in range(k):
        print(end=" ")
    for j in range(n-k):
        print(end="* ")
    print() """
""" 
      * 
    * * * 
  * * * * * 
* * * * * * * 
"""

""" x = [3, 1, 2, 5, 6, 4]
x.sort() # ترتيب
print(x) # [1, 2, 3, 4, 5, 6]
x.reverse() # عكس
print(x) # [6, 5, 4, 3, 2, 1] """
""" x = [3, 1, 2, 5, 6, 4]
y = ["a", "b", "c", "d", "e", "f", "g"]
# x.remove(6)   
# x[:] = []
# print(x)

print(sorted(x,reverse=True))
print(x)
x.sort()
print(x)

# x.reverse()
# print(x)
 """
""" x = "how are you"
x1 = set(x)
x2 = list(x)
print(x1, type(x1))
print(x2, type(x2))
 """


# import math as m
# print(m.factorial(5))
# print(m.pi)
# print(m.exp(1))
# print(m.log(m.exp(1)))
# print(m.sin(60))
# print(m.tan(30))
# print(m.copysign(-2, 1))
# print(m.copysign(2, -1))
# print(m.ceil(10.5))
# print(m.floor(10.5))

""" x8 = complex(1,4)
print(x8)
x7=float(432)
print(x7) """

a = "faculty_of_science"
# print(a.replace("o", "k"))
# print(a.capitalize())
# print(a.count("o"))
# print(a.title())
# print(a.swapcase())
# print(a.upper())
# print(a.lower())
# print(a[-1])
# print(a[1])
# print(a[2:5])
# print(a[len(a)-1])
# print(a[len(a)-1:-1:-1])
# print(a[0:len(a):2])
# print(a[2:])
# print(a[:10])
# print(a[::2])
# print(a[::-2])
# print(a[::-1])
# print(a[2:5:2])
