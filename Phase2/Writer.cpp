// Phase2.cpp : main project file.

//Imports
#include "stdafx.h"
#include <iostream> 
#include <string>
#include <fstream>

using namespace std;

class FileWriter { 
 public:
	string file_path; //stores file path
	void WriteFile(string); //WriteFile function
};

//WriteFile function
void FileWriter::WriteFile(string line) { 
	ofstream file(file_path); //open ifstream
	if (file.is_open()) {  //if file opened successfully
		file << line << '\n';
		file.close(); //close file
	} else { //if the file is not found
		cout << "Unable to open" << '\n';
	}
}

int main() {
	//new bank_accounts object
	FileWriter bank_accounts;
	//referring to the filepath of created object
	bank_accounts.file_path = "Transaction.txt";
	//call the WriteFile function on filepath given above
	bank_accounts.WriteFile("HELLO");
	//pause to read console output
	system("pause");
	return 0;
}