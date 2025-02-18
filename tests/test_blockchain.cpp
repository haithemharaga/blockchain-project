#include "Blockchain.h"
#include <cassert>

void testBlockchain() {
    Blockchain blockchain;
    blockchain.addBlock("Block 1 Data");
    blockchain.addBlock("Block 2 Data");

    assert(blockchain.isChainValid() == true);
    std::cout << "All tests passed!" << std::endl;
}

int main() {
    testBlockchain();
    return 0;
}