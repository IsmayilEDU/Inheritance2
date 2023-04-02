#pragma once

#define size 3

class Car : public Specification, public Engine
{

    string _spoiler;

public:

    //  Encapsulation of spoiler
    const string get_spoiler() const
    {
        return this->_spoiler;
    }
    void set_spoiler(const string spoiler)
    {
        //Gonderilen spoiler markasi bosh olub-olmamasini yoxlayir
        if (spoiler == "")
        {
            cout << "Gonderilen spoiler markasi bosh ola bilmez!" << endl;
        }

        this->_spoiler = spoiler;
    }

    //  Default constructor
    Car()
    {

    }

    //  Constructor with parameters
    Car(const string model, const string vendor, const string company, const double power, const string spoiler)
        : Specification(model, vendor), Engine(company, power)
    {
        set_spoiler(spoiler);
    }

    //  Destructor
    ~Car()
    {

    }

    //  operator = 
    Car& operator = (const Car& other)
    {
        this->set_ID(other.get_ID());
        this->set_model(other.get_model());
        this->set_vendor(other.get_vendor());
        this->set_company(other.get_company());
        this->set_power(other.get_power());
        this->set_spoiler(other.get_spoiler());

        return *this;
    }

    //  Show car specifications
    void showCar()
    {
        cout << "     Car info" << endl;
        cout << "Model: " << this->get_model() << endl;
        cout << "Vendor: " << this->get_vendor() << endl;
        cout << "Engine's company : " << this->get_company() << endl;
        cout << "Engine's power: " << this->get_power() << endl;
        cout << "Spoiler's name: " << this->get_spoiler() << endl << endl;
    }
};

class Ship : public Specification, public Engine
{

    int _countSail;

public:

    //  Encapsulation of countSail
    const int get_countSail() const
    {
        return this->_countSail;
    }
    void set_countSail(const int countSail)
    {
        //  Yelkenin sayini yoxlayir
        if (countSail < 1)
        {
            cout << "Geminin min 1 yelkeni olmalidir!";
            return;
        }

        this->_countSail = countSail;
    }

    //  Default constructor
    Ship()
    {

    }

    //  Constructor with parameters
    Ship(const string model, const string vendor, const string company, const double power, const int countSail)
        : Specification(model, vendor), Engine(company, power)
    {
        set_countSail(countSail);
    }

    //  Destructor
    ~Ship()
    {

    }

    //  Show ship specifications
    void showShip()
    {
        cout << "     Ship info" << endl;
        cout << "Model: " << this->get_model() << endl;
        cout << "Vendor: " << this->get_vendor() << endl;
        cout << "Engine's company : " << this->get_company() << endl;
        cout << "Engine's power: " << this->get_power() << endl;
        cout << "Ship's sailCount: " << this->get_countSail() << endl << endl;
    }
};

class Airplane : public Specification, public Engine
{

    int _capacity;

public:

    //  Encapsulation of capacity
    const int get_capacity() const
    {
        return this->_capacity;
    }
    void set_capacity(const int capacity)
    {
        //  Capacity yoxlayir
        if (capacity < 1)
        {
            cout << "Teyyarenin tutumu min 1 olmalidir!" << endl;
            return;
        }

        this->_capacity = capacity;
    }

    //  Constructor with parameters
    Airplane(const string model, const string vendor, const string company, const double power, const int capacity)
        : Specification(model, vendor), Engine(company, power)
    {
        set_capacity(capacity);
    }

    //  Default constructor
    Airplane()
    {

    }

    //  Destructor
    ~Airplane()
    {

    }

    //  Show Airplane specifications
    void showAirplane()
    {
        cout << "     Airplane info" << endl;
        cout << "Model: " << this->get_model() << endl;
        cout << "Vendor: " << this->get_vendor() << endl;
        cout << "Engine's company : " << this->get_company() << endl;
        cout << "Engine's power: " << this->get_power() << endl;
        cout << "Airplane's capacity: " << this->get_capacity() << endl << endl;
    }
};

class Depo
{
public:

    Car cars[size];
    Ship ships[size];
    Airplane airplanes[size];

    
    void showAllVehicle()
    {
        //  Show cars
        for (int i = 0; i < size; i++)
        {
            this->cars[i].showCar();
        }

        //  Show ships
        for (int i = 0; i < size; i++)
        {
            this->ships[i].showShip();
        }

        //  Show airplanes
        for (int i = 0; i < size; i++)
        {
            this->airplanes[i].showAirplane();
        }
    }
    
};









