/*You are tasked with developing a car rental system. Create a class `Car` with the 
following attributes: - Make - Model - Year - Rental price per day 
Methods: - `rent`: Accepts the number of days and returns the total rental cost - `display`: Displays car details and rental cost for a given number of days*/
//Problem 2


#include <iostream>
using namespace std;

// Car class definition
class car {
    private:
        string make;                
        string model;                
        int year;                    
        int rental_price_per_day;    

    public:
        // Function to calculate total rent for a given number of days
        int rent(int days) {
            int total = days * rental_price_per_day;
            return total;
        }

        // Function to display car details
        void display() {
            cout << "Car Name: " << make << "\n"
                 << "Car Model: " << model << "\n"
                 << "Car Year: " << year << "\n"
                 << "Rental Cost: " << rental_price_per_day << endl;
        }
};
