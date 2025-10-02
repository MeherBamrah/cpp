//Consider an example of book shop which sells books and video tapes. These two classes are inherited from base class called media. The media class has command data members such as title and publication. The book class has data members for storing number of pages in a book and tape class has playing time in a tape. Each class will have member functions such as read () and show (). In the base class, these members have to be defined as virtual functions. Write a program to models the class hierarchy for book shop and processes objects of these classes using pointers to base class. Write the rules of virtual functions.
#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    string title;
    string publication;
public:
    virtual void read() {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter publication: ";
        getline(cin, publication);
    }
    virtual void show() {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }
    virtual ~Media() {} // Always add a virtual destructor
};

class Book : public Media {
    int pages;
public:
    void read() override {
        Media::read();
        cout << "Enter number of pages: ";
        cin >> pages;
        cin.ignore(); // To consume newline
    }
    void show() override {
        Media::show();
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Media {
    float play_time;
public:
    void read() override {
        Media::read();
        cout << "Enter playing time (in minutes): ";
        cin >> play_time;
        cin.ignore(); // To consume newline
    }
    void show() override {
        Media::show();
        cout << "Playing Time (minutes): " << play_time << endl;
    }
};

int main() {
    Media* shop[2];

    shop[0] = new Book();
    shop[1] = new Tape();

    for (int i = 0; i < 2; ++i) {
        shop[i]->read();
    }

    cout << "\nDisplaying Media Information:\n";
    for (int i = 0; i < 2; ++i) {
        shop[i]->show();
        cout << endl;
    }

    // Cleanup
    for (int i = 0; i < 2; ++i) {
        delete shop[i];
    }
    return 0;
}
