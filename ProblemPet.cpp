#include<iostream>
#include<string>
using namespace std;

//Pet class
class Pet {
     public:
        string name;
        int age;
        string type;
        Pet(): name("No name"), age(7) { }
        void display() {
             cout << "My name is: " << name << endl;
             cout << "My age is: " << age << endl;
             dog();
             cat();
        }
        void dog() {
          cout << "I love my master." << endl; }
        void cat() {
          cout << "My master feeds me everyday." << endl; }
};
//Chihuahua class is derived from class Pet
class Chihuahua : public Pet {
    public:
       void dogActivities() {
         cout << "I like walks on the beach..." << endl; }
};
//Bengal class is derived from class Pet
class Bengal : public Pet {
    public:
       void catActivities() {
         cout << "I love catnip" << endl; }
};
int main() {
     Chihuahua littleDog;
     littleDog.name = "Max";
     littleDog.age = 5;
     littleDog.display();
     littleDog.dogActivities();
     Bengal littleCat;
     littleCat.name = "Lily";
     littleCat.age = 2;
     littleCat.display();
     littleCat.catActivities();

     return 0;
}
