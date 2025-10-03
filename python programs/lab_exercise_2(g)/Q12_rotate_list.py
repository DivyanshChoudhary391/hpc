
# Q12: Rotate list to the right by k steps
lst = [1, 2, 3, 4, 5]
k = 2
k = k % len(lst)
rotated = lst[-k:] + lst[:-k]
print(rotated)
