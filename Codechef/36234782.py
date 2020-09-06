 
 
#------------------------PYPY3_Template_Start--------------------------#
import os
import sys
import time
import math
from io import BytesIO, IOBase

def localInput():
    sys.stdin = open('inputf.in', 'r')
    sys.stdout = open('outputf.in', 'w')
    sys.stderr = open('error.txt', 'w')

def print_to_stderr(*a):
    print(*a, file = sys.stderr)

BUFSIZE = 8192

class FastIO(IOBase):
    newlines = 0
    def __init__(self, file):
        self._fd = file.fileno()
        self.buffer = BytesIO()
        self.writable = "x" in file.mode or "r" not in file.mode
        self.write = self.buffer.write if self.writable else None
    def read(self):
        while True:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            if not b:
                break
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines = 0
        return self.buffer.read()
    def readline(self):
        while self.newlines == 0:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            self.newlines = b.count(b"\n") + (not b)
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines -= 1
        return self.buffer.readline()
    def flush(self):
        if self.writable:
            os.write(self._fd, self.buffer.getvalue())
            self.buffer.truncate(0), self.buffer.seek(0)

class IOWrapper(IOBase):
    def __init__(self, file):
        self.buffer = FastIO(file)
        self.flush = self.buffer.flush
        self.writable = self.buffer.writable
        self.write = lambda s: self.buffer.write(s.encode("ascii"))
        self.read = lambda: self.buffer.read().decode("ascii")
        self.readline = lambda: self.buffer.readline().decode("ascii")

sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)

input = lambda: sys.stdin.readline().rstrip("\r\n")

def value():return tuple(map(int,input().split()))
def array():return [int(i) for i in input().split()]
def Int():return int(input())
def Str():return input()
def arrayS():return [i for i in input().split()]


'''
Useful List Methods:

append()        Adds an element at the end of the list
clear()         Removes all the elements from the list
copy()          Returns a copy of the list
count()         Returns the number of elements with the specified value
extend()        Add the elements of a list (or any iterable), to the end of the current list
index()         Returns the index of the first element with the specified value
insert()        Adds an element at the specified position
pop()           Removes the element at the specified position
remove()        Removes the first item with the specified value
reverse()       Reverses the order of the list
sort()          Sorts the list

Useful Dictionary Methods:

clear()         Removes all the elements from the dictionary
copy()          Returns a copy of the dictionary
fromkeys()      Returns a dictionary with the specified keys and value
get()           Returns the value of the specified key
items()         Returns a list containing a tuple for each key value pair
keys()          Returns a list containing the dictionary's keys
pop()           Removes the element with the specified key
popitem()       Removes the last inserted key-value pair
setdefault()    Returns the value of the specified key. If the key does not exist: insert the key, with the specified value
update()        Updates the dictionary with the specified key-value pairs
values()        Returns a list of all the values in the dictionary

Input methods for faster access:

Single line input for multiple variables:  -->>  n,k=map(int, input().split())
Single line array imput:                   -->>  arr = [int(a) for a in input().strip().split(' ')]
Sorting in ascending order:                -->> arr.sort()
Sorting in descending order:               -->> arr.sort(reverse=True)

'''
#-------------------------PYPY3_Template_End---------------------------#

# Uncomment this line to read input from local file.
# Comment this line before making final submission.
#localInput()




def solve():
    h,p=map(int, input().split())

    while(True):
        if p==0:
            break
        else:
            h=h-p
            p=math.floor(p/2)
    if h>0:
        print("0")
    else:
        print("1")
    




def main():
    test_cases=int(input())
    for test_units in range(test_cases):
        solve()

if __name__ == "__main__":
    execution_time_start=time.clock()
    main()
    execution_time_stop=time.clock()
    print_to_stderr("Total Time Taken: %f Seconds!" %(execution_time_stop - execution_time_start))



