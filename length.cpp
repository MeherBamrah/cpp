//Write a program that input a file, which determines its length. Also count the number of word occurrence. For example:” that person is going to town to meet other person”. Here “to” and “person”-2times.

#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename: ";
    cin >> filename;
    
    ifstream file(filename);
    if (!file) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    string word;
    map<string, int> wordCount;
    int length = 0;

    // Read entire file and count length
    char ch;
    while (file.get(ch)) {
        length++;
    }

    // Reset file pointer to beginning for word counting
    file.clear();
    file.seekg(0, ios::beg);

    // Count word occurrences
    while (file >> word) {
        wordCount[word]++;
    }

    cout << "Length of file (characters): " << length << endl;
    cout << "Word occurrences: " << endl;
    for (const auto& pair : wordCount) {
        if (pair.second > 1) {
            cout << "\"" << pair.first << "\" - " << pair.second << " times." << endl;
        }
    }

    file.close();
    return 0;
}
