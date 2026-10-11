#include <iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    float marks;

    void get(){
        cout<<"Name; ";
        getline(cin,name);
        cout<<"Age: ";
        cin>>age;
        cout<<"Marks: ";
        cin>>marks;
    }

    public:
    friend void display_details(Student s);
};

void display_details(Student s){
    s.get();
    cout<<"--------------------------STUDENT DEATILS-----------------------";
    cout<<"Name- "<<s.name<<endl;
    cout<<"Age- "<<s.age<<endl;
    cout<<"Marks- "<<s.marks<<endl;
}

int main(){
    Student s;
    display_details(s);
    return 0;
}
