#include "../repository/repository.cpp"
class Student_validation{
    public:
        int validate_student(Student student){
            if (student.get_name().size()==0||student.get_name().size()<5||student.get_name().size()>10){
                cout << "Invalid name"<<endl;
            }else if (student.get_age()>30||student.get_age()<18){
                cout << "invalid age"<<endl;
            }else if(student.get_phone_number()[0] != '0' ||
						(
						  (student.get_phone_number()[1] + student.get_phone_number()[2]) != ('1' + '1') &&
						  (student.get_phone_number()[1] + student.get_phone_number()[2]) != ('1' + '2') &&
						  (student.get_phone_number()[1] + student.get_phone_number()[2]) != ('1' + '0') &&
						  (student.get_phone_number()[1] + student.get_phone_number()[2]) != ('1' + '5')
					    ) 
						|| student.get_phone_number().size() != 11
					){ 
				cout<<"Invalid Phone Number !"<<endl;
			}else if (student.get_gpa()>4 || student.get_gpa()<0){
                cout << "Invalid GPA"<<endl;
            }else{
                return 1;
            }
            return -1;
        }
};
class Course_validation{
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
class Teacher_validation{
    public:
        int validate_Teacher(Teacher teacher){
            if (teacher.get_name().size()==0||teacher.get_name().size()<5||teacher.get_name().size()>10){
                cout << "Invalid name"<<endl;
            }else if (teacher.get_age()>30||teacher.get_age()<18){
                cout << "invalid age"<<endl;
            }else if(teacher.get_phone_number()[0] != '0' ||
						(
						  (teacher.get_phone_number()[1] + teacher.get_phone_number()[2]) != ('1' + '1') &&
						  (teacher.get_phone_number()[1] + teacher.get_phone_number()[2]) != ('1' + '2') &&
						  (teacher.get_phone_number()[1] + teacher.get_phone_number()[2]) != ('1' + '0') &&
						  (teacher.get_phone_number()[1] + teacher.get_phone_number()[2]) != ('1' + '5')
					    ) 
						|| teacher.get_phone_number().size() != 11
					){ 
				cout<<"Invalid Phone Number !"<<endl;
			}else if (teacher.get_salary()<0||teacher.get_salary()>20000){
                cout << "Invalid Salary"<<endl;
            }else{
                return 1;
            }
            return -1;
        }
};
class Full_capasity_or_not_exist{
    public:
        void full (string s){
            cout << "full"<<s<<endl;
        }
        void not_exist(string per , int id){
            cout << "the "<<per<<" with id "<<id<<" Not exist"<<endl;
        }
};
