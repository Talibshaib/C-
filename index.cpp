#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// int sum(int a, int b); // THIS TYPE OF DECLEARING OF FUNCTION KNOWN AS (FUNCTION PROTOTYPING)
// void print();
// int factorial(int n);

// int changevalue(int a) // PASS BY VALUE PASS BY REFRENCE (https://g.co/gemini/share/9d5e301ced80)
// {
//     a = 500;
//     // cout << "function value : " << a << endl;
//     return a;
// }

// void modifier(int &p)
// {
//     p = 100;
//     cout << "value of function : " << p << endl;
//     cout << "value of memory location : " << &p << endl;
// }

// // DEFAULT PARAMETER
// int sum(int a, int b, int c = 10)
// {
//     int result = (a + b + c);
//     return result;
// }

int main()
{
    // SWAPING TWO NUMBERS
    // int a, b;
    // a = 10;
    // b = 4;
    // int num;
    // cout << "a: " << a << " b: " << b << endl;

    // int temp = a;
    // a = b;
    // b = temp;
    // cout << "a: " << a << " b: " << b << endl;

    // SWAPING TWO NUMBERS WITHOUT USING TEMP VARIABLE
    // a += b; // a = a + b
    // b = a - b;
    // a -= b; // a = a - b
    // cout << "a: " << a << " b: " << b << endl;

    // OPERATORS
    // cout << "sum: " << a + b << endl;
    // cout << "difference: " << a - b << endl;
    // cout << "product: " << a * b << endl;
    // cout << "division: " << floor(a / b) << endl; // floor() is used to get the upper value
    // cout << "modulus: " << a % b << endl;

    // logical operators
    // cout << "a > b: " << (a > b) << endl;
    // cout << (a == b) << endl; // == is used to check the equality
    // cout << (a != b) << endl; // != is used to check the inequality
    // cout << (a <= b) << endl; // <= is used to check the less than or equal to
    // cout << (a >= b) << endl; // >= is used to check the greater than or equal to

    // unitary operators
    // a > b ? num = a : num = b;
    // cout << "num: " << num << endl;
    // if else
    // int cp ;
    // int sp ;
    // cout<<"enter the cost price of the product: ";
    // cin>>cp;
    // cout<<"enter the selling price of the product: ";
    // cin>>sp;
    // if (cp > sp)
    // {
    //     cout << "loss: " << cp - sp << endl;
    // }
    // else if (cp < sp)
    // {
    //     cout << "profit: " << sp - cp << endl;
    // }
    // else
    // {
    //     cout << "no profit no loss" << endl;
    // }
    // find the greatest number
    // int x, y, z;
    // cout << "enter the first number: ";
    // cin >> x;
    // cout << "enter the second number: ";
    // cin >> y;
    // cout << "enter the third number: ";
    // cin >> z;
    // if (x > y && x > z)
    // {
    // cout << "greatest number: " << x << endl;
    // }
    // else if (y > x && y > z)
    // {
    // cout << "greatest number: " << y << endl;
    // }
    // else
    // {
    // cout << "greatest number: " << z << endl;
    // }
    // SWICH CASE

    // TAKE INPUT FROM USER OF ALPHABET AND PRINT WETHER IT IS VOWEL OR CONSONANT

    // char ch;
    // cout << "enter the alphabet: ";
    // cin >> ch;
    // switch (ch)
    // {
    // case ('a'):
    //     cout << "vowel" << endl;
    //     break;
    // case ('e'):
    //     cout << "vowel" << endl;
    //     break;
    // case ('i'):
    //     cout << "vowel" << endl;
    //     break;
    // case ('o'):
    //     cout << "vowel" << endl;
    //     break;
    // case ('u'):
    //     cout << "vowel" << endl;
    //     break;

    // default:
    //     if (ch >= 'a' && ch <= 'z')
    //     {
    //         cout << "consonant" << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "invalid input" << endl;
    //     }
    // }
    // LETS MAKE A CALCULATOR
    // int a, b;
    // cout << "enter the first number: ";
    // cin >> a;
    // cout << "enter the second number: ";
    // cin >> b;
    // char op;
    // cout << "enter the operator: ";
    // cin >> op;
    // switch (op)
    // {
    // case '+':
    //     cout << "sum: " << a + b << endl;
    //     break;
    // case '-':
    //     cout << "difference: " << a - b << endl;
    //     break;
    // case '*':
    //     cout << "product: " << a * b << endl;
    //     break;
    // case '/':
    //     cout << "division: " << a / b << endl;
    //     break;
    // case '%':
    //     cout << "modulus: " << a % b << endl;
    //     break;
    // default:
    //     cout << "invalid input" << endl;
    // }
    // take input and print wether it is prime or not
    // int n;
    // cout << "enter the number: ";
    // cin >> n;

    // int i;
    // for (i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Not prime" << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "prime " << endl;
    //     }
    //     break;
    // }
    // OPERATOR (SPECIAL)
    // int i;
    // cout << "please enter your marks" << endl;
    // cin >> i;
    // i < 60 ? cout << "needs to improve " << endl : cout << "excelent" << endl;

    // LOOPS..
    // WHILE
    // int i;
    // i = 1;
    // while (i < 100)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    // // FOR
    // for (int i = 0; i < 33; i++)
    // {
    //     cout << i << endl;
    // }
    // FOR
    // int n;
    // cout << "Enter the number nth number" << endl;
    // cin >> n;
    // int sum;
    // sum = 1; // IF IT IS NOT INITIALIZED THEN IT GIVES RANDOM VALUE;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum *= i;
    // }
    // cout << "Total PRODUCT of from 1 to nth number"
    //      << " = " << sum << endl;

    // MULTIPLE CONDITION IN FOR LOOP

    // for (int i = 0, j = 10; i <= 10 && j >= 0; i++, j--)
    // {
    //     cout << i << " " << j << endl;
    // }
    // BREAK IF NUMBERR IS NEGATIVE
    // while (true)
    // {
    //     int n;
    //     cin >> n;
    //     if (n < 0)
    //         break;
    // }
    // PEINT FIRST MULTIPLE OF 5 WHICH IS ALSO MULTIPLE OF 7

    // for (int i = 1; i < 100; i++)
    // {
    //     if (i % 5 == 0 && i % 7 == 0)
    //     {
    //         cout << i << endl;
    //         break; // IT BREAK THE NEAREST LOOP
    //     }
    // }
    // DO WHILE  (ATLEAST ONE TIME CODE RUN)
    // PRINT THE SUNM OF INTEGEERS TILL THE INPUT
    // int sum = 0;
    // int i;
    // cin >> i;
    // int num;

    // do
    // {
    //     sum += num;
    //     num++;

    // } while (num <= i);
    // cout << sum << endl;

    // CONTINUE (IT IS USED FOR SKIPPING THE VALUES)
    // for (int i = 0; i < 100; i++)
    // {
    //     if (i % 5 == 0)
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         cout << i << endl;
    //     }
    // }
    // PATTERN PRINTING

    // int m, n;
    // cin >> m;
    // cin >> n;

    // for (int i = 1; i <= m; i++)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // HOLLOW RECTENGLE
    // int n, m;
    // cin >> n >> m;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         if (i == 1 || j == 1 || i == n || j == m)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // HALF TRAINGLE
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++) // I AND J
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // INVERTED HALF TRAINGLE
    // int m;
    // cin >> m;
    // for (int i = m; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // TRAINGLE
    //******

    // COUNT THE NUMBER OF THE DIGITS FOR GIVEN NUMBER
    // int n;
    // cin >> n;

    // int count = 0;
    // while (n > 0) // its conditional based loop
    // {
    //     count++; // update the count value
    //     n /= 10; // n= n/10
    // }
    // cout << count << endl;

    // FIND THE SUM OF DIGIT IN GIVEN NUMBER
    // int n;
    // cin >> n;

    // int sum = 0;
    // while (n > 0)
    // {
    //     sum = sum + (n % 10);
    //     n /= 10; // THIS IS FOR BREAKING LOOP
    // }
    // cout << sum << endl;

    // REVERSE THE DIGITS OF A NUMBER
    // int n;
    // cin >> n;

    // int reverseNum = 0;

    // while (n > 0)
    // {
    //     int lastNum = n % 10;
    //     reverseNum = reverseNum * 10 + lastNum; // LOGIC IS HERE
    //     n /= 10;
    // }
    // cout << reverseNum << endl;

    // FIND THE SUM OF CONSECUTIVE NUM WITH ALTERNATING + AND - OPERATOR
    // int n;
    // cin >> n; // IF N =3 (SUM = 1-2+3)

    // int sum = 0;

    // for (int i = 0; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum -= i;
    //     }
    //     else
    //     {
    //         sum += i;
    //     }
    // }
    // cout << sum << endl;

    // FIND FACTORIAL OF N
    // int n;
    // cin >> n;

    // int result = 1;

    // int i;

    // for (i = n; i >= 1; i--)
    // {
    //     result *= i;
    // }

    // cout << result << endl;

    // CONVERT BINARY INTO DECIMAL

    // function
    // cout << sum(2, 3) << endl;
    // print();
    // int aqrt = sqrt(4);
    // int power = pow(2, 3);
    // cout << aqrt << endl;
    // cout << power << endl;
    // cout << factorial(4) << endl;

    // PASS BY VALUE.

    // int b = 30;

    // cout << "before function call : " << b << endl;
    // cout << changevalue(b) << endl;
    // cout << "after function call : " << b << endl;

    // PASS BY REFRENCE.

    // int q = 300;
    // cout << "value of p before function call : " << q << endl;
    // modifier(q);
    // cout << "value of p before function call : " << q << endl;
    // cout << "value of p memory location of Q : " << &q << endl;

    // DEFAULT PARAMETER

    // cout << sum(20, 20) << endl;      // 50
    // cout << sum(20, 20, 100) << endl; // 140

    // ARRAY.............................

    // int array[8];
    // array[1] = 40;
    // array[0] = 20;
    // array[2] = 10;
    // array[3] = 10;
    // array[4] = 10;
    // array[5] = 10;
    // array[6] = 60;
    // array[7] = 70;

    // cout << array[4] << endl;
    // char wovel[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> wovel[i];
    // }
    // for (char ele : wovel)
    // {
    //     cout << ele << " ";
    // }

    // SUM OF ARRAY

    // int arrySum[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arrySum[i];
    // }

    // int sum = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     sum += arrySum[i];
    // }
    // cout << sum << endl;

    // MAX ELEMENT OF ARRAY
    // int arryMax[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arryMax[i];
    // }

    // int maxNum = arryMax[0];

    // for (int i = 0; i < 5; i++)
    // {
    //     int num = 0;
    //     num = arryMax[i];
    //     if (num > maxNum)
    //     {
    //         maxNum = num;
    //     }
    // }
    // cout << maxNum << endl;

    // LINEAR SEARCH

    // int arraylin[] = {3, 4, 6, 8, 1, 9};
    // int size = sizeof(arraylin) / sizeof(arraylin[0]);

    // int key;
    // cin >> key;

    // int ans = -1;

    // for (int i = 0; i < size; i++)
    // {
    //     if (arraylin[i] == key)

    //     {
    //         ans = i;
    //     }
    // }
    // cout << "location is : " << ans << endl;

    // VECTOR (DYNAMIC ARRAYS--RESIZE WHEN INSERT / DELETE ELEMENT)
    // vector<int> v2;
    // for (int i = 0; i < 5; i++) // WHEN SIZE NOT DEFINE
    // {
    //     int element;
    //     cin >> element;
    //     v2.push_back(element);
    // };
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << "for loop : " << v2[i] << endl;
    // }
    // for (int el : v2) // FOR EACH LOOP
    // {
    //     cout << "for each loop : " << el << endl;
    // }
    // int i = 0; // WHILE LOOP
    // while (i < v2.size())
    // {
    //     cout << "while loop :" << v2[i] << endl;
    //     i++;
    // }

    // vector<int> v3 = {40, 50, 36, 28, 45}; // DECLEARATION ANS ASIGN VALUE AT SAME TIME
    // v3.insert(v3.begin(), 30);
    // cout << "size of v3 : " << v3.size() << endl;
    // cout << "capa of v3 : " << v3.capacity() << endl;
    // for (int re : v3)
    // {
    //     cout << re << endl;
    // }
    // vector<int> myvec; // DECLEARING AND ASSIGNING VALUE AT DIFF POINT
    // myvec.assign({34, 56, 78, 0, 70, 90});
    // myvec.erase(myvec.begin() + 2);

    // for (int re : myvec)
    // {
    //     cout << "result : " << re << endl;
    // }

    // find the last occurence and count the occurence of given value in given array

    // vector<int> my_vec = {1, 4, 8, 3, 7, 1, 8, 1};
    // int size = my_vec.size();
    // int key;
    // cout << "enter key value" << endl;
    // cin >> key;
    // int count = 0;
    // int occurence = -1;
    // for (int i = 0; i < size; i++)
    // {
    //     if (my_vec[i] == key)
    //     {
    //         occurence = i;
    //         count++;
    //     }
    // }
    // cout << "last occurence of kery is : " << occurence << endl;
    // cout << "count of the kery is : " << count << endl;

    // count the number of element strictly greater then the key value

    // vector<int> my_vec2 = {10, 20, 40, 30, 60, 100};

    // int count = 0;
    // vector<int> s_gre;
    // int key;
    // cin >> key;

    // for (int i = 0; i < my_vec2.size(); i++)
    // {
    //     if (my_vec2[i] > key)
    //     {
    //         s_gre.push_back(my_vec2[i]);
    //         count++;
    //     }
    //     else
    //     {
    //         s_gre.push_back(0);
    //     }
    // }
    // for (int re : s_gre)
    // {

    //     cout << re << " ";
    // }
    // cout << endl;
    // cout << "count of strektly greater number of :" << count << endl;

    // check array sorted or not
    vector<int> s_vec(5);
    for (int i = 0; i < s_vec.size(); i++)
    {
        cin >> s_vec[i];
    }
    bool sorted = true;
    for (int i = 1; i < s_vec.size(); i++)
    {
        if (s_vec[i] <= s_vec[i - 1])
        {
            sorted = false;
            break;
        }
    }
    cout << "result is : " << sorted << endl;

    // vector<int> vec(6);
    // int size = vec.size();
    // for (int i = 0; i < size; i++) //WHEN SIZE DEFINE
    // {
    //     cin >> vec[i];
    //     cout << "memory location of input : " << &vec[i] << endl;
    // }

    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << "output : " << vec[i] << endl;
    //     cout << "memory location of output : " << &vec[i] << endl;
    // }

    return 0;
}
// fUNCTION
// int sum(int a, int b) // SUM FUNCTION FOR FINDING SUM
// {
//
// int sum = a + b;
//
// return sum;
// };
// void print() // VOID THAT RETURN NOTHING ONLY PRINT
// {
// cout << "hello world" << endl;
// return;
// };
// int factorial(int n) // FUNCTION FOR FINDING FACTORIAL
// {
// int result = 1;
// for (int i = 1; i <= n; i++)
// {
// result *= i;
// }
//
// return result;
// }
