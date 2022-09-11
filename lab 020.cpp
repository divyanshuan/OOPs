/* Program to read the name and roll numbers of students from keyboard and write them into a file and
then display it.*/

#include <iostream>
#include <fstream>
using namespace std;

class Student
{
    int roll_no;
    char name[30];

public:
    Student(){};
    void getDetail()
    {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cin.ignore(); // ignore the newline char inserted when you press enter
        cout << "Enter Name:  ";
        cin.getline(name, 30);
    }
    void display()
    {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    cout << "Enter the number of students " << endl;
    int count;
    cin >> count;

    Student s[count]; // array of 4 student objects
    fstream file;
    int i;

    file.open("D:\\Program Files\\collage lab\\OOPs\\lab020.txt", ios ::out); // open file for writing
    cout << "Writing Student information to the file" << endl;
    cout << "Enter students Details to the File" << endl;

    for (i = 0; i < count; i++)
    {
        s[i].getDetail(); // write the object to a file
        file.write((char *)&s[i], sizeof(s[i]));
    }

    file.close(); // close the file

    file.open("D:\\Program Files\\collage lab\\OOPs\\lab020.txt", ios ::in); // open file for reading
    cout << "Reading Student information to the file" << endl;

    for (i = 0; i < count; i++)
    {
        file.read((char *)&s[i], sizeof(s[i])); // read an object from a file
        s[i].display();
    }

    file.close(); // close the file

    return 0;
}