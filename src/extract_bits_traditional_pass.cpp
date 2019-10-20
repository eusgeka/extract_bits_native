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

#include <string>
#include <bitset>
#include <math.h>

#include <extract_bits_traditional_pass.hpp>

/**
 * @brief ExtractBitsTraditionalPass::ExtractBitsTraditionalPass
 */
ExtractBitsTraditionalPass::ExtractBitsTraditionalPass() {

}

/**
 * @brief ExtractBitsTraditionalPass::~ExtractBitsTraditionalPass
 */
ExtractBitsTraditionalPass::~ExtractBitsTraditionalPass() {
}

/**
 * @brief ExtractBitsTraditionalPass::summationOfSetBits
 * @param longList
 * @param inputNumber
 */
void ExtractBitsTraditionalPass::summationOfSetBits(std::vector<long> * longList, long inputNumber) {
    longList->clear();
    if (inputNumber < 1) {
        return;
    }

    std::string numberAsString = std::bitset<sizeof(inputNumber)>(static_cast<unsigned long long>(inputNumber)).to_string();

    int powerOf = 0;
    int howManyIterations = 0;

    for (int index = static_cast<int>(numberAsString.length()) - 1; index >= 0; index--) {
        int extractedNumber = static_cast<int>(numberAsString.at(static_cast<unsigned long>(index)));
        if (extractedNumber == 49) {
            long extractedLong = static_cast<long>(pow(2, powerOf));
            longList->push_back(extractedLong);
        }
        howManyIterations++;
        powerOf++;
    }
}
