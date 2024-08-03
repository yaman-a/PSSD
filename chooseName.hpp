#include <bits/stdc++.h>

using namespace std;

string getGender(const string &name) {
    char letter = name[0];
    unordered_set<char> vowels = {'A', 'E', 'I', 'O', 'U', 'Y'};
    if (vowels.find(letter) != vowels.end()) {
        return "Girl";
    } else {
        return "Boy";
    }
}

void splitName(const string &fullName, string &first, string &second) {
    first = "";
    second = "";
    bool foundspace = false;

    for (int i = 0; i < fullName.size(); i++) {
        if (fullName[i] == ' ') {
            foundspace = true;
        } else {
            if (foundspace) {
                second += fullName[i];
            } else {
                first += fullName[i];
            }
        }
    }
}

string chooseName(string father, string mother, string child1, string gender) {
    string father1st;
    string father2nd;
    string mother1st;
    string mother2nd;
    string child1first;
    string child1second;

    splitName(father, father1st, father2nd);
    splitName(mother, mother1st, mother2nd);
    splitName(child1, child1first, child1second);

    string child1gender = getGender(child1first);

    if (child1gender == gender) {
        // rule 2 - same gender
        if (gender == "Boy") {
            return father1st + " " + child1second;
        } else {
            return mother1st + " " + child1second;
        }
    } else {
        // rule 1 - different gender
        if (gender == "Boy") {
            return father2nd + " " + father1st;
        } else {
            return mother2nd + " " + mother1st;
        }
    }
}



