def ArrByParts(arr, n, k):  
    for i in range(0, k):  
        y = arr[0] 
        for j in range(0, n-1): 
            arr[j] = arr[j + 1] 
          
        arr[n-1] = y
          
  
# main 
arr = [12, 10, 5, 6, 52, 36] 
n = len(arr) 
position = 2

ArrByParts(arr, n, position) 
  
for i in range(0, n):  
    print(arr[i], end = ' ') 
  
