#include <iostream>
#include "Records.h"
#include <string>



namespace flxjam001 {

	using namespace std;

	StudentRecord::StudentRecord(string newName,string newSurname,string newStudentNumber,string newClassRecord){
		name = newName; surname = newSurname, studentNumber = newStudentNumber; classRecord = newClassRecord;
	}

	Database::Database (){

	}

	void Database::addStudent(){
		cout<< "addStudent() has been called\n\n";
	}

	void Database::deleteStudent(){
		cout<< "deleteStudent() has been called.\n\n";
	}
	void Database::readDatabase(){
		cout<< "readDatabase() has been called.\n\n";
	}
	void Database::saveDatabase(){
		cout<< "saveDatabse() has been called.\n\n";
	}
	void Database::displayStudent(){
		cout<< "displayStudent() has been called\n\n";
	}
	void Database::gradeStudent(){
		cout<< "gradeStudent() has been called.\n\n";
	}
	void Database::displayDatabase(){
		cout<< "displayDatabse() has been called.\n\n";
	}
	
	void Database::winningStudent(){
		cout<< "winningStudent() has been called.\n\n";
	}
};


