#include <iostream>
using namespace std;
int main()
{
    char ch;
    string par;
    string words[1000];       
    int word_count[1000] = {0};
    int word_count=0,char_count=0,line_count=0;
    int word_index=0; 
    cout<<"Enter your paragraph (end with '#'): " << endl;

    while((ch=getchar())!='#')
    {
        par+=ch; 
    }
    for(int i=0;i<par.length();i++)
    {
        if(par[i]>='A' && par[i]<='Z')
        {
            par[i]=par[i]+('a'-'A');
        }
    }
    string current_word = "";
    for(int i=0;i<par.length();i++)
    {
        ch = par[i];
        if(ch == ' ' || ch == '\n' || ch == '\t')
        { 
            if(!current_word.empty())
            { 
                bool already_exists=false; 
                for(int j=0;j<word_index;j++)
                {
                    if(words[j]==current_word)
                    {
                        word_count[j]++; 
                        already_exists=true;
                        break;
                    }
                }

                if (!already_exists)
                {
                    words[word_index] = current_word;
                    word_count[word_index] = 1;
                    word_index++;
                }

                current_word = ""; 
            }
        }
        else
        {
            current_word += ch; 
        }
    }
    if (!current_word.empty())
    {
        bool already_exists = false;
        for (int j=0;j< word_index;j++)
        {
            if(words[j]==current_word)
            {
                word_count[j]++; 
                already_exists = true;
                break;
            }
        }
        if (!already_exists)
        {
            words[word_index] = current_word;
            word_count[word_index] = 1;
            word_index++;
        }
    }
    cout << endl
         << "-----Briefing-----" << endl;
    cout << "Words: " << word_index << endl;
    for (int i = 0; i < word_index; i++)
    {
        cout << words[i] << ": " << word_count[i] << endl;
    }
    return 0;
}

/*

+---------------------------+
|         ParagraphAnalyzer  |
+---------------------------+
| - paragraph: string        |
| - words: string[1000]      |
| - word_count: int[1000]    |
| - word_index: int          |
| - word_count_total: int    |
| - char_count: int          |
| - line_count: int          |
+---------------------------+
| + ParagraphAnalyzer()      |
| + inputParagraph()         |
| + processParagraph()       |
| + displayResults()         |
+---------------------------+
*/
