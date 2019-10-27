#include<fstream>
#include<iostream>
#include<cstdlib>
#include<string>

int main()
{
	using namespace std;

	char fileName[16];

	cout<<"Opening file for appending.\n";
	cin>>fileName;
	ofstream fout;
	fout.open(fileName,ios::app);
	if(fout.fail())
	{
		cout<<"Input file opening failed.\n";
		exit(1);
	}

	fout<<"5 6.\n"
		<<"7 8.\n";

	fout.close();
	cout<<"End of appending to file.\n";

	return 0;
}
