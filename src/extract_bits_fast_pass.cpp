/*
 * Copyright (C) 2019 Epsilon AgentX <epsilonagentx at gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#include <iostream>

#include <extract_bits_fast_pass.hpp>

/**
 * @brief ExtractBitsTraditionalPass::ExtractBitsTraditionalPass
 */
ExtractBitsFastPass::ExtractBitsFastPass() {

}

/**
 * @brief ExtractBitsTraditionalPass::~ExtractBitsTraditionalPass
 */
ExtractBitsFastPass::~ExtractBitsFastPass() {
}

/**
 * @brief ExtractBitsTraditionalPass::summationOfSetBits
 * @param longList
 * @param inputNumber
 */
void ExtractBitsFastPass::summationOfSetBits(std::vector<long> * longList, long inputNumber) {
    longList->clear();
    if (inputNumber < LOW_LIMIT_OF_INPUT_NUMBER) {
        return;
    }

    int howManyIterations = 0;
    long extractedNumber = 0;
    while (inputNumber != 0) {
        extractedNumber = inputNumber;
        inputNumber &= (inputNumber - 1);
        extractedNumber ^= inputNumber;

        howManyIterations++;
        longList->push_back(extractedNumber);
    }
    std::cout << "For the fast pass the iterations are : " << howManyIterations << std::endl;
}
