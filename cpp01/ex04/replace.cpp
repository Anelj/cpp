#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void	replace(char *file, string s, string s1)
{
	string		line;
	ifstream	myfile(file);
	ofstream	tofile(((string)file).append(".replace").c_str(),
		ios::out | ios::trunc);

	if (myfile.is_open() && tofile.is_open())
	{
		while (getline(myfile,line))
		{
			for (size_t f = line.find(s); f != string::npos; f = line.find(s))
			{
				tofile << line.substr(0, f) << s1;
				line = line.substr(f + s.length());
			}
			tofile << line << endl;
		}
		myfile.close();
		tofile.close();
	}
	else
		cout << "Unable to open file";
}

