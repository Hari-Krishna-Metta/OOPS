//stack memory -> static allocation
//Heap memory -> Dynamic allocation -> allocate through new keyword
#include<bits/stdc++.h>
using namespace std;

class Animal {
    private:
    int weight;
    public:
    //state
    int age;
    string name;

    Animal() {
        this->age = 12;
        this->name = "dogggggie";
        this->weight = 1002;
    }
    Animal(int age, string name, int weight) {
        this->age = age;
        this->name = name;
        this->weight = weight;
    }

    ~Animal() {
        cout<<"Destructor called"<<endl;
    }
    //property
    void eat() {
        cout<<age<<endl;
    }

    void sleep() {
        cout<<name<<endl;
        cout<<weight<<endl;
    }


};
int main() {
    Animal a(10,"puppy",30);
    a.eat();
    a.sleep();
    //manually memory erases in static memory
    Animal *obj = new Animal; //obj stores the address of var
    // obj->name = "Doggie";
    // obj->age = 12;
    obj->eat();
    obj->sleep();
    //In dynamic memory to clear space we need to use delete
    delete obj;
}