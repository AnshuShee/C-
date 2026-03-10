#include <iostream>
#include <fstream>   
#include <string>  

using namespace std;

int main() {
    ofstream file;
    string data;

    file.open("example.txt", ios::app);

    if (file.is_open()) {
        cout << "Enter text to write into the file: ";

        getline(cin, data);   // cin.ignore() NOT needed here

        file << data << endl;

        cout << "Data written successfully." << endl;
        file.close();
    }

    return 0;
}
