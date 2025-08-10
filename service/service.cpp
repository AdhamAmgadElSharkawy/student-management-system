#include "../validation/validation.cpp"
// student service
class Student_service{
    public:
        virtual int add_student(Student student) = 0;
        virtual Student get_student_by_id(int id) = 0;
};
class Student_service_implementation : public Student_service{
    private:
        Student_repository_implementation student_repository;
        Student_validation student_validation;
        Full_capasity full_data; 
        Student student_result;
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
        Student get_student_by_id(int id){
            student_result = student_repository.get_student_by_id(id);
            if (student_result.get_id()==-1){
                cout << "the student with id "<<id<<"Not exist"<<endl;
            }
            return student_result;
        }

};
// course service
class Course_service{
    public:
        virtual int add_course(Course course) = 0;
        virtual Course get_course_by_id(int id) = 0;
};
class Course_service_implementation : public Course_service{
    private:
        Course_repository_implementation course_repository;
        Course_validation course_validation;
        Full_capasity full_data;
        Course course_result;
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
        Course get_course_by_id(int id){
            course_result = course_repository.get_course_by_id(id);
            if (course_result.get_id()==-1){
                cout << "the course with id "<<id<<"Not exist"<<endl;
            }
            return course_result;
        }
};
// teacher service
class Teacher_service{
    public:
        virtual int add_teacher(Teacher teacher) = 0;
        virtual Teacher get_teacher_by_id(int id) = 0;
};
class Teacher_service_implementation : public Teacher_service{
    private:
        Teacher_repository_implementation teacher_repository;
        Teacher_validation teacher_validation;
        Full_capasity full_data;
        Teacher teacher_result;
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
        Teacher get_teacher_by_id(int id){
            teacher_result = teacher_repository.get_teacher_by_id(id);
            if (teacher_result.get_id()==-1){
                cout << "the teacher with id "<<id<<"Not exist"<<endl;
            }
            return teacher_result;
        }
};