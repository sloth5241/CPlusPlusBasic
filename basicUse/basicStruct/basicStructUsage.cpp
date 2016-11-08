#include <iostream>
#include <string>
using namespace std;

struct Book {
    Book *bb;
    string name;
    int age;    
};

void getStruct(Book &book) {
    cout << "-----getStruct-----" << endl;
    book.name = "zhao yu guo";
    book.age = 65;
    cout << "book:" << book.name << endl;
    cout << "book:"<< book.age << endl;
}

int main() {
    struct Book book1;
    struct Book book2;
    
    book1.name = "zhaocong";
    book1.age = 29;
    book2.name = "xuli";
    book2.age = 26;

    cout << "book1:" << book1.name << endl;
    cout << "book1:" << book1.age << endl;

    cout << "book2:" << book2.name << endl;
    cout << "book2:" << book2.age << endl;

    getStruct(book1);
    cout << "-----change-----" << endl;
    cout << "book1:" << book1.name << endl;
    cout << "book1:" << book1.age << endl;
    
    return 0;
}
