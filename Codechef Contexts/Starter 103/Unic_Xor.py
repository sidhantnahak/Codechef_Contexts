def get_value():
    t = int(input())
    for _ in range(t):
        p, q = map(int, input().split())
        inputStr = input().strip()
        out_val = [0] * q
        final_val = [0] * q

        for i in range(p):
            get_index = i % q
            if inputStr[i] == '0':
                final_val[get_index] += 1
            else:
                out_val[get_index] += 1

        res1 = 0
        res2 = 0

        for i in range(q):
            if out_val[i] % 2 == 1:
                res1 += 1 + (out_val[i] + 1) // 2
            else:
                res1 += out_val[i] // 2

        for i in range(q):
            if out_val[i] == 0:
                res2 = float("inf")
                break
            else:
                res2 += final_val[i]

        print(min(res1, res2))

get_value()
