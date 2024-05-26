// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2016-2020, The Karbo developers
//
// This file is part of Karbo.
//
// Karbo is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Karbo is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Karbo.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {

struct CheckpointData {
  uint32_t height;
  const char* blockId;
};


const std::initializer_list<CheckpointData> CHECKPOINTS = {
  {   502, "06676241002eee9588ec326566fe1cbf09acbc78f0468ef50e11b085025ba597" }
, {  191033, "ff2df7698688ab3dfda49ff65672a0a031d6ef7a9615976908b50a61f0891d75" }
, {  500000, "b2659731ebadf72e08c7519ef2ee2760b8f9786d58d029b6a2b4d4ee0d442ff2" }
};

}
