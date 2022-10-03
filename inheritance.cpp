#include<iostream>
using namespace std;

class Animal
{
    public:
    void sound(){
        cout<<"Animal";
    }
};

class Dog : public Animal
{
    public:
    void sound(){
        cout<<"Dog"<<endl;
    }
};

// class Cat : public Animal
// {
//     public:
//     void meow(){
//         cout<<"Cat"<<endl;
//     }
// };

int main(){
    Dog d;
    Animal *a;
    a=&d;
    a->sound();
}
