#ifndef HASHUTILS_H
#define HASHUTILS_H

#include <string>
#include "Block.h"

std::string calculateHash(const Block& block);

#endif // HASHUTILS_H