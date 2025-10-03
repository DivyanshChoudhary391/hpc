
# Q3: Smallest number from a list
numbers = [5, 2, 8, 1]
smallest = numbers[0]
for n in numbers:
    if n < smallest:
        smallest = n
print("Smallest:", smallest)
