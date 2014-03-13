#include <iostream>
#include <fstream>
#include "cmdline_parser.h"
#include "Records.h"

void clear(void) {
		std::cout<<std::string(100,'\n');}

int main(int argc, char* argv[])
{
	using namespace std;
	using namespace flxjam001;

	cmdline_parser parser;

	if(!parser.process_cmdline(argc, argv))
	{
		std::cerr << "Couldn't process command line arguments" << std::endl;
		return 1;
	}

	if(parser.should_print_help())
		{ parser.print_help(std::cout);	}

	string file_name = parser.get_filename();
	cout << "Using file located at "+ file_name << endl;
	cout << "-----------------------------------------" << endl;

	ifstream file(file_name.c_str());

	for(;;){ // process options till user enters "q"

		cout<< "0: Add student\n" << "1: Delete given student\n" << "2: Read database\n" << "3: Save database\n";
		cout<< "4: Display given student data\n" << "5: Grade student\n" << "6: Display all student data\n" << "7: Find winning Student\n";
		cout<< "q: Quit\n\n";
		cout<< "Enter a number (or q to quit) and press return: ";

		char choice;  //stores the user choice as char
		cin >> choice;  //
		cout << "\n";

		Database data;

			if (choice=='q'){
				break;
			}

			else {
				if(choice == '0'){
					data.addStudent();
				}
				else if(choice == '1'){
					data.deleteStudent();
				}
				else if(choice == '2'){
					data.readDatabase();
				}
				else if(choice == '3'){
					data.saveDatabase();
				}
				else if(choice == '4'){
					data.displayStudent();
				}
				else if(choice == '5'){
					data.gradeStudent();
				}
				else if(choice == '6'){
					data.displayDatabase();
				}
				else if(choice == '7'){
					data.winningStudent();
				}
				else{
					cout<< "Pick the available choices \n";
				}
			}
	
	}
	return 0;
}



































