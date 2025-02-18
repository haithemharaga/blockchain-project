#include "Blockchain.h"
#include "HashUtils.h"
#include <iostream>

Blockchain::Blockchain() {
    chain.push_back(Block(0, "Genesis Block", "0"));
    difficulty = 4;
}

void Blockchain::addBlock(std::string data) {
    Block newBlock(chain.size(), data, chain.back().hash);
    newBlock.hash = calculateHash(newBlock);
    chain.push_back(newBlock);
}

Block Blockchain::getLatestBlock() const {
    return chain.back();
}

bool Blockchain::isChainValid() const {
    for (size_t i = 1; i < chain.size(); i++) {
        const Block& current = chain[i];
        const Block& previous = chain[i - 1];

        if (current.hash != calculateHash(current)) {
            return false;
        }

        if (current.previousHash != previous.hash) {
            return false;
        }
    }
    return true;
}