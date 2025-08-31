#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;
class word_frequency 
{
    string input; 
    map<string, int> word_fr;
public:
    void Count(string s) 
    {
        input=s; 
        Calculate();
        Display();
    }
    void Calculate() 
    {
        stringstream s(input);
        string temp;
        while(s>>temp) 
        {
            word_fr[temp]++;
        }
    }
    void Display() 
    {
        for(auto w : word_fr)
        {
            cout<<endl<<w.first<<"  -->  "<<w.second;
        }
    }
};  
int main() 
{
    
    word_frequency word;
    string input;

    cout<<"Enter your text:";
    getline(cin,input);

    cout<<"\nFrequency of each word is:";
    word.Count(input);

    return 0;
}
/*+---------------------------+
|      word_frequency       |
+---------------------------+
| - input: string           |
| - word_fr: map<string, int> |
+---------------------------+
| + Count(string)           |
| + Calculate()             |
| + Display()               |
+---------------------------+
*/
