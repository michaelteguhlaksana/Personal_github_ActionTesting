def rep(seq):
    res = 0
    x = 0
    curr = seq[0]

    for i in seq:
        if i != curr:
            curr = i
            res = max(res, x)
            x = 0
        x += 1

    res = max(res, x)
    return res

if __name__ == '__main__':
    sequence = raw_input()
    print(rep(sequence))
