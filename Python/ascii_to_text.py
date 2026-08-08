asc = input("Enter ASCII values separated by spaces: ")
ascii_values = asc.split()

text = ''.join(chr(int(value)) for value in ascii_values)
print("Converted text:", text)