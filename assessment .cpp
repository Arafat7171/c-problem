#include<iostream>
using namespace std;
class Person{
    //Data Members of Person
    //Base Class
    //Single inheritance
public:
    string name;
    string Gender;
    int age;
 Person(string name,
           string Gender,
           int age){
     cout<<"Person Constructor is called for"<<" "<<name<<endl;
     this->name=name;
     this->age=age;
     this->Gender=Gender;
     }
     void showPerson(){
     cout<<"Name:"<<this->name<<endl;
     cout<<"Age:"<<this->age<<endl;
     cout<<"Gender:"<<this->Gender<<endl;
     }
    };
    class Employee:virtual public Person{
        //Data Members of Employee
        //Single inheritance
        //Derived class
     protected:
        int Employeesalary;
        string EmployeeId;
        string Employeedesignation;
        int Workinghour;
     public:

       Employee( string name,
               string Gender,
                int age,
                int Employeesalary,
                string EmployeeId,
                string Employeedesignation,
                int Workinghour):Person( name,Gender, age){
           this->Employeesalary=Employeesalary;
           this->EmployeeId=EmployeeId;
           this->Employeedesignation=Employeedesignation;
           this->Workinghour=Workinghour;
           cout<<"Employee Constructor is called for"<<" "<<name<<endl;
           }
           void showEmployee(){
               showPerson();
           cout<<"Employee salary:"<< this->Employeesalary<<endl;
           cout<<"Employee Id:"<<this->EmployeeId<<endl;
           cout<<"Employee designation:"<< this->Employeedesignation<<endl;
           cout<<"Working Hour:"<<this->Workinghour<<endl;

           }
    };
    class Student:public Person{
        //Data Members of Student
        //Derived class
        //Single inheritance
protected:
    float CGPA;
    string section;
    string Id;
    string Department;
    string Institution;
    string semester;
public:
    Student(string name,
            string Gender,
            int age,
            float CGPA,
             string section,
              string Id,
              string Department,
              string Institution,
              string semester):Person(name,Gender,age){
              this->CGPA=CGPA;
              this->section=section;
              this->Id=Id;
              this->Department=Department;
              this->Institution=Institution;
              this->semester=semester;
              cout<<"Student Constructor is called for"<<name<<endl;
              }
              void showStudent(){
                   showPerson();
              cout<<"CGPA:"<<this->CGPA<<endl;
              cout<<"Section:"<<this->section<<endl;
              cout<<"ID:"<<this->Id<<endl;
              cout<<"Department:"<<this->Department<<endl;
              cout<<"Institution:"<<this->Institution<<endl;
              cout<<"Semester:"<<this->semester<<endl;

              }
    };
class Faculty:public Employee{
protected:
    int numberofcourse;
public:
    Faculty( string name,
               string Gender,
                int age,
                int Employeesalary,
                string EmployeeId,
                string Employeedesignation,
                int Workinghour,
                int numberofcourse):Employee( name,Gender,age,Employeesalary,EmployeeId,Employeedesignation,Workinghour),Person(name,Gender,age){
                this->numberofcourse=numberofcourse;
                cout<<"Faculty Constructor is called for"<<name<<endl;
                }
                void showFaculty(){
                showEmployee();
                cout<<"Number of Course:"<<this->numberofcourse<<endl;
                }

    };







int main()
{
    Student s("Arafat","Male",20,3.75,"E","2000","CSE","AIUB","3");
    Employee e("Farhan","Male",20,7000,"220","DHAKA",23);
    s.showStudent();
    e.showEmployee();



    return 0;
}