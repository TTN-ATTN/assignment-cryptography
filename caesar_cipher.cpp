#include <bits/stdc++.h>

using namespace std;

class Cipher {
    private:
        string str; // ==== original string ==== //
        int sh; // ==== shifting value ==== //

    public:
        Cipher() {};
        Cipher(string str, int sh) {
            this->str = str; 
            this->sh = sh; 
        };

        // ==== read input ==== //
        friend istream& operator>>(istream& in, Cipher& c) {
            cout << "Enter your string: ";
            getline(in, c.str);
            cout << "Enter your shift: ";
            in >> c.sh;
            return in;
        }

        // ==== caesar encryption ==== //
        void transform() {
            string res = "";
            for (auto ch : this->str) {
                if (isupper(ch))
                    res += (ch + this->sh - 'A' + 26) % 26 + 'A';
                else if (islower(ch))
                    res += (ch + this->sh - 'a' + 26) % 26 + 'a';
                else
                    res += ch;
            }
            this->str = res;
        }

        // ==== print ==== //
        friend ostream& operator<<(ostream& out, Cipher& c) {
            out << "Your encoded string is: ";
            out << c.str;
            return out;
        }
};

int main() {
    Cipher c;
    cin >> c;
    c.transform();
    cout << c << endl;
}
