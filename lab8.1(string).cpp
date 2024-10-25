#include <iostream>
#include <string>
using namespace std;

void Count(const string& s, int& plusCount, int& minusCount, int& equalCount)
{
    plusCount = minusCount = equalCount = 0;

    for (char c : s) {
        if (c == '+') plusCount++;
        else if (c == '-') minusCount++;
        else if (c == '=') equalCount++;
    }
}

string Change(string& s)
{
    size_t pos = 0;
    while ((pos = s.find("++", pos)) != -1) {
        s.replace(pos, 2, "***");
        pos += 3;
    }
    pos = 0;
    while ((pos = s.find("--", pos)) != -1) {
        s.replace(pos, 2, "***");
        pos += 3;
    }
    pos = 0;
    while ((pos = s.find("==", pos)) != -1) {
        s.replace(pos, 2, "***");
        pos += 3;
    }
    return s;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    int plusCount, minusCount, equalCount;
    Count(str, plusCount, minusCount, equalCount);

    cout << "String contains:" << endl;
    cout << "'+' symbols: " << plusCount << endl;
    cout << "'-' symbols: " << minusCount << endl;
    cout << "'=' symbols: " << equalCount << endl;

    string dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}
