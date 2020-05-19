
void trimSpaces(char input[]) {
       
    int j=0;
for(int i=0;input[i]!='\0';i++){
    if(input[i]!=' ')
        input[j++]=input[i];
}

input[j]='\0';
// }
  /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Don't print or return the output.
   *  Change in the given input string itself.
   *  Taking input and printing output is handled automatically.
   */

}
#include <iostream>
using namespace std;
#include "Solution.h"

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}



