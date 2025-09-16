n = 5  # Number of rows (change as needed)

for i in range(1, n + 1):
    # Left wing
    for j in range(1, i + 1):
        if j == 1 or j == i:
            print("*", end="")
        else:
            print(" ", end="")
    # Spaces between wings
    print(" " * (2 * (n - i)), end="")
    # Right wing
    for j in range(1, i + 1):
        if j == 1 or j == i:
            print("*", end="")
        else:
            print(" ", end="")
    print()

for i in range(n, 0, -1):
    # Left wing
    for j in range(1, i + 1):
        if j == 1 or j == i:
            print("*", end="")
        else:
            print(" ", end="")
    # Spaces between wings
    print(" " * (2 * (n - i)), end="")
    # Right wing
    for j in range(1, i + 1):
        if j == 1 or j == i:
            print("*", end="")
        else:
            print(" ", end="")
    print()