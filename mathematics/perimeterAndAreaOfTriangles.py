import math;
a = eval(input('a: '))
b = eval(input('b: '))
c = eval(input('c: '))

perimeter = a+b+c
w=perimeter/2

area = math.sqrt(w*(w-a)*(w-b)*(w-c))

print( 'Perimeter is, ' ,perimeter,'.\nArea is, ', area)
