#include <bits/stdc++.h>
using namespace std;

// ==== decode ==== //
string dec(string e, int s) {
    string d = "";
    for (auto c : e) {
        if (isupper(c))
            d += (c + s - 'A') % 26 + 'A';
        else if (islower(c))
            d += (c + s - 'a') % 26 + 'a';
        else
            d += c;
    }
    return d;
}

//==== brute force ==== //
void bf(string e) {
    cout << "Output:\n";
    for (int s = 1; s < 26; s++) {
        string d = dec(e, s);
        cout << "Decoded string: " << d << "\n";
        cout << "Shift amount: " << static_cast<int>(s) << "\n";
    }
}

int main() {
    string ei;
    cout << "Enter the encoded string: ";
    cin >> ei;
    bf(ei);
}
