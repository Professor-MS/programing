#include <iostream>
using namespace std;
class YouTubeChannel
{
public:
    string ChannelName;
    int SubscriberCount;
    int NoOfVideo;
    YouTubeChannel()
    {
        ChannelName = "No Name";
        SubscriberCount = 0;
        NoOfVideo = 0;
    }
    YouTubeChannel(string CName, int Subscriber, int Videos)
    {
        ChannelName = CName;
        SubscriberCount = Subscriber;
        NoOfVideo = Videos;
    }
};
ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel)
{
    COUT<<"Channel Name: "<<ytChannel.ChannelName<<endl;
    COUT<<"Subscriber: "<<ytChannel.SubscriberCount<<"M"<<endl;
    COUT<<"Total Videos: "<<ytChannel.NoOfVideo<<endl;
    COUT<<"_______________________________________"<<endl;
    return COUT;
}
int main()
{
    // YouTubeChannel yt2;
    // cout << yt2.ChannelName;
    YouTubeChannel yt1=YouTubeChannel("Professor",3,24);
    YouTubeChannel yt2=YouTubeChannel("MS Tech",5,11);
    cout<<yt1<<yt2;
    system("pause");
    return 0;
}