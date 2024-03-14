// Author: Ashton Herrick
// Program: HW3, Q1
// Date Created: March 13, 2024
// Date Last Modified: March 13, 2024
//
// Problem: Write a program that creates instances of different types of person such as Employee, Student, and GradStudent
// and demonstrates their attributes and behaviours.

#include <iostream>
#include "Person.h"

using namespace std;

int main(){
    // create an Employee
    Employee emp("Minato", "Namikaze", 1980, 25, 1, 50000.0, "Engineering");
    // display employee details
    cout<<"Employee: "<<emp.getName()<<endl;
    cout<<"Birthdate: "<<emp.getBirthdate()<<endl;
    cout<<"Salary: $"<<emp.getSalary()<<endl;
    cout<<"Department: "<<emp.getDepartment()<<endl;

    // create a Student
    Student stu("Naruto", "Uzumaki", 2000, 10, 10, "Information Technology", 0);
    // set # of credits for Student
    stu.setNumCredits(90);
    // display Student details
    cout<<"\nStudent: "<<stu.getName()<<endl;
    cout<<"Birthdate: "<<stu.getBirthdate()<<endl;
    cout<<"Major: "<<stu.getMajor()<<endl;
    cout<<"Credits: "<<stu.getNumCredits()<<endl;

    // create a GradStudent
    GradStudent grad("Kakashi", "Hatake", 1990, 15, 9, "Computer Science", "Artificial Intelligence", false);
    // set # of crredits for GradStudent
    grad.setNumCredits(35);
    // update grad status for GradStudent
    grad.updateGraduateStatus();
    // display GradStudent details
    cout<<"\nGrad Student: "<<grad.getName()<<endl;
    cout<<"Birthdate: "<<grad.getBirthdate()<<endl;
    cout<<"Major: "<<grad.getMajor()<<endl;
    cout<<"Research Topic: "<<grad.getResearchTopic()<<endl;
    cout<<"Credits: "<<grad.getNumCredits()<<endl;
    cout<<"Can Graduate? "<<(grad.getCanGraduate() ? "Yes" : "No")<<endl;

    return 0;
}
