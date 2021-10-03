
    # Job Sequencing with Deadlines using Greedy Method in Python.
    # Name : Md. Anas Mondol
    # ID : 1935202011
    # Batch : 52nd-(A)
    # City University, Permanent Campus.

# This function represent Job Sequencing.
def JobSquence(array, time):

	num = len(array) # Find out the length of any other data format.


	 for i in range (num):
		 for j in range(num- i- 1);

		 	if araay[j], array[j+1] > araay[j+2], array[j]
			 array
# Searching a free slots for jobs
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

