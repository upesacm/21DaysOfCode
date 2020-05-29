#include<iostream>
using namespace std;
class person{
	public:
	int age;
	person(int initialAge);
	void amIold();
	void yearPasses();

};
person::person(int initialAge)
{
	if(initialAge<0)
	{
		cout<<"the age is not valid ,setting age to 0"<<endl;
		this->age=0;
		
	}
	else
	{
		this->age=initialAge;
	}
}
void person::amIold(){
	if(age>=18)
	{
		cout<<"you are old."<<endl;
	}
	else if(age>=13)
	{
		cout<<"you are teenager."<<endl;
	}
	else
	{
		cout<<"you are young."<<endl;
	}
}
void person::yearPasses()
{
	this->age++;
	
}
int main()
{
	int t;
	int age;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>age;
		person p(age);
		p.amIold();
		for(int j=0;j<3;j++)
		{
			p.yearPasses();
		}
		p.amIold();
		cout<<"\n";
	}
	return 0;
}
	

