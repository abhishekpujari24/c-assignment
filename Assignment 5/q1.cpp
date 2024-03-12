/*Q1. Implement following classes. Test all functionalities in main().
Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate shoud be of
type date.
Cretae a class Employee with data members id, sal, dept and joining date. The joining date should
be of type date.
Employee class should be inherited from Person.
Implement the above class as per the class Hirerachy and test the functunalities.*/

#include <iostream>
using namespace std;

class Date
{

public:
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 0;
        month = 0;
        year = 0;
    }

    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void acceptdate()
    {
        cout << "enter day:" << endl;
        cin >> day;
        cout << "enter month:" << endl;
        cin >> month;
        cout << "enter year" << endl;
        cin >> year;
    }

    void displayday()
    {
        cout << "DD-MM-YY" << day << month << year << endl;
    }

    int getday()
    {
        return day;
    }

    void setday(int day)
    {
        this->day = day;
    }

    int setmonth()
    {
        return month;
    }

    void setmonth(int month)
    {
        this->month = month;
    }
    int getyear()
    {
        return year;
    }
    void setyear(int year)
    {
        this->year = year;
    }

    void displaydate()
    {
        cout << "DD-MM-YY" << day << month << year << endl;
    }
};

class Person
{
public:
    string name;
    string add;
    Date birthdate;

    Person()
    {
        name = "";
        add = "";
    }

    Person(string name, string add)
    {
    }

    void acceptpersondata()
    {
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter address" << endl;
        cin >> add;

        cout << "Enter birthday: " << endl;
        birthdate.acceptdate();
    };

    void displaypersondata()
    {
        cout << "name is :" << name << endl;
        cout << "Address is :" << add << endl;
        cout << "birthdate is :" << endl;
        birthdate.displaydate();
    }
};

class Employee : public Person
{
    int id;
    double sal;
    string dept;
    Date doj;
public:
    Employee()
    {
        id = 0;
        sal = 0.0;
        dept = "";
    }

    Employee(int id, int sal, string dept)
    {
        this->id = id;
        this->sal = sal;
        this->dept=dept;
    }


    void acceptempdata()
    {
        acceptpersondata();
        cout<<"Enter id:"<<endl;
        cin>>id;
        cout<<"Enter salery:"<<endl;
        cin>>sal;
        cout<<"Enter Dept"<<endl;
        cin>>dept;
        cout<<"Enter date of joining "<<endl;
        doj.acceptdate();
        


    }

    void displaydata()
    {
         this->displaypersondata();
        cout<< "Employee ID is "<<id<<endl;
        cout<<"Salary is :"<<sal<<endl;
        cout<<"date of joining is:" <<endl;
        doj.displaydate();
    }

    
};



int main()
{
    Employee *e1;
    Person *p1;
    int choice;
    do
    {
        cout << "Enter 0 for exit" << endl;
        cout << "Enetr 1 for create employee object " << endl;
        cout << "Enter 2 for accept Employee details" << endl;
        cout << "Enter 3 for display Employee details" << endl;
        cout << "enter 4 for create person class object" << endl;
        cout << "enter 5 for accept person details" << endl;
        cout << "enter 6 for display person details" << endl;
        cout << "Enter your choice" << endl;
        cin>>choice;
        switch (choice)
        {
        case 0:
            cout << "THANK YOU...................................." << endl;
            break;
        case 1:
            e1 = new Employee;
            break;
        case 2:
            e1->acceptempdata();

            break;
        case 3:
            e1->displaydata();

            break;
        case 4:
            p1 = new Person;
            break;
        case 5:
            p1->acceptpersondata();
            break;
        case 6:
            p1->displaypersondata();
            break;

        default:
        cout<<"Enter valid choice"<<endl;
            break;
        }
    
    }while(choice!=0);
}