#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
struct Student 
{
    string name;
    int marks;
    char grade;
};
ostream& align(ostream& os) 
{
    os<<left<<setw(15);
    return os;
}
void display_header() 
{
    cout<<align<<"Name"<<setw(10)<<"Marks"<<setw(10)<<"Grade"<<endl;
    cout << "-------------------------------------------" << endl;
}
void process_direct(const string& filename) 
{
    ifstream file(filename);
    if (!file) 
    {
        cerr << "Could not open file."<<endl;
        return;
    }
    string name;
    int marks;
    char grade;
    display_header();
    while(file>>name>>marks>>grade) 
    {
        cout<<align<<name<<setw(10)<<marks<<setw(10)<<grade<<endl;
    }
    file.close();
}
void process_with_storage(const string& filename) 
{
    ifstream file(filename);
    if (!file) 
    {
       cerr<<"Could not open file.\n";
        return;
    }

    vector<Student> students;
    string name;
    int marks;
    char grade;
    while(file>>name>>marks>>grade)
    {
        students.push_back({name, marks, grade});
    }
    file.close();
    sort(students.begin(), students.end(), [](const Student& a, const Student& b) 
    {
        return a.marks > b.marks;
    });

    display_header();
    for (const auto& s : students) 
    {
        cout << align << s.name<<setw(10)<<s.marks<<setw(10)<<s.grade<<endl;
    }
}
int main()
{
    string filename = "students.txt";

    cout << "!!!!! Direct Processing Approach !!!\n";
    process_direct(filename);

    cout << "\n!!!! With Storage and Sorting Approach !!!!!\n";
    process_with_storage(filename);

    return 0;
}
/*+-------------------------------+
|         StudentProcessor       |
+-------------------------------+
| - filename: string             |
+-------------------------------+
| + StudentProcessor(string)     |
| + display_header()             |
| + process_direct()             |
| + process_with_storage()       |
| + align(ostream&)              |
+-------------------------------+
*/