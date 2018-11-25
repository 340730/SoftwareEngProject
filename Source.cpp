#include <iostream>
#include <string>
#include<vector>
using namespace std;

class course
{
private:
	string name;
	vector<double> testscore;
	double average()
	{
		int size = testscore.size();
		double total = 0;
		for (int i = 0; i < size; i++)
			total += testscore[i];
		double average = total / size;
		return average;
	}
	double avg = average();
	double calcGPA()
	{
		if (avg >= 90.0)
			return (4.0);
		else if (avg >= 80.0)
			return (3.0);
		else if (avg >= 750.0)
			return (2.0);
		else if (avg >= 70.0)
			return (1.0);
		else
			return(0.0);
	}
	double GPA = calcGPA();
	course(string title)
	{
		name = title;
	}

public:
	double getGPA()
	{
		return GPA;
	}
	course(string title)
	{
		name = title;
	}
};

void addacourse()
{
	string input;
	cout << "What is the course name?" << endl;
	cin >> input;
	course(input);
	//code open student doc and add course to student doc
}


class student
{
private:
	string name;
	int stuID;
	vector<course> courses;
	double calcavgGPA()
	{
		int size = courses.size();
		double total;
		for (int i = 0; i < size; i++)
			total += courses[i].getGPA();
		double avg = total / size;
		return avg;
	}
	double avgGPA = calcavgGPA();

public:
	student(string a, int b)
	{
		name = a;
		stuID = b;
	}

	void addcourse(course addition)
	{
		courses.push_back(addition);
	}
};

void createstu()
{
	string stuname;
	int stuid;
	cout << "Please enter student name: " << endl;
	cin >> stuname;
	cout << "Please enter student id: " << endl;
	cin >> stuid;
	student(stuname, stuid);
	cout << "The student, " << stuname << ", has been added to the directory." << endl;
	//code to create a text file for the student and add it to the directory
}

void addacourse()
{
	//code to append course to end of student txt file
}

void removeacourse()
{
	//code to search student file for course and delete the entire line
}

void editstudent()
{
	cout << "Please select an option: " << endl <<
		"1. Add a course." << endl <<
		"2. Remove a course." << endl <<
		"3. Add a testscore." << endl <<
		"4. Remove student." << endl <<
		"5. Return to student select." << endl <<
		"6. Return to main menu." << endl <<
		"7. Exit program." << endl;
	char in;
	cin >> in;
	switch (in)
	{
	case '1':
		addacourse();
		editstudent();
		break;
	case '2':
		removeacourse();
		editstudent();
		break;
	case '3':
		//code to search the textfile for the course
		//code to add test score to the end of the line
		editstudent();
		break;
	case '4':
		//code to delete student file from directory
		editstudent();
		break;
	case '5':
		displaystudent();
		break;
	case '6':
		mainmenu();
		break;
	case '7':
		cout << "Exiting program now." << endl;
		break;
	default:
		cout << "You have entered an invalid selection. Please try again." << endl;
		editstudent();
	}
}

void displaystudent()
{
	//code to loop through student directory and print each student name
	//code to select a student
	//switch statement to select a student and open the txt file
}

void adminmenu()
{
	cout << "Please select an option:" << endl <<
		"1. Add a student." << endl <<
		"2. Select a student to edit."<< endl <<
		"3. Return to main menu." << endl <<
		"4. Exit program." << endl;
	char in;
	cin >> in;
	switch (in)
	{
	case '1':
		createstu();
		break;
	case '2':
		displaystudent();
		break;
	case '3':
		mainmenu();
		break;
	case '4':
		cout << "Exiting program now." << endl;
		break;
	default:
		cout << "You have entered an invalid selection. Please try again." << endl;
		adminmenu();
	}
}

void mainmenu()
{
	char in;
	cout << "Please select an option: " << endl <<
		"1. View student information" << endl <<
		"2. Edit student Information" << endl <<
		"3. Exit program" << endl;
	cin >> in;
	switch (in)
	{
	case '1':
		//code to select a student and then to display student info on gui
		break;
	case '2':
		adminmenu();
		break;
	case '3':
		cout << "Exiting program now." << endl;
		break;
	default:
		cout << "You have entered an invalid selection. Please try again." << endl;
		mainmenu();
	}
}

int main()
{
	mainmenu();
	return 0;
}