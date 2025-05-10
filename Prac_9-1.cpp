#include<iostream>
#include<stdexcept>
using namespace std;    
class LtoIR_calculator 
{
    double loan, income, LtoIR;
    void Calculate() 
    {
        if(income==0)
        throw logic_error("Income Can't be zero");
        LtoIR = loan/income;
    }
public:
    LtoIR_calculator() 
    {
        cout<<"Loan to Income Ratio Calculator!!!!!!"<<endl;
        cout<<"Input your Loan Amount: Rs. ";
        cin>>loan;
        cout<<"Input your Income Amount: Rs. ";
        cin>>income;

        if(loan<=0||income<=0)
        throw invalid_argument("Value can't be Negative!");
        Calculate();
    }    
    void Display() 
    {
        cout<<"Your Loan to Income Ratio is Rs. "<<LtoIR;
    }
};
int main() 
{
    try 
    {
        LtoIR_calculator Cal;
        Cal.Display();
    } 
    catch(invalid_argument& e) 
    {
        cout<<"Caught Invalid Argument: "<<e.what();
    }
    catch(logic_error& e) 
    {
        cout<<"Caught Logical Error: "<<e.what();
    }
    return 0;
}

/*+-------------------------+
|   LtoIR_calculator      |
+-------------------------+
| - loan: double          |
| - income: double        |
| - LtoIR: double         |
+-------------------------+
| + LtoIR_calculator()    |
| - Calculate()           |
| + Display()             |
+-------------------------+
*/