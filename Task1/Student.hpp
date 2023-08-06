//
//  Student.hpp
//  C867_Task1
//
//  Created by Riley Crane on 5/21/22.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <string>
#include "Degree.hpp"

struct Student {
    
private:
    
    std::string studentID;
    std::string firstName;
    std::string lastName;
    std::string emailAddress;
    int age;
    int days[3];
    DegreeProgram degree;
    
public:
    
    Student();
    Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int days[], DegreeProgram degree);
    
    void setStudentID (std::string studentID);
    void setFirstName (std::string firstName);
    void setLastName (std::string lastName);
    void setEmailAddress (std::string emailAddress);
    void setAge (int age);
    void setDays (int days[]);
    void setDegree (DegreeProgram degree);
    
    std::string getStudentID();
    std::string getFirstName();
    std::string getLastName();
    std::string getEmailAddress();
    int getAge();
    DegreeProgram getDegree();
    int* getDays();
    
    void printStudentID();
    void printFirstName();
    void printLastName();
    void printEmailAddress();
    void printAge();
    void printDegree();
    void printDays();
    void printAllStudents();
    
    ~Student();
    
};

#endif /* Student_hpp */
