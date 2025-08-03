// Write a C++ program to swap two numbers using class concepts

// #include <iostream>
// using namespace std;

// class Swap{
// private:
//     int a,b;
// public:
//     Swap(int x , int y) {
//         a = x;
//         b = y;
//     }

//     void display() {
//         cout <<"a = "<<a<<endl;
//         cout <<"b = "<<b<<endl;
//     }

//     void Swapnumber(){
//     int temp=a;
//     a=b;
//     b=temp;
//     }
// };

// int main() {
//     int num1,num2;

//     cout << "enter the first number = ";
//     cin>>num1;

//     cout << "enter the second number = ";
//     cin>>num2;

//     Swap obj(num1,num2);

//     cout << "before swapping:" << endl;
//     obj.display();

//     obj.Swapnumber();

//     cout << "After swapping:" << endl;
//     obj.display();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Swap{
//     private:
//         int a,b;
//     public:
//         Swap(int x,int y){
//             a = x;
//             b = y;
//         }
//     void display(){
//         cout<<"a ="<<a<<endl;
//         cout<<"b ="<<b<<endl;
//     }

//     void swapnumber(){
//         int temp = a;
//         a = b;
//         b = temp;
//     }

// };

// int main(){
//     int num1,num2;

//     cout<<"Enter the value of num1 = ";
//     cin>>num1;

//     cout<<"Enter the value of num2 = ";
//     cin>>num2;

//     Swap s1(num1,num2);

//     cout<<"Before swap = "<<endl;
//     s1.display();

//     s1.swapnumber();

//     cout<<"After swap = "<<endl;
//     s1.display();

//     return 0;
// }

// Write a C++ program to swap two numbers using class concepts
//  #include<iostream>
//  using namespace std;

// class Swap{
// private:
//     int num1,num2;
// public:
//     Swap(int x , int y){
//         num1 = x;
//         num2 = y;
//     }
//     void display(){
//         cout<<"the value is ="<<num1<<endl;
//         cout<<"the value is ="<<num2<<endl;
//     }
//     void swapnumber(){
//         int temp = num1;
//         num1 = num2;
//         num2 = temp;
//     }
// };

// int main(){
//     int num1,num2;

//     cout<<"enter the value of num1 = "<<endl;
//     cin>>num1;

//     cout<<"Enter the value of num2 = "<<endl;
//     cin>>num2;

//     Swap s1(num1,num2);

//     cout<<"Before swap of number = "<<endl;
//     s1.display();

//     s1.swapnumber();

//     cout<<"After swap of number = "<<endl;
//     s1.display();

//     return 0;
// }

// Write a C++ program to swap two numbers using class concepts
#include <iostream>
using namespace std;
class Swap
{
private:
    int num1, num2;

public:
    void read();
    void display();
};
void Swap::read()
{
    cout << "Enter the two number = " << endl;
    cin >> num1 >> num2;
}
void Swap::display()
{
    cout << "Before swapping num1 = " << num1 << endl
         << "Before swapping num2 = " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping num1 = " << num1 << endl
         << "After swapping num2 " << num2 << endl;
}
int main()
{
    Swap obj;
    obj.read();
    obj.display();
    return 0;
}