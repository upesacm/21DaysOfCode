#include <stdio.h>
#include<iostream>
#include<string.h>

int main()
{
    char line[80];
    char sub[15];
    cout<<"Enter line of text :";
    gets(sub);
    cout<<"Enter substring to find :";
    gets(sub);
    int len=strlen(line);
    int i,j,k,spos,lpos;
    for(i=0;i<len;)
    {
        j=i;
        if(line[j]==sub[0])
        {
            k=0;
            while(line[j++]==sub[k++]);
            if(sub[k-1]=='\0')
            {
                spos=i;
                break;
            }
            else
             i=j-1;
        }
        else
         i++;
    }
    int len2=strlen(sub);
    for (i=len-1;i>=0;)
    {
        j=i;
        if(line[j]==sub[len2-1])
        {
            k=len2-1;
            while(line[j--]==sub[k--]);
            if(k<0)
            {
                lpos=j+2;
                break;
            }
            else
             i=j+1;
        }
        else
         i--;
    }
    cout<<"First occurance of"<<sub<<"is at postion"<<spos+1<<endl;
    cout<<"First occurance of"<<sub<<"is at postion"<<lpos+1<<endl;
    return 0;
}
