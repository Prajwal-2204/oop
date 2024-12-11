#include <iostream>
#include <string>
using namespace std;

class publication {
public:
    string title;
    float price;

    void getdata() {
        cout << "Enter title of publication: ";
        cin.ignore(); // To handle any previous input buffer issues
        getline(cin, title);
        cout << "Enter price of publication: ";
        cin >> price;
    }

    void putdata() {
        cout << "Publication title: " << title << endl;
        cout << "Publication price: " << price << endl;
    }
};

class book : public publication {
public:
    int pagecount;

    void getdata() {
        publication::getdata(); // Call base class function
        cout << "Enter Book Page Count: ";
        cin >> pagecount;
    }

    void putdata() {
        publication::putdata(); // Call base class function
        cout << "Book page count: " << pagecount << endl;
    }
};

class tape : public publication {
private:
    float ptime;

public:
    void getdata() {
        publication::getdata(); // Call base class function
        cout << "Enter tape's playing time (in minutes): ";
        cin >> ptime;
    }

    void putdata() {
        publication::putdata(); // Call base class function
        cout << "Tape's playing time: " << ptime << " minutes" << endl;
    }
};

int main() {
    book b;
    tape t;

    cout << "Enter details for book:" << endl;
    b.getdata();

    cout << "\nEnter details for tape:" << endl;
    t.getdata();

    cout << "\nDetails of book:" << endl;
    b.putdata();

    cout << "\nDetails of tape:" << endl;
    t.putdata();

    return 0;
}

