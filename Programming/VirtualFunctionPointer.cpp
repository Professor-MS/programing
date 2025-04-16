#include <iostream>
#include <cstring>
using namespace std;
class ProfessorCH
{
protected:
    string Title;
    int rating;

public:
    ProfessorCH(string s, int r)
    {
        Title = s;
        rating = r;
    }
    virtual void Display() {}
};
class ProfessorVid : public ProfessorCH
{
    int VideoLength;

public:
    ProfessorVid(string s, int r, int vidLen) : ProfessorCH(s, r)
    {
        VideoLength = vidLen;
    }
    void Display()
    {
        cout << "_____________________________________________________" << endl;
        cout << "Video Title: " << Title << endl;
        cout << "Rating to Video: " << rating << " stars" << endl;
        cout << "Length of Video: " << VideoLength << " hours" << endl;
        cout << "_____________________________________________________" << endl;
    }
};
class ProfessorWeb : public ProfessorCH
{
    int wordsCount;

public:
    ProfessorWeb(string s, int r, int words) : ProfessorCH(s, r)
    {
        wordsCount = words;
    }
    void Display()
    {
        cout << "_____________________________________________________" << endl;
        cout << "Article Title: " << Title << endl;
        cout << "Rating to the Article: " << rating << " stars" << endl;
        cout << "No of Words: " << wordsCount << " words" << endl;
        cout << "_____________________________________________________" << endl;
    }
};
int main()
{
    string title;
    int rating, vidlen, word;
    // For Channel
    title = "Complete Python Tutorial. ";
    rating = 5;
    vidlen = 13;
    ProfessorVid Vid(title, rating, vidlen);
    // Vid.Display();
    // For Website
    title = "Tips to Learn Python Easily. ";
    rating = 5;
    word = 1300;
    ProfessorWeb Arti(title, rating, word);
    // Arti.Display();
    ProfessorCH *Tut[2];
    Tut[0] = &Vid;
    Tut[1] = &Arti;
    Tut[0]->Display();
    Tut[1]->Display();

    return 0;
}