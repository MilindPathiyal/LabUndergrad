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
#include <iostream>
#include "Undergrad.h"
#include "student.h"
#include "person.h"
int main() {
    
    Undergrad Stuzzy;                                                                                   //1st Constructor
    Stuzzy.print();
    Stuzzy.printGrades();
    cout << "New Person" << endl << endl;
    
    Undergrad Milind( 1, 'A');                                                                          //2nd Constructor
    Milind.print();
    Milind.printGrades();
    cout << "New Person" << endl << endl;
    
    Undergrad Rick( 2, 'B', "Rick", 77723456, 2022);                                                    //3rd Constructor
    Rick.print();
    Rick.printGrades();
    cout << "New Person" << endl << endl;
    
    Undergrad Sailesh( 5, 'A', "Sailesh", 88823456, 2022, 20, 10, 1999);                                //4th Constructor
    Sailesh.print();
    Sailesh.printGrades();
   
}

