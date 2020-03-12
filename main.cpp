#include <iostream>
#include <limits>
#include "MLL.h"
using namespace std;

int main(){
    cout<<"+--------------------------------------+"<<endl;
    cout<<"|       Instructor List Program        |"<<endl;
    cout<<"+--------------------------------------+"<<endl;
    cout<<"|  1) Add a new Instructor             |"<<endl;
    cout<<"|  2) Assign a course to an instructor |"<<endl;
    cout<<"|  3) Delete a certain instructor      |"<<endl;
    cout<<"|  4) Delete a certain course          |"<<endl;
    cout<<"|  5) Show instructor course           |"<<endl;
    cout<<"|  6) Find course instructor           |"<<endl;
    cout<<"|  7) Show all instructors             |"<<endl;
    cout<<"|  8) Find course average              |"<<endl;
    cout<<"|  9) Find greatest course number      |"<<endl;
    cout<<"|     and the number of instructor     |"<<endl;
    cout<<"| 10) Find instructor who teach more   |"<<endl;
    cout<<"|     than three courses               |"<<endl;
    cout<<"|  0) EXIT                             |"<<endl;
    cout<<"+--------------------------------------+"<<endl;
    cout<<"Insert command number: ";
    list L;
    createList(L);
    int x = 99;
    cin>>x;
    while (x != 0){
        string insName, crsID;
        if (x == 1){
            cout<<"Input instructor name to be added to the list: ";
            cin>>insName;
            addInstructor(L, insName);
        } else if (x == 2){
            cout<<"Input course ID to be added: ";
            cin>>crsID;
            cout<<"Input instructor name to be assign the course: ";
            cin>>insName;
            assignCourse(L, insName, crsID);
        } else if (x == 3){
            if (isEmpty(L)){
                cout<<"The list is empty"<<endl;
            } else {
                cout<<"Input instructor name to be deleted: ";
                cin>>insName;
                deleteInstructor(L, insName);
            }
        } else if (x == 4){
            if (isEmpty(L)){
                cout<<"The list is empty"<<endl;
            } else {
                cout<<"Input course ID to be deleted: ";
                cin>>crsID;
                deleteCourse(L, crsID);
            }
        } else if (x == 5){
            cout<<"Input instructor name to see what courses they teach: ";
            cin>>insName;
            showInstructorCourses(L, insName);
        } else if (x == 6){
            cout<<"Input course ID to find the instructor who taught it: ";
            cin>>crsID;
            findCourseInstructor(L, crsID);
        } else if (x == 7){
            showAllInstructor(L);
        } else if (x == 8){
            averageCourse(L);
        } else if (x == 9){
            maxCourse(L);
        } else if (x == 10){
            moreThanThree(L);
        } else {
            cout<<"No command with that number"<<endl;
        }
        inline waitEnter();
        cout<<endl;
        cout<<"+--------------------------------------+"<<endl;
        cout<<"|       Instructor List Program        |"<<endl;
        cout<<"+--------------------------------------+"<<endl;
        cout<<"|  1) Add a new Instructor             |"<<endl;
        cout<<"|  2) Assign a course to an instructor |"<<endl;
        cout<<"|  3) Delete a certain instructor      |"<<endl;
        cout<<"|  4) Delete a certain course          |"<<endl;
        cout<<"|  5) Show instructor course           |"<<endl;
        cout<<"|  6) Find course instructor           |"<<endl;
        cout<<"|  7) Show all instructors             |"<<endl;
        cout<<"|  8) Find course average              |"<<endl;
        cout<<"|  9) Find greatest course number      |"<<endl;
        cout<<"|     and the number of instructor     |"<<endl;
        cout<<"| 10) Find instructor who teach more   |"<<endl;
        cout<<"|     than three courses               |"<<endl;
        cout<<"|  0) EXIT                             |"<<endl;
        cout<<"+--------------------------------------+"<<endl;
        cout<<"Insert command number: ";
        cin>>x;
    }
    return 0;
}
