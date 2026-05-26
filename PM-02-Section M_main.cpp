#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Open files
    ofstream outFile("file1.txt");

    // Error handling with IO stream
    if(!outFile)
    {
        cout << "Error opening file!" << "\n";
        return 1;
    }

    // Write to files
    outFile << "Hello World" << "\n";
    outFile << "C++ File Handling" << "\n";

    // Write bytes to file
    char bytes[] = {'A', 'B', 'C', 'D'};
    outFile.write(bytes, 4);

    // Close files
    outFile.close();

    // Read from files
    ifstream inFile("file1.txt");

    if(!inFile)
    {
        cout << "Error opening file for reading!" << "\n";
        return 1;
    }

    string line;

    cout << "Reading file content:" << "\n";

    while(getline(inFile, line))
    {
        cout << line << "\n";
    }

    // Reset stream position
    inFile.clear();
    inFile.seekg(0);

    // Extract characters from files
    char ch;

    cout << "Characters in file:" << "\n";

    while(inFile.get(ch))
    {
        cout << ch;
    }

    // Count characters from last operation
    cout << "Characters extracted: "
         << inFile.gcount() << "\n";

    // Reset stream again
    inFile.clear();
    inFile.seekg(0);

    // Peek characters without extracting
    cout << "Peek character: "
         << char(inFile.peek()) << "\n";

    // Return extracted character on stream
    ch = inFile.get();

    cout << "Extracted character: " << ch << "\n";

    inFile.putback(ch);

    cout << "Character returned to stream." << "\n";

    // Compare content of two files
    ofstream secondFile("file2.txt");
    secondFile << "Hello World" << "\n";
    secondFile.close();

    ifstream fileA("file1.txt");
    ifstream fileB("file2.txt");

    string textA, textB;

    getline(fileA, textA);
    getline(fileB, textB);

    if(textA == textB)
    {
        cout << "Files have matching first lines." << "\n";
    }
    else
    {
        cout << "Files are different." << "\n";
    }

    fileA.close();
    fileB.close();

    // Load characters from cin stream directly to file
    ofstream userFile("userInput.txt");

    cout << "Enter text (# to stop): ";

    char input;

    while(cin.get(input) && input != '#')
    {
        userFile.put(input);
    }

    userFile.close();

    // Close reading file
    inFile.close();

    cout << "All file operations completed successfully."
         << "\n";

    return 0;
}
