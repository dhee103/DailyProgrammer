from sys import argv

for i in range(0, len(argv[1]) + 1):
    if (argv[1][i-1] != argv[2][i-1]):
        print(argv[2][:i] + argv[1][i:])
