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
        checkKey(argc, argv, priv, pub);

        if (++i%1000000==0) {
            cout << i <<  endl;
        }
    }

}
