#include "person.cpp"
class Student : public Person{
    private:
        double gpa;
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

        // Getter functions
        double get_gpa(){
            return gpa;
        }
        
};