#include "Block.h"

Block::Block(int idx, std::string d, std::string prevHash)
    : index(idx), data(d), previousHash(prevHash), nonce(0) {
    timestamp = std::time(nullptr);
}