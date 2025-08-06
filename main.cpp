#include "controller/controller.cpp"
int process;
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
    cout << "Enter Student gpa : ";
    double gpa;
    cin >> gpa;
    student.set_gpa(gpa);
    Student_controller student_controller;
    int id = student_controller.add_student(student);
    cout << "The student has been added with Id : "<<id<<endl;
}
void add_teachers(){
    Teacher teacher;
    cout << "Please Enter teacher Data"<< endl;
    cout << "Enter teacher Name : ";
    string name;
    cin >> name;
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
    cout << "The teacher has been added with Id : "<<id<<endl;
}
void add_courses(){
    Course course;
    cout << "Please Enter course Data"<< endl;
    cout << "Enter course Name : ";
    string name;
    cin >> name;
    course.set_name(name);
    cout << "Enter course hour : ";
    double hour;
    cin >> hour;
    course.set_hour(hour);
    Course_controller course_controller;
    int id = course_controller.add_course(course);
    cout << "The course has been added with Id : "<<id<<endl;
}
void student_chooses(){
    if (process==1){
            add_students();
        }else if(process==2){
            cout << "remove student"<<endl;
        }else if(process==3){
            cout << "edit student"<<endl;
        }else if(process==4){
            cout << "show student"<<endl;
        }else if(process==5){
                
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
            cout << "edit teacher"<<endl;
        }else if(process==4){
            cout << "show teacher"<<endl;
        }else if(process==5){
                
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
            cout << "edit course"<<endl;
        }else if(process==4){
            cout << "show course"<<endl;
        }else if(process==5){
                
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