//getter setter concept is used to acces private data outside the class
#include<bits/stdc++.h>
using namespace std;

class Animal {
    private:
    int weight;
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

    int getWeight() {
        return weight;
    }

    void setWeight(int weight) {
        this->weight = weight; //this points to the current object
    }

};
int main() {
    Animal obj;
    obj.age = 24;
    obj.name = "Doggie";
    obj.eat();
    obj.sleep();
    obj.setWeight(100);
    cout<<obj.getWeight()<<endl;

}