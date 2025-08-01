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