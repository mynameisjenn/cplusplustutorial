#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string characterName = "John";
    int characterAge;
    characterAge = 35;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was "<< characterAge << " years old\n";
    cout << "He liked the name " << characterName << endl;
    cout << "But he did not like being " << characterAge << endl;


    char grade = 'A';
    string phrase = "Giraffe Academy";
    int age = 50;
    double gpa = 4.5;
    bool isMale = false;

    cout << "My name is " << characterName << " and my grade is " << grade  << endl;
    cout << "I attend " << phrase << ", my age is " << age << " and my gpa is " << gpa << endl;

    cout << phrase.length() << endl;
    cout << phrase[6] << endl;
    cout << phrase.find("Academy", 0) << endl;
    cout << phrase.substr(8, 3);

    int wnum = 5;
    double dnum = 5.5;


    cout << sqrt(16)


    return 0;
}
