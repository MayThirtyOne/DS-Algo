 
 
#------------------------PYPY3_Template_Start--------------------------#
import os
import sys
import time
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


'''
#-------------------------PYPY3_Template_End---------------------------#

# Uncomment this line to read input from local file.
# Comment this line before making final submission.
localInput()


def checkYear(year): 
	if (year % 4) == 0: 
		if (year % 100) == 0: 
			if (year % 400) == 0: 
				return True
			else: 
				return False
		else: 
			 return True
	else: 
		return False

def daysinmonth(a,year):
	if a == 1:
		return 31
	if a == 2 and checkYear(year):
		return 29
	if a == 2 and not checkYear(year):
		return 28
	if a == 3:
		return 31
	if a == 4:
		return 30
	if a == 5:
		return 31
	if a == 6:
		return 30
	if a == 7:
		return 31
	if a == 8:
		return 31
	if a == 9:
		return 30
	if a == 10:
		return 31
	if a == 11:
		return 30
	if a == 12:
		return 31

def daysinyear(year):
	if(checkYear(year)):
		return 366
	else:
		return 365


def solve():
	n=int(input())
	days=[]
	months=[]
	years=[]
	d={}
	dates11=[]
	daycount=0
	while n:
		n=n-1
		dateinput=str(input())
		dates11.append(dateinput)
		day,month,year=map(int, dateinput.split('/'))
		for i in range(1,year):
			daycount+=daysinyear(i)
		for i in range(1,month):
			daycount+=daysinmonth(i,year)
		daycount+=day
		if daycount not in d:
			d[daycount]=''
		d[daycount]=dateinput
	#for item in sorted (d.keys(),reverse=True):  
		#print(d[item])

	dates11.sort()
	for items in dates11:
		print(items)

		

	
	
	




def main():
	test_cases=1
	for test_units in range(test_cases):
		solve()

if __name__ == "__main__":
	execution_time_start=time.clock()
	main()
	execution_time_stop=time.clock()
	print_to_stderr("Total Time Taken: %f Seconds!" %(execution_time_stop - execution_time_start))



 