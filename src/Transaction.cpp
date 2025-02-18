#include "Transaction.h"
#include <sstream>

std::string serializeTransactions(const std::vector<Transaction>& transactions) {
    std::stringstream ss;
    for (const auto& tx : transactions) {
        ss << tx.sender << tx.receiver << tx.amount;
    }
    return ss.str();
}