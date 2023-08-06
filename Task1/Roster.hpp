//
//  Roster.hpp
//  C867_Task1
//
//  Created by Riley Crane on 5/21/22.
//

#ifndef Roster_hpp
#define Roster_hpp

#include <stdio.h>
#include <iostream>
#include <array>
#include "Degree.hpp"
#include "Student.hpp"
#include <string>

class Roster {
    
public:
    
    Student* classRosterArray[5] = { nullptr, nullptr, nullptr, nullptr, nullptr };
    
    void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int days1, int days2, int days3, DegreeProgram degree);
    void remove(std::string studentID);
    void printAll();
    void printAverageDaysInCourse(std::string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degree);
    void parseStudentData(std::string stdntinfo[]);

    int start = -1;
    std::string GetStudentID(int start);
};



#endif /* Roster_hpp */

