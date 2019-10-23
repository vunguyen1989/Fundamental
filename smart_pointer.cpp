#include <iostream>

using namespace std;

class Car{

    public:
        void Run(){
            cout<< "Car running" << endl;
        }
        Car(){
            cout<<"Car Constructor" << endl;
        }
        ~Car(){
            cout<<"Car Destructor" << endl;
        }
};

class CarSP {
    Car* sp;
    public:
        CarSP(){
            cout<<"CarSP constructor"<<endl;
            sp = new Car();
        }
        ~CarSP(){
            delete sp;
        }
};

int main(){

    CarSP carSP;

    return 0;
}