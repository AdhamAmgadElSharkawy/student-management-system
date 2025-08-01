#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Student {
    private:
        string name;
        int id;
        int age;
        string phone_number;
        double gpa;
    public:
        Student(string name, int id, int age, string phone_number, double gpa) {
            this->name = name;
            this->id = id;
            this->age = age;
            this->phone_number = phone_number;
            this->gpa = gpa;
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
        void set_gpa(double gpa){
            this-> gpa=gpa;
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
        double get_gpa(){
            return gpa;
        }
        
};