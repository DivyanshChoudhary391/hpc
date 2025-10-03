
# Q7: Largest among three numbers
a, b, c = 10, 25, 15
if a >= b and a >= c:
    largest = a
elif b >= a and b >= c:
    largest = b
else:
    largest = c
print("Largest:", largest)
