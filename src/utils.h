#ifndef PROJECT_UTILS_H
#define PROJECT_UTILS_H

#include <iostream>
using namespace std;

bool startsWithCaseInsensitive(std::string mainStr, const std::string &toMatch) {
    // Convert mainStr to lower case
    std::transform(mainStr.begin(), mainStr.end(), mainStr.begin(), ::tolower);

    return mainStr.find(toMatch) == 0;
}


void checkKey(int argc, char *const *argv, const PrivateKey &priv, const PublicKey &pub) {
    for (uint8_t arg = 1; arg < argc; arg++) {
        if (startsWithCaseInsensitive(pub.ToBase58CheckString(), argv[arg])) {
            cout << priv.ToBase58CheckString() << " " << pub.ToBase58CheckString() << endl;
            break;
        }
    }
}

#endif //PROJECT_UTILS_H
