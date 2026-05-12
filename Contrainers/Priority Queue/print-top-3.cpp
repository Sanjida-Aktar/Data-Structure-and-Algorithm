#include<iostream>
#include<queue>
using namespace std;
class Student{
    public:
    string name;
    int id;
    int marks;
    Student(string s, int i, int m):name(s),id(i),marks(m) {}
};
int main(){
     priority_queue<Student>pq;

     int n;
     cout<<"Enter the number of students: ";
     cin>>n;
     string name;
     int id, marks;
     for(int i = 0; i < n; i++){
         cout<<"Enter name, ID, and marks for student "<<i+1<<": ";
         cin>>name>>id>>marks;
         pq.push(Student(name, id, marks));
     }

     for(int i = 0; i < 3 && !pq.empty(); i++){
         Student topStudent = pq.top();
         cout<<topStudent.name<<" = "<<topStudent.marks<<endl;
         pq.pop();
     }
    return 0;
}