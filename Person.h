#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

// class representing a person
class Person{
public:
    // constructors
    Person();
    Person(string first, string last, int year, int day, int month);
    
    // accessors
    string getName();
    string getBirthdate();

protected:
    // member variables
    string Fname;
    string Lname;
    int birthDay;
    int birthMonth;
    int birthYear;
};

// class representing employee
class Employee: public Person{
public:
    // constructors
    Employee();
    Employee(string first, string last, int year, int day, int month, double salary, string department);

    // accessors
    double getSalary();
    string getDepartment();

    // mutator
    void setDepartment(string dept);

private:
    // member variables
    double salary;
    string department;
};

// class representing student
class Student : public Person{
public:
    // constructors
    Student();
    Student(string first, string last, int year, int day, int month, string major, int numCredits);

    // accessors
    string getMajor();
    int getNumCredits();

    // mutator
    void setNumCredits(int credits);

private:
    // member variables
    string major;
    int numCredits;
};

// class representing grad student
class GradStudent: public Student{
public:
    // constructors
    GradStudent();
    GradStudent(string first, string last, int year, int day, int month, string major, string researchTopic, bool canGraduate);

    // accessors
    string getResearchTopic();
    bool getCanGraduate();

    // function to update grad status
    void updateGraduateStatus();

private:
    // member variables
    string researchTopic;
    bool canGraduate;
};

#endif // PERSON_H
