# PP1-2020
PL Lecture 1 Notes:
1. Introduction
1.1. What is programming?
1.2. Programming languages
2. Syllabus
    1. Setup, data types, unary/binary operations, bit manipulations, cin, cout, freopen
    2. if else conditional statements, loop (for, while, do while)
    3. Arrays
    4. Nested loops, 2d arrays
    5. String, sstream, string functions, scanf, printf
    6. Functions
    7. Recursion 
    8. STL1 (vector, set, iterators)
    9. STL2 (map, stack, queue, dequeue, comparator)
    10. STL3 (algorithms)
    11. Struct, pointers
3. About laboratory works, quizzes (midterm(30 points) - W7,8 endterm (30 points) - W14,15, Final (40 points)). All exams will be offline
3.1. Assitants
4. GitHub, ejudge

5. MinGW - cpp compiler, VS Code - can be any text editor (sublime text, notepad++, etc)
For Windows:
Download the file MinGW .
Extract it under root directory (C:\ or D:\)
Follow video instruction of MinGW configuration on Windows:
https://youtu.be/m4jZDXdT_tM

For Linux (Ubuntu):
Open terminal and type following commands:
sudo apt-get update
sudo apt-get install g++
 

For Mac(OSX):
Open terminal app, type g++ and hit Enter key. After that you will be asked to install missing package (you need to accept it). It will automatically download and install g++ from Apple Developer site.

Preferred editors:
https://code.visualstudio.com/ 

6. Introduction to code structure, explain how compiler works
7. Compiling and executing program (hello world program), return 0, code after return 0.
8. Variables, declaration of variables (int, long long)
    1. int a;...
    2. cin >> a >> b example
    3. a + b + c (cin, several parameters in cout) binary operators (+, -, *, /, % examples)
8.1. size of variables (explain how many numbers we can store)
	int a = 2;

	cout << sizeof(a) << endl;
	cout << "size of short: " << sizeof(short) << endl;
	cout << "size of int: " << sizeof(int) << endl;
	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of double: " << sizeof(double) << "\n";
	cout << "size of char: " << sizeof(char) << "\n";
	cout << "size of bool: " << sizeof(bool) << endl;
    


9.   char (‘A’ - 65, ‘B’ - 97, ‘0’ - 48) Examples
10. string simple, concatenating strings (with strings and chars)
11. bool (example of ‘or’, ‘and’, ‘xor’)
12. double (float) example
13. int and double multiplying dividing
14. Comments
15. Math functions (sqrt, abs, sin, cos, min, max)
16. bit manipulations (how to calculate 2 power of N etc)
17. Useful resources: 
    kbtu.acm.kz
    informatics.mccme.ru 

Useful codes:
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    printf("%.6f", M_PI);
    return 0;
}
------------------------------------
#include <iostream>

using namespace std;

int main() {
    int a, b; 
    cin >> a >> b; 
    cout << a << " " << b << endl;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    return 0;
}
------------------------------------
#include <iostream>

using namespace std;

int main() {
    cout << sizeof(int) << endl;
    cout << sizeof(long long) << endl;
    
    return 0;
}
------------------------------------
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = a + b + a;
    cout << c;
    return 0;
}
------------------------------------

#include <iostream>

using namespace std;

int main() {
    char a, b, c, d;
    cout << sizeof(char) << endl;
    a = 'A'; // 65
    // 'B' - 66
    b = 'a'; // 97
    c = ' '; // 32
    d = '0'; // 48
    // '1' - 49

    cout << a << " " << (int)a << endl;
    cout << b << " " << (int)b << endl;
    cout << c << " " << (int)c << endl;
    cout << d << " " << (int)d << endl;
 
    return 0;
}
------------------------------------
#include <iostream>

using namespace std;

int main() {
    // string s1, s2;
    // s1 = "hello";
    // s2 = "world";
    // cout << s1 + s2;
    double a, b; // float
    a = 5.6;
    b = 6.7;
    cout << a + b;
    return 0;
}
------------------------------------
#include <iostream>

using namespace std;

int main() {
         ok, ok1;
    ok = (5 > 4 && 6 > 7); // && - and
    ok1 = (5 > 4 || 6 > 7); // || - or
    cout << ok << " " << ok1 << endl;
    return 0;
}
------------------------------------
#include <iostream>

using namespace std;

int main() {
    double b;
    cin >> b;
    int a = (int) (b + 0.5); // 5.4 + 0.5 = 5.9 // 5.6 + 0.5 = 6.1
    cout << a;
    return 0;
}
------------------------------------
#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 6;
    cout << (a + b) << endl;
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (2 << 3) << endl;
    return 0;
}
------------------------------------
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    // 2 ^ n
    int p = (1 << n);
    cout << p;
    return 0;
}
------------------------------------
