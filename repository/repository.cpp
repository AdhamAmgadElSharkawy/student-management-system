#include "../model/models.cpp"
class Data{
    public:
        static Student students[50];
        static int index_student;
        static int id_student;
        static Course courses[50];
        static int index_course;
        static int id_course;
        static Teacher teachers[50];
        static int index_teacher;
        static int id_teacher;
};
Student Data::students[50];
int Data::index_student=0;
int Data::id_student=1;
Course Data::courses[50];
int Data::index_course=0;
int Data::id_course=1;
Teacher Data::teachers[50];
int Data::index_teacher=0;
int Data::id_teacher=1;
////////////// student repository interface
class Student_repository{
    public:
        virtual int add_student(Student student) = 0;
};
// student repository implementation
class Student_repository_implementation : public Student_repository{
    private:
        Data data;
    public:
        int add_student(Student student){
            if (data.index_student == 50){
                cout << "full capacity of students"<<endl;
                
            }else{
                student.set_id(data.id_student++);
                data.students[data.index_student++]=student;
            }
            return student.get_id();
        }

};
////////////// course repository interface
class Course_repository{
    public:
        virtual int add_course(Course courses) = 0;
};
// course repository implementation
class Course_repository_implementation : public Course_repository{
    private:
        Data data;
    public:
        int add_course(Course course){
            if (data.index_course == 50){
                cout << "full capacity of courses"<<endl;
            }else{
                course.set_id(data.id_course++);
                data.courses[data.index_course]=course;
            }
            return course.get_id();
        }
};
////////////// teacher repository interface
class Teacher_repository{
    public:
        virtual int add_teacher(Teacher teachers) = 0;
};
// teacher repository implementation
class Teacher_repository_implementation : public Teacher_repository{
    private:
        Data data;
    public:
        int add_teacher(Teacher teacher){
            if (data.index_teacher == 50){
                cout << "full capacity of courses"<<endl;
            }else{
                teacher.set_id(data.id_teacher++);
                data.teachers[data.index_teacher++]=teacher;
            }
            return teacher.get_id();
        }
};