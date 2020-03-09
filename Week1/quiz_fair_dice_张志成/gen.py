ans = [[], [], [], [], [], [], [], [], [], [], [], [], []]
for i in range(1,7):
    for j in range(1, 7):
        ans[i + j].append("p%d * q%d" % (i,j))
for i in range(1, 12):
    print(" + ".join(ans[i]) + " == 1/11 && ")