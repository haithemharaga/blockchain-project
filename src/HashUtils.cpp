#include "HashUtils.h"
#include <openssl/sha.h>
#include <sstream>
#include <iomanip>

std::string calculateHash(const Block& block) {
    std::stringstream ss;
    ss << block.index << block.timestamp << block.data << block.previousHash << block.nonce;
    std::string input = ss.str();

    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, input.c_str(), input.size());
    SHA256_Final(hash, &sha256);

    std::stringstream hashStream;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        hashStream << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }
    return hashStream.str();
}