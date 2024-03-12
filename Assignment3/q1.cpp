#include <iostream>
using namespace std;

class Time
{

    int hrs;
    int min;
    int sec;

public:
    Time()
    {
        hrs = 0;
        min = 0;
        sec = 0;
    }

    Time(int h, int m, int s)
    {
        this->hrs = h;
        this->min = m;
        this->sec = s;
    }

    int gethrs()
    {
        return hrs;
    }
    void sethrs(int hrs)
    {
        this->hrs = hrs;
    }
    int getmin()
    {
        return min;
    }
    void setmin(int min)
    {
        this->min;
    }

    int getsec()
    {
        return sec;
    }
    void setsec(int sec)
    {
        this->sec = sec;
    }

    void displaytime()
    {
        cout << "time :" << hrs<<":"<<min<<":"<<sec << endl;
    }

    void accepttime()
    {
        cout << "enter hours" << endl;
        cin >> hrs;
        cout << "enter mintes" << endl;
        cin >> min;
        cout << "enter sec" << endl;
        cin >> sec;
    }
};

int main()
{
    int choice, count;
    cout << "ennter the number of obj requried" << endl;
    cin >> count;
    Time *arr = new Time[count];
    do
    {

        cout << "0)exit" << endl;
        cout << "1)accept time from user " << endl;
        cout << "2)Print time  " << endl;
        cout << "3)set hours" << endl;
        cout << "4)get hours" << endl;
        cout << "5)set min" << endl;
        cout << "6)get min" << endl;
        cout << "7)set sec" << endl;
        cout << "8)get sec" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0 : cout<<"THANK YOU"<<endl;
        return 0;
        break;

        case 1:
            for (int i = 0; i < count; i++)
            {
                arr[i].accepttime();
            }
            break;
        case 2:
            for (int i = 0; i < count; i++)
            {
                arr[i].displaytime();
            }
            break;
        case 3:
            for (int i = 0; i < count; i++)
            {
                int x;
                cout << "wich hours want to set" << endl;
                cin >> x;
                arr[i].sethrs(x);
                break;
            }
        case 4:
            for (int i = 0; i < count; i++)
            {
                int x;
                cout << "wich min want to get" << endl;
                cin >> x;
                arr[i].gethrs();
                break;
            }

        case 5:
            for (int i = 0; i < count; i++)
            {
                int x;
                cout << "wich min want to set" << endl;
                cin >> x;
                arr[i].setmin(x);
                break;
            }
        case 6:
            for (int i = 0; i < count; i++)
            {
                int x;
                cout << "wich min want to get" << endl;
                cin >> x;
                arr[i].getmin();
                break;
            }

        case 7:
            for (int i = 0; i < count; i++)
            {
                int x;
                cout << "wich min want to set" << endl;
                cin >> x;
                arr[i].setsec(x);
                break;
            }

        case 8:
            for (int i = 0; i < count; i++)
            {
                int x;
                cout << "wich sec want to get" << endl;
                cin >> x;
                arr[i].getsec();
                break;
            }

        default:
            cout << "invalid choice" << endl;
            break;

            for (int i = 0; i < count; i++)
                delete[] arr;
        }

    } while (choice != 0);
    return 0;
}
