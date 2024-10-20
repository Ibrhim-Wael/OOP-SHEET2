/*Define a class called Odometer that will be used to track fuel and mileage for 
an automotive vehicle.  
With the following attributes: -Miles driven. - fuel efficiency of the vehicles (miles per gallon) 
The class should have member functions: - ‘Odometer_reset’: to reset the odometer to zero miles  - ‘set_fuel_efficiency’: to set the fuel efficiency (from user) - ‘add_trip_miles’: that accepts miles driven for a trip and adds it to the odometer’s 
total - ‘num_of_gallons’: that returns the number of gallons of gasoline that the vehicle 
has consumed since the odometer was last reset.
  */
class Odometer {
    private:
    float MilesDriven;
    float FuelEfficency;
    public:
    void OdometerReset() {
        MilesDriven = 0;
    }
    void setFeulEfficency(int x) {
        FuelEfficency=x;
    }
    void addTripMiles(int x) {
        MilesDriven+=x;
    }
    float numOfGallons() {
       return (FuelEfficencyMilesDriven);
    }
    int milesDriven() {
        return MilesDriven;
    }
};
int main() {
    Odometer od1;
    od1.OdometerReset();
    od1.setFeulEfficency(20);
    od1.addTripMiles(10);
    cout << od1.numOfGallons() << endl;//200
    cout << od1.milesDriven() << endl;//10
    od1.addTripMiles(50);
    cout << od1.milesDriven() << endl;//60
    cout << od1.numOfGallons() << endl;//1200
    od1.OdometerReset();
    cout << od1.milesDriven() << endl;//0
    cout << od1.numOfGallons() << endl;//0
} //Problem 4 
