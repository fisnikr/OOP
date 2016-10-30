/*
Autori: Fisnik Ramushi & Fisnik Ademi
Data 30/10/2016
Revidimi i fundit : 30/10/2016
*/ 

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Student
{
	string ID;
	string FirstName;
	string LastName;
	string Email;
	string Living;
	string Birthday;
	string Department;



void PrintInfo()
	{
		cout << "\n ID : " << ID 
		<< "\n FirstName : " << FirstName
		<< "\n  LastName : " << LastName 
		<< "\n Email : " << Email
		<< "\n Living : " << Living
		<< "\n Birthday : " << Birthday
		<< "\n Department : " << Department <<endl;
		
	}
};

struct StudentManager
{
	Student *students;
	int student_nr;

	bool Contains(string base_string, string search_criteria)
{
	transform(base_string.begin(), base_string.end(), base_string.begin(), ::tolower);
	transform(search_criteria.begin(), search_criteria.end(), search_criteria.begin(), ::tolower);

	if (base_string.find(search_criteria) != string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
}

	void Search(string search_criteria)
	{
		 
		for (int i = 0; i < student_nr; i++)
		{
			if (Contains(students[i].FirstName, search_criteria) || 
				Contains(students[i].LastName, search_criteria) ||
				Contains(students[i].ID, search_criteria))
			{
				students[i].PrintInfo();
			}
		
		}
	}
};

struct LibraryMenagment {

Student st ;
string books ;
string author;

};

int main()
{
	StudentManager sm;
	Student stud[] = {
			{  "124437","Fisnik","Ramushi","fr24437@seeu.edu.mk","Skopje","04.04.1997","CST" },
			{  "124841","Fisnik","Ademi","fa24841@seeu.edu.mk","Skopje","07.07.1992","CST" },
			{  "124491","Besim","Sallahi","bs24491@seeu.edu.mk","Skopje","07.07.1997","CST" },
			{ "124314","Ismet","Qerimi","iq24314@seeu.edu.mk","Kumanovo","07.07.1994","CST" },
			{ "124313","Gazmend","Ismaili","gi24313@seeu.edu.mk","Kumanovo","07.07.1994","CST"  },
			{ "124734","Shkumbin","Ajdini","sa24734@seeu.edu.mk","Kumanovo","07.07.1994","CST"  },
	};
	
	sm.students = stud;
	sm.student_nr = 6;

    string search;
	cout << "Please write the ID , FirstName orLastName of the Student you are searching for : "
		<< endl;
 
 
 
	
		while (true)
	{
		cin >> search;
		sm.Search(search);
	}
	


}
