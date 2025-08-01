#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Teacher {
    private :
        string name;
        int id;
        int age;
        string phone_number;
        double salary;
    public :
        Teacher(string name, int id, int age, string phone_number, double salary) {
            this->name = name;
            this->id = id;
            this->age = age;
            this->phone_number = phone_number;
            this->salary = salary;
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
        void set_salary(double salary){
            this->salary =salary;
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
        double get_salary(){
            return salary;
        }
};
