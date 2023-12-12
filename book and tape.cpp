#include <iostream>
#include <string>
using namespace std;
class publication {
    protected:
        string title;
        float price;
};
class book : public publication {
    int pages;
    public:
        void getb();
        void showb();
};
class tape : public publication {
    float time;
    public:
        void gett();
        void showt();
};
void book :: getb() {
    cout << "\n------------------- Enter Details of the book -------------------\n";
    cout << "Enter Title of the book: ";
    cin.ignore(1, '\n');
    getline(cin, title);
    cout << "Enter the Price of the book: ";
    cin >> price;
    cout << "Enter the Number of pages of the book: ";
    cin >> pages;

    try {
        if(pages < 100 || pages > 5000) {
            throw(pages);
        }
        else {
            //showb();
        }
    }
    catch(int i) {
        cout << "You entered invalid data";
        title = " ";
        price = 0.0;
        pages = 0;
        //showb();
    }
}
void book :: showb() {
    cout << "\nThe Title of the book is " << title << endl;
    cout << "Price of the book is " << price << endl;
    cout << "Number of pages in the book are " << pages << endl;
}
void tape :: gett() {
    cout << "\n-------------------Enter Details of the tape -------------------\n";
    cout << "Enter Title of the tape: ";
    cin.ignore(1, '\n');
    getline(cin, title);
    cout << "Enter the Price of the tape: ";
    cin >> price;
    cout << "Enter the total time of the tape: ";
    cin >> time;

    try {
        if(time < 1.0 || time > 90.0) {
            throw(time);
        }
        else {
            //showt();
        }
    }
    catch(float i) {
        cout << "You entered invalid data";
        title = " ";
        price = 0.0;
        time = 0.0;
        //showt();
    }
}
void tape :: showt() {
    cout << "\nThe Title of the tape is " << title << endl;
    cout << "Price of the tape is " << price << endl;
    cout << "Total time of the tape is " << time << endl;
}
int main() {
    book b;
    tape t;
    b.getb();
    b.showb();
    t.gett();
    t.showt();
    return 0;
}
