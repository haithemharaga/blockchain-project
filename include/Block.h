#ifndef BLOCK_H
#define BLOCK_H

#include <string>
#include <ctime>

struct Block {
    int index;
    std::time_t timestamp;
    std::string data;
    std::string previousHash;
    std::string hash;
    int nonce;

    Block(int idx, std::string d, std::string prevHash);
};

#endif // BLOCK_H