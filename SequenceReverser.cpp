#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <limits>
#include <utility>
using namespace std;

class number_list 
{
    vector<int> list;

    bool is_valid_integer(const string& str) 
    {
        if(str.empty()) 
        {
            return false;
        }
        int start=(str[0]=='-' || str[0]=='+')?1:0;
        if(start==1&&str.size()==1)
        {
            return false;
        }
        for(size_t i=start;i<str.size();++i) 
        {
            if(!isdigit(str[i]))
            {
                return false;
            }
        }
        return true;
    }

public:
    number_list()
    {
        string input;
        cout << "Enter your List and enter # to end it:\n";
        cin >> input;

        while (input != "#") 
        {
            if (is_valid_integer(input)) 
            {
                list.push_back(stoi(input));
            } 
            else 
            {
                cout << "Invalid input ignored: " << input << endl;
            }
            cin >> input;
        }
        cout << "Inputted " << list.size() << " elements in the list successfully!\n";
    }

    void vec_reverse() 
    {
        reverse(list.begin(), list.end());
        cout << "\n\nReversed List is:\n";
        for (int e : list)
           {
             cout << e << endl;
    }
    }

    void human_reverse() 
    {
        int s = list.size();
        for(int i=0;i<s/2;i++)
        {
            swap(list[i],list[s - i - 1]);
        }
        cout << "\n\nHuman Reversed List is:\n";
        for (int e : list)
          {
            cout << e << endl;
    }
    }
};
int main() 
{
    number_list L;
    L.human_reverse();
    L.vec_reverse();
    return 0;
}
/*+-------------------------+
|      number_list        |
+-------------------------+
| - list: vector<int>      |
+-------------------------+
| + number_list()          |
| + is_valid_integer(string): bool |
| + vec_reverse()          |
| + human_reverse()        |
+-------------------------+
*/
