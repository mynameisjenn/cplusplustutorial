#include <iostream>

using namespace std;

void sayHi(string name, int age);

int main()
{
    sayHi("Jennifer", 33);
    sayHi("Jennifer", 22);
    sayHi("Jennifer", 11);
    return 0;
}


void sayHi(string name, int age) {
    cout << "Hello " << name << " you are " << age << endl;
}
