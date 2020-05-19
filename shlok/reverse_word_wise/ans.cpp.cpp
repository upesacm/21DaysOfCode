void reverse(char begin[], char* end) 
{
    char temp; 
    while (begin < end) { 
        temp = *begin; 
        *begin++ = *end; 
        *end-- = temp; 
    } 
} 
void reverseStringWordWise(char s[]) {
    // Write your code here

  
// Function to reverse words*/ 
 
{ 
    char* word_begin = s; 
  
    // Word boundary 
    char* temp = s; 
  
    // Reversing individual words as 
    // explained in the first step 
    while (*temp) { 
        temp++; 
        if (*temp == '\0') { 
            reverse(word_begin, temp - 1); 
        } 
        else if (*temp == ' ') { 
            reverse(word_begin, temp - 1); 
            word_begin = temp + 1; 
        } 
    } 
  
    // Reverse the entire string 
    reverse(s, temp - 1); 
} 
  
    
}
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}

