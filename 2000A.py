t = int(input())
while t !=0 :
    s = input()
    n = len(s)
    if n>2 :
        s1 = s[2:n]
        x = int(s1)
        if s[0] == '1' and s[1] == "0" and x>2 :
            print("YES")
        else :
            print("NO")
    else :
       print("NO")

    t-=1