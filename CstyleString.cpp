#include <bits/stdc++.h>
using namespace std;
int main() {
    // C-style strings use fixed-size character arrays.
    // Always reserve space for the null terminator '\0'.
    char word[10]; // max 9 visible chars + '\0'
    // PITFALL: cin >> word has NO bounds checking. It stops at whitespace,
    // but will overflow if the user types more than 9 characters.
    // We use setw(10) to limit extraction to 9 chars + '\0'.
    cin >> setw(10) >> word;
    cout << "word: " << word << '\n';

    // After operator>> reads a word, the rest of that line (including '\n')
    // is still in the input buffer. If we call getline immediately,
    // it will read the leftover part and may appear "empty".
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // getline reads a whole line INCLUDING spaces, and stops at '\n'.
    char line[100]; // max 99 visible chars + '\0'
    cin.getline(line, 100);
    cout << "line: " << line << '\n';

    // Another PITFALL: if the user types more than 99 chars, getline will
    // truncate and set failbit. You can detect that like this:
    if (!cin) {
        cout << "warning: line was longer than the buffer\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return 0;
}
