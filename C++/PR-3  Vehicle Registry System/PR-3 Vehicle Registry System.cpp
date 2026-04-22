#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 1. Base Class: Vehicle (Encapsulation)
class Vehicle {
protected:
    int vehicleID;
    string manufacturer;
    string model;
    int year;

public:
    static int totalVehicles; // Static member

    // Constructor
    Vehicle(int id, string mfg, string mdl, int yr) {
        vehicleID = id;
        manufacturer = mfg;
        model = mdl;
        year = yr;
        totalVehicles++;
    }

    // Destructor
    virtual ~Vehicle() {
        totalVehicles--;
    }

    // Getters and Setters
    int getID() { return vehicleID; }
    
    virtual void display() {
        cout << "ID: " << vehicleID << " | Brand: " << manufacturer 
             << " | Model: " << model << " | Year: " << year << endl;
    }
};

int Vehicle::totalVehicles = 0; // Initialize static member

// 2. Single Inheritance: Car
class Car : virtual public Vehicle {
protected:
    string fuelType;
public:
    Car(int id, string mfg, string mdl, int yr, string fuel) 
        : Vehicle(id, mfg, mdl, yr), fuelType(fuel) {}
    
    void display() override {
        Vehicle::display();
        cout << "Fuel Type: " << fuelType << endl;
    }
};

// 3. Multilevel Inheritance: ElectricCar (Vehicle -> Car -> ElectricCar)
class ElectricCar : public Car {
protected:
    int batteryCapacity;
public:
    // Fix: Add Vehicle constructor call here if Car is inherited virtually
    ElectricCar(int id, string mfg, string mdl, int yr, string fuel, int cap)
        : Vehicle(id, mfg, mdl, yr), Car(id, mfg, mdl, yr, fuel), batteryCapacity(cap) {
    }

    void display() override {
        Car::display();
        cout << "Battery: " << batteryCapacity << " kWh" << endl;
    }
};

// 4. Base Class for Multiple Inheritance: Aircraft
class Aircraft {
protected:
    int flightRange;
public:
    Aircraft(int range) : flightRange(range) {}
    void showRange() { cout << "Flight Range: " << flightRange << " km" << endl; }
};

// 5. Multiple Inheritance: FlyingCar (Car + Aircraft)
class FlyingCar : public Car, public Aircraft {
public:
    FlyingCar(int id, string mfg, string mdl, int yr, string fuel, int range)
        : Vehicle(id, mfg, mdl, yr), Car(id, mfg, mdl, yr, fuel), Aircraft(range) {}

    void display() override {
        Car::display();
        showRange();
    }
};

// 6. Multilevel (extended): SportsCar
class SportsCar : public ElectricCar {
    int topSpeed;
public:
    // Fix: Vehicle ko bhi explicitly call karna padega
    SportsCar(int id, string mfg, string mdl, int yr, string fuel, int cap, int speed)
        : Vehicle(id, mfg, mdl, yr), ElectricCar(id, mfg, mdl, yr, fuel, cap), topSpeed(speed) {
    }

    void display() override {
        ElectricCar::display();
        cout << "Top Speed: " << topSpeed << " km/h" << endl;
    }
};

// 7. Hierarchical Inheritance: Sedan & SUV (From Car)
class Sedan : public Car {
public:
    // Vehicle(...) ko bhi call karna zaroori hai
    Sedan(int id, string mfg, string mdl, int yr, string fuel) 
        : Vehicle(id, mfg, mdl, yr), Car(id, mfg, mdl, yr, fuel) {}
};

// Hierarchical Inheritance: SUV (Car se derived)
class SUV : public Car {
public:
    // Vehicle(...) ko bhi call karna zaroori hai
    SUV(int id, string mfg, string mdl, int yr, string fuel) 
        : Vehicle(id, mfg, mdl, yr), Car(id, mfg, mdl, yr, fuel) {}
};

// Vehicle Registry Class: Array of Objects management
class VehicleRegistry {
    vector<Vehicle*> list; // Using vector as a dynamic array of objects

public:
    void addVehicle(Vehicle* v) {
        list.push_back(v);
        cout << "Vehicle added successfully!\n";
    }

    void displayAll() {
        cout << "\n--- All Registered Vehicles (Total: " << Vehicle::totalVehicles << ") ---\n";
        for (auto v : list) {
            v->display();
            cout << "---------------------------\n";
        }
    }

    void searchByID(int id) {
        for (auto v : list) {
            if (v->getID() == id) {
                cout << "Vehicle Found:\n";
                v->display();
                return;
            }
        }
        cout << "Vehicle with ID " << id << " not found.\n";
    }
};

int main() {
    VehicleRegistry registry;
    int choice, id, yr;
    string mfg, mdl;

    do {
        cout << "\n1. Add Sedan\n2. Add Electric Car\n3. View All\n4. Search by ID\n0. Exit\nEnter Choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2) {
            cout << "Enter ID, Mfg, Model, Year: ";
            cin >> id >> mfg >> mdl >> yr;
            if (choice == 1) 
                registry.addVehicle(new Sedan(id, mfg, mdl, yr, "Petrol"));
            else 
                registry.addVehicle(new ElectricCar(id, mfg, mdl, yr, "Electric", 75));
        } 
        else if (choice == 3) registry.displayAll();
        else if (choice == 4) {
            cout << "Enter ID to search: ";
            cin >> id;
            registry.searchByID(id);
        }
    } while (choice != 0);

    return 0;
}
