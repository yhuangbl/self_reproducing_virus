#include <iostream>
#include <fstream>
using namespace std;

int main (int argc, char** argv) {
	string victim = argv[1]; // victim.cpp

	fstream target_file;
	// open the victim file and clear all contents in the file
	target_file.open(victim, std::ofstream::out | std::ofstream::trunc);

	fstream helper_file;
	helper_file.open("helper.txt");

	string str;
	while(getline(helper_file, str))
		target_file << str << endl;

	target_file.close();
	helper_file.close();

	return 0;
}
