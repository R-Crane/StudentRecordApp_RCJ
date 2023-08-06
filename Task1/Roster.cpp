//
//  Roster.cpp
//  C867_Task1
//
//  Created by Riley Crane on 5/21/22.
//

#include <stdio.h>
#include <iostream>
#include <array>
#include "Degree.hpp"
#include "Student.hpp"
#include <string>
#include "Roster.hpp"
#include <algorithm>



void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int days1, int days2, int days3, DegreeProgram degree) {
    
    int alldays[3] = {days1, days2, days3};
    
    this->classRosterArray[++start] = new Student(studentID, firstName, lastName, emailAddress, age, alldays, degree);
}


void Roster::parseStudentData(std::string *stdntinfo){
    
    int x;
    for (x = 0; x < 5; x++){
        
        std::string s = stdntinfo[x];
        
        size_t RH, LH;
        
        std::string fields[9];
        
        LH = 0;
        
        int z;
        for (z=0; z < 9; z++){
            
        RH = s.find(",",LH);
        fields[z] = s.substr(LH,RH-LH);
        LH = RH+1;
        }
        DegreeProgram D = DegreeProgram::SOFTWARE;
        
        if (fields[8] == "SECURITY"){
            D = DegreeProgram::SECURITY;
        };
        
        if (fields[8] == "NETWORK"){
            D = DegreeProgram::NETWORK;
        };
        
        
        std::cout << stoi(fields[5]) << "," << stoi(fields[6]) << "," << stoi(fields[7]) << std::endl;;
        
        
        this->add(fields[0], fields[1], fields[2], fields[3],
            stoi(fields[4]), stoi(fields[5]), stoi(fields[6]), stoi(fields[7]),
                  D);
    }
}

std::string Roster::GetStudentID(int start) {
    
    std::string stdntID = classRosterArray[start]->getStudentID();
    return stdntID;
}

void Roster::remove(std::string studentID) {
    
    for (int i = 0; i < 5; i++){
        if (classRosterArray[i] == nullptr) {
            std::cout << "A3 - Removed/Not Found" << std::endl;;
            break;
        }
        else if (studentID == classRosterArray[i]->Student::getStudentID()){
            classRosterArray[i] = nullptr;
            std::cout << "Removing A3" << std::endl;;
        }
    }
    
}



void Roster::printAll () {
    
    for (int i = 0; i < 5; i++)
    {
        if (classRosterArray [i] != nullptr) {
        this -> classRosterArray[i] -> printAllStudents();
        }
    }
}

void Roster::printInvalidEmails() {
    
    bool mistake = false;
    for (int x = 0; x < 5; x++){
        
        std::string emailAddress = classRosterArray[x]->getEmailAddress();
        if ((emailAddress.find(" ") != std::string::npos || emailAddress.find("@") == std::string::npos ||
             emailAddress.find(".") == std::string::npos)){
            
            mistake = true;
            std::cout << classRosterArray[x]->getStudentID()<< "<- Has invalid email = " << emailAddress << std::endl; 
        }
    }
    
}

void Roster::printByDegreeProgram(DegreeProgram degree){
    std::cout << "Students with degree in Software: " << std::endl;
    for (int x = 0; x < 5; x++){
        if (classRosterArray[x]->getDegree() == degree) {
            classRosterArray[x]->printAllStudents();
        }
    }
}

void Roster::printAverageDaysInCourse(std::string studentID){
    
    for (int x = 0; x < 5; x++)
    {
        if (studentID == classRosterArray[x]->getStudentID()){
            
            
            double math = (classRosterArray[x]->getDays()[0] + classRosterArray[x]->getDays()[1] + classRosterArray[x]->getDays()[2]) / 3;
            
            
            std::cout << "Student ID: " << studentID << " - Average Days in Course = " << math << std::endl;
            
            
        }
    }
}
