//This is the GradeBook class implementation
#include <iostream>
#include <GradeBook.h>

using namespace std;

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


//This member function returns the course name as string
string GradeBook::getCourseName ()
{
return courseName; // return the private meber variable
}//end  GradeBook::getCourseName 


//this member function print out the course name
void GradeBook::displayMessage()
{
    cout << "Welcome to grade book for\n" << getCourseName() << " !"
    << endl;

}//end void GradeBook::displayMessage
