
# Q5: Add 'ing' or 'ly' to string
s = "play"
if len(s) >= 3:
    if s.endswith("ing"):
        s = s + "ly"
    else:
        s = s + "ing"
print(s)

s = "playing"
if len(s) >= 3:
    if s.endswith("ing"):
        s = s + "ly"
    else:
        s = s + "ing"
print(s)
