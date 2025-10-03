
# Q2: Largest number from a list
numbers = [1, 9, 3, 7]
largest = numbers[0]
for n in numbers:
    if n > largest:
        largest = n
print("Largest:", largest)
