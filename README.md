# PP1-2020
PL Lecture 1 Notes:
1. Introduction
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
3. About laboratory works, quizzes (quiz(15 points) - W4, midterm(15 points) - W8, quiz(15 points) - W12, endterm(15points) - W15, Final (40 points))
4. GitHub (), ejudge

5. MinGW - cpp compiler (link on piazza), VS Code - can be any text editor (sublime text, notepad++, etc)
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
    
PL Lecture 2 Notes:
1. lab works
2. data type sizeof
3. (++, --, +=, -=, *=, /=, %=)
4. comparison operators (==, !=, >, <, >=, <=)
5. printf with floating numbers (M_PI) 

6. math functions - pow, round, ceil, floor, sqrt
7. bit manipulation, or, xor, and, >>, <<, |=, &=, ^=
8. 2^n example 1 << n
9. set 1 for i-th bit of number: A |= (1<<i);
10. invert i-th bit of number: A ^= (1<<i);
11. identify i-th bit of number: int b = (A>>i)&1;

12. if else conditions. If —> return 0, absolute value of number, minimum of three numbers, triangle problem (&&, and)
13. even odd example
14. find grade from points example

15. loop operators: for, while, do while
16. even numbers / odd numbers till 100
17. infinity loop
18. all numbers which divisible by 3 in range (a, b)
19. count number of dividers of N
20. prime number

21. fibonacci sequence (0, 1, 1, 2, 3, 5, …)
22. factorial
23. infinite loop (for (;;)) break, continue
24. while loop statement (power of 2, count of digits)
25. sum of numbers (cin reads numbers in the loop) freopen
26. string: number of words 


PL Lecture notes 3
1. From previous lectures
    Loop samples
        1. Sum of digits (for, while)
        2. list of all squares < N (while)
        3. do while & while
            1. factorial using — while
            2. sum all numbers until user enter 0 — do while
        4. string: number of words
2. What is array?
    1. value
    2. index
3. Init samples
    1. Array declaration — int a[10]; bool b[10]; 
    2. Declaration and init — int a[3] = {1, 2, 3}; int a[] = {1, 2, 3};
4. Accessing the values of an array: a[0] = 3; 
5. Other operations with arrays: a[0] = b; c = a[n+2]; a[a[2]] = a[1] + 3;

6. 1D array samples
    1. Read N number and show them
    2. Sum of all elements int array
    3. Create array with size N — int a[N]; Read N elements
    4. Show even numbers from given array
    5. Show numbers in odd position from given array
    6. Count number of positive numbers in array
    7. Find Max/Min from given array
    8. Linear search of K from given array
    9. Find number K and remove it, shift left all rest elements add 0 at the end
    10. String samples
        1. s.size(); s.length()
        2. Show all digits from string
        3. convert all letter to UPPER

Nested loop
    2.1. Multiplication table
    2.2.  1 1 1 1
          2 2 2 2
          3 3 3 3

    2.3   1
          1 2 
          1 2 3 
          1 2 3 4
    2.4 Sorting array using nested loop 
    2.5 simple sorting numbers between 0-9 using array 
    
3. 2D array (matrix)
    3.1 input, output
    3.2 table of multiplication
    3.3 max element in matrix
    3.4   
    1 0 0 0
    2 1 0 0
    2 2 1 0
    2 2 2 1
    3.5
    0  0  0  0  0  0  0  0  0  0
    0  1  2  3  4  5  6  7  8  9
    0  2  4  6  8 10 12 14 16 18
    0  3  6  9 12 15 18 21 24 27
    3.6
    0 0 0 1
    0 0 1 2
    0 1 2 2
    1 2 2 2
    3.7
    Дано число n и квадратный массив int A[n][n]. Проверьте, является ли массив симметричным относительно главной диагонали. Программа должна выводить слово yes для симметричного массива и слово no для несимметричного. Пример
        Вход                   Выход
        3                     yes
        0 1 2
        1 2 3
        2 3 4
    3.8
    Состязания-1. В метании молота состязается n спортcменов. Каждый из них сделал m бросков. Победителем считается тот спортсмен, у которого сумма результатов по всем броскам максимальна.
Если перенумеровать спортсменов числами от 0 до n-1, а попытки каждого из них – от 0 до m-1, то на вход программа получает массив int A[n][m], состоящий из неотрицательных чисел. Программа должна определить максимальную сумму чисел в одной строке и вывести на экран эту сумму и номер строки, для которой достигается эта сумма. Если таких строк несколько, то выводится номер наименьшей из них. Пример для n=4 спортсменов и m=3 попыток:

        Вход                   Выход
        4 3                    19
        5 6 7                  1
        6 6 7
        7 6 6
        4 3 5


 (freopen)
1. What is string
2. Initialize string (with constructor)
3. size & length
4. for loop get each element
5. adding chars to string
6. s.begin(), s.end(), s.front() - s[0], s.back() - s[s.size() - 1]
7. Examples
    1. compare two strings from input show YES if they are equal NO otherwise
    2. given two string show YES if second is found in first one NO otherwise
    3. find function
        1. size_t, int
        2. string::npos
    4. getline(cin, s) — read all line
    5. find(other string, starting index) — count how many times occurs
    6. Example for substr
    7. print all doubled chars, which are located in sequence
    8. erase(start_index, length)
    9. string reverse 
    10. string sort
    11. palindrom (yes, no)
        1. reverse
        2. left and right pointers
    12. string append(start_index, value)
        1. insert
        2. math +
    13. stringstream

PP1 Week9 notes:
1. Understanding function (stack of functions)
2. sum from 1..N
3. Factorial
4. X^N
5. GCD(a, b)
6. Sum of digits of the number
7. Fib numbers 
8. Fib with memory
9. Hanoi tower
10. Chess problem

PL Lecture 10 Notes:
1. STL: algorithm, containers, iterators
2. Vector (vector declaration) vector<int> a; vector<int> b(50, 1);
3. size, push_back, pop_back
    3.1. Create vector, push elements and print
    3.2. Example of pop from vector
4. insert, erase, clear, sort, pair, vector of pairs
5. Example of array of vector, vector of vector

6. set (size, insert, erase, find -> count)
7. begin(), end(), rbegin(), rend()
8. iterators
9. set<int> a(b.begin(), b.end()) 
10. set<int> a(b, b + n)   

PL Lecture 11 Notes:
0. sort(a.rbegin(), a.rend())
1. map (first, second, iterate map)
2. Count of unique words
3. map<string, pair<string, string> > example (ID, name, surname)

4. stack simple example, bracket problem
5. queue simple example, problem from a to b using operations (x+1, x*2)
5.1 given matrix, find minimum steps to all cells
6. sort - using additional function third param

7. multiset
7.1 pair<multiset<int> :: iterator, multiset<int> :: iterator> r = ms.equal_range(1); 
8. multimap
8.1 pair<m_it, m_it> res = mm.equal_range(str);

1. count_if(begin_pointer, last_pointer, function)
bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }

    int cnt = count_if(a.begin(), a.end(), isPrime);
    cout << cnt;
    return 0;
}
bool f(int k) {
    if (k % 2 == 0)
        return true;
    return false;
} 

int main() {
    int n; 
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = count_if(a, a + n, f);
    cout << cnt;
    return 0;
}
2. rotate(begin_pointer, middle_pointer, last_pointer)
    // 1 2 3 4 5 6 7 8 9 10    
    // rotate(a.begin() + 1, a.begin() + 3, a.end() - 2);
    // 1 4 5 6 7 8 2 3 9 10 
3. fill(begin_pointer, end_pointer, fill_parameter)
4. unique(begin_pointer, last_pointer) - returns iterator to the end of resulting array
{1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8} -> {1 3 10 1 3 7 8 * * * * *}
5. for_each(begin_pointer, end_pointer, function)
6. generate(begin_pointer, end_pointer, function)
7. next_permutation, prev_permutation
