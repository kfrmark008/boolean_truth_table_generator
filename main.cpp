#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int variableCount;
    cout << "Number of variables (1-3): ";
    if (!(cin >> variableCount) || variableCount < 1 || variableCount > 3) {
        cerr << "Choose between 1 and 3 variables.\n";
        return 1;
    }

    vector<string> names(variableCount);
    for (int i = 0; i < variableCount; ++i) {
        cout << "Name of variable " << i + 1 << ": ";
        cin >> names[i];
    }

    cout << "\n";
    for (const string& name : names) cout << name << '\t';
    cout << "A AND B\tA OR B\tA -> B\n";

    int rows = 1 << variableCount;
    for (int mask = rows - 1; mask >= 0; --mask) {
        vector<bool> values(variableCount);
        for (int i = 0; i < variableCount; ++i) {
            values[i] = (mask >> (variableCount - 1 - i)) & 1;
            cout << (values[i] ? "T" : "F") << '\t';
        }

        bool a = values[0];
        bool b = variableCount >= 2 ? values[1] : false;
        cout << (a && b ? "T" : "F") << '\t'
             << (a || b ? "T" : "F") << '\t'
             << (!a || b ? "T" : "F") << '\n';
    }
    return 0;
}
