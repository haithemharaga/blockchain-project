#include <iostream>
#include "Blockchain.h"
#include "Transaction.h"

int main() {
    Blockchain blockchain;

    std::vector<Transaction> transactions1 = {{"Alice", "Bob", 50}, {"Bob", "Charlie", 25}};
    blockchain.addBlock(serializeTransactions(transactions1));

    std::vector<Transaction> transactions2 = {{"Charlie", "Alice", 10}};
    blockchain.addBlock(serializeTransactions(transactions2));

    std::cout << "Is blockchain valid? " << (blockchain.isChainValid() ? "Yes" : "No") << std::endl;

    return 0;
}