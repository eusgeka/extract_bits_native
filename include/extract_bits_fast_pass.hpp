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

#ifndef EXTRACT_BITS_FAST_PASS_HPP
#define EXTRACT_BITS_FAST_PASS_HPP

#include <vector>
#include <extract_bits.hpp>
using namespace std;

/**
 * @brief The ExtractBitsTraditionalPass class
 */
class ExtractBitsFastPass : virtual public ExtractBits {
public:
    ExtractBitsFastPass();
    ~ExtractBitsFastPass();

    void summationOfSetBits(std::vector<long> *, long);
};

#endif // EXTRACT_BITS_FAST_PASS_HPP