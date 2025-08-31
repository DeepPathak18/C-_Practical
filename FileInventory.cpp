
#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;    
class inventory 
{
    string file_name;
    fstream inventory_file;
public:
    inventory(string name):file_name(name) 
    { 
        inventory_file.open(file_name,ios::out|ios::trunc);
        inventory_file.close(); 
        inventory_file.open(file_name,ios::app);
        if(!inventory_file.is_open()) 
        {
            cout<<endl<<"Unable to open file!";
            return;
        }
        inventory_file.seekp(SEEK_END);
        inventory_file<<"Inventory Management System"<<endl;
        cout<<"Name \tQuantity \tPrice"<<endl;
        inventory_file.close(); 
    }
    void add_item() 
    {
        string name;
        int qnty;
        float price;
        cout<<"\nEnter Item Name: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter Item Quantity: ";
        cin>>qnty;
        cout<<"Enter Item Price: ";
        cin>>price;

        inventory_file.open(file_name,ios::app);
        inventory_file.seekp(SEEK_END);
        inventory_file<<endl<<name<<" "<<to_string(qnty)<<" "<<to_string(price);
        inventory_file.close();
        cout<<"endl";
        cout<<"Item added succesfully!";
    }    
    void display_item() 
    {
        string sname, line, name, qnty, price;
        cout<<"Enter Item Name to view: ";
        cin>>sname;

        inventory_file.open(file_name, ios::in);
        while(getline(inventory_file, line)) 
        {
            stringstream words(line);
            words>>name;
            if(name!=sname) {
                continue;
            }
            words>>qnty;
            words>>price;
            cout<<"!!! Item Found!!!!";
            cout<<"Name Of Product : "<<name<<endl;
            cout<<"Quantity Of Product : "<<qnty<<endl;
            cout<<"Price Of product : "<<price<<endl;
            inventory_file.close();
            break;
        }
        if(name!=sname) 
        {
            cout<<"\nItem Not Found!";
        }
    }
    void display_inventory() 
    {
        string line, name, qnty, price;
        int i=0;

        inventory_file.open(file_name, ios::in);
        getline(inventory_file,line);
        getline(inventory_file,line);
        cout<<"Display The Inventory:";
        while(getline(inventory_file,line)) 
        {
            stringstream words(line);
            words>>name;
            words>>qnty;
            words>>price;
            cout<<"\n\nItem "<<++i<<"\nName: "<<name<<"\nQuantity: "<<qnty<<"\nPrice: "<<price;
        }
        inventory_file.close();
    }
}; 
int main() 
{

    inventory inventory_manager("inventory_management.txt");
    int choice;
    while(choice!=0) 
    {
        cout<<endl;
        cout<<"Inventory Management System:\nChoices:\n1. Add new Item\n2. View A Item\n3. View Full Inventory\n0. Exit System\nEnter choice: ";
        cin>>choice;

        switch(choice) {
        case 1:
        inventory_manager.add_item();
            break;

        case 2:
        inventory_manager.display_item();
            break;

        case 3:
        inventory_manager.display_inventory();
            break;

        default:
            break;
        }
    }
    cout<<"\nExiting System!!!!";
    
    return 0;
}

/*+-----------------------------+
|         Inventory           |
+-----------------------------+
| - file_name: string         |
| - inventory_file: fstream   |
+-----------------------------+
| + Inventory(string)         |
| + add_item()                |
| + display_item()            |
| + display_inventory()       |
+-----------------------------+
*/
