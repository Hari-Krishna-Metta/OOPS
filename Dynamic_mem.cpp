//stack memory -> static allocation
//Heap memory -> Dynamic allocation -> allocate through new keyword
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
    Animal *obj = new Animal(); //obj stores the address of var
    obj->name = "Doggie";
    obj->age = 12;
    obj->eat();
    obj->sleep();
}