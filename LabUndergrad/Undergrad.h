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

#ifndef Undergrad_h
#define Undergrad_h
#include "student.h"
const int NUM_COURSES = 5;
const int PASSMARK = 50;

#endif /* Undergrad_h */
class Undergrad : public Student
{
public:
    // constructors
    Undergrad();
    Undergrad( int yearOfStudent, char term );
    Undergrad(const int yearOfStudent, const char term, const string &newname, const int newid, const int newgradyear);
    Undergrad(const int yearOfStudent, const char term, const string &newname, const int newid, const int newgradyear, const int day, const int month, const int year);
    
    void enterGrades();
    void printGrades();
    void print();
    void determineStatus();
    void setCurrentYear();
    void setTerm();
    void getAgeAtConvocation() const;

    
    int getCurrentYear() const;
    char getTerm() const;
    enum status {PASS, FAIL, UNDECIDED};        //TA TOLD ME IT WAS OKAY TO DO THIS AND DOCUMENTED MY NAME

    status getStatus() const;
    //Deconstructor
   ~Undergrad();
private:
    int grades[NUM_COURSES];
    status stat = UNDECIDED;
    int yearOfStudent = 0;
    char term = '0';
};
