#pragma once

class Specification
{
    static int _staticID;
    int _ID;
    string _model;
    string _vendor;

public:

    //  Encapsulation of ID
    const int get_ID() const
    {
        return this->_ID;
    }
    void set_ID(const int ID)
    {
        this->_ID = ID;
    }

    //  Encapsulation of model
    const string get_model() const
    {
        return this->_model;
    }
    void set_model(const string model)
    {
        //  Gonderilen model bosh olub-olmadigini yoxlayir.
        if (model == "")
        {
            cout << "Gonderilen model bosh ola bilmez!" << endl;
            return;
        }
        this->_model = model;
    }

    //  Encapsulation of vendor
    const string get_vendor() const
    {
        return this->_vendor;
    }
    void set_vendor(const string vendor)
    {
        //  Gonderilen satici bosh olub-olmamasini yoxlayir
        if (vendor == "")
        {
            cout << "Gonderilen satici bosh ola bilmez" << endl;
        }
        this->_vendor = vendor;
    }

    //  Default constructor
    Specification()
    {

    }

    //  Constructor with parameters
    Specification(const string model, const string vendor)
    {
        this->_ID = ++(this->_staticID);
        set_model(model);
        set_vendor(vendor);
    }

    //  Destructor
    ~Specification()
    {

    }

};

int Specification::_staticID = 0;

class Engine
{
    string _company;
    double _power;

public:

    //  Encapsulation of company
    const string get_company() const
    {
        return this->_company;
    }
    void set_company(const string company)
    {
        //  Gonderilen company bosh olub-olmamasini yoxlayir
        if (company == "")
        {
            cout << "Gonderilen matorun company bosh ola bilmez!";
            return;
        }

        this->_company = company;
    }

    //  Encapsulation of power
    const double get_power() const
    {
        return this->_power;
    }
    void set_power(const double power)
    {
        if (power < 0)
        {
            cout << "Gonderilen matorun gucu menfi ola bilmez";
            return;
        }

        this->_power = power;
    }

    //  Default constructor
    Engine()
    {

    }

    //  Constuctor with parameters
    Engine(const string company, const double power)
    {
        set_company(company);
        set_power(power);
    }

    //  Destructor
    ~Engine()
    {

    }

};