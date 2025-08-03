// Write a C++ program to add two numbers using class concepts

// #include<iostream>
// using namespace std;
// class addsum
// {
// private:
//     int num1,num2;
// public:
//    addsum(int n1,int n2){
//         num1=n1;
//         num2=n2;
//     }

//     int display(){
//         return num1+num2;
//     }
// };

// int main(){
//     int num1,num2;

//     cout<<"enter the first number = ";
//     cin>>num1;
//     cout<<"enter the second number = ";
//     cin>>num2;

//     addsum obj (num1 , num2 );

//     cout<<"the sum of two number = "<<obj.display()<<endl;
//      return 0;
// }

// Write a C++ program to add two numbers using class concepts
// here i have use diffrentf code

// #include<iostream>
// using namespace std;
// class sum{
//     private:
//         int num1,num2;
//     public:
//         sum(int a, int b){
//             num1 = a;
//             num2 = b;
//         }
//         int display(){
//             return num1+num2;
//         }
// };
// int main(){
//     int num1 = 10 , num2 = 20;
//     sum s1(num1,num2);
//     cout<<"The sum is = "<<s1.display()<<endl;
//     return 0;
// }

// Write a C++ program to add two numbers using class concepts
#include <iostream>
using namespace std;
class add
{
private:
    int num1, num2;

public:
    void read();
    void display();
};
void add::read()
{
    cout << "Enter the two values = ";
    cin >> num1 >> num2;
}
void add::display()
{
    cout << "The sum of two number = " << num1 + num2 << endl;
}
int main()
{
    add obj;
    obj.read();
    obj.display();
    return 0;
}