// Copyright (c) 2021 The Garikcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <random.h>
#include <fs.h>
#include <util/strencodings.h>

fs::path GetUniquePath(const fs::path& base)
{
    FastRandomContext rnd;
    fs::path tmpFile = base / fs::u8path(HexStr(rnd.randbytes(8)));
    return tmpFile;
}