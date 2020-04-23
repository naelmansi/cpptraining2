//main.cpp , the main file that contains the running/ controlling code
#include <iostream> // using the <> sings assumes that the header is part of the C++ library
#include "GradeBook.h" // using the qotation sings tells the compiler that the header is within the same directory
#include "GradeBook.cpp" //This is not standard way, however, I had to put it here because I faced the following error while executing
                          //undefined reference to `GradeBook::GradeBook(std::string)'


int main()
{
 
   
   //define class objects
   GradeBook firstGrade("CS101 C++ how to program"); //defile the CS101 class instance
   GradeBook secondGrade ("CS102 File Structure and Organization");

   // some code to test the new classes

  cout << "my first grade subject is: " << firstGrade.getCourseName();
  cout << "my second grade subject is: " << secondGrade.getCourseName();

  cout << "Thats it for today.. bye bye" << endl;

  





} // end int main()  



