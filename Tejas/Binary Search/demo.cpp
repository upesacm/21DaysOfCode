#include <stdio.h> 
  

int sum(int,int,int);
  
int main (void) 
{ 
    printf("%d", sum(10, 5,6)); 
    return 0; 
} 
int sum (int b, int c, int a) 
{ 
    return (a+b+c); 
} 
