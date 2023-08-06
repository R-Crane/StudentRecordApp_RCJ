//
//  main.cpp
//  C867_Task1
//
//  Created by Riley Crane
//

#include <iostream>
#include <iomanip>
#include "Student.hpp"
#include "Roster.hpp"
#include "Degree.hpp"

int main(int argc, const char * argv[]) {
    std::cout << "C++ Application\n";
    std::cout << "Language: C++\n";
    std::cout << "Student ID: #000XXXXX\n";
    std::cout << "Name: Riley C\n";
    
    std::string studentData[] =
    
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Riley,Crane,xxxx8@xxx.edu,27,60,54,40,SOFTWARE"
    };
      
    Roster roster;
    
    roster.parseStudentData(studentData);
    
    roster.printAll();
    std::cout << std::endl;
    
    std::cout << "INVALID EMAILS - \n";
    roster.printInvalidEmails();
    std::cout << std::endl;
    
    for (int x = 0; x < 5; ++x) {
    
    roster.printAverageDaysInCourse(roster.GetStudentID(x));
    }
    std::cout << std::endl;
    
    roster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    std::cout << std::endl;

    roster.remove("A3");
    std::cout << std::endl;
    roster.printAll();
    std::cout << std::endl;
    roster.remove("A3");
    std::cout << std::endl;

    return 0;
}
