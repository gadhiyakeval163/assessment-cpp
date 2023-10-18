/*define a class to represent lecture details.
include the following members and the program should handle at least details of 5 lecture.
Data members:                   Data function:
A)Name of the lecturer          A)To assign initial values
B)Name of the subject           B)To add a lecture details
C)Name of the course            C)To display name and lecture details
D)Number of  the lecturers */

#include<iostream>
#include<string.h>
using namespace std;

class lecture
{
    int lecno;
    string lecname,subname,couname;
    
public:
void getdetails()
{
    cout<<"number of lectures:";
    cin>>lecno;
    cout<<"name of lecturer:";
    cin>>lecname;
    cout<<"name of subject:";
    cin>>subname;
    cout<<"name of course:";
    cin>>couname;
    cout<<endl;
}

void display_details()
{
    cout<<"\nnumber of lectures:"<<lecno<<endl<<"lecturer Name:"<<lecname<<endl<<"subject Name:"<<subname<<endl<<"course Name:"<<couname<<endl;
}
};

int main()
{
    
    int i=5;
    cout<<"Enter the total number of lecture: ";
    cin>>i;

    if(i>0)
    {
        
        lecture lectureArray[5];
        for(int i=0;i<5;i++)
        {
            cout<<"-----lecture details------"<<endl;
            lectureArray[i].getdetails();
        }

        cout<<"\n-----Display lecture detail-----"<<endl;
        for(int i=0;i<5;i++)
        {
            lectureArray[i].display_details();
        }
    }
    else
    {
        cout<<"Please enter a valid number."<<endl;
    }
    return 0;
}
