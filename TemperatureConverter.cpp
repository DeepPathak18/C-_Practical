#include<iostream>
using namespace std;

class Fahrenheit;  
class Celsius 
{
    float Temperature;
public:
    Celsius():Temperature(0) {}
    Celsius(float f):Temperature(f) {}
    float get_temp() 
    {
        return Temperature; 
    }
    void operator=(Fahrenheit); 
    bool operator==(Fahrenheit);
};
class Fahrenheit 
{
    float Temperature;
public:
    Fahrenheit():Temperature(0) {}
    Fahrenheit(float f):Temperature(f) {}
    float get_temp() 
    { 
        return Temperature; 
    }
    void operator=(Celsius);
    bool operator==(Celsius);
};
bool Celsius::operator==(Fahrenheit F) 
{
    float temp = F.get_temp();
    temp=(((temp-32)*5)/9);
    if(temp==Temperature)
    {
    return true;
    }
    else
    {
    return false;
    }
}
void Celsius::operator=(Fahrenheit F) 
{
    Temperature = F.get_temp();
    Temperature = (((Temperature-32)*5)/9);
   
}
bool Fahrenheit::operator==(Celsius C) 
{
    float temp = C.get_temp();
    temp = (((temp*9)/5)+32);
    if(temp == Temperature)
    {
    return true;
    }
    else
    {
    return false;
    }
}
void Fahrenheit::operator=(Celsius C) 
{
    Temperature = C.get_temp();
    Temperature = (((Temperature*9)/5)+32);
  
}
        
int main() 
{
    int choice=1;
    float Temperature;
    while(choice==1) 
    {
        cout<<"\n!!!!   Temperature Comparator !!!!"<<endl;
        cout<<"Enter Temperature in Celsius: ";
        cin>>Temperature;
        Celsius C(Temperature);
        
        cout<<"\nEnter Temperature in Fahrenheit: ";
        cin>>Temperature;
        Fahrenheit F(Temperature);
        
        Celsius Cel;
        Cel=F;
        Fahrenheit Fah;
        Fah=C;
        
        cout<<endl<<fixed<<C.get_temp()<<" ^C in Fahrenheit is "<<Fah.get_temp()<<" ^F";
        cout<<endl<<endl<<F.get_temp()<<" ^F in Celsius is "<<Cel.get_temp()<<" ^C\n\nSo, ";
        
        if(C==F & F==C)
        cout<<"Celsius temperature is the same as Fahrenheit temperature"<<endl;
        else
        cout<<"Celsius temperature is not the same as Fahrenheit temperature"<<endl;
        
        cout<<"Do you want to perform Again"<<endl;
        cout<<"Enter 1 for yes and 0 for no: ";
        cin>>choice;
    }
    
    return 0;
}
/*+------------------------+            +--------------------------+
|        Celsius         |            |        Fahrenheit        |
+------------------------+            +--------------------------+
| - Temperature: float   |            | - Temperature: float     |
+------------------------+            +--------------------------+
| + Celsius()            |            | + Fahrenheit()           |
| + Celsius(f: float)    |            | + Fahrenheit(f: float)   |
| + get_temp(): float    |            | + get_temp(): float      |
| + operator=(f: Fahrenheit): void    |            | + operator=(c: Celsius): void     |
| + operator==(f: Fahrenheit): bool   |            | + operator==(c: Celsius): bool    |
+------------------------+            +--------------------------+
*/
