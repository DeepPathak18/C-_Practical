#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    char ch, prev=' ';
    int word_count=0,char_count=0,line_count=0;

    ifstream file("Transactions.txt");
    if(!file) 
    {
        cout<<"Unable to open file!" << endl;
        return 1;
    }
    while(file.get(ch)) 
    {
        char_count++;

        if(ch=='\n') 
        {
            line_count++;
        }
        if ((prev==' ' || prev=='\n' || prev=='\t') && (ch!=' ' && ch!='\n' && ch!='\t')) 
        {
            word_count++;
        }
        prev=ch;  
    }
    file.close();

    cout << "Lines in the File : " << line_count << endl;
    cout << "Words in the File : " << word_count << endl;
    cout << "Characters in the File : " << char_count << endl;

    return 0;
}
/*
+--------------------------+
|       FileAnalyzer        |
+--------------------------+
| - fileName: string        |
| - word_count: int         |
| - char_count: int         |
| - line_count: int         |
| - prev: char              |
+--------------------------+
| + FileAnalyzer(string)    |
| + analyzeFile()           |
| + displayResults()        |
+--------------------------+

*/
