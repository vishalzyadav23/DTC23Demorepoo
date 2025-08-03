// write a c++ program to perform the student of detailes using class concept
// the data should contain    ---------->   (name,rollno,course,address)

// #include<iostream>
// using namespace std;

//     class student{
//     private:
//         char Name[20];
//         int roll_no;
//         char course[20];
//         char address[20];

//     public:
//         void read();
//         void display();

//     };

//     void student :: read(){

//         cout<<"------------------------"<<endl;
//         cout<<"enter here your name =";
//         cin>>Name;
//         cout<<"enter here your roll_no =";
//         cin>>roll_no;
//         cout<<"enter here your course =";
//         cin>>course;
//         cout<<"enter here your address =";
//         cin>>address;
//     }

//     void student :: display(){
//         cout<<"------------------------"<<endl;

//         cout<<"name ="<<Name<<endl;
//         cout<<"roll_no ="<<roll_no<<endl;
//         cout<<"course ="<<course<<endl;
//         cout<<"address ="<<address<<endl;
//     }

//     int main(){
//         student s1;
//         s1.read();
//         s1.display();
//         return 0;
//     }

// write a c++ program to perform the student of detailes using class concept
// the data should contain    ---------->   (name,rollno,course,address)

#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int rollno;
    char course[20];
    char address[20];

public:
    void read();
    void display();
};
void student::read()
{
    cout << "Enter the student name = " << endl;
    cin >> name;
    cout << "Enter the student rollno = " << endl;
    cin >> rollno;
    cout << "Enter the student course = " << endl;
    cin >> course;
    cout << "Enter the student address = " << endl;
    cin >> address;
}
void student::display()
{
    cout << "The name = " << name << endl;
    cout << "The rollno = " << rollno << endl;
    cout << "The course = " << course << endl;
    cout << "The address = " << address << endl;
}
int main()
{
    student obj;
    obj.read();
    obj.display();
    return 0;
}