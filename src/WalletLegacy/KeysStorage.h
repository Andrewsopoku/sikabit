// Copyright (c) 2011-2017 The Cryptonote, Royalties developers
// Copyright (c) 2017-2018 Sikabit developers
// Copyright (c) 2017-2018 Andrews Agyemang Opoku

// Sikabit is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.


#pragma once

#include "crypto/crypto.h"

#include <stdint.h>

namespace CryptoNote {

class ISerializer;

//This is DTO structure. Do not change it.
struct KeysStorage {
  uint64_t creationTimestamp;

  Crypto::PublicKey spendPublicKey;
  Crypto::SecretKey spendSecretKey;

  Crypto::PublicKey viewPublicKey;
  Crypto::SecretKey viewSecretKey;

  void serialize(ISerializer& serializer, const std::string& name);
};

} //namespace CryptoNote
