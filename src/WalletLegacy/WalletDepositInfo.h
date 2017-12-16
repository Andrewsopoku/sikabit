// Copyright (c) 2011-2017 The Cryptonote, Royalties developers
// Copyright (c) 2017-2018 Sikabit developers
// Copyright (c) 2017-2018 Andrews Agyemang Opoku

// Sikabit is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.

#include "IWallet.h"

namespace CryptoNote {

struct DepositInfo {
  Deposit deposit;
  uint32_t outputInTransaction;
};

}
