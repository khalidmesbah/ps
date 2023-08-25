n = 14
for i in range(0, n, 2):
    print(" "*(n-i), end="")
    for j in range(1, i):
        if(int(i/2+1) - j) < 1:
            print(str(j - int(i/2+1) + 2)+" ", end="")
        else:
            print(str(int(i/2+1) - j)+" ", end="")
    print()
