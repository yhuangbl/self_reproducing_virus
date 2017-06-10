#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	string input = argv[1]; // virus2.cpp or virus3.cpp

	fstream input_file;
	input_file.open(input);
	fstream output_file;
	output_file.open("result.txt",ofstream::out|ofstream::trunc);

	string line;
	bool flag = false;
	if (input=="virus2.cpp")
	{
		cout << "input file: virus2.cpp" << endl;
		while (getline(input_file, line))
		{
			if (flag == false && line[0] =='i' && line[1] == 'n' && line[2] == 't' && line[3] == ' ' && line[4]=='m' && line[5] =='a'&&line[6]=='i'&&line[7]=='n')
			{
				cout << "turn flag!" << endl;
				flag = true;
			}

			if (flag)
			{
				int size = line.size();
				for (int i = 0; i < size; i++)
				{
					char c = line[i];
					string c_string;
					if (c=='\\') c_string = "\\\\";
					else if (c=='\'') c_string ="\\\'";
					else if (c=='\t') c_string ="\\t";
					else c_string = c;
					string ch = "'";
					ch +=c_string;
					ch +="',";
					output_file << ch << endl;
					//			output_file << ch <<endl;
				}
				string new_line = "\'\\n\',";
				output_file << new_line << endl;
			}
		}
	}
	else if (input=="virus3.cpp")
	{
		cout << "input file: virus3.cpp" << endl;
		while (getline(input_file, line))
		{
			if (line.find("return 0;")!=std::string::npos)
					cout << "return 0 detected" << endl;

			string signature="if (argv[1])";
			size_t found = line.find(signature);
			if (flag == false && found!=string::npos)
			{
				cout << "turn flag!" << endl;
				flag = true;
			}

			if (flag)
			{
				int size = line.size();
				for (int i = 0; i < size; i++)
				{
					char c = line[i];
					string c_string;
					if (c=='\\') c_string = "\\\\";
					else if (c=='\'') c_string ="\\\'";
					else if (c=='\t') c_string ="\\t";
					else c_string = c;
					string ch = "'";
					ch +=c_string;
					ch +="',";
					output_file << ch << endl;
					cout << ch <<endl;
				}
				string new_line = "\'\\n\',";
				output_file << new_line << endl;
			}
		}
	}

	input_file.close();
	output_file.close();

	return 0;
}
