#include <iostream>
#include "mile_crypto.h"
#include "ed25519_ext.h"
#include "ed25519.h"
#include "utils.h"

using namespace std;

int main(int argc, char *argv[]) {

    PrivateKey priv;
    PublicKey pub;

    auto priv_data = priv.Data.data();
    ed25519_create_seed(priv_data);

    uint64_t i = 0;
    while (true) {
        for (int dig = 0; dig < 64; dig++) {
            if (--priv_data[dig] != 0) {
                break;
            }
        }

        ed25519_restore_from_private_key(pub.Data.data(), priv_data);
        checkKey(argc, argv, priv, pub);

        if (++i % 1000000 == 0) {
            cout << i << endl;
        }
    }

}
