#include "../repository/repository.cpp"
class Student_validation{
    public:
        int validate_student(Student student){
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
                return 1;
            }
            return -1;
        }
};
class course_validation{
    public:
        int validate_course(Course course){
            if (course.get_name().size() == 0){
                cout << "Invalid name"<<endl;
            }else if (course.get_hour() < 0 ||course.get_hour()>3){
                cout << "Invalid course hours"<<endl;
            }else{
                return 1;
            }
            return -1;
        }
};