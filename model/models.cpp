#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// public data model
class public_data{
    private:
        int id;
        string name;
    public:
        // Constructors
        public_data (){

        }
        public_data (string name,int id){
            this-> id =id;
            this-> name = name;
        }
        // setter functions
        void set_name(string name){
            this-> name = name;
        }
        void set_id(int id){
            this-> id = id;
        }
        // Getter functions
        string get_name(){
            return name;
        }
        int get_id(){
            return id;
        }
};
// person model
class Person : public public_data{
    private:
        int age;
        string phone_number;
    public:
        // Constructors
        Person(){

        }
        Person (string name ,int id ,int age, string phone_number) 
            : public_data(name, id)
        {
            this->age = age;
            this->phone_number = phone_number;
        }
        // setter functions
        void set_age(int age){
            this-> age = age;
        }
        void set_phone_number(string phone_number){
            this-> phone_number=phone_number;
        }
        
        // Getter functions
        int get_age(){
            return age;
        }
        string get_phone_number(){
            return phone_number;
        }
};

// teacher model
class Teacher : public Person {
    private :
        double salary;
        vector <int> student_IDs;
    public :
        // Constructors
        Teacher() : Person() {
            salary = 0.0;
        }
        Teacher(string name, int id, int age, string phone_number, double salary)
           : Person(name ,id ,age ,phone_number)
        {
            this->salary = salary;
        }
        // setter functions
        void set_salary(double salary){
            this->salary =salary;
        }
        void set_student_IDs(vector<int>&student_IDs){
            this->student_IDs=student_IDs;
        }
        // Getter functions
        double get_salary(){
            return salary;
        }
        vector<int>& get_student_IDs(){
            return student_IDs;
        }
};

// course model
class Course : public public_data{
    private :
        int hour;
        vector <int> student_IDs;
    public:
        // setter functions
        void set_hour(int hour){
            this-> hour = hour;
        }
        void set_student_IDs(vector<int>&student_IDs){
            this->student_IDs=student_IDs;
        }
        // Getter functions
        int get_hour(){
            return hour;
        }
        vector<int>& get_student_IDs(){
            return student_IDs;
        }
};

// student model
class Student : public Person{
    private:
        double gpa;
        vector<Teacher> Teachers;
        vector<Course> Courses;
    public:
        // Constructors
        Student() : Person() {
            gpa = 0.0;
        }
        Student(string name, int id, int age, string phone_number, double gpa) 
            : Person(name ,id , age,phone_number)
        {
            this->gpa = gpa;
        }
        // setter functions
        void set_gpa(double gpa){
            this-> gpa=gpa;
        }
        void set_teachers(vector<Teacher>& teachers){
            this->Teachers= teachers;
        }
        void set_courses(vector<Course>& courses){
            this->Courses= courses;
        }
        // Getter functions
        double get_gpa(){
            return gpa;
        }
        vector <Teacher>& get_teachers(){
            return Teachers;
        }
        vector <Course>& get_courses(){
            return Courses;
        }
};