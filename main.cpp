#include "controller/controller.cpp"
int process,id;
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
    cout << "     3- Edit "<<thing<<"                         4- Show "<<thing<<"s"<<endl;
    cout << "     5- show "<<thing<<" by id"<<endl;
    cout << "                                  6-Exit                   " <<endl;
}
void add_students(){
    Student student;
    cout << "Please Enter Student Data"<< endl;
    cout << "Enter Student Name : ";
    string name;
    cin.ignore();
    getline(cin, name);
    student.set_name(name);
    cout << "Enter Student Age : ";
    int age;
    cin >> age;
    student.set_age(age);
    cout << "Enter Student phone number : ";
    string phone_number;
    cin >> phone_number;
    student.set_phone_number(phone_number);
    cout << "Enter Student gpa : ";
    double gpa;
    cin >> gpa;
    student.set_gpa(gpa);
    Student_controller student_controller;
    int id = student_controller.add_student(student);
    if (id != -1){
        cout << "The student has been added with Id : "<<id<<endl;
    }
}
void add_teachers(){
    Teacher teacher;
    cout << "Please Enter teacher Data"<< endl;
    cout << "Enter teacher Name : ";
    string name;
    cin.ignore();
    getline(cin, name);
    teacher.set_name(name);
    cout << "Enter teacher Age : ";
    int age;
    cin >> age;
    teacher.set_age(age);
    cout << "Enter teacher phone number : ";
    string phone_number;
    cin >> phone_number;
    teacher.set_phone_number(phone_number);
    cout<<"Enter Teacher Salary :";
	double salary;
	cin>>salary;
	teacher.set_salary(salary);
    Teacher_controller teacher_controller;
    int id = teacher_controller.add_teacher(teacher);
    if (id != -1){
        cout << "The teacher has been added with Id : "<<id<<endl;
    }
}
void add_courses(){
    Course course;
    cout << "Please Enter course Data"<< endl;
    cout << "Enter course Name : ";
    string name;
    cin.ignore();
    getline(cin, name);
    course.set_name(name);
    cout << "Enter course hour : ";
    double hour;
    cin >> hour;
    course.set_hour(hour);
    Course_controller course_controller;
    int id = course_controller.add_course(course);
    if (id != -1){
        cout << "The course has been added with Id : "<<id<<endl;
    }
}
void show_student_by_id (){
    cout << "Enter Student Id: ";
    int id;
    cin >> id;
    Student_controller student_show_byId;
    student_show_byId.show_student_by_id(id);
}
void show_teacher_by_id (){
    cout << "Enter Teacher Id: ";
    int id;
    cin >> id;
    Teacher_controller teacher_show_byId;
    teacher_show_byId.show_teacher_by_id(id);
}
void show_course_by_id (){
    cout << "Enter course Id: ";
    int id;
    cin >> id;
    Course_controller course_show_byId;
    course_show_byId.show_course_by_id(id);
}
void edit_student(){
    Student student;
    cout << "Please Enter Student Data"<< endl;
    cout << "Enter Student ID : ";
    cin>>id;
    student.set_id(id);
    cout << "Enter Student Name : ";
    string name;
    cin.ignore();
    getline(cin, name);
    student.set_name(name);
    cout << "Enter Student Age : ";
    int age;
    cin >> age;
    student.set_age(age);
    cout << "Enter Student phone number : ";
    string phone_number;
    cin >> phone_number;
    student.set_phone_number(phone_number);
    cout << "Enter Student gpa : ";
    double gpa;
    cin >> gpa;
    student.set_gpa(gpa);
    Student_controller student_controller;
    student_controller.update_student(student);
}
void edit_teacher(){
    Teacher teacher;
    cout << "Please Enter teacher Data"<< endl;
    cout << "Enter teacher Id : ";
    cin >>id;
    teacher.set_id(id);
    cout << "Enter teacher Name : ";
    string name;
    cin.ignore();
    getline(cin, name);
    teacher.set_name(name);
    cout << "Enter teacher Age : ";
    int age;
    cin >> age;
    teacher.set_age(age);
    cout << "Enter teacher phone number : ";
    string phone_number;
    cin >> phone_number;
    teacher.set_phone_number(phone_number);
    cout<<"Enter Teacher Salary :";
	double salary;
	cin>>salary;
	teacher.set_salary(salary);
    Teacher_controller teacher_controller;
    teacher_controller.update_teacher(teacher);
}
void edit_course(){
    Course course;
    cout << "Please Enter course Data"<< endl;
    cout << "Enter course ID : ";
    cin >>id;
    course.set_id(id);
    cout << "Enter course Name : ";
    string name;
    cin.ignore();
    getline(cin, name);
    course.set_name(name);
    cout << "Enter course hour : ";
    double hour;
    cin >> hour;
    course.set_hour(hour);
    Course_controller course_controller;
    course_controller.update_course(course);
}
void student_chooses(){
    if (process==1){
            add_students();
        }else if(process==2){
            cout << "remove student"<<endl;
        }else if(process==3){
            edit_student();
        }else if(process==4){
            cout << "show students"<<endl;
        }else if(process==5){
            show_student_by_id ();
        }else if(process==6) {
            
        }else{
            cout << "invalid choose"<<endl;
        }
}
void teacher_chooses(){
    if (process==1){
            add_teachers();
        }else if(process==2){
            cout << "remove teacher"<<endl;
        }else if(process==3){
            edit_teacher();
        }else if(process==4){
            cout << "show teachers"<<endl;
        }else if(process==5){
            show_teacher_by_id ();
        }else if(process==6) {
            
        }else{
            cout << "invalid choose"<<endl;
        }
}
void course_chooses(){
    if (process==1){
            add_courses();
        }else if(process==2){
            cout << "remove course"<<endl;
        }else if(process==3){
            edit_course();
        }else if(process==4){
            cout << "show course"<<endl;
        }else if(process==5){
            show_course_by_id ();
        }else if(process==6) {
            
        }else{
            cout << "invalid choose"<<endl;
        }
}
int main(){
    int flag =1;
    while (flag)
    {
        show_base_list();
        cin >> process;
        if (process==1){
            show_list("Student");
            cin >>process;
            student_chooses();
        }else if(process==2){
            show_list("Teacher");
            cin >>process;
            teacher_chooses();
        }
        else if (process==3){
            show_list("Course");
            cin >>process;
            course_chooses();
        }else if (process==4){
            cout << "Process Exit"<<endl;
            flag =0;
        }else{
            cout << "Invalid Choose"<<endl;
        }   
    } 
}