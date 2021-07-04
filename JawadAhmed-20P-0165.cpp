#include <iostream>   // Including the Input Output Stream Library to INput Ouput on Screen
#include <string>    //  Inlcuding String Library to use string function
#include <sstream>   // This Library I am using to convert the integer into the string

using namespace std;    // Using The Name Space std to use cout without std

string int_to_string(int v) {   // Function that will return an integer to a String
    stringstream ss;
    ss << v;
    return ss.str();
}

//**************************************************************************************************************//
class Address   // Class Declaration
{
    public:   // Access Specifier
    // Member of Class
        int house_no;
        int street;
        string city;
        string country;
        // Method
        string get_full_address();
    // Constructor and Destructor
        Address();
        ~Address();
};

//**************************************************************************************************************//

string Address::get_full_address()
{
    string return_String = "H. No. " + int_to_string(house_no) + " ,Street " + int_to_string(street)  + ", " + city + " " +  country;
    return return_String;
}

Address::Address()
{
    house_no = 0;
    street = 0;
    country = "";
    country = "";
}

Address::~Address(){}
// Address Class End

// ******************************************************************************************** //
// Employee Class 
class Employee   // Employee Class Declaration
{
    public:   // Access Specifier
        // Class Methods , constructor and Destructor
        void set_current_address(int house_no, int street, string city, string country);
        void set_permanent_address(int house_no, int street, string city, string country);
        void print_addresses();
        Employee();
        ~Employee();
    private:
        // Address Class Objects
        Address current_address, permanent_address;
};
// Method Body

//**************************************************************************************************************//

Employee::Employee(){}  // Constructor

Employee::~Employee(){}  // Destructor

void Employee::set_current_address(int house_no, int street, string city, string country)
{
    current_address.house_no = house_no;
    current_address.street = street;
    current_address.city = city;
    current_address.country = country;
}

void Employee::set_permanent_address(int house_no, int street, string city, string country)
{
    permanent_address.house_no = house_no;
    permanent_address.street = street;
    permanent_address.city = city;
    permanent_address.country = country;
}

void Employee::print_addresses()
{
    cout << permanent_address.get_full_address() << endl;   // Printing the Full Address using the object of Address Class
    cout << current_address.get_full_address() << endl;     // Printing the Full Address using the object of Address Class
}

// Employee Class End
 //**************************************************************************************************************//
// Wheel Class
class Wheel
{
    private:   // Access Specifier
        string state; 
    public:   // Access Specifier
    // Class Methods, Constructor and Destructor
        void set_wheel_state(string s);
        string get_wheel_state();
        Wheel();
        ~Wheel();
};

//**************************************************************************************************************//

Wheel::Wheel()   // Class Constructor That will Initialize the Value
{
    state = "";
}

void Wheel::set_wheel_state(string s)
{
    this->state = s;
}

string Wheel::get_wheel_state()
{
    // cout << "setting the Wheel state" << endl;
    return state;
}

Wheel::~Wheel(){}

//WHeel Class End
//**************************************************************************************************************//
// Car Class
class Car
{
    private:   // Access Specifier
        string array_of_wheels[4];   // String data type that will store the state of the Wheel
        Wheel stopState, movingState;  // Objects of the Wheel because we found has a relationship
    public:
        // Public Methods Constructor, and Destructor
        void set_car_to_moving();
        void set_car_to_stopped();
        void print_car_wheels_state();
        Car();
        ~Car();
};

//**************************************************************************************************************//
void Car::set_car_to_moving()
{
    for (int i = 0; i < 4; i++)
    {
        movingState.set_wheel_state("Turning");
        array_of_wheels[i] = movingState.get_wheel_state();
    }
}

void Car::set_car_to_stopped()
{
    for (int i = 0; i < 4; i++)
    {
        stopState.set_wheel_state("Stopped");
        array_of_wheels[i] = stopState.get_wheel_state();
    }
}

void Car::print_car_wheels_state()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Wheel " << i  << " " <<  array_of_wheels[i] << endl;
    }
}

Car::Car(){}

Car::~Car(){}

// This is your Starter File You Given the Google Classroom
//**************************************************************************************************************//
int main()   // Main funtion 
{
     // Start of PART - 1  -----------------------
    Address a; 

    a.house_no = 4; 
    a.street = 25; 
    a.city = "Peshawar"; 
    a.country = "Pakistan";

    cout << a.get_full_address() << endl;

    // End of Part - 1    -----------------------




    // Start of PART - 2  -----------------------

    Employee e1; 

    e1.set_current_address(4, 25, "Peshawar", "Pakistan"); 
    e1.set_permanent_address(14, 9, "Lahore", "Pakistan"); 
    e1.print_addresses();  

    // End of Part - 2     -----------------------




    // Start of PART - 3   -----------------------

    Wheel w1; 

    w1.set_wheel_state("Turning"); 
    cout << w1.get_wheel_state() << endl; 

    // End of Part - 3     -----------------------




    // Start of PART - 4   -----------------------

    Car c; 
    
    c.set_car_to_moving(); 
    c.print_car_wheels_state(); 

    c.set_car_to_stopped(); 
    c.print_car_wheels_state();

    // End of Part - 4     -----------------------

    return 0;
}
//**************************************************************************************************************//