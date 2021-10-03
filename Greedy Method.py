
    # Job Sequencing Problem using Greedy Method in Python.
    # Name : Md. Anas Mondol
    # ID : 1935202011
    # Batch : 52nd-(A)
    # City University, Permanent Campus.

# This function represent Job Sequencing.
def JobSquence(array, time):

	num = len(array) # This method works as find out the length of any other data format.

# This 2D array works accordingly sort all jobs decreasing order of profits.
# Also, i is empty time slots and j is deadlines.
	for i in range(num):
		for j in range(num - 1 - i): # Range(start-stop-end)
			if array[j][2] < array[j + 1][2]: # Storing jobs.
				array[j], array[j + 1] = array[j + 1], array[j] # Storing jobs.

	# This object follow has any free time.
	result = [False] * time

	# To store result (Sequence of jobs)
	job = ['-1'] * time

	# Repeated through all given jobs.
	for i in range(len(array)):

# This loops works as searching a free slots for jobs and it's
# works to start last possible solts.
		for j in range(min(time - 1, array[i][1] - 1), -1, -1):

# If (if condition) is false then this condion will found solts.
			if result[j] is False:
				result[j] = True
				job[j] = array[i][0]
				break

	# Display the sequence.
	print(job)

# Driver Code also has inside a Jobs array.
array = [ ['J1', 2, 20],
		  ['J2', 2, 15],
		  ['J3', 1, 10],
		  ['J4', 3, 5],
		  ['J5', 3, 1]
]

print("Your Expected Jobs Sequence is : ")

# Function invoke.
JobSquence(array, 3)

