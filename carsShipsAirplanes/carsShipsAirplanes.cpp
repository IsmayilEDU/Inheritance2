#include <iostream>
using namespace std;
#include<stack>

#include"baseClasses.h"
#include"airplaneCarShip.h"














int main()
{
    //  Demo cars
    string  model1 = "X5", vendor1 = "Germany", company1 = "BMW", spoiler1 = "SpeedHunter";
    double power1 = 4.4;
    Car c1(model1, vendor1, company1, power1, spoiler1);
    Car c2(model1, vendor1, company1, power1, spoiler1);
    Car c3(model1, vendor1, company1, power1, spoiler1);

    //  Demo ships
    string  model2 = "Battle", vendor2 = "Japan", company2 = "USA";
    int countSails = 3;
    double power2 = 52.7;
    Ship sh1(model2, vendor2, company2, power2, countSails);
    Ship sh2(model2, vendor2, company2, power2, countSails);
    Ship sh3(model2, vendor2, company2, power2, countSails);
    
    //  Demo airplane
    string  model3 = "Fly", vendor3 = "vendorJapan", company3 = "Tokyo";
    int capacity = 3;
    double power3 = 125.9;
    Airplane a1(model3, vendor3, company3, power3, capacity);
    Airplane a2(model3, vendor3, company3, power3, capacity);
    Airplane a3(model3, vendor3, company3, power3, capacity);
    
    //  Create depo
    Depo d = Depo();
    d.cars[0] = c1;
    d.cars[1] = c2;
    d.cars[2] = c3;

    d.ships[0] = sh1;
    d.ships[1] = sh2;
    d.ships[2] = sh3;

    d.airplanes[0] = a1;
    d.airplanes[1] = a2;
    d.airplanes[2] = a3;

    d.showAllVehicle();
}

