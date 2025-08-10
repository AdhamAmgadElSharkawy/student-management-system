#include "../validation/validation.cpp"
// student service
class Student_service{
    public:
        virtual int add_student(Student student) = 0;
};
class Student_service_implementation : public Student_service{
    private:
        Student_repository_implementation student_repository;
        Student_validation student_validation;
        Full_capasity full_data; 
    public:
        int add_student(Student student){
            if (student_validation.validate_student(student)==1){
                int id = student_repository.add_student(student);
                if (id ==-1){
                    full_data.full("student");
                }else{
                    return id;
                }
            }
            return -1;
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
        Course_validation course_validation;
        Full_capasity full_data;
    public:
        int add_course(Course course){
            if (course_validation.validate_course(course)==1){
                int id = course_repository.add_course(course);
                if (id ==-1){
                    full_data.full("course");
                }else{
                    return id;
                }
            }
            return -1;
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
        Teacher_validation teacher_validation;
        Full_capasity full_data;
    public:
        int add_teacher(Teacher teacher){
            if (teacher_validation.validate_Teacher(teacher)==1){
                int id = teacher_repository.add_teacher(teacher);
                if (id ==-1){
                    full_data.full("teacher");
                }else{
                    return id;
                }
            }       
            return -1;    
        }
};