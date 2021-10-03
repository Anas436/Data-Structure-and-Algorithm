
    # Job Sequencing Problem using Greedy Method in Python.
    # Name : Md. Anas Mondol
    # ID : 1935202011
    # Batch : 52nd-(A)
    # City University, Permanent Campus.

# This function represent Job Sequencing.
def JobSequencing(array, time):

    num = len(array) # This method works as find out the length of any other data format.

# This 2D array works accordingly sort all jobs decreasing order of profits.
# Also, a is empty time slots and b is deadlines.
    for a in range(num):
        for b in range(num-1-a): # Range(start-stop-end)
            if array[b][2] < array[b+1][2]: # Empty time solts < dealine.
                array[b], array[b+1] = array[b+1], array[b] # Storing jobs.

# This object follow has any free time.
    outcome = [False]*time

# This object store our outcomes.
    jobs = ['-1']*time

# Repeated this loops in all Jobs.
    for a in range(len(array)):

# This loops works as searching a free slots for jobs and it's
# works to start last possible solts.
        for b in range(min(time-1, array[a][1]-1) -1, -1):

# If (if condition) is false then this condion will found solts.
            if outcome[b] is False :
                outcome[b] = True
                jobs[b] = array[a][0]
                break

# Display the sequence.
    print(jobs)

# Driver Code also has inside a Jobs array.
array = [ ['a', 2, 100],
          ['b', 1, 19],
          ['c', 2, 27],
          ['d', 1, 25],
          ['e', 3, 15]]

print("Your Expected Jobs Sequence is : ")

# Function invoke now.
JobSequencing(array, 3)

