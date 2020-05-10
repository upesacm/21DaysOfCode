#Transpose of a matrix

A=[[1,2],
   [4,5],
   [3,7]]

R=[[0,0,0],
   [0,0,0]]
#through rows
for i in range(len(A)):
    #iterate through columns
    for j in range(len(A[0])):
        R[j][i]=A[i][j]
for r in R:
    print(r)
