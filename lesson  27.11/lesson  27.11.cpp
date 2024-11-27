#include <iostream>

using namespace std;

class User {
    string name;
    string female;
    int age;
public:
    static int amountOfUsers;
    User() {
        name = "vladislav";
        female = "buryak";
        age = 16;
        IncrementAmountOfPoints();
    }
    User(string name, string female, int age) {
        this->name = name;
        this->female = female;
        this->age = age;
        IncrementAmountOfPoints();
    }

    static void IncrementAmountOfPoints() {
        amountOfUsers++;
    }

};

int User::amountOfUsers = 0;



int main() {
    cout << User::amountOfUsers << endl;
    User obj;
    cout <<  User::amountOfUsers <<endl;
    User obj2 = User("Maria" , "Ozarenko" , 16);
    cout << User::amountOfUsers << endl;
}