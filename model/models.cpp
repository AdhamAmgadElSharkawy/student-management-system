// person model
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Person {
    private:
        string name;
        int id;
        int age;
        string phone_number;
    public:
        Person(){

        }
        Person (string name, int id, int age, string phone_number) {
            this->name = name;
            this->id = id;
            this->age = age;
            this->phone_number = phone_number;
        }
        // setter functions
        void set_name(string name){
            this-> name = name;
        }
        void set_id(int id){
            this-> id = id;
        }
        void set_age(int age){
            this-> age = age;
        }
        void set_phone_number(string phone_number){
            this-> phone_number=phone_number;
        }
        
        // Getter functions
        string get_name(){
            return name;
        }
        int get_id(){
            return id;
        }
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
    public :
        Teacher(){

        }
        Teacher(string name, int id, int age, string phone_number, double salary)
           : Person(name, id, age, phone_number)
        {
            this->salary = salary;
        }
        // setter functions
        void set_salary(double salary){
            this->salary =salary;
        }
        // Getter functions
        double get_salary(){
            return salary;
        }
};

// student model
class Student : public Person{
    private:
        double gpa;
        Teacher teachers[5];
    public:
        Student(string name, int id, int age, string phone_number, double gpa) 
            : Person(name, id, age, phone_number)
        {
            this->gpa = gpa;
        }
        // setter functions
        void set_gpa(double gpa){
            this-> gpa=gpa;
        }
        void set_teachers(Teacher teachers[5]){
            for (int i = 0; i < 5; i++)
            {
                this->teachers[i]=teachers[i];
            }
            
        }

        // Getter functions
        double get_gpa(){
            return gpa;
        }
        Teacher *get_teachers(){
            return teachers;
        }
        
};