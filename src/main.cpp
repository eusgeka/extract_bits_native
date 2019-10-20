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

#include <extract_bits_traditional_pass.hpp>
#include <extract_bits_fast_pass.hpp>

int main(int argc, char* argv[]) {
    long inputNumber = 0;
    if (argc > 1) {
        inputNumber = atoi(argv[1]);
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << " ======================================== " << std::endl;
    std::cout << " ========== Traditional Pass ============ " << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    ExtractBits * extractBits = new ExtractBitsTraditionalPass();
    std::vector<long> longList;
    extractBits->summationOfSetBits(&longList, inputNumber);
    delete extractBits;
    extractBits = nullptr;

    std::cout << "For the " << inputNumber << " the extracted bits are " << std::endl;
    for (unsigned long index = 0; index < longList.size(); index++) {
        std::cout << longList.at(index) << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << " ======================================== " << std::endl;
    std::cout << " ============= Fast Pass ================ " << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    extractBits = new ExtractBitsFastPass();
    extractBits->summationOfSetBits(&longList, inputNumber);
    delete extractBits;
    extractBits = nullptr;

    std::cout << "For the " << inputNumber << " the extracted bits are " << std::endl;
    for (unsigned long index = 0; index < longList.size(); index++) {
        std::cout << longList.at(index) << std::endl;
    }
}
