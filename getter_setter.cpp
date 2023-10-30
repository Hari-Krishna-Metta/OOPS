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

    // int getWeight() {
    //     return weight;
    // }

    int setWeight(int w) {
        weight = w;
        return weight;
    }

};
int main() {
    Animal obj;
    obj.age = 24;
    obj.name = "Doggie";
    obj.eat();
    obj.sleep();
    cout<<obj.setWeight(100)<<endl;

}