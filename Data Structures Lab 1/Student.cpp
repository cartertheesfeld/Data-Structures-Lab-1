#include "Student.h"

//creates a student function that has a gpa and number of courses
Student::Student()
{
	gpa = 0;
	numCourses = 0;
}

Student::~Student()
{
}
//precondition:there are either classes already in the list, or the list is empty
//postcondition:a class gets added to the list and the number of classes increases
void Student::addCourse(Course course)
{
	courses[numCourses] = course;
	numCourses++;
}


//precondition:No courses are outputed
//postcondition:the user can now see the courses if they want.
Course* Student::getCourses()
{
	Course* temp = new Course[numCourses];

	for (int i = 0; i < numCourses; i++)
	{
		temp[i] = courses[i];
	}

	return temp;
}
//precondition:The classes are in the list and with it the number of class
//postcondition: The gpa is returned and calculated
float Student::calculateGPA()
{
	for (int i = 0; i < numCourses; i++)
	{
		gpa += courses[i].grade;
	}
	gpa = gpa / numCourses;
	return gpa;
}