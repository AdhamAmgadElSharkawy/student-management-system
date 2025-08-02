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
                return 0;
            }else{
                students[index]=student;
                index++;
                return 1;
            }
        }

};
////////////// course repository interface
class Course_repository{
    public:
        virtual int add_course(Course courses) = 0;
};
// course repository implementation
class Course_repository_implementation : public Course_repository{
    private:
        Course courses[50];
        int index=0;
    public:
        int add_course(Course course){
            if (index == 50){
                cout << "full capacity of courses"<<endl;
                return 0;
            }else{
                courses[index]=course;
                index++;
                return 1;
            }
        }
};
////////////// teacher repository interface
class Teacher_repository{
    public:
        virtual int add_teacher(Teacher teachers) = 0;
};
// teacher repository implementation
class Teacher_repository_implementation : public Teacher_repository{
    private:
        Teacher teachers[50];
        int index=0;
    public:
        int add_teacher(Teacher teacher){
            if (index == 50){
                cout << "full capacity of courses"<<endl;
                return 0;
            }else{
                teachers[index]=teacher;
                index++;
                return 1;
            }
        }
};