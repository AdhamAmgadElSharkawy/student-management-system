#include "../repository/repository.cpp"
// student service
class Student_service{
    public:
        virtual int add_student(Student student) = 0;
};
class Student_service_implementation : public Student_service{
    private:
        Student_repository_implementation student_repository;
    public:
        int add_student(Student student){
            return student_repository.add_student(student);
        }
};
// course service
class Course_service{
    public:
        virtual int add_course(Course course) = 0;
};
class Course_service_implementation : public Course_service{
    private:
        Course_repository_implementation course_repository;
    public:
        int add_course(Course course){
            return course_repository.add_course(course);
        }
};
// teacher service
class Teacher_service{
    public:
        virtual int add_teacher(Teacher teacher) = 0;
};
class Teacher_service_implementation : public Teacher_service{
    private:
        Teacher_repository_implementation teacher_repository;
    public:
        int add_teacher(Teacher teacher){
            return teacher_repository.add_teacher(teacher);
        }
};