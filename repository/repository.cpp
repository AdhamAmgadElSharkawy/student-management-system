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
};
// student repository implementation
class Student_repository_implementation : public Student_repository{
    private:
        Data data;
        Student invalid_student;
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

};
////////////// course repository interface
class Course_repository{
    public:
        virtual int add_course(Course courses) = 0;
        virtual Course get_course_by_id(int id) = 0;
};
// course repository implementation
class Course_repository_implementation : public Course_repository{
    private:
        Data data;
        Course invalid_course;
    public:
        int add_course(Course course){
            if (data.index_course == 50){
                return -1;
            }else{
                course.set_id(data.id_course++);
                data.courses[data.index_course]=course;
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
};
////////////// teacher repository interface
class Teacher_repository{
    public:
        virtual int add_teacher(Teacher teachers) = 0;
        virtual Teacher get_teacher_by_id(int id) = 0;
};
// teacher repository implementation
class Teacher_repository_implementation : public Teacher_repository{
    private:
        Data data;
        Teacher invalid_teacher;
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
};