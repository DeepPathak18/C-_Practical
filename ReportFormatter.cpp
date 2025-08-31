#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

struct Student
{
    string name;
    double marks;
    double tuitionFee;
};
char currencySymbol = '₹'; 
ostream& currency(ostream& os) 
{
    os<< currencySymbol <<fixed <<setprecision(2);
    return os;
}
void display_header() 
{
    cout<<left<<setw(15)<<"Name"<<setw(10)<<"Marks"<<setw(15)<<"Tuition Fee"<<endl;
    cout<<setfill('-')<<setw(40) << "-" <<setfill(' ') <<endl;
}

void display_report(const vector<Student>& students) 
{
    display_header();
    for (const auto& s : students) 
    {
        cout << left <<setw(15) << s.name
                  << setw(10) << fixed << setprecision(1) << s.marks
                  << currency <<setw(15) << s.tuitionFee <<endl;
    }
}

int main() {
   
    currencySymbol = '₹';

    std::vector<Student> students = 
    {
        {"Deep", 89.5, 45200.75},
        {"Rambhai", 76.0, 39850.00},
        {"Kalubhai", 92.3, 50000.25},
        {"Raju", 68.4, 32000.00}
    };
    display_report(students);

    return 0;
}
/*+---------------------------+
|       StudentReport       |
+---------------------------+
| - currencySymbol: char    |
+---------------------------+
| + StudentReport()         |
| + currency(ostream&)      |
| + display_header()        |
| + display_report(vector<Student>) |
+---------------------------+
*/
