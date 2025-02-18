#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

struct Transaction {
    std::string sender;
    std::string receiver;
    double amount;
};

#endif // TRANSACTION_H