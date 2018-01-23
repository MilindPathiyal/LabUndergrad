
/*
#include "person.h"
#include "student.h"
#include "Undergrad.h"
// Note: SD121ers, you may have to change the above to the following:
// #include "person.h"
// #include "student.h"
#include <iostream>
using namespace std;

int main()
{
	{
        Person person( "Bob", 99123456, 20, 10, 1980 );
	
    	cout << "Person name: " << person.get_name() << endl;
    	cout << "Person dateofbirth: ";
    	person.print_dateofbirth();
    
    
    	Student student( "Mary", 98111111, 2005, 20, 1, 1975 ); 
    
    	cout << "Student name: " << student.get_name() << endl;
    	cout << "Student id: " << student.get_id() << endl;
    	cout << "Student dateofbirth: ";
    	student.print_dateofbirth();

    
    	cout << endl << "Print student's information: " << endl;
    	student.print();
    	cout << endl;
    
    	person.set_name( "Bob II" );
    	cout << "Person name: " << person.get_name() << endl;
    	student.set_name( "Mary II" );
    	cout << "Student name: " << student.get_name() << endl;
    	student.change_name( "Mary III" );
    	cout << "Student name: " << student.get_name() << endl;
        
        //MODIFY BEGINS
        cout << "*******************" << endl << "*******************" << endl;

        Undergrad Milind( 0, 'A');
        
        
        
        
        
        
    }
	
	system("pause");
	return 0;
}
*/
