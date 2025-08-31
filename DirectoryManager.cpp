#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
    
class file_manager 
{
    map<string, vector<string>> folders;
public:
    void add_folder() 
    {
        string name;
        cout<<"Enter Folder Name: ";
        cin.ignore();
        getline(cin, name);
        folders[name];
        cout<<"Folder Added Succesfully!!!";
    }
    void add_file() 
    {
        if(folders.empty()) 
        {
            cout<<"\nFile Management System is Empty!";
            return;
        }

        string filename, folname;
        cout<<"\nEnter folder name: ";
        cin.ignore();
        getline(cin, folname);

        auto find=folders.find(folname);
        if(find==folders.end()) 
        {
            cout<<"\nNo such Folder found!!!";
            return;
        }
        cout<<"\nEnter file name to add: ";
        cin.ignore();
        getline(cin, filename);
        folders[folname].push_back(filename);
        cout<<"File Added Succesfully!!!";
    }

    void Display() 
    {
        if(folders.empty()) 
        {
            cout<<"\nFile Management System is Empty!";
            return;
        }

        cout<<"\nFolders & Files:";
        for(auto &fol:folders) 
        {
            sort(fol.second.begin(),fol.second.end());
            cout<<endl<<"|---"<<fol.first;
            for(string &file:fol.second) 
            {
                cout<<endl<<"  --->>"<<file;
            }
        }
    }
};
    
int main() 
{
    
    file_manager file_m;
    int choice=1;

    while(choice!=0) 
    {
        cout<<"\nFile Management System!!!!!!"<<endl;
        cout<<"Enter >1< Add New Folder"<<endl;
        cout<<"Enter >2< Add New File in a Folder"<<endl;
        cout<<"Enter >3< View Existing Files"<<endl;
        cout<<"Enter >0< Exit System"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice) 
        {
        case 1:
            file_m.add_folder();
            break;

        case 2:
            file_m.add_file();
            break;

        case 3:
            file_m.Display();
            break;

        default:
            break;
        }
    }
    cout<<"\nExiting System...";
    
    return 0;
}
/*+-------------------+
|   file_manager    |
+-------------------+
| - folders: map<string, vector<string>> |
+-------------------+
| + add_folder(): void   |
| + add_file(): void     |
| + Display(): void      |
+-------------------+
*/
