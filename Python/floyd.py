while True:
    try:
        height = int(input("Height: "))
        if (height >= 1):
            break
    except:
        print("", end="")

n = 1
j = height
i = height - 1
while n<(j+1) :
    print(" "*i, end = "")
    print("#"*n)
    i-=1
    n+=1
