def missing_num(maxi, seq):
    tot = sum(seq)
    for i in range(1, maxi+1):
        tot -= i

    return -1*tot


if __name__ == "__main__":
    maximum = input()
    sequence = []
    sequence = map(int, raw_input().split())
    print(missing_num(maximum, sequence))
