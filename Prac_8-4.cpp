#include<iostream>
#include<map>
using namespace std;
class students_data 
{
    multimap<int, string, greater<int>> ranking;
public:
    students_data() 
    {
        string name=" ";
        int marks;
        cout<<"\nInput Student Name and Marks (Enter ## to stop):\nName: ";
        cin>>name;
        while(name!="##") 
        {
            cout<<"Marks: ";
            cin>>marks;
            ranking.insert({marks,name});
            cout<<"Name: ";
            cin>>name;
        }
    }
    void Display() 
    {
        int i=0;
        cout<<"\n\nRanking of "<<ranking.size()<<" students is:";
        for(auto &M : ranking) 
        {
            cout<<endl<<++i<<") "<<M.second<<" -> "<<M.first;
        }
    }
};
    
int main() 
{
    students_data data_base;
    data_base.Display();
    
    return 0;
}
/*+-----------------------+
|    students_data      |
+-----------------------+
| - ranking: multimap<int, string, greater<int>> |
+-----------------------+
| + Display(): void     |
+-----------------------+
*/