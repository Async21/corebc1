#include "Blockchain.h"

int main() {
    Blockchain bChain = Blockchain();

    cout << "mining block 1" << endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));

    cout << "mining block 2" << endl;
    bChain.AddBlock(Block(1, "Block 2 Data"));

    cout << "mining block 3" << endl;
    bChain.AddBlock(Block(1, "Block 3 Data"));

    return 0;
}