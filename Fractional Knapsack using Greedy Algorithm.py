
"""
    Fractional Knapsack using Greedy Algorithm to Python.
    Name : Md. Anas Mondol
    ID : 1935202011
    Batch : 52nd-(A)
    Program : B.Sc In CSE(Day)
    City University, Permanent Campus.
"""

def knapSack(value, weight, capacity) :

    index = list(range(len(value)))

    ratio = [ v / w for v, w in zip(value, weight)]

    index.sort(key=lambda i: ratio[i], reverse=True)

    max_value = 0
    fractions = [0]*len(value)
    for i in index :

        if weight[i] <= capacity :

            fractions[i] = 1
            max_value += value[i]
            capacity -= weight[i]

        else :

            fractions[i] = capacity / weight[i]
            max_value += value[i] * capacity / weight[i]
            break

    return max_value, fractions

number = float(input('Enter your expected number of items : '))
value = input('Enter you values the {} item(s) in order : '.format(number)).split()

value = [float(v) for v in value]

weight = input('Enter your expected positive weight of the {} item(s) in order : '.format(number)).split()
weight = [float(w) for w in weight]

capacity = float(input('Enter your expected maximum weight : '))

max_value, fractions = knapSack(value, weight, capacity)
print('The maximum value of items that can be carried : ', max_value)
print('The fraction in which the items should be taken : ', fractions)






























