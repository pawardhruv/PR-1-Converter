// Problem Statement:

// QUESTION.1 Time Converter ??
//            Converts seconds to the HH:MM:SS format.


// ---- ANSWER ---- //


#include<iostream>

using namespace std;
class secondconvertor
{
    int min;
    int sec;
    int hour;
    int totalmin;
    int totalsec;
    int remmin;

public:
    void set_details()
    {
        cout<<"Enter The Seconds: ";
        cin>>totalsec;

        totalmin = totalsec/60;
        hour = totalmin/60;
        remmin = totalmin%60;
        sec = totalsec%60;
    }

    void get_details()
    {
        cout<<"HH:MM:SS "<<"0"<<hour<<":0"<<remmin<<":"<<sec;
    }
};
class hourconverter
{
    int min;
    int sec;
    int hour;
    int totalsec;

public:
    void set_details()
    {
        cout<<"Enter Total Hours: ";
        cin>>hour;
        cout<<"Enter Total Minutes: ";
        cin>>min;
        cout<<"Enter Total Seconds: ";
        cin>>sec;

        totalsec = (hour*3600) + (min*60) + sec;

}
    void get_details()
    {
        cout<<"Total Seconds = "<<totalsec;
    }
};

int main ()
{
    int choice;
    cout<<"Enter 1 For converting Seconds To Hour\n";
    cout<<"Enter 2 For converting Hour To Seconds\n";
    cout<<"Enter The Choice: ";
    cin>>choice;

    if (choice == 1)
    {
        secondconvertor sec;
        sec.set_details();
        sec.get_details();
    }
    else
    {
        hourconverter hour;
        hour.set_details();
        hour.get_details();
    }

    return 0;
}