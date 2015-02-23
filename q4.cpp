/*
 Program: Question 4 from quiz 1.
 Name   : Umesh Dhungana
 Roll   : 0312
 Output : 44
*/

#include<iostream>

using namespace std;

int main()
{
    int a, b;
    int*p, * q;
    a = 3;
    p = &a;
    q = p;
    b = 4;
    *q = b;
    cout << *p << a;
}
