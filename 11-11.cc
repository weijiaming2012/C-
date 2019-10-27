#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class StringVar
{
	public:
		char *value;
		int maxLength;

	public:
		StringVar(int size);

		StringVar();

		StringVar(const char a[]);

		StringVar(const StringVar& stringObject);

		~StringVar();

		int length() const;

		void inputLine(istream& ins);

		friend ostream& operator <<(ostream& outs,const StringVar& theString);

};

void conversation(int maxNameSize);

int main()
{
	conversation(30);
	cout<<"End of demonstration.\n";

	return 0;
}

void conversation(int maxNameSize)
{
	StringVar yourName(maxNameSize),ourName("Borg");
	
	cout<<"what is your name?\n";
	yourName.inputLine(cin);
	cout<<"We are "<<ourName<<endl;
	cout<<"We will meet again "<<yourName<<endl;
}

StringVar::StringVar(int size):maxLength(size)
{
	value=new char[maxLength+1];
	value[0]='\0';
}

StringVar::StringVar():maxLength(100)
{
	value=new char[maxLength+1];
	value[0]='\0';
}

StringVar::StringVar(const char a[]):maxLength(strlen(a))
{
	value=new char[maxLength+1];
	strcpy(value,a);
}

StringVar::StringVar(const StringVar& stringObject):maxLength(stringObject.length())
{
	value=new char[maxLength+1];
	strcpy(value,stringObject.value);
}

StringVar::~StringVar()
{
	delete [] value;
}

int StringVar::length() const
{
	return strlen(value);
}

void StringVar::inputLine(istream& ins)
{
	ins.getline(value,maxLength+1);
}

ostream& operator <<(ostream& outs,const StringVar& theString)
{
	outs<<theString.value;
	return outs;
}
