
# Q6: Student division based on marks
marks = [60, 70, 80, 90, 100]
percentage = sum(marks) / len(marks)

if percentage >= 60:
    print("First Division")
elif percentage >= 50:
    print("Second Division")
elif percentage >= 40:
    print("Third Division")
else:
    print("Fail")
