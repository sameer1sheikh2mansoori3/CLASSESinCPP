#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    int input;
    int output;
    public:
    void work(int input){
     this->input = input;
     this->output=input>>1;
    }
    void print(){
        cout<<"my input is "<<this->input<<" "<<"my output is "<<this->output<<endl;
    }
    // Student(name , age){
    //     this.name = name;
    //     this.age = age;
    // }
};
int main(){
    Student s;
    s.work(14);
    s.print();
    return 0;

}