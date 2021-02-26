#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <map>

using namespace std;

void ping() {

    system("cls");
    int input;
    std::map<int, std::string>::iterator i;
    
    std::map<int, std::string> websites = {
        {1, "www.steamcommunity.com"},
        {2, "www.google.com"},
        {3, "www.twitter.com"},
        {4, "www.cplusplus.com"},
        {5, "www.github.com"},
        {6, "www.ogusers.com"},
        {7, "www.amazon.com"},
        {8, "www.soundcloud.com"},
        {9, "www.ukr.net"}
    };

        cout << "URLS: " << "\n";
        cout << "1=> " << websites.find(1)->second << '\n';
        cout << "2=> " << websites.find(2)->second << '\n';
        cout << "3=> " << websites.find(3)->second << '\n';
        cout << "4=> " << websites.find(4)->second << '\n';
        cout << "5=> " << websites.find(5)->second << '\n';
        cout << "6=> " << websites.find(6)->second << '\n';
        cout << "7=> " << websites.find(7)->second << '\n';
        cout << "8=> " << websites.find(8)->second << '\n';
        cout << "9=> " << websites.find(9)->second << '\n';

        cout << "Pick a number 1-9\n";
        cin >> input;
        
        i = websites.find(input);

        system(("ping " + websites[input]).c_str());

        if (input == 0) {
            system("exit");
        }

 }

int main()
{
    SetConsoleTitle( TEXT( "ping"));
    ping();
    return(0);
}


