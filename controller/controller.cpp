#include "../service/service.cpp"
// Student_controller
class Student_controller {
    private:
        Student_service_implementation student_service;
    public:
        int add_student(Student student){
            return student_service.add_student(student);
        }
};

// Course_controller
class Course_controller {
    private:
        Course_service_implementation course_service;
    public:
        int add_course(Course course){
            return course_service.add_course(course);
    }
};

// Teacher_controller
class Teacher_controller {
    private:
        Teacher_service_implementation teacher_service;
    public:
        int add_teacher(Teacher teacher){
            return teacher_service.add_teacher(teacher);
    }
};