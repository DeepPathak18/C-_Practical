#include <iostream>
#include <set>
#include <cctype>
using namespace std;

class id_list 
{
    set<int> list;
    bool is_valid_integer(const string& str) 
    {
        if (str.empty()) 
        {
            return false;
        }
        int start = (str[0] == '-' || str[0] == '+') ? 1 : 0;
        if (start == 1 && str.size() == 1)
        {
             return false;
        }
        for (size_t i = start; i < str.size(); ++i) 
        {
            if (!isdigit(str[i])) return false;
        }
        return true;
    }

public:
    id_list() 
    {
        string input;
        cout << "\nEnter your Dataset and enter @ to end it:\n";
        cin >> input;
        while (input != "@") 
        {
            if (is_valid_integer(input)) {
                list.insert(stoi(input));
            } else {
                cout << "Invalid input ignored: " << input << endl;
            }
            cin >> input;
        }
    }
    void Display() 
    {
        cout << "\n\nDataset without duplicate entries is:";
        for (int id : list)
        {
            cout << "\n" << id;
        }
    }
};
int main() 
{
    id_list L;
    L.Display();
    return 0;
}/*
+-------------------+
|      id_list      |
+-------------------+
| - list: set<int>  |
+-------------------+
| + is_valid_integer(const string&): bool |
| + Display(): void |
+-------------------+

*/
