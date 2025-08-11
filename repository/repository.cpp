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
        virtual Student get_student_by_id(int id) = 0;
        virtual int edit_student(Student student) = 0;
};
// student repository implementation
class Student_repository_implementation : public Student_repository{
    private:
        Data data;
        Student invalid_student;
        int index =-1;
    public:
        int add_student(Student student){
            if (data.index_student == 50){
                return -1;
                
            }else{
                student.set_id(data.id_student++);
                data.students[data.index_student++]=student;
            }
            return student.get_id();
        }
        Student get_student_by_id(int id){
            for (int i = 0; i < data.index_student; i++)
            {
                if (data.students[i].get_id()==id){
                    return data.students[i];
                }
            }
            invalid_student.set_id(-1);
            return invalid_student;
        }
        int edit_student(Student student){
            for (int i = 0; i < data.index_student; i++)
            {
                if (data.students[i].get_id()==student.get_id()){
                    index = i;
                }
                break;
            }
            if (index ==-1){
                return -1;
            }else{
                data.students[index]=student;
                return index;
            }
        }

};
////////////// course repository interface
class Course_repository{
    public:
        virtual int add_course(Course courses) = 0;
        virtual Course get_course_by_id(int id) = 0;
        virtual int edit_course(Course course) = 0;
};
// course repository implementation
class Course_repository_implementation : public Course_repository{
    private:
        Data data;
        Course invalid_course;
        int index = -1;
    public:
        int add_course(Course course){
            if (data.index_course == 50){
                return -1;
            }else{
                course.set_id(data.id_course++);
                data.courses[data.index_course++]=course;
            }
            return course.get_id();
        }
        Course get_course_by_id(int id){
            for (int i = 0; i < data.index_course; i++)
            {
                if (data.courses[i].get_id()==id){
                    return data.courses[i];
                }
            }
            invalid_course.set_id(-1);
            return invalid_course;
        }
        int edit_course(Course course){
            for (int i = 0; i < data.index_course; i++)
            {
                if (data.courses[i].get_id()==course.get_id()){
                    index = i;
                }
                break;
            }
            if (index ==-1){
                return -1;
            }else{
                data.courses[index]=course;
                return index;
            }
        }
};
////////////// teacher repository interface
class Teacher_repository{
    public:
        virtual int add_teacher(Teacher teachers) = 0;
        virtual Teacher get_teacher_by_id(int id) = 0;
        virtual int edit_teacher(Teacher Teacher) = 0;
};
// teacher repository implementation
class Teacher_repository_implementation : public Teacher_repository{
    private:
        Data data;
        Teacher invalid_teacher;
        int index = -1;
    public:
        int add_teacher(Teacher teacher){
            if (data.index_teacher == 50){
                return -1;
            }else{
                teacher.set_id(data.id_teacher++);
                data.teachers[data.index_teacher++]=teacher;
            }
            return teacher.get_id();
        }
        Teacher get_teacher_by_id(int id){
            for (int i = 0; i < data.index_teacher; i++)
            {
                if (data.teachers[i].get_id()==id){
                    return data.teachers[i];
                }
            }
            invalid_teacher.set_id(-1);
            return invalid_teacher;
        }
        int edit_teacher(Teacher teacher){
            for (int i = 0; i < data.index_teacher; i++)
            {
                if (data.teachers[i].get_id()==teacher.get_id()){
                    index = i;
                }
                break;
            }
            if (index ==-1){
                return -1;
            }else{
                data.teachers[index]=teacher;
                return index;
            }
        }
};