#include<iostream>
using namespace std;

void printTable(int, int);

int main()
{
    int num;
    cout << "C++ program to print Table of any number using Recursion\n\n";
    cout << "Enter a number : ";
    cin >> num;
    cout << endl;
    printTable(num,1);
    return 0;
}

void printTable(int num, int i)
{
    cout << num << "*" << i << " = " << num*i << endl;
    i++;
    if(i<=10)
    {
        printTable(num,i);
    }
}
