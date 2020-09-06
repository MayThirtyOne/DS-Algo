import string

def solve():
    s=list(str(input()))
    p=str(input())
    di=dict(zip(string.ascii_letters,[ord(c)%32 for c in string.ascii_letters]))
    for letter in p:
        s.remove(letter)
    s.sort()
    prefix1=""
    suffix1=""
    prefix2=""
    suffix2=""
    for letter in s:
        if di[letter]<=di[p[0]]:
            prefix1=prefix1+letter
        if di[letter]>di[p[0]]:
            suffix1=suffix1+letter
        if di[letter]<di[p[0]]:
            prefix2=prefix2+letter
        if di[letter]>=di[p[0]]:
            suffix2=suffix2+letter
    print(min(prefix1+p+suffix1,prefix2+p+suffix2))


def main():
    test_cases=int(input())
    for test_units in range(test_cases):
        solve()

if __name__ == "__main__":
    main()
