#include <iostream>
using namespace std;

int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
    if(input[0]=='\0')
    {
        output[0]="";
        return 1;
    }
    int num=input[0]-48;
    char ch1=num+'a'-1;    
    // declaring a temp string
    string smallOP1[500], smallOP2[500];
    // recursive call on input+1
    int s1 = getCodes(input.substr(1), smallOP1);
    //now we combine ch1 with reuslts of smallOP1
    
    int k=0;
    for(int i=0; i<s1; i++)
    {
        output[k] = ch1 + smallOP1[i];
        k++;
    }
    char ch2='\0';
    int s2=0;
    if(input[1]!='\0')
    {
        int num2 = num * 10 + input[1] - 48;
        if(num2 >= 10 && num2<=26)
        {
            ch2 = num2 + 'a' - 1;
            s2 = getCodes(input.substr(2), smallOP2);
        }
    }
    // combining ch2 with smallop2
    for(int i=0; i<s2; i++)
    {
        output[k] = ch2 + smallOP2[i];
        k++;
    }
    return k;
}


int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}

