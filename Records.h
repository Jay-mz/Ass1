#ifndef _Records_H
#define _Records_H

#include <string>
#include "counter.h"


using namespace std;

namespace flxjam001{
	
	class StudentRecord: public sjp::counter<StudentRecord> {
		public:
			StudentRecord(string name, string surname,string studentNo,string classRecord);
		private:
			string name, surname, studentNumber, classRecord;
	};

	class Database{
		public:
			Database();
			void addStudent();
			void deleteStudent();
			void readDatabase();
			void saveDatabase();
			void displayStudent();
			void gradeStudent();
			void displayDatabase();
			void winningStudent();
	};
}

#endif
