//polymorphism - exists in many forms 
//2 types - complie time polymorphism, run-time polymorphism


//compile time polymorphism --> function overloading and operator overloading

//function overloading

#include<bits/stdc++.h>
using namespace std;

class add{
    public:
    int sum(int a, int b) {
        cout<<a+b<<endl;
    }

    double sum(double a, int b) {
       cout<<a+b<<endl;
    }

    float sum(float a, float b) {
        cout<<a+b<<endl;
    }
};

int main() {
    add obj;
    obj.sum(1,2);
    obj.sum(1.2,3);
    obj.sum(1.3f,2.3f);
    return 0;
}

// // operator overloading 

#include<bits/stdc++.h>
using namespace std;

class param{
    public:
    int val;

    void operator+(param& obj2) { //defined the behaviour
        int val1 = this->val;
        int val2 = obj2.val;
        cout<<val1-val2<<endl;
    }
};

int main() {
    param obj1, obj2;
    obj1.val = 7;
    obj2.val = 2;
    obj1 + obj2; //act as obj1.function(obj2);
    return 0;
}

//Run-time polymorphism

//function overriding

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:

    void speak() {
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal {
    public:
    void speak() {
        cout<<"Barking"<<endl;
    }
};

int main() {

    // Dog *d = new Dog();
    // d->speak();

    //UpCasting
    // Animal *obj = new Dog();
    // obj->speak();

    //DownCasting
    // Dog *obj = (Dog*)new Animal();
    // obj->speak();
    return 0;
}


//question

// class A {
//     public:
//     void m() {
//         cout<<"hii";
//     }
// };

// class B : public A {
//    public:
//    void t() {
//         cout<<"bye";
//     }
// };

// int main() {
//     B *b1 = (B*)new A();
//     b1->m();
// }