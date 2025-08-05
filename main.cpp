#include "controller/controller.cpp"
void show_base_list(){
    cout << "                          student management system                    " <<endl;
    cout << "please choose the service that you want to do for!"<<endl;
    cout << "                                  services                   " <<endl;
    cout << "     1- Student"<<"                                 2- Teacher"<<endl;
    cout << "     3- Course"<<"                                  4- Exit"<<endl;
}
void show_list(string thing){
    cout <<"                                  "<<thing<<"                                    "<<endl;
    cout << "     1- Add "<<thing<<"                          2- Remove "<<thing<<endl;
    cout << "     3- Edit "<<thing<<"                         4- Show "<<thing<<endl;
    cout << "                                  5-Exit                   " <<endl;
}
void add_students(){

}
int main(){
    int process, flag =1;
    while (flag)
    {
        show_base_list();
        cin >> process;
        if (process==1){
            show_list("Student");
            int studentProcess;
            cin >>studentProcess;
            if (studentProcess==1){
                Student student;
                cout << "Please Enter Student Data"<< endl;
                cout << "Enter Student Name : ";
                string name;
                cin >> name;
                student.set_name(name);
                cout << "Enter Student Age : ";
                int age;
                cin >> age;
                student.set_age(age);
                cout << "Enter Student phone number : ";
                string phone_number;
                cin >> phone_number;
                student.set_phone_number(phone_number);
                cout << "Enter Student id : ";
                int id;
                cin >> id;
                student.set_id(id);
                cout << "Enter Student gpa : ";
                double gpa;
                cin >> gpa;
                student.set_gpa(gpa);
                Student_controller student_controller;
                id = student_controller.add_student(student);
                cout << "ID : "<<id<<endl;
            }
        }else if(process==2){
            show_list("Teacher");
            flag = 0;
        }
        else if (process==3){
            show_list("Course");
            flag = 0;
        }else if (process==4){
            cout << "Process Exit"<<endl;
            flag =0;
        }else{
            cout << "Invalid Choose"<<endl;
        }   
    } 
}