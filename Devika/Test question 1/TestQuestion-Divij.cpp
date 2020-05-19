#include<iostream>
using namespace std;

bool Vowels(char ch){
    if((ch != 'A' && ch != 'a') && (ch != 'E' && ch != 'e') && (ch != 'I' && ch != 'i') && (ch != 'O' && ch != 'o') && (ch != 'u' && ch != 'U') && (ch != 'Y' && ch != 'y')) 
		return true;
    else
		return false;
}

int main(){

	int t;
	cin>>t;
	while(t--)
	{
    string str,temp;
    cin >> str;
    int length = str.size();

    for(int i = 0; i < length; i++){

        if(Vowels(str[i]))
		{
            temp += '.';

			if(str[i] >= 65 && str[i] <= 90)
                temp+=(str[i] + 32);

            else
				temp+=str[i];
        }
    }
    cout << temp << endl;
}
    return 0;
}
