//
// Created by DELL on 4/16/2021.
//

#ifndef TESTCHAIN_BLOCKCHAIN_H
#define TESTCHAIN_BLOCKCHAIN_H

#include <cstDint>
#include <vector>
#include "block.h"

using namespace std;

class Blockchain {
public:
    Blockchain();

    void AddBlock (Block bNew);

private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;

};


#endif //TESTCHAIN_BLOCKCHAIN_H
