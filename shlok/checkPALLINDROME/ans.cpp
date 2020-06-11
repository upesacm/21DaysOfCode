
    // Write your code here
#include<string.h>
bool help(char input[],int s,int e){
    if(s==e){
        return true;
    }
    if(input[s]!=input[e]){
        return false;
    }
    if(s<e+1){
    return help(input,s+1,e-1);
    }
    return true;
    
    
}



bool checkPalindrome(char input[]) {
    // Write your code here
    int l=strlen(input);
    if(l==0||l==1){
        return true;
    }

    return help(input,0,l-1);
  
}




