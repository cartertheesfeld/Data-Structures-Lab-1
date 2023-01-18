#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

enum Grade
{
	F,D,C,B,A
};

struct Course
{
	string name;
	string semester;
	Grade grade;
};

class Student
{
public:
	//references all the functions
	Student();
	~Student();

	void setName(string name_) { name = name_; };
	void setID(string id_) { id = id_; };
	void addCourse(Course course);

	string getName() { return name; };
	string getID() { return id; };
	float getGPA() { return gpa; };
	int getNumCourses() { return numCourses; };
	Course* getCourses();

	float calculateGPA();

private:

	string name;
	string id;
	Course courses[100];
	float gpa;
	int numCourses;
};

#endif // !STUDENT_H#endif