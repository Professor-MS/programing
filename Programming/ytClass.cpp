#include <iostream>
using namespace std;
#include <list>
class youTubeChannel
{
public:
    string Name;
    string ownerName;
    int subCount;
    int vidVeiws;
    list<string> publishVideoTitle;
    youTubeChannel(string name, string OwnerName)
    {
        Name = name;
        ownerName = OwnerName;
        subCount = 0;
        vidVeiws = 0;
    }
    void GetInfo()
    {
        cout << "__________________________________________________" << endl;
        cout << "Name: " << Name << endl;
        cout << "Channel Owner: " << ownerName << endl;
        cout << "Views: " << vidVeiws << "M" << endl;
        cout << "Subscriber: " << subCount << "M" << endl;
        for (string videoTitle : publishVideoTitle)
        {
            cout << "Title: " << videoTitle << endl;
        }
    }
};
class CookingYoutubeChannel : public youTubeChannel
{
    CookingYoutubeChannel(string Name, string ownerName) : youTubeChannel(string Name, string OwnerName)
    {
    }
};
int main()
{
    system("cls");

    youTubeChannel ytChannel("MS Professor", "Salman");
    ytChannel.publishVideoTitle.push_back("Web Development Full Course HTML, CSS");
    ytChannel.publishVideoTitle.push_back("Complete Python Course For Beginners.");
    ytChannel.publishVideoTitle.push_back("JavaScript Complete Crash Course for Beginners.");
    ytChannel.GetInfo();
    cout << "__________________________________________________" << endl;
    youTubeChannel YTChannel("MS Tech", "Professor");
    YTChannel.publishVideoTitle.push_back("Advance Adobe After Effects Full Course");
    YTChannel.publishVideoTitle.push_back("Adobe Illustrator Full Course For Beginners");
    YTChannel.publishVideoTitle.push_back("Complete Adobe Photoshop Course for Beginners");
    YTChannel.GetInfo();
    cout << "__________________________________________________" << endl;

    system("pause>0");
    return 0;
}