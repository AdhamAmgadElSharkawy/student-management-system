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
    public:
        int add_student(Student student){
            if (student_validation.validate_student(student)==1){
                int id = student_repository.add_student(student);
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
            if (course.get_name().size() == 0){
                cout << "Invalid name"<<endl;
            }else if (course.get_hour() < 0 ||course.get_hour()>3){
                cout << "Invalid course hours"<<endl;
            }else{
                return course_repository.add_course(course);
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
    public:
        int add_teacher(Teacher teacher){
            if (teacher.get_name().size()==0||teacher.get_name().size()<5||teacher.get_name().size()>10){
                cout << "Invalid name"<<endl;
            }else if (teacher.get_age()>30||teacher.get_age()<18){
                cout << "invalid age"<<endl;
            }else if (teacher.get_phone_number()[0]!=0||
                    ((teacher.get_phone_number()[1]+teacher.get_phone_number()[2] != ('1'+'0'))&&
                    (teacher.get_phone_number()[1]+teacher.get_phone_number()[2] != ('1'+'1'))&&
                    (teacher.get_phone_number()[1]+teacher.get_phone_number()[2] != ('1'+'2'))&&
                    (teacher.get_phone_number()[1]+teacher.get_phone_number()[2] != ('1'+'5')))
                    ||teacher.get_phone_number().size()!=11) {
                cout << "invalid phone number"<<endl;
            }else if(teacher.get_salary()<0||teacher.get_salary()>20000){
                cout << "Invalid Salary"<<endl;
            }else{
                return teacher_repository.add_teacher(teacher);
            }
            return -1;
        }
};