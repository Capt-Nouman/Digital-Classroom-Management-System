<div align="center">

# 🎓 Digital Classroom Management System

### C++ Object-Oriented Programming Project

**University of Azad Jammu & Kashmir · Department of Computer Science · 2nd Semester**

<p>
  <img src="https://img.shields.io/badge/C%2B%2B-17%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++">
  <img src="https://img.shields.io/badge/OOP-Object--Oriented-10B981?style=for-the-badge" alt="OOP">
  <img src="https://img.shields.io/badge/Project-Academic-C59A3A?style=for-the-badge" alt="Academic">
  <img src="https://img.shields.io/badge/Semester-2nd-123B5D?style=for-the-badge" alt="2nd Semester">
</p>

</div>

<p align="center">
  <img src="assets/project-banner.svg" alt="Digital Classroom Management System Banner" width="100%">
</p>

---

## 📌 About the Project

**Digital Classroom Management System** is a **console-based C++ academic project** developed to demonstrate core **Object-Oriented Programming (OOP)** concepts in a practical classroom-management scenario.

The program models different user roles and academic courses using:

- Classes & Objects
- Encapsulation
- Inheritance
- Polymorphism
- Abstraction
- Constructors
- Function Overriding
- Virtual Functions
- Access Specifiers
- `vector`
- Dynamic Memory

> **Scope:** This README describes the supplied console-based C++ source only. It does not claim GUI, database, networking, or executable-distribution features.

---

## ✨ Highlights

| Area | Implementation |
|---|---|
| 🔐 Authentication | Role → Username → Password → Authentication |
| 👨‍🎓 Student | Student-specific dashboard |
| 👨‍🏫 Teacher | Teacher-specific dashboard |
| 🧬 Inheritance | `Student` and `Teacher` inherit from `User` |
| 🔄 Runtime Polymorphism | Virtual `showDashboard()` |
| 📚 Courses | 5 `Course` objects stored in `vector<Course>` |
| 🧠 OOP Practice | Encapsulation, inheritance, polymorphism, constructors |
| 💾 Memory | Dynamic object creation with `new` and cleanup with `delete` |

---

## 🖼️ System Architecture

<p align="center">
  <img src="assets/class-architecture.svg" alt="Class Architecture" width="90%">
</p>

The project is centered around the `User` base class. `Student` and `Teacher` extend it and override `showDashboard()`. `Course` independently models academic course information.

---

## 🔐 Authentication Flow

<p align="center">
  <img src="assets/program-flow.svg" alt="Program Flow" width="82%">
</p>

### Login Sequence

```text
Role Selection
      ↓
Username
      ↓
Password
      ↓
Authentication
      ↓
Dashboard
```

### Demo Credentials

| Role | Username | Password |
|---|---|---|
| Student | `student` | `student123` |
| Teacher | `teacher` | `teacher123` |

> ⚠️ Credentials are hard-coded in the educational source and are intended for demonstration only.

---

## 👨‍🎓 Student Dashboard

```text
============================================
           STUDENT DASHBOARD
============================================
Student: Student
Role: Student

1. View Courses
2. View Attendance
3. View Assignments
4. View Results
```

## 👨‍🏫 Teacher Dashboard

```text
============================================
           TEACHER DASHBOARD
============================================
Teacher: Teacher
Role: Teacher

1. Manage Courses
2. Manage Attendance
3. Manage Assignments
4. Manage Results
```

> **Implementation note:** These dashboard options are currently displayed as menu text. The supplied source does not implement interactive selection for them.

---

## 📚 Available Courses

| Code | Course | Teacher |
|:---:|---|---|
| `CS-201` | Object Oriented Programming | Dr. Ahmed |
| `CS-202` | Data Structures and Algorithms | Dr. Ali |
| `CS-203` | Database Systems | Dr. Hamza |
| `CS-204` | Digital Logic Design | Dr. Usman |
| `CS-205` | Computer Organization | Dr. Bilal |

---

## 🧩 OOP Concepts Demonstrated

### 1. Classes & Objects

The project defines four main classes:

```cpp
class User
class Student
class Teacher
class Course
```

### 2. Encapsulation

`Course` keeps its data members private:

```cpp
class Course
{
private:
    string code;
    string title;
    string teacher;
};
```

`User` uses protected members so derived classes can access common user information:

```cpp
protected:
    string name;
    string role;
```

### 3. Inheritance

```cpp
class Student : public User
```

```cpp
class Teacher : public User
```

Both derived classes reuse the common functionality of `User`.

### 4. Polymorphism

The base class declares:

```cpp
virtual void showDashboard()
```

Derived classes override it:

```cpp
void showDashboard() override
```

### 5. Runtime Polymorphism

```cpp
User* currentUser = nullptr;

currentUser = new Student("Student");
// or
currentUser = new Teacher("Teacher");

currentUser->showDashboard();
```

The `User*` pointer can refer to different derived objects, and the appropriate dashboard is selected at runtime.

### 6. Constructors

```cpp
Student(string n) : User(n, "Student") {}
Teacher(string n) : User(n, "Teacher") {}
```

### 7. Dynamic Memory

```cpp
delete currentUser;
```

### 8. Collection of Objects

```cpp
vector<Course> courses;
```

---

## 🏗️ Class Hierarchy

```text
                         ┌─────────────────┐
                         │      User       │
                         │   Base Class    │
                         ├─────────────────┤
                         │ name            │
                         │ role            │
                         │ showDashboard() │
                         └────────┬────────┘
                                  │
                    ┌─────────────┴─────────────┐
                    │                           │
             ┌──────▼──────┐             ┌──────▼──────┐
             │   Student   │             │   Teacher   │
             ├─────────────┤             ├─────────────┤
             │ Dashboard   │             │ Dashboard   │
             │ Override    │             │ Override    │
             └─────────────┘             └─────────────┘

                         ┌─────────────────┐
                         │     Course      │
                         ├─────────────────┤
                         │ code            │
                         │ title           │
                         │ teacher         │
                         │ display()       │
                         └─────────────────┘
```

---

## 🔄 Program Flow

```text
Start
  │
  ▼
Display System Title
  │
  ▼
Select Role
  │
  ▼
Enter Username
  │
  ▼
Enter Password
  │
  ▼
Authenticate
  │
  ├── Invalid ──→ Exit
  │
  ▼
Create Student / Teacher Object
  │
  ▼
Runtime Polymorphism
  │
  ▼
Display Dashboard
  │
  ▼
Create Course Objects
  │
  ▼
Display Available Courses
  │
  ▼
System Status: ACTIVE
  │
  ▼
Delete User Object
  │
  ▼
End
```

---

## 💻 Technologies Used

| Technology | Purpose |
|---|---|
| **C++** | Main programming language |
| **Object-Oriented Programming** | Program architecture |
| `iostream` | Console input/output |
| `string` | Text data |
| `vector` | Collection of course objects |

---

## 📁 Repository Structure

```text
Digital-Classroom-Management-System/
│
├── DigitalClassroom.cpp
├── README.md
├── Project-Report.pdf
│
└── assets/
    ├── project-banner.svg
    ├── class-architecture.svg
    └── program-flow.svg
```

> If your actual `.cpp` filename is different, keep the README structure and replace `DigitalClassroom.cpp` with your actual filename.

---

## 🧪 Testing

| Test Case | Condition | Expected Result |
|---|---|---|
| Student Login | Student + `student` + `student123` | Student dashboard |
| Teacher Login | Teacher + `teacher` + `teacher123` | Teacher dashboard |
| Invalid Role | Value other than `1` or `2` | Invalid role message |
| Invalid Login | Wrong credentials | Invalid login message |
| Course Display | Successful login | Five courses displayed |
| Polymorphism | Derived object through `User*` | Correct dashboard function |

---

## 📄 Project Documentation

The accompanying project report covers:

- Introduction
- Project Overview
- Problem Statement
- Objectives
- System Design & Classes
- C++ OOP Concepts
- Detailed Code Explanation
- Runtime Polymorphism
- Authentication & Role Handling
- Course Management
- Program Flow
- Testing & Expected Output
- Advantages

---

## ⚠️ Current Scope

The supplied source currently **does not implement**:

- ❌ GUI
- ❌ Database connectivity
- ❌ Networking
- ❌ File-based user storage
- ❌ Real password security
- ❌ Interactive dashboard menu operations

This keeps the project focused on **C++ OOP concepts appropriate for the academic project**.

---

## 🎓 Academic Information

| | |
|---|---|
| **University** | University of Azad Jammu & Kashmir |
| **Department** | Computer Science |
| **Semester** | 2nd Semester |
| **Course** | C++ / Object-Oriented Programming |
| **Project** | Digital Classroom Management System |
| **Language** | C++ |
| **Paradigm** | Object-Oriented Programming |

---

<div align="center">

### 🎓 Digital Classroom Management System

**C++ OOP Academic Project · UAJK · 2nd Semester**

</div>
