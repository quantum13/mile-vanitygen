#include <iostream>
#include "mile_crypto.h"
#include "utils.h"

using namespace std;

int main(int argc, char* argv[]) {

    PrivateKey priv;
    PublicKey pub;

    uint64_t i=0;
    while(true) {
        CreateKeyPair(priv, pub);

        if (startsWithCaseInsensitive(pub.ToBase58CheckString(), argv[1])) {
            cout << priv.ToBase58CheckString() << " " << pub.ToBase58CheckString() <<  endl;
        }

        if (++i%100000==0) {
            cout << i <<  endl;
        }
    }

}