#include<iostream>
#include<map>
using namespace std;

/*
For any number of student data given
find out top 3 mark wala students
*/

class Student {
    public:
    string name;
    int id;
    int marks;

    Student(string n, int id , int m):name(n),id(id), marks(m){}

};

int main(){
     map<double,Student, greater<double>> m;
     int n;
        cout<<"Enter number of students: ";
        cin>>n;
        string name;
        int id;
        double marks;
        for(int i=0; i<n; i++){
            cin>> name>> id >> marks;
            m.insert({marks, Student(name,id, marks)});
        }

        int top=3;

        cout<<"------------------------------"<<endl;
        cout<< "top 3 students are: "<<endl;
        
        for(auto it : m){
            cout<<it.second.name<<" "<<it.second.id<<" "<<it.second.marks<<endl;
            top--;
            if(top==0) break;
        }
    return 0;
}

