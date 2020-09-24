file1 = open("filename")
count=0
sum1=0 
for line in file1:
	myline = line.strip().split(" ")
	if myline[-1]>5000:
		count+=1
		sum1+=myline[-1]
file2 = open("bytes_"+filename, "w")
file1.write(str(count)+"\n")
file1.write(str(sum1))
