#include <iostream>
#include <string>
#include <exception>
using namespace std;

class publication
{
protected:
    string title;
    float price;
};

class book : public publication
{
    int pages;

public:
    void getb();
    void showb();
};

class tape : public publication
{
    float time;

public:
    void gett();
    void showt();
};

void book::getb()
{
    cout << "ENTER DETAILS OF BOOK" << endl;
    cout << "Enter The Title of The Book: " << endl;
    cin.ignore(0, '\n');
    getline(cin, title);
    cout << "Enter The Price of The Book: " << endl;
    cin >> price;
    cout << "Enter The number of Pages: " << endl;
    cin >> pages;

    try
    {
        if (pages < 100 || pages > 5000)
        {
            throw pages;
        }
        else
            showb();
    }
    catch (int i)
    {
        cout << "YOU ENTERED INVALID DATA" << endl;
        title = "  ";
        price = 0.0;
        pages = 0;
        showb();
    }
}

void book::showb()
{
    cout << "Title of The Book: " << title << endl;
    cout << "Price of The Book: " << price << endl;
    cout << "Number of Pages: " << pages << endl;
}

void tape::gett()
{
    cout << "ENTER DETAILS OF TAPE" << endl;
    cout << "Enter Title of Tape: " << endl;
    cin.ignore();
    getline(cin, title);
    cout << "Enter The Price of Tape: " << endl;
    cin >> price;
    cout << "Time Required for Tape: " << endl;
    cin >> time;

    try
    {
        if (time < 1.0 || time > 19.0)
        {
            throw time;
        }
        else
            showt();
    }
    catch (float t)
    {
        cout << "YOU ENTERED INVALID DATA" << endl;
        title = "  ";
        price = 0.0;
        time = 0.0;
        showt();
    }
}

void tape::showt()
{
    cout << "Title of The Tape: " << title << endl;
    cout << "Price of The Tape: " << price << endl;
    cout << "Time Required for Tape: " << time << endl;
}

int main()
{
    book b;
    tape t;
    b.getb();
    b.showb();
    t.gett();
    t.showt();
    return 0;
}
