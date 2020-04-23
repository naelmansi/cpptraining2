//GradeBook.h  --Grade Book class header file.
//Class Description: ...................................
//This is a review to what I have been learning from the C++ ditel training.
//In this practice, I will create a separate class.
// This is the class header. In the class header we only put the functions prototypes.
//ver 1 - Nael 

#include <string>
using namespace std;

//Class "functions prototypes" Definition below 
class GradeBook
{
public: // access specifier 
    GradeBook (string); // constructor
    void setCourseName (string); // set the course name
    string getCourseName(); // get the course name
    void displayMessage(); // display a custome message

private: //access specifier
    string courseName; // the name that will be assigned to the course.

};// calss GradeBook
