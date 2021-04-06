#include<iostream>
using namespace std;
#include "DynamicArray.cpp"
int main()
{
    DynamicArray s1;
    s1.add(7);
    s1.add(8);
    s1.add(9);
    s1.add(2);
    s1.add(4);
    s1.add(1);
    s1.add(6);
    s1.print();
    DynamicArray s3(s1);
    s3.print();
    s3.add(78);
    s1.print();
    s3.print();
}
