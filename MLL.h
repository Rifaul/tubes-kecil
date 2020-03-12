#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define name(I) I->name
#define sumCrs(I) I->sumCrs
#define crsHead(I) I->crsHead
#define nextIns(I) I->nextIns
#define prevIns(I) I->prevIns
#define ID(C) C->ID
#define nextCrs(C) C->nextCrs
using namespace std;
typedef struct instructor *adrToIns;
typedef struct course *adrToCrs;

struct instructor{
    string name;
    int sumCrs;
    adrToCrs crsHead;
    adrToIns nextIns, prevIns;
};

struct course{
    string ID;
    adrToCrs nextCrs;
};

struct list{
    adrToIns first, last;
};

void createList(list &L);
bool isEmpty(list L);
adrToIns searchIns(list L, string insName);
adrToIns searchCrs(list L, string crsID);
void addInstructor(list &L, string insName);
void assignCourse(list &L, string insName, string crsID);
void deleteInstructor(list &L, string insName);
void deleteCourse(list &L, string crsID);
void showInstructorCourses(list L, string insName);
void findCourseInstructor(list L, string crsID);
void showAllInstructor(list L);
void averageCourse(list L);
void maxCourse(list L);
void moreThanThree(list L);
#endif // MLL_H_INCLUDED
