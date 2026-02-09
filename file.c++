1. Write a program to compute the area of a triangle and circle by area() function.
#include <iostream>
using namespace std;

float area(float b, float h) {
    return 0.5 * b * h;
}

float area(float r) {
    return 3.14 * r * r;
}

int main() {
    float b, h, r;
    cin >> b >> h >> r;
    cout << area(b, h) << endl;
    cout << area(r);
    return 0;
}

2. Write a program to find a prime number.
#include <iostream>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            c++;
    }
    if(c == 2)
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}

3. Write a program to find Sum of Natural Numbers.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        sum += i;
    cout << sum;
    return 0;
}

4. Write a Program to Check Leap Year or not.
#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        cout << "Leap Year";
    else
        cout << "Not Leap Year";
    return 0;
}

5. Write a C++ program to display 10 students records using class and object.

#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    void input() {
        cin >> roll >> name;
    }
    void display() {
        cout << roll << " " << name << endl;
    }
};

int main() {
    Student s[10];
    for(int i = 0; i < 10; i++)
        s[i].input();
    for(int i = 0; i < 10; i++)
        s[i].display();
    return 0;
}

6. Write a C++ program using Class to check if a number is prime or not.
#include <iostream>
using namespace std;

class Prime {
    int n;
public:
    void input() {
        cin >> n;
    }
    void check() {
        int c = 0;
        for(int i = 1; i <= n; i++)
            if(n % i == 0)
                c++;
        if(c == 2)
            cout << "Prime";
        else
            cout << "Not Prime";
    }
};

int main() {
    Prime p;
    p.input();
    p.check();
    return 0;
}

7. Write a C++ program to Swap two numbers using class.
#include <iostream>
using namespace std;

class Swap {
    int a, b;
public:
    void input() {
        cin >> a >> b;
    }
    void swapnum() {
        int t = a;
        a = b;
        b = t;
    }
    void display() {
        cout << a << " " << b;
    }
};

int main() {
    Swap s;
    s.input();
    s.swapnum();
    s.display();
    return 0;
}

8. Write a C++ program to calculate the electricity bill and display the final bill with a 2% discount using member function.
#include <iostream>
using namespace std;

class Bill {
    float units, amount;
public:
    void input() {
        cin >> units;
    }
    void calculate() {
        amount = units * 5;
        amount = amount - (amount * 0.02);
        cout << amount;
    }
};

int main() {
    Bill b;
    b.input();
    b.calculate();
    return 0;
}

