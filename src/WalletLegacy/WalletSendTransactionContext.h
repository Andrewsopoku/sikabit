// Copyright (c) 2011-2017 The Cryptonote, Royalties developers
// Copyright (c) 2017-2018 Sikabit developers
// Copyright (c) 2017-2018 Andrews Agyemang Opoku

// Sikabit is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Sikabit.  If not, see <http://www.gnu.org/licenses/>.


#pragma once

#include <list>
#include <vector>

#include "CryptoNoteCore/CryptoNoteBasic.h"
#include "IWalletLegacy.h"
#include "ITransfersContainer.h"

namespace CryptoNote {

struct TxDustPolicy
{
  uint64_t dustThreshold;
  bool addToFee;
  CryptoNote::AccountPublicAddress addrForDust;

  TxDustPolicy(uint64_t a_dust_threshold = 0, bool an_add_to_fee = true, CryptoNote::AccountPublicAddress an_addr_for_dust = CryptoNote::AccountPublicAddress())
    : dustThreshold(a_dust_threshold), addToFee(an_add_to_fee), addrForDust(an_addr_for_dust) {}
};

struct SendTransactionContext
{
  TransactionId transactionId;
  std::vector<CryptoNote::COMMAND_RPC_GET_RANDOM_OUTPUTS_FOR_AMOUNTS::outs_for_amount> outs;
  uint64_t foundMoney;
  std::vector<TransactionOutputInformation> selectedTransfers;
  TxDustPolicy dustPolicy;
  uint64_t mixIn;
  std::vector<tx_message_entry> messages;
  uint64_t ttl;
  uint32_t depositTerm;
};

} //namespace CryptoNote
