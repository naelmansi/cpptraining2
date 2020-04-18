//This is a review to what I have been learning from the C++ ditel training.
//In this practice, I will create a separate class.
#include <string>
using namespace std;

//Class Definition below
class GradeBook
{
public:
    GradeBook (string); // constructor
    void setCourseName (string); // set the course name
    string getCourseName(); // get the course name
    void displayMessage(); // display a custome message

private:
    string courseName; // the name that will be assigned to the course.

};// calss GradeBook
