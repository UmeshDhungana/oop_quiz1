/*
 Program: Question 6 from quiz 1.
 Name   : Umesh Dhungana
 Roll   : 0312
 Output : 2686712
*/

#include<iostream>

using namespace std;

int main()
{
    int a;
    int* q;
    a = 4;
    q = &a;
    cout << *(q+1);
}
