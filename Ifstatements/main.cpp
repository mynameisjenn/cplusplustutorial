#include <iostream>

using namespace std;

int main()
{
    bool isMale = false;
    bool isTall = false;

    if(isMale && isTall) {
        cout << "You are a male and you are tall.";
    } else if(isMale && !isTall) {
        cout << "You are a short male.";
    } else if(!isMale && isTall) {
        cout << "You are not male, but you are tall.";
    } else {
        cout << "You are not male and you are not tall.";
    }

    return 0;
}
