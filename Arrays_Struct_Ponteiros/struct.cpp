#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

struct student
{
    string name;
    float gpa;
    bool enrolled;

};

int main (){
    student student1;
    student1.name = "Bashar Al-Assad";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Saddam Houssein";
    student2.gpa = 2.1;
    student2.enrolled = true;
    
    student student3;
    student3.name = "Benjamin Netanyahu";
    student3.gpa = 1.5;
    student3.enrolled = false;

    cout << student1.name << endl;
    cout << student1.gpa << endl;
    cout << student1.enrolled << endl;

    cout << student2.name << endl;
    cout << student2.gpa << endl;
    cout << student2.enrolled << endl;

    cout << student3.name << endl;
    cout << student3.gpa << endl;
    cout << student3.enrolled << endl;



    return 0;
}