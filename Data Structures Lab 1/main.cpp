#include "Student.h"
#include <iostream>

using namespace std;


int main()
{
	//creates an object using the student class
	Student s;
	s.setName("John Doe");
	s.setID("12345");

	cout << "Name: " << s.getName() << endl;
	cout << "ID: " << s.getID() << endl;

	//Adds the courses to student s's total courses
	Course calc1;
	calc1.name = "Calculus 1";
	calc1.semester = "FA12";
	calc1.grade = Grade::B;

	Course calc2;
	calc2.name = "Calculus 2";
	calc2.semester = "SP13";
	calc2.grade = Grade::C;

	Course ps;
	ps.name = "Public Speaking";
	ps.semester = "SP13";
	ps.grade = Grade::A;

	Course DataBases;
	DataBases.name = "DataBases";
	DataBases.semester = "SP13";
	DataBases.grade = Grade::D;

	Course trig;
	trig.name = "trigonometry";
	trig.semester = "FA12";
	trig.grade = Grade::D;

	Course comp1;
	comp1.name = "Composition 1";
	comp1.semester = "FA12";
	comp1.grade = Grade::A;

	Course comp2;
	comp2.name = "Composition 2";
	comp2.semester = "SP13";
	comp2.grade = Grade::A;

	//adds all the courses to the student s
	s.addCourse(calc1);
	s.addCourse(calc2);
	s.addCourse(ps);
	s.addCourse(DataBases);
	s.addCourse(trig);
	s.addCourse(comp1);
	s.addCourse(comp2);


	Course* courses = s.getCourses();
	//outpiuts all of the courses and information
	for (int i = 0; i < s.getNumCourses(); i++)
	{
		cout << courses[i].name << " "; //<<courses[i].grade << " " << courses[i].semester << endl;
		switch(courses[i].grade)
		{
		case 0:
			cout << "F ";
			break;
		case 1:
			cout << "D ";
			break;
		case 2:
			cout << "C ";
			break;
		case 3:
			cout << "B ";
			break;
		case 4:
			cout << "A ";
			break;
		}
		cout<< courses[i].semester << endl;
	}
	//the gpa is calculated and outputed to the screen
	s.calculateGPA();
	cout << "The total GPA for all classes is " << s.getGPA() << endl;
	//outputs all of the classes with the grade letter A
	cout << "All of the classes with the grade A are: " << endl;

	for (int i = 0; i < s.getNumCourses(); i++)
	{
		if (courses[i].grade == A)
		{
			cout << courses[i].name << " " << courses[i].semester << endl;
		}
	}

	return 0;
}