
Coding Convention

Goals:
1- Aim for readibality and understanding over simplicity and abrevaition.


Varialbe Name:
- common varilable names : 
    - start with small letter , then camel case , ex. bookName , carSpeed
    - start with a name . ex, carType
    - name should be descriptive as much as possible 
    -
- functions / and class member functions arguments : 
    -functions should start with a verb and with small letter and camel case. ex. displayMessage() ,printReport()
    - start  with a small letter "a" (for argument) , ex. setCourseName(string aCourseName)
    -function names should be descriptive as much as possible to ease readibality 



    Block structure:
    - blocks are written in the following way:
        GradeBook::GradeBook (string aCourseName)
        {
            setCourseName (aCourseName); // use the setCourseName member function to initilize the course with its name
        }//end GradeBook::GradeBook // the constructor

    note how the {} are put undereach other along with the routine definition.
    at the end of the block, you must comment with the routine or block name name
    - The code inside the block is one tab intended 
    - keep two emply lines after block ends.


    end of file:
        -put this comment :///////////// end of file /////////////////////

    common:
    - use spaces when possible. ex. cout<<"Hello"; ==> cout << "Hello";
