#include "person.cpp"
class Teacher : public Person {
    private :
        double salary;
    public :
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
