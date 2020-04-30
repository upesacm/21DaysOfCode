#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
char str[1000000];
cin>>str; 
  
     
char *token = strtok(str, ","); 
  
   
while (token != NULL) 
{ 
        cout<<token<<endl; 
        token = strtok(NULL, ","); 
} 
  
    return 0; 
} 