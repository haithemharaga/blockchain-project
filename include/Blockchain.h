#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <vector>
#include "Block.h"

class Blockchain {
private:
    std::vector<Block> chain;
    int difficulty;

public:
    Blockchain();
    void addBlock(std::string data);
    Block getLatestBlock() const;
    bool isChainValid() const;
};

#endif // BLOCKCHAIN_H