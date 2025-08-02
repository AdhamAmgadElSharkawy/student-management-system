#include "../model/Models.cpp"
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
////////////// student repository interface
class Student_repository{
    public:
        virtual int add_student(Student student) = 0;
};
// student repository implementation
class Student_repository_implementation : public Student_repository{
    private:
        Student students[50];
        int index=0;
    public:
        int add_student(Student student){
            if (index == 50){
                cout << "full capacity of students"<<endl;
            }else{
                students[index]=student;
                index++;
            }
        }

};
////////////// course repository interface
class Course_repository{

};
// course repository implementation
class Course_repository_implementation : public Course_repository{

};
////////////// teacher repository interface
class Teacher_repository{

};
// teacher repository implementation
class Teacher_repository_implementation : public Teacher_repository{

};