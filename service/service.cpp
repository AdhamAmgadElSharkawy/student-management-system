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
            if (student.get_name().size()==0||student.get_name().size()<5||student.get_name().size()>10){
                cout << "Invalid name"<<endl;
            }else if (student.get_age()>30||student.get_age()<18){
                cout << "invalid age"<<endl;
            }else if (student.get_phone_number()[0]!=0||
                    ((student.get_phone_number()[1]+student.get_phone_number()[2] != ('1'+'0'))&&
                    (student.get_phone_number()[1]+student.get_phone_number()[2] != ('1'+'1'))&&
                    (student.get_phone_number()[1]+student.get_phone_number()[2] != ('1'+'2'))&&
                    (student.get_phone_number()[1]+student.get_phone_number()[2] != ('1'+'5')))
                    ||student.get_phone_number().size()!=11) {
                cout << "invalid phone number"<<endl;
            }else if (student.get_gpa()>4 || student.get_gpa()<0){
                cout << "Invalid GPA"<<endl;
            }else{
                return student_repository.add_student(student);
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