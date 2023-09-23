#include <iostream>

using namespace std;

class MyClass{
public:
    int value;

    MyClass(int value){
        this->value = value;
    }

    // Overload the + operator
    MyClass operator+(const MyClass& other){
        return MyClass(this->value + other.value);
    }

    // Overload the - operator
    MyClass operator-(const MyClass& other){
        return MyClass(this->value - other.value);
    }

    // Overload the * operator
    MyClass operator*(const MyClass& other){
        return MyClass(this->value * other.value);
    }

    // Overload the / operator
    MyClass operator/(const MyClass& other){
        return MyClass(this->value / other.value);
    }

    // Overload the % operator
    MyClass operator%(const MyClass& other){
        return MyClass(this->value % other.value);
    }

    // Overload the ++ operator
    MyClass operator++(){
        return MyClass(++this->value);
    }

    // Overload the -- operator
    MyClass operator--(){
        return MyClass(--this->value);
    }

    // Overload the = operator
    MyClass& operator=(const MyClass& other){
        this->value = other.value;
        return *this;
    }

    // Overload the << operator
    friend ostream& operator<<(ostream& os, const MyClass& obj){
        os << obj.value;
        return os;
    }
};

int main() {
    MyClass a(10);
    MyClass b(5);

    // Use the overloaded operator
    MyClass c = a + b;
    MyClass d = a - b;
    MyClass e = a * b;
    MyClass f = a / b;
    MyClass g = a % b;

    // Print the result
    cout << "a + b = " << c << endl
        << "a - b = " << d << endl
        << "a * b = " << e << endl
        << "a / b = " << f << endl
        << "a % b = " << g << endl;

    // Use the overloaded ++ and -- operators
    c = ++a;
    d = --b;

    cout << "a = " << a << endl
        << "b = " << b << endl;

    // Use the overloaded = operator
    a = b;

    cout << "a = " << a << endl
        << "b = " << b <<endl;

    // Use the overloaded << operator
    cout << "\na = " << a << endl;

  return 0;
}
