#include<bits/stdc++.h>

using namespace std;

typedef map<string, string> dict_ss;
typedef map<string, int> dict_si;
typedef vector<string> vect_s;

vect_s solutions;		

class tags
{
 public:
 	dict_ss attr_arr;
 	
 	tag();
 	
	void clean_and_assign(string temp)
	{
	 if(temp.find("/")+1)
	 {
		
	 }
	else
	 {
	 	int key_lb, thresold_key=0, key_len, val_lb, thresold_val=0, val_len;
	 	while(true)
	 	{
             key_lb = temp.find_first_of(' ', thresold_key)+1;
             key_len = temp.find_first_of('=', key_lb) - key_lb - 1;
             val_lb = temp.find_first_of('"', thresold_val)+1;
             val_len = temp.find_first_of('"', val_lb)- val_lb;
             
             attr_arr[temp.substr(key_lb,key_len)] = temp.substr(val_lb, val_len);
			              
             thresold_key =  key_lb + key_len + val_len + 5;
             thresold_val =  val_lb + val_len + key_len + 3;
             
             if(temp[thresold_key]=='>')break;
	    }
	 }
    }
    
    void solve_query(string data)
    {
    	if(attr_arr.count(data))
    	solutions.push_back(attr_arr[data]);
    	else
		solutions.push_back("Not Found!");
	}
};

int main()
{
	int n,q,i=0; cin >> n >> q;
	string temp;
	tags obj[20]; int current_tag=0;
	
	dict_si relate;
	
	while(n--)
	{
		while(cin){
		 getline(cin, temp); 
		 if(temp.length())break;} 
         
         if(temp[1]!='/')
         {
//  	      cout << "*" << endl;
		  int ub;
		  ub = temp.find_first_of(' ')-1;
		  relate[temp.substr(1,ub)] = i;
 		  obj[i].clean_and_assign(temp);
 		  i++;
         }
    }
    while(q--)
	    {
        while(cin){
         getline(cin, temp);
 		 if(temp.length())break;}
		  	
         int ind = temp.find("~");
         
         if(temp.find('.')+1)
         {
         	int lb = temp.find_last_of('.')+1;
	        obj[relate[temp.substr(lb, ind-lb)]].solve_query(temp.substr(ind+1));
	     }

		 else
		    obj[relate[temp.substr(0,ind)]].solve_query(temp.substr(ind+1));
        }	
	cout << "\n\n";
		
	vect_s::iterator itr;
	for(itr = solutions.begin(); itr<solutions.end(); itr++)
	cout << *itr << endl; 	      
	
	return 0;
}
