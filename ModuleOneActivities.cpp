//ModuleOneActivities.cpp
//J.S. 8.27.25

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    //3e Getting the user's name for a greeting
    cout << "Hello User! What's your name?" << endl;
    cin >> username;
    cout << "Have a great day " << username << "!" << endl;
    cout << endl;

    //3b getting int from user to double
    int numDouble = 0;

    cout << "Insert your number to double:" << endl;
    cin >> numDouble;
    cout << "Your number is: " << numDouble + numDouble << endl;
    cout << endl;

    //3c Getting int from user to triple
    int numTriple = 0;

    cout << "Insert your number to triple:" << endl;
    cin >> numTriple;
    cout << "Your number is: " << numTriple + numTriple + numTriple << endl;
    cout << endl;

    //3d getting two ints from the user to add together
    int num1 = 0;
    int num2 = 0;
    int sumOfNums;

    cout << "Give me two numbers to add: " << endl;
    cin >> num1 >> num2;
    sumOfNums = num1 + num2;
    cout << "The sum is: " << sumOfNums << endl;


}