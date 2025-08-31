    #include <iostream>
    #include <string>
    using namespace std;
    class shop_management
    {
        int id, quantity, s_quantity;
        string name;
        float price, p_price;

    public:
        void add_details();
        void update_add_details();
        void update_sold_details();
        void display_details();
        float total_price();
    };
    void shop_management::add_details()
    {
        cout << "-----------------------------------" << endl;
        cout << "Enter Details of Product" << endl;
        cout << "Enter Your ID : ";
        cin >> id;
        cout << "Enter name of Product : ";
        cin>>name;
    }
    void shop_management::update_add_details()
    {
        cout << "Enter Quantity of Product : ";
        cin >> quantity;
        cout << "Enter Price of Product : ";
        cin >> price;
        p_price = price * quantity;
    }
    void shop_management::update_sold_details()
    {
        cout << "Enter Quantity of Product Sold : ";
        cin >> s_quantity;
        if (s_quantity > quantity)
        {
            cout << "Not Enough stock available" << endl;
        }
        else
        {
            quantity -= s_quantity;
            p_price = price * quantity;
        }
    }
    void shop_management::display_details()
    {
        cout << "-----------------------------------" << endl;
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Quantity : " << quantity << endl;
        cout << "Price  : " << price << endl;
        cout << "Total Product Price : " << p_price << endl;
    }
    float shop_management::total_price()
    {
        return p_price;
    }
    int main()
    {
        shop_management p[100];
        int n, choice;
        float t_price = 0;
        cout << "Enter Number of Products which you add intially : ";
        cin >> n;
    start:
        cout << "-----------------------------------" << endl;
        cout << "Enter 1 For Adding details" << endl;
        cout << "Enter 2 For Updating details" << endl;
        cout << "Enter 3 For Updating Sold details" << endl;
        cout << "Enter 4 For Displaying details" << endl;
        cout << "Enter 5 For Total Price of Products" << endl;
        cout << "Enter 6 For Exit" << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << "-----------------------------------" << endl;
        switch (choice)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                p[i].add_details();
                p[i].update_add_details();
            }
            break;
        case 2:
            for (int i = 0; i < n; i++)
            {
                p[i].update_add_details();
            }
            break;
        case 3:
            for (int i = 0; i < n; i++)
            {
                p[i].update_sold_details();
            }
            break;
        case 4:
            for (int i = 0; i < n; i++)
            {
                p[i].display_details();
            }
            break;
        case 5:
            for (int i = 0; i < n; i++)
            {
                t_price += p[i].total_price();
            }
            cout << "Total Price of all Products : " << t_price << endl;
            break;
        case 6:
            cout << "!!Existing Program Thank You!!" << endl;
            exit(0);
            break;
        default:
            cout << "Invalid Choice Try Again!!" << endl;
            return 0;
        }
        goto start;
    }
