def digits(n):
    s = 0
    while n > 0:
        s = s + (n % 10)
        n = n / 10
    return s


print digits(pow(2,1000))
