/*A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.
Hint -> Create class Product and inherit into Book and Tape. Also array should be created of
Product*/

#include <iostream>
using namespace std;

class Product
{
protected:
    int id;
    string title;
    double price;
    int static total;

public:
    Product()
    {
        this->id = 0;
        this->title = "";
        this->price = 1;
    }


    Product(int id, string title, double price)
    {
        this->id = id;
        this->title = title;
        this->price = price;
    }

    virtual void acceptData()=0;
    virtual void displayData()=0;

    int getid()
    {
        return id;
    }

    string gettitle()
    {
        return title;

    }

    double getprice()
    {
        return price;
    }
};

class Book : public Product

{
private:
    string author;

public:
    Book()
    {
        author = "";
    }

    Book(string author)
    {
        this->author = author;
    }

    

    void acceptData()
    {
        cout << "Enter id" << endl;
        cin >> id;
        cout << "enter title" << endl;
        cin >> title;
        cout << "Enter price" << endl;
        cin >> price;
        cout << "enter author name" << endl;
        cin >> author;
    }

    void displayData()
    {
        cout << "Id is" << id << endl;
        cout << "title is" << title << endl;
        cout << "Price is " << price << endl;
        cout << "Author is " << author << endl;
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape()
    {
        artist = "";
    }

    Tape(string artist)
    {
        this->artist = "";
    }

    void acceptData()
    {
        cout << "Enter id" << endl;
        cin >> id;
        cout << "enter title" << endl;
        cin >> title;
        cout << "Enter price" << endl;
        cin >> price;
        cout << "enter artist name" << endl;
        cin >> artist;
    }
    void displayData()
    {
        cout << "Id is" << id << endl;
        cout << "title is" << title << endl;
        cout << "Price is " << price << endl;
        cout << "artist is " << artist << endl;
    }

   
};

int main()
{

    cout << "Welcome to Shop application" << endl;
    Product *Ptr;
    int bill1=0;
    int bill2=0;
    int choice;
    do
    {
        

        cout << "1)Buy book" << endl;
        cout << "2)Buy tape " << endl;
        cout << "3)Bill " << endl;
        cout <<"3)Exit"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            Ptr=new Book();
            Ptr->acceptData();
            bill1+=  Ptr->getprice()*0.90;
            
            break;
        case 2: 
            Ptr=new Tape();
            Ptr->acceptData();
            bill2=bill2*0.95 + Ptr->getprice();
        case 3:
                cout<<"total bill is:  "<<bill1+bill2<<endl;
        
        default:
                cout<<"invalid choice"<<endl;
            break;
        }

    }
        while (choice!=0);

        delete Ptr;
        Ptr=nullptr;
        

        return 0;
    }
