def rotate(string,x): 
  
    # slice string in two parts for left and right 
    Lfirst = string[0 : x] 
    Lsecond = string[x :] 
    Rfirst = string[0 : len(string)-x] 
    Rsecond = string[len(string)-x : ] 
  
    # concatenate both parts together 
    print("Left Rotation : ", (Lsecond + Lfirst))
    print("Right Rotation : ", (Rsecond + Rfirst)) 
  
# Driver program 
if __name__ == "__main__": 
    string = 'WelcomeToPython'
    x=2
    rotate(string,x) 
