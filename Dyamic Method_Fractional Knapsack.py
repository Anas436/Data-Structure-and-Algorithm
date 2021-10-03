"""
    Fractional Knapsack using Dynamic Programming Algorithm to Python.
    Name : Md. Anas Mondol
    ID : 1935202011
    Batch : 52nd-(A)
    Program : B.Sc In CSE(Day)
    City University, Permanent Campus.
"""

def knapsack (value, weight, capacity, number) :

    table = [[ 0 for t in range (capacity + 1)] for t in range(number +1)]

    for i in range(number + 1):

        for j in range (capacity +1):

             if i == 0 or j == 0 :

                 table [i][j] = 0

             elif weight[i-1] <= j :

                 table [i][j] = max(value[i-1]+ table[i-1][j-weight[i-1]], table[i-1][j])

             else :
                table[i][j] = table[i-1][j]


    return table[number][capacity]

# Driver Code.
value = [1, 2, 5, 6]
weight = [2, 3, 4, 5]
capacity = 8
number = len(value)

result = knapsack(value, weight, capacity, number)

print('Total profit : ', result)










