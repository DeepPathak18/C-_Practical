#include<iostream>
#include<string>
using namespace std;
class fuel
{
    string type_f;
    public:
   fuel(string type_f)
   {
       this->type_f=type_f;
   }
    void display_fuel()
    {
         cout<<"The type of fuel : "<<type_f<<endl;
        
    }

};
class brand
{
    string brand_name;
    public:
    brand(string brand_name)
    {
        this->brand_name=brand_name;
    }
    void display_brand()
    {
        cout<<"The brand name of car : "<<brand_name<<endl;
        
    }
};
class car: fuel, brand
{
    string car_name;
    public:
    car(string type_f,string brand_name,string car_name):fuel(type_f),brand(brand_name)
    {
        this->car_name=car_name;
    }
    void display_car()
    {
        display_brand();
        cout<<"The Name of car : "<<car_name<<endl;
        display_fuel();
    }
};

int main()
{
    car c("Petrol","Maruti","Swift");
    
    c.display_car();
    
    
    return 0;
}
