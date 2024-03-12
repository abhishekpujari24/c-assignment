#include <iostream>
using namespace std;

class Student
{
    string name;
    string gender;
    int rollNumber;
    int marks[3];

public:
    Student()
    {
    }
    Student(string name, string gender, int rollNumber, int marks[])
    {
        this->name = name;
        this->gender = gender;
        this->rollNumber = rollNumber;
        this->marks[3] = marks[3];
    }

    void acceptStudent()
    {
        cout << "Enter student name -";
        cin >> name;
        cout << "Enter gender for student-";
        cin >> gender;
        cout << "Enter the roll number of student -";
        cin >> rollNumber;
        cout << "Enter the marks for subject 1 between 1 to 100" << endl;
        cin >> marks[0];
        cout << "Enter the marks for subject 2 between 1 to 100" << endl;
        cin >> marks[1];
        cout << "Enter the marks for subject 3 between 1 to 100" << endl;
        cin >> marks[2];
    }

    int getRollNumber()
    {
        return rollNumber;
    }
    int getPercentage()
    {
        int percentage;
        percentage = (marks[0] + marks[1] + marks[2]) * 100;
        // cout<<percentage<<endl;
        return percentage / 300;
    }
    void printStudent()
    {
        cout << "NAME-" << name << endl;
        cout << "GENDER-" << gender << endl;
        cout << "ROLL NUMBER -" << rollNumber << endl;
        cout << "PERCENTAGE -" << getPercentage() << endl;
    }
};

void sortRecords(Student *sptr, int size)
{
    Student temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (sptr[j].getRollNumber() > sptr[j + 1].getRollNumber())
            {
                temp = sptr[j];
                sptr[j] = sptr[j + 1];
                sptr[j + 1] = temp;
            }
        }
    }+
}
int searchRecords(Student *sptr, int size)
{
    int i;
    int roll_no;
    cout << "Enter roll no  -";
    cin >> roll_no;
    for (int i = 0; i < size; i++)
    {
        if (sptr[i].getRollNumber() == roll_no)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size;
    int index = 0;
    cout << "Enter how much student to register  -";
    cin >> size;
    Student *sptr = new Student[size];
    int choice;
    do
    {
        cout << "Enter 0 for EXIT" << endl;
        cout << "Enter 1 for student registration" << endl;
        cout << "Enter 2 for Search student" << endl;
        cout << "Enter 3 for sort student" << endl;
        cout << "Enter 4 for display student" << endl;
        cout << "Enter your choice -";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "THANK YOU............................." << endl;
            break;
        case 1:
            if (/* condition */)
            {
                /* code */
            }
            (index<size)
            sptr[index++].acceptStudent();
            cout<<"You Exist the limit for student registration"<<endl;
            //index++;
            break;

        case 2:
        index=searchRecords(sptr, size);
        if(index!=-1)
            sptr[index].printStudent();
            else
            cout<<"Student not found!!";
            break;
        case 3:
            sortRecords(sptr, index);
            for(int i=0;i<index;i++)
            {
                sptr[i].printStudent();
            }
            break;
        case 4:
          //  sptr[searchRecords(sptr, index)].printStudent();
          for(int i=0;i<index;i++)
          {
            sptr[i].printStudent();
          }
            break;
        default:
            break;
        }
    } while (choice != 0);

    return 0;
}

// Student **ptr= new Student*[10];
// ptr[0]=new Student;
// ptr[0]->acceptStudent();
// ptr[0]->printStudent();
