#include<bits/stdc++.h>
using namespace std;
int main(){	
	long long int k;
	cin>>k;
	string str;
	cin>>str;
	int l=str.length();
	int n=l;
	n--;
	int r=k;
	k=k%n;
	string arr(str);
	string st(str);
	int j=0;
	int f=0;
	while(k--){  
	      for(int i=0;i<l;i+=2){
            arr[(i/2)]=str[i];
		    if((n-(i/2))!=(i/2)){
		        arr[n-(i/2)]=str[i+1];
	        }
	      }
	      str=arr;
	      j++;
	      if(str==st){ 
		    f=1;
		    break;
	      }
	}
	if(f==0){
	   cout<<str<<endl;
    }
    else{
        k=r%j;
        while(k--){  
	        for(int i=0;i<l;i+=2){
		       arr[(i/2)]=str[i];
		       if((n-(i/2))!=(i/2)){
		            arr[n-(i/2)]=str[i+1];
	           }
               str=arr;
	        }
	        cout<<str<<endl;
	    }
    }
	return 0;
}
