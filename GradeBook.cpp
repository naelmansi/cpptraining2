//GradBook.cpp - Grade Book class implementation
//This is the GradeBook class implementation
//ver 1.0 . by Nael

#include <iostream>
// #include "GradeBook.h"  // Import class header. I still have problem with VSC, that I have to put all the files in the 
                        //working directory. I will search and fix this later
                        // I commented the "#include "GradeBook.h" directive This is not standard way, however, I had to put it here because I faced the following error while executing
                          //undefined reference to `GradeBook::GradeBook(std::string)'

using namespace std; // so we do not have to use std::cout << , instead, we use cout << without the std::

//below are the memeber functions implementation of the class

//constructor initilization
GradeBook::GradeBook (string aCourseName)
{
    setCourseName (aCourseName); // use the setCourseName member function to initilize the course with its name

}//end GradeBook::GradeBook // the constructor


// the setCourseName gives the course its name and controls it according to the definition of the univesity standatds.
void GradeBook::setCourseName(string aCourseName)
{
    courseName = aCourseName; // the "courseName" (private member class) will be set as the argument varila "aCourseName"
}//GradeBook::setCourseName
//keep two spaces after block ends.


//This member function returns the course name as string
string GradeBook::getCourseName ()
{
    return courseName; // return the private meber variable
}//end  GradeBook::getCourseName 


//this member function print out the course name
void GradeBook::displayMessage()
{
        cout << "Welcome to grade book for\n" << getCourseName() << " !"  << endl;  // just print this
}//end void GradeBook::displayMessage

////////////// end of file /////////////////////