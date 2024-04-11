#include <iostream>
#include <cmath>
using namespace std;

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
    //  int sum (int a, int b){
    //      return a+b;
    //  };
    int a, b;
    cin >> a >> b;
    cout << "sum"
         << " = " << (a + b) << endl;

    return 0;
}
