#include<iostream>
#include<string>
#include<vector>

using namespace std;

string likes(const vector<string> &names)
{
  switch(names.size()){
    case 0: return "no one likes this";
    case 1: return names[0] + " likes this";
    case 2: return names[0] + " and " + names[1] + " like this";
    case 3: return names[0] + ", " + names[1] + " and " + names[2] + " like this";
    default: return names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
  }
}

int main()
{
	int n;
	cout<<"How many people like this: ";
	cin>>n;

	vector<string> names(n);
	if(n>0)
	{
		cout<<"Enter the names of people who like this: ";
	}
	for(int i=0; i<n; i++)
	{
		cin>>names[i];

	}
	cout<<likes(names)<<endl;
	return 0;

}