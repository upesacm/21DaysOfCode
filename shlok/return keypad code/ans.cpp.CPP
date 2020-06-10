#include <string>
#include<iostream>
using namespace std;

int helper(int num, string output[], string options[]){
    
    if (num==0){
        output[0]="";
        return 1;
    }
    int smallnum= num/10;
    int lastnum=num%10;
    string smalloutput[1000];
    int scount= helper (smallnum,smalloutput,options);
   	string op=options[lastnum];
    
    int k=0;
    for (int i=0;i<op.size();i++){
        for (int j=0;j<scount;j++){
            output[k]=smalloutput[j]+op[i];
            k++;
        }
    }
    return k;
    
    
}

int keypad(int num, string output[]){
   
    string options[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    return helper(num,output,options);
    
    
    
}
int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

