//
//  Student.cpp
//  C867_Task1
//
//  Created by Riley Crane on 5/21/22.
//

#include "Student.hpp"
#include <iostream>
#include <string>
#include "Degree.hpp"


Student::Student (std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int days[], DegreeProgram degree)
{
    
    setStudentID(studentID);
    setFirstName(firstName);
    setLastName(lastName);
    setAge(age);
    setEmailAddress(emailAddress);
    setDegree(degree);
    this->days[0] = 0;
    this->days[1] = 0;
    this->days[2] = 0;
}

void Student::setStudentID(std::string studentID) {
    
    this->studentID = studentID;
}

void Student::setFirstName(std::string firstName) {
    
    this->firstName = firstName;
}

void Student::setLastName(std::string lastName) {
    
    this->lastName = lastName;
}

void Student::setAge(int age){
    
    this->age = age;
}

void Student::setEmailAddress(std::string emailAddress) {
    
    this->emailAddress = emailAddress;
}

void Student::setDegree(DegreeProgram degree){
    
    this->degree = degree;
}

void Student::setDays(int days[]){
    
    for (int i = 0; i < 3; i++)
        this->days[i] = days[i];
}

std::string Student::getStudentID(){
    return studentID;
}

std::string Student::getFirstName(){
    return firstName;
}

std::string Student::getLastName(){
    return lastName;
}

int Student::getAge(){
    return age;
}

std::string Student::getEmailAddress(){
    return emailAddress;
}

int* Student::getDays(){
    return days;
}

DegreeProgram Student::getDegree(){
    return degree;
}

void Student::printDegree(){
    std::string degreeOutput;
    if (degree == DegreeProgram::SECURITY){
        degreeOutput = "Security";}
    else if (degree == DegreeProgram::NETWORK){
        degreeOutput = "Network";}
    else if (degree == DegreeProgram::SOFTWARE){
        degreeOutput = "Software";}
    else {
        degreeOutput = "N/a";
    }
    std::cout << degreeOutput << "\n";
}

void Student::printAllStudents(){
    
    std::string degreeOutput;
    if (degree == DegreeProgram::SECURITY){
        degreeOutput = "Security";}
    else if (degree == DegreeProgram::NETWORK){
        degreeOutput = "Network";}
    else if (degree == DegreeProgram::SOFTWARE){
        degreeOutput = "Software";}
    else {
        degreeOutput = "N/a";
    }
    std::cout << degreeOutput << "\n";
    
    
    std::cout << " Student ID: " << studentID << " First Name: " << firstName << " Last Name: " << lastName << " Age: " << age << " Days needed to complete: " << this->getDays()[0] << "," << this->getDays()[1] << "," << this->getDays()[2] << "," << " Degree Program: " << degreeOutput << "\n";
}


