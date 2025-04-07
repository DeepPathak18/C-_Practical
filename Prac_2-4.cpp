#include<iostream>
#include<string>
using namespace std;
class manage_inventory
{
    int product_id;
    string product_name;
    int product_price;
    int product_quantity,u_quantity,d_quantity;
    int pt_price;
    public:
    void add_product();
    int display_product();
    void update_product();
    void delete_product();
    int cal_total(int );
};
void manage_inventory::add_product()
{
    cout<<"-----------------------------------"<<endl;
    cout<<"Enter Product ID:";
    cin>>product_id;
    cout<<"Enter Product Name:";
    cin>>product_name;
    cout<<"Enter Product Price:";
    cin>>product_price;
    cout<<"Enter Product Quantity:";
    cin>>product_quantity;
}
void manage_inventory::update_product()
{
    cout<<"Enter Product ID:";
    cin>>product_id;
    cout<<"Enter Product Name:";
    cin>>product_name;
    cout<<"Enter Product Quantity:";
    cin>>u_quantity;
    product_quantity+=u_quantity;
}
void manage_inventory::delete_product()
{
    cout<<"Enter Product ID:";
    cin>>product_id;
    cout<<"Enter Product Name:";
    cin>>product_name;
    cout<<"Enter Product Quantity:";
    cin>>d_quantity;
    product_quantity-=d_quantity;
}
int manage_inventory::display_product()
{
    cout<<"Product ID:"<<product_id<<endl;
    cout<<"Product Name:"<<product_name<<endl;
    cout<<"Product Price:"<<product_price<<endl;
    cout<<"Product Quantity:"<<product_quantity<<endl;
    pt_price=product_price*product_quantity;
    cout<<"Total Price of this product:"<<pt_price<<endl;
    return pt_price;
}
int manage_inventory::cal_total(int pt_price)
{
    int total_price=0;
    total_price+=pt_price;
    cout<<"Total Price of all product:"<<total_price<<endl;
}
int main()
{
    int choice,n,un,dn;
    manage_inventory p[25];
    start:
    cout<<"-----------------------------------"<<endl;
    cout<<"Enter 1 for Add Product"<<endl;
    cout<<"Enter 2 for Update Product"<<endl;
    cout<<"Enter 3 for Delete Product"<<endl;
    cout<<"Enter 4 for Display Product"<<endl;
    cout<<"Enter Your Choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter Number of Product:";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            p[i].add_product();
        }
        break;
        case 2:
        cout<<"Enter Number of Product which you update:";
        cin>>un;
        for(int i=0;i<un;i++)
        {
            p[i].update_product();
        }
        break;
        case 3:
        cout<<"Enter Number of Product which you delete:";
        cin>>dn;
       for(int i=0;i<dn;i++)
        {
            p[i].delete_product();
        }
        break;
        case 4:
        for(int i=0;i<n;i++)
        {
            p[i].display_product();
        }
        break;
        default:
        cout<<"Invalid Choice!!";
        
    }
    
    goto start; 
    
}