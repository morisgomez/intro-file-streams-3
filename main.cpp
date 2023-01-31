#include <string>
#include <iostream>
#include <fstream> //library that helps us work with streams. allows us to read from files and write to files.
//fstream has data types: fstream for both reading and writing, ifstream for reading input and osfstream for writing output.
using namespace std;

//READING FROM TXT FILES
//1: OPEN FILE
//2: VERIFY IT OPENED
//3: WRITE TO FILE
//4: CLOSE


int main() {
    ofstream writeVar; //type to write to another file
    writeVar.open("hankTutorial.txt", ios::app); //the ios:app mode allows us to add to existing data instead.
    //w/o ios::app, existing data gets erased then our outputs gets added.

    if (writeVar.is_open())
    {
        writeVar << endl << 100 << endl << 400 << endl;
    }
    else
    {
        cout << "file does not exist";
    }
    return 0;
}