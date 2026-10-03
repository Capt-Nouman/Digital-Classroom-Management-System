#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ============================================================
// Base Class: User
// ============================================================

class User
{
protected:
    string name;
    string role;

public:

    // Constructor
    User(string n, string r)
    {
        name = n;
        role = r;
    }

    // Virtual function for runtime polymorphism
    virtual void showDashboard()
    {
        cout << "\nWelcome to Digital Classroom\n";
    }

    // Virtual destructor
    virtual ~User() {}
};


// ============================================================
// Derived Class: Student
// ============================================================

class Student : public User
{
public:

    // Constructor
    Student(string n) : User(n, "Student") {}

    // Function overriding
    void showDashboard() override
    {
        cout << "\n============================================\n";
        cout << "           STUDENT DASHBOARD\n";
        cout << "============================================\n";

        cout << "Student: " << name << endl;
        cout << "Role: " << role << endl;

        cout << "\n1. View Courses\n";
        cout << "2. View Attendance\n";
        cout << "3. View Assignments\n";
        cout << "4. View Results\n";
    }
};


// ============================================================
// Derived Class: Teacher
// ============================================================

class Teacher : public User
{
public:

    // Constructor
    Teacher(string n) : User(n, "Teacher") {}

    // Function overriding
    void showDashboard() override
    {
        cout << "\n============================================\n";
        cout << "           TEACHER DASHBOARD\n";
        cout << "============================================\n";

        cout << "Teacher: " << name << endl;
        cout << "Role: " << role << endl;

        cout << "\n1. Manage Courses\n";
        cout << "2. Manage Attendance\n";
        cout << "3. Manage Assignments\n";
        cout << "4. Manage Results\n";
    }
};


// ============================================================
// Course Class
// ============================================================

class Course
{
private:

    string code;
    string title;
    string teacher;

public:

    // Constructor
    Course(string c, string t, string tr)
    {
        code = c;
        title = t;
        teacher = tr;
    }

    // Display course information
    void display()
    {
        cout << code << " | "
             << title << " | "
             << teacher << endl;
    }
};


// ============================================================
// Main Function
// ============================================================

int main()
{
    cout << "============================================\n";
    cout << "     DIGITAL CLASSROOM MANAGEMENT SYSTEM\n";
    cout << "============================================\n";


    // --------------------------------------------------------
    // Variables
    // --------------------------------------------------------

    int roleChoice;
    string username;
    string password;

    User* currentUser = nullptr;


    // --------------------------------------------------------
    // Step 1: Select Role
    // --------------------------------------------------------

    cout << "\nSelect Role:\n";
    cout << "1. Student\n";
    cout << "2. Teacher\n";
    cout << "Enter choice: ";
    cin >> roleChoice;


    // --------------------------------------------------------
    // Validate Role
    // --------------------------------------------------------

    if (roleChoice != 1 && roleChoice != 2)
    {
        cout << "\nInvalid role selection!\n";
        return 0;
    }


    // --------------------------------------------------------
    // Step 2: Enter Username
    // --------------------------------------------------------

    cout << "\nUsername: ";
    cin >> username;


    // --------------------------------------------------------
    // Step 3: Enter Password
    // --------------------------------------------------------

    cout << "Password: ";
    cin >> password;


    // --------------------------------------------------------
    // Step 4: Authentication
    // --------------------------------------------------------

    if (roleChoice == 1)
    {
        // Student authentication

        if (username == "student" &&
            password == "student123")
        {
            currentUser = new Student("Student");
        }
        else
        {
            cout << "\nInvalid Student username or password!\n";
            return 0;
        }
    }

    else if (roleChoice == 2)
    {
        // Teacher authentication

        if (username == "teacher" &&
            password == "teacher123")
        {
            currentUser = new Teacher("Teacher");
        }
        else
        {
            cout << "\nInvalid Teacher username or password!\n";
            return 0;
        }
    }


    // --------------------------------------------------------
    // Runtime Polymorphism
    // --------------------------------------------------------

    currentUser->showDashboard();


    // --------------------------------------------------------
    // Available Courses
    // --------------------------------------------------------

    cout << "\n============================================\n";
    cout << "             AVAILABLE COURSES\n";
    cout << "============================================\n";

    vector<Course> courses =
    {
        Course(
            "CS-201",
            "Object Oriented Programming",
            "Dr. Ahmed"
        ),

        Course(
            "CS-202",
            "Data Structures and Algorithms",
            "Dr. Ali"
        ),

        Course(
            "CS-203",
            "Database Systems",
            "Dr. Hamza"
        ),

        Course(
            "CS-204",
            "Digital Logic Design",
            "Dr. Usman"
        ),

        Course(
            "CS-205",
            "Computer Organization",
            "Dr. Bilal"
        )
    };


    // --------------------------------------------------------
    // Display Courses
    // --------------------------------------------------------

    for (Course &course : courses)
    {
        course.display();
    }


    // --------------------------------------------------------
    // System Status
    // --------------------------------------------------------

    cout << "\n============================================\n";
    cout << "System Status: ACTIVE\n";
    cout << "============================================\n";

    cout << "\nThank you for using "
         << "Digital Classroom Management System.\n";


    // --------------------------------------------------------
    // Free Dynamic Memory
    // --------------------------------------------------------

    delete currentUser;

    return 0;
}
