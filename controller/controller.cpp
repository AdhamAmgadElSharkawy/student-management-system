#include "../service/service.cpp"
// Student_controller
class Student_controller {
    private:
        Student_service_implementation student_service;
        Student student_result;
    public:
        int add_student(Student student){
            return student_service.add_student(student);
        }
        void show_student_by_id(int id){
            student_result = student_service.get_student_by_id(id);
            if(student_result.get_id() != -1){
                cout <<"Id: "<<student_result.get_id()<<endl;
                cout<<"Name: "<<student_result.get_name()<<endl;
                cout <<"Age: "<<student_result.get_age()<<endl;
                cout <<"Phone Number: "<<student_result.get_phone_number()<<endl;
                cout <<"GPA: "<<student_result.get_gpa()<<endl;
            }
        }
        void update_student(Student student){
            student_service.edit_student(student);
        }
};

// Course_controller
class Course_controller {
    private:
        Course_service_implementation course_service;
        Course course_result;
    public:
        int add_course(Course course){
            return course_service.add_course(course);
    }
    void show_course_by_id(int id){
            course_result = course_service.get_course_by_id(id);
            if(course_result.get_id() != -1){
                cout<<"Name: "<<course_result.get_name()<<endl;
                cout <<"Id: "<<course_result.get_id()<<endl;
                cout << "Credit Hours "<<course_result.get_hour()<<endl;
            }
    }
    void update_course(Course course){
        course_service.edit_course(course);
    }
};

// Teacher_controller
class Teacher_controller {
    private:
        Teacher_service_implementation teacher_service;
        Teacher teacher_result;
    public:
        int add_teacher(Teacher teacher){
            return teacher_service.add_teacher(teacher);
    }
    void show_teacher_by_id(int id){
            teacher_result = teacher_service.get_teacher_by_id(id);
            if(teacher_result.get_id() != -1){
                cout <<"Id: "<<teacher_result.get_id()<<endl;
                cout<<"Name: "<<teacher_result.get_name()<<endl;
                cout <<"Age: "<<teacher_result.get_age()<<endl;
                cout <<"Phone Number: "<<teacher_result.get_phone_number()<<endl;
                cout <<"Salary: "<<teacher_result.get_salary()<<endl;
            }
    }
    void update_teacher(Teacher teacher){
            teacher_service.edit_teacher(teacher);
    }
};