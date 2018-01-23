/************************************************
 * Student Name: Milind Paliath-Pathiyal
 * Student Number: 20714398
 * SYDE 121 Lab
 *
 * I hereby declare that this code, submitted
 * for credit for the course SYDE121, is a product
 * of my own efforts. This coded solution has
 * not been plagiarized from other sources and
 * as not been knowingly plagiarized by others.
 */

#include "Undergrad.h"
#include "person.h"
#include "date_university.h"

#include <iostream>
#include <string>
using namespace std;
//CONSTRUCTORS BEGIN (4)
Undergrad::Undergrad(){
    for(int i = 0; i < NUM_COURSES; i++)
        grades[i] = 0;
    stat = UNDECIDED;
}
Undergrad::Undergrad( const int currentYear, const char term )
: yearOfStudent(currentYear), term(term)
{
    enterGrades();
    determineStatus();
}

Undergrad::Undergrad(const int yearOfStudent, const char term, const string &newname, const int newid, const int newgradyear):yearOfStudent(yearOfStudent), term(term), Student(newname, newid, newgradyear){
    enterGrades();
    determineStatus();
}

Undergrad::Undergrad(const int yearOfStudent, const char term, const string &newname, const int newid, const int newgradyear, const int day, const int month, const int year):yearOfStudent(yearOfStudent), term(term), Student(newname, newid, newgradyear, day, month, year){
    enterGrades();
    determineStatus();
}


//USER ENTERS GRADES FOR 5 CLASSES

void Undergrad::enterGrades(){
    int x;
    for(int i = 0; i < NUM_COURSES; i++){
        cout << "Enter a grade for each course: ";
        cin >> x;
        grades[i] = x;
        cout << endl;
        
    }
}

//PRINTS GRADES FOR EACH COURSE

void Undergrad::printGrades(){
    for(int i = 0; i < 5; i++){
        cout << "Class " << i + 1 << ": " << grades[i] << endl;
    }
}

//PRINTS DATA

void Undergrad::print(){
    Student::print();
    //Person::print();
    if(getCurrentYear() == 0 & getTerm() == '0'){          //CHECKS IF THERE ARE NO PARAM & ASKS FOR CURRENT YEAR, TERM, GRADES, AND DETERMINES STATUS
        setCurrentYear();setTerm();
        cout << "Undergrad year: " << getCurrentYear() << endl;
        cout << "Term of student: " << getTerm() << endl;
        enterGrades();
        determineStatus();
    }
    else                                                   //IF PARAM FOR CURRENTYEAR & TERM ARE FILLED THEN PRINT CURRENTYEAR AND TERM
    {
        cout << "Undergrad year: " << getCurrentYear() << endl;
        cout << "Term of student: " << getTerm() << endl;
        
    }
    
    if(getStatus() == FAIL)                                 //DETERMINES STATUS OF THE STUDENT
    {
        cout << "Status of student: FAIL" << endl;
        
    }
    else
    {
        cout << "Status of student: PASS" << endl;
        
    }
    
    getAgeAtConvocation();                                  //CALCULATES AGE BY GRADUATION
}



void Undergrad::determineStatus(){
    
    int x;
    for(int i = 0; i < 5; i++){
        x += grades[i];
    }
    if((x/5)>= PASSMARK)                                    //IF GREATER THAN 50 -> PASS. OTHERWISE FAIL
        stat = PASS;
    
    else{
        stat = FAIL;
    }
}

Undergrad::status Undergrad::getStatus() const{             //RETURN STATUS
    return stat;
}

Undergrad::~Undergrad()                                     //DECONSTRUCTOR
{
    cout << "executing Undergrad::~Undergrad()" << endl;
}

void Undergrad::getAgeAtConvocation() const{
    Date gradYear;
    Date x = get_dateofbirth();
    int y;
    if (get_gradyear() == 0){                               //ENTER GRAD YEAR IF PARAM IS NOT FILLED
        cout<<"Enter your graduating year(Eg:2010): ";
        cin>>y;
        cout << endl;
        
        gradYear.set_year(y);
        int z = 0;
        z = gradYear.get_year() - x.get_year();             //FIND YEAR DIFFERENCE
        
        if(x.get_month() > 5 && x.get_day() > 15)           //FIND MONTH AND DAY DIFFERENCE
            z -= 1;
        cout << "Your age is: " << z << endl;
    }
    else{
        int z = 0;
        z = get_gradyear() - x.get_year();                  //FIND YEAR DIFFERENCE
        if(x.get_day() > 15 && x.get_month() > 5)           //FIND MONTH AND DAY DIFFERENCE
            z -= 1;
            
        cout << "Your age is: " << z << endl;
    }
}

void Undergrad::setCurrentYear(){
    do{
        cout << "Enter your current year: ";               //ASKS USER TO ENTER VAILD CURRENT YEAR
        cin >> yearOfStudent;
    }
    while(yearOfStudent < 1 || yearOfStudent > 4);
    cout << endl;

}
void Undergrad::setTerm(){
    do{
        cout << "Enter your term: ";                        //ASKS USER TO ENTER VAILD CURRENT TERM
        cin >> term;
    }
    while(!(term == 'A') && !(term == 'B'));
    cout << endl;

    
}
int Undergrad::getCurrentYear() const{                      //RETURN CURRENTYEAR
    return yearOfStudent;
}
char Undergrad::getTerm() const{                            //RETURN TERM
    return term;
}






