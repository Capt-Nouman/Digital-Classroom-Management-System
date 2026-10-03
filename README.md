
# Digital Classroom Management System

A C++ Object-Oriented Programming project developed as a 2nd Semester University Project.

The project demonstrates fundamental Object-Oriented Programming concepts through a simple Digital Classroom Management System with Student and Teacher roles and course management.

---

## 📌 Project Overview

The **Digital Classroom Management System** is a console-based C++ application designed to demonstrate the practical use of Object-Oriented Programming concepts.

The system contains a base `User` class with two derived classes:

- `Student`
- `Teacher`

It also includes a separate `Course` class for representing academic courses.

The project demonstrates inheritance, encapsulation, polymorphism, constructors, virtual functions, function overriding, dynamic memory, and object collections using `vector`.

---

## 🎯 Objectives

- Demonstrate the fundamentals of C++ Object-Oriented Programming.
- Implement classes and objects.
- Demonstrate inheritance using Student and Teacher roles.
- Implement runtime polymorphism.
- Demonstrate encapsulation using access specifiers.
- Use constructors for object initialization.
- Demonstrate function overriding and virtual functions.
- Manage multiple Course objects using `vector`.
- Implement a simple username and password based authentication system.

---

## ✨ Features

- Student Login
- Teacher Login
- Role Selection
- Student Dashboard
- Teacher Dashboard
- Course Display
- Runtime Polymorphism
- Role-Based Dashboard Behavior
- Multiple Course Objects using `vector`

---

## 🧠 Object-Oriented Programming Concepts

### 1. Classes and Objects

The project contains the following classes:

- `User`
- `Student`
- `Teacher`
- `Course`

Objects are created from these classes to represent users and courses.

---

### 2. Encapsulation

Encapsulation is demonstrated by controlling access to class data members.

The `Course` class keeps its data members private:

```cpp
class Course
{
private:
    string code;
    string title;
    string teacher;
};
````

This prevents direct access to these members from outside the class.

---

### 3. Inheritance

The `Student` and `Teacher` classes inherit from the `User` base class.

```cpp
class Student : public User
```

```cpp
class Teacher : public User
```

This allows both derived classes to reuse the common properties of the `User` class.

---

### 4. Polymorphism

Runtime polymorphism is implemented using the virtual `showDashboard()` function.

The base class contains:

```cpp
virtual void showDashboard()
```

The derived classes override it:

```cpp
void showDashboard() override
```

A base-class pointer is then used:

```cpp
User* currentUser = nullptr;
```

The appropriate dashboard is selected at runtime.

---

### 5. Abstraction

The `User` class provides a common structure for different types of users.

Both Student and Teacher use the same base-class interface while providing their own dashboard behavior.

---

### 6. Constructors

Constructors are used to initialize objects.

For example:

```cpp
User(string n, string r)
{
    name = n;
    role = r;
}
```

The `Student` and `Teacher` classes also use constructors:

```cpp
Student(string n) : User(n, "Student") {}
```

```cpp
Teacher(string n) : User(n, "Teacher") {}
```

---

### 7. Function Overriding

The `Student` and `Teacher` classes override the `showDashboard()` function of the `User` class.

```cpp
void showDashboard() override
```

Each class provides its own dashboard implementation.

---

### 8. Virtual Functions

The `showDashboard()` function is declared as virtual in the base class:

```cpp
virtual void showDashboard()
```

This allows the correct derived-class function to be called through a `User` pointer.

---

### 9. Access Specifiers

The project uses different C++ access specifiers:

* `public`
* `protected`
* `private`

The `User` class uses `protected` members:

```cpp
protected:
    string name;
    string role;
```

The `Course` class uses `private` members:

```cpp
private:
    string code;
    string title;
    string teacher;
```

---

### 10. Dynamic Memory

The project creates Student and Teacher objects dynamically using `new`.

```cpp
currentUser = new Student("Student");
```

or:

```cpp
currentUser = new Teacher("Teacher");
```

The allocated object is released using:

```cpp
delete currentUser;
```

---

### 11. Object Collection using Vector

Multiple Course objects are stored using:

```cpp
vector<Course> courses;
```

The project contains five sample courses.

---

## 🏗️ Class Structure

```text
                    User
                   /    \
                  /      \
             Student    Teacher


                   Course
```

### User

The base class containing:

* Name
* Role
* Dashboard function

### Student

Derived from `User` and provides a Student Dashboard.

### Teacher

Derived from `User` and provides a Teacher Dashboard.

### Course

Represents academic course information:

* Course Code
* Course Title
* Teacher

---

## 🔐 Authentication

The project contains simple username and password authentication.

### Student Account

```text
Username: student
Password: student123
Role: Student
```

### Teacher Account

```text
Username: teacher
Password: teacher123
Role: Teacher
```

If the entered username, password, or role is incorrect, the system displays:

```text
Invalid username, password or role!
```

> The credentials are hard-coded in the source code for educational demonstration purposes.

---

## 👨‍🎓 Student Dashboard

After successful Student authentication, the system displays:

```text
===== STUDENT DASHBOARD =====

Student: Student
Role: Student

1. View Courses
2. View Attendance
3. View Assignments
4. View Results
```

---

## 👨‍🏫 Teacher Dashboard

After successful Teacher authentication, the system displays:

```text
===== TEACHER DASHBOARD =====

Teacher: Teacher
Role: Teacher

1. Manage Courses
2. Manage Attendance
3. Manage Assignments
4. Manage Results
```

---

## 📚 Available Courses

The project contains the following sample Course objects:

| Course Code | Course                         | Teacher   |
| ----------- | ------------------------------ | --------- |
| CS-201      | Object Oriented Programming    | Dr. Ahmed |
| CS-202      | Data Structures and Algorithms | Dr. Ali   |
| CS-203      | Database Systems               | Dr. Hamza |
| CS-204      | Digital Logic Design           | Dr. Usman |
| CS-205      | Computer Organization          | Dr. Bilal |

---

## 🔄 Runtime Polymorphism

Runtime polymorphism is one of the main OOP implementations in this project.

The program creates a base-class pointer:

```cpp
User* currentUser = nullptr;
```

For a Student:

```cpp
currentUser = new Student("Student");
```

For a Teacher:

```cpp
currentUser = new Teacher("Teacher");
```

The dashboard is then called through:

```cpp
currentUser->showDashboard();
```

Because `showDashboard()` is virtual, the appropriate overridden function is executed according to the actual object.

---

## 🛠️ Technologies Used

* **C++**
* **Object-Oriented Programming**
* **C++ Standard Library**
* **STL Vector**
* **Console Input/Output**

---

## 📂 Project Structure

```text
Digital-Classroom-Management-System/
│
├── Digital_Classroom_Management_System.cpp
├── Digital_Classroom_Management_System_OOP_Project_Report.pdf
├── README.md
└── LICENSE
```

---

## ▶️ How to Run

Compile the source code using a C++ compiler:

```bash
g++ Digital_Classroom_Management_System.cpp -o DigitalClassroom
```

Run the program:

```bash
./DigitalClassroom
```

---

## 🖥️ Project Output

### Student Dashboard

> Screenshot will be added here.

![Student Dashboard](screenshots/student-dashboard.png)

### Teacher Dashboard

> Screenshot will be added here.

![Teacher Dashboard](screenshots/teacher-dashboard.png)

### Available Courses

> Screenshot will be added here.

![Available Courses](screenshots/courses.png)

---

## 📄 Project Documentation

A complete project report is included in this repository.

The report explains:

* Project Overview
* Problem Statement
* Objectives
* System Design
* Classes
* OOP Concepts
* Inheritance
* Encapsulation
* Polymorphism
* Constructors
* Virtual Functions
* Function Overriding
* Authentication
* Course Management
* Program Flow
* Testing
* Advantages

---

## 🎓 Academic Information

**Project:** Digital Classroom Management System
**Course:** Object-Oriented Programming
**Semester:** 2nd Semester
**Program:** BS Computer Science
**University:** University of Azad Jammu & Kashmir

---

## 👨‍💻 Author

**Nouman Majeed**

BS Computer Science
University of Azad Jammu & Kashmir

---

## 📜 License

This project is developed for educational and academic purposes.
