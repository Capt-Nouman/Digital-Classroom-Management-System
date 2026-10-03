#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Base class
class User
{
protected:
    string name;
    string role;

public:
    User(string n, string r)
    {
        name = n;
        role = r;
    }

    virtual void showDashboard()
    {
        cout << "\nWelcome to Digital Classroom\n";
    }

    virtual ~User() {}
};

// Derived class: Student
class Student : public User
{
public:
    Student(string n) : User(n, "Student") {}

    void showDashboard() override
    {
        cout << "\n===== STUDENT DASHBOARD =====\n";
        cout << "Student: " << name << endl;
        cout << "Role: " << role << endl;
        cout << "1. View Courses\n";
        cout << "2. View Attendance\n";
        cout << "3. View Assignments\n";
        cout << "4. View Results\n";
    }
};

// Derived class: Teacher
class Teacher : public User
{
public:
    Teacher(string n) : User(n, "Teacher") {}

    void showDashboard() override
    {
        cout << "\n===== TEACHER DASHBOARD =====\n";
        cout << "Teacher: " << name << endl;
        cout << "Role: " << role << endl;
        cout << "1. Manage Courses\n";
        cout << "2. Manage Attendance\n";
        cout << "3. Manage Assignments\n";
        cout << "4. Manage Results\n";
    }
};

// Course class
class Course
{
private:
    string code;
    string title;
    string teacher;

public:
    Course(string c, string t, string tr)
    {
        code = c;
        title = t;
        teacher = tr;
    }

    void display()
    {
        cout << code << " | "
             << title << " | "
             << teacher << endl;
    }
};

int main()
{
    cout << "============================================\n";
    cout << "     DIGITAL CLASSROOM MANAGEMENT SYSTEM\n";
    cout << "============================================\n";

    string username;
    string password;
    int roleChoice;

    cout << "\nUsername: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    cout << "\nSelect Role:\n";
    cout << "1. Student\n";
    cout << "2. Teacher\n";
    cout << "Enter choice: ";
    cin >> roleChoice;

    User* currentUser = nullptr;

    if (roleChoice == 1 &&
        username == "student" &&
        password == "student123")
    {
        currentUser = new Student("Student");
    }
    else if (roleChoice == 2 &&
             username == "teacher" &&
             password == "teacher123")
    {
        currentUser = new Teacher("Teacher");
    }
    else
    {
        cout << "\nInvalid username, password or role!\n";
        return 0;
    }

    // Runtime polymorphism
    currentUser->showDashboard();

    cout << "\n===== AVAILABLE COURSES =====\n";

    vector<Course> courses =
    {
        Course("CS-201", "Object Oriented Programming", "Dr. Ahmed"),
        Course("CS-202", "Data Structures and Algorithms", "Dr. Ali"),
        Course("CS-203", "Database Systems", "Dr. Hamza"),
        Course("CS-204", "Digital Logic Design", "Dr. Usman"),
        Course("CS-205", "Computer Organization", "Dr. Bilal")
    };

    for (Course &course : courses)
    {
        course.display();
    }

    cout << "\nSystem Status: ACTIVE\n";
    cout << "Thank you for using Digital Classroom Management System.\n";

    delete currentUser;

    return 0;
}
