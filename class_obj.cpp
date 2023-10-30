#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
    //state
    int age;
    string name;

    //property
    void eat() {
        cout<<age<<endl;
    }

    void sleep() {
        cout<<name<<endl;
    }


};
int main() {
    Animal obj;
    obj.age = 24;
    obj.name = "Doggie";
    obj.eat();
    obj.sleep();
}