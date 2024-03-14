#include "Person.h"
#include <sstream>

using namespace std;

// default constructor for Person
Person::Person(){
    Fname = "";
    Lname = "";
    birthDay = 1;
    birthMonth = 1;
    birthYear = 1;
}

// constructor with parameters for Person
Person::Person(string first, string last, int day, int month, int year){
    Fname = first;
    Lname = last;
    birthDay = day;
    birthMonth = month;
    birthYear = year;
}

// get full name of person
string Person::getName(){
    return Fname + " " + Lname;
}

// get bday of person in format "DD/MM/YY"
string Person::getBirthdate(){
    ostringstream bday;
    bday<<birthDay<<"/"<<birthMonth<<"/"<<birthYear;
    return bday.str();
}

// default constructor for employee
Employee::Employee(): Person(), salary(0.0), department(""){}

// constructor with parameters for employee
Employee::Employee(string first, string last, int year, int day, int month, double salary, string department)
    : Person(first, last, day, month, year), salary(salary), department(department) {}

// get salary of employee
double Employee::getSalary(){
    return salary;
}

// get department of empployee
string Employee::getDepartment(){
    return department;
}
// set department of employee
void Employee::setDepartment(string dept){
    department = dept;
}

// default constructor for Student
Student::Student(): Person(), major(""), numCredits(0){}

// constructor with parameters for Student
Student::Student(string first, string last, int year, int day, int month, string major, int numCredits)
    : Person(first, last, day, month, year), major(major), numCredits(numCredits) {}

// get major of student
string Student::getMajor(){
    return major;
}

// get # of credits of student
int Student::getNumCredits(){
    return numCredits;
}

// set # of credits of student
void Student::setNumCredits(int credits){
    numCredits = credits;
}

// default constructor for GradStudent
GradStudent::GradStudent(): Student(), researchTopic(""), canGraduate(false){}

// constructor with parameters for GradStudent
GradStudent::GradStudent(string first, string last, int year, int day, int month, string major, string researchTopic, bool canGraduate)
    : Student(first, last, year, day, month, major, 0), researchTopic(researchTopic), canGraduate(canGraduate) {}

// get research topic of grad student
string GradStudent::getResearchTopic(){
    return researchTopic;
}

// get grad status of grad student
bool GradStudent::getCanGraduate(){
    return canGraduate;
}

// update grad status of grad student based on # of credits
void GradStudent::updateGraduateStatus(){
    if(getNumCredits() >= 30)
        canGraduate = true;
}