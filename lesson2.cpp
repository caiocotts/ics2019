#include <iostream>
#include <unistd.h>

using namespace std; 

int main(){
    double pi = 3.14159;
    double radius;
    cout << "Input radius: ";
    cin >> radius;
    double area = pi * radius * radius;
    cout << "Area:  " << area << endl;
    double circ = 2* pi * radius;
    sleep (5);
    cout  << "circonference: " << circ << endl;

    return 0;
}