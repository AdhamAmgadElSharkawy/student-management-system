#include "../service/service.cpp"
class Student_controller {
    private:
        Student_service_implementation student_service;
    public:
        int add_student(Student student){
            return student_service.add_student(student);
        }
};

class Course_controller {
    private:
        Course_service_implementation course_service;
    public:
        int add_course(Course course){
            return course_service.add_course(course);
    }
};
