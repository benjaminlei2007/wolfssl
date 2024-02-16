/* cavium_octeon_50xx.h
 *
 * Copyright (C) 2006-2023 wolfSSL Inc.
 *
 * This file is part of wolfSSL.
 *
 * wolfSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1335, USA
 */

#ifndef _CAVIUM_OCTEON_50XX_H_
#define _CAVIUM_OCTEON_50XX_H_

#include <wolfssl/wolfcrypt/settings.h>
#include <wolfssl/wolfcrypt/types.h> /* for MATH_INT_T */
#include <wolfssl/wolfcrypt/aes.h>
#include <wolfssl/wolfcrypt/des3.h>

#ifdef HAVE_OCTEON_50XX

#ifndef NO_AES
#ifdef HAVE_AESGCM
int Octeon_AesGcm_Encrypt(Aes* aes, byte* in, byte* out, word32 inSz,
        byte* iv, word32 ivSz, byte* aad, word32 aadSz, byte* tag);
int Octeon_AesGcm_Decrypt(Aes* aes, byte* in, byte* out, word32 inSz,
        byte* iv, word32 ivSz, byte* aad, word32 aadSz, byte* tag);
#endif
#ifdef HAVE_AES_CBC
int Octeon_AesCbc_Encrypt(Aes *aes,
        uint64_t *inp64, uint64_t *outp64, size_t inl);
int Octeon_AesCbc_Decrypt(Aes *aes,
        uint64_t *inp64, uint64_t *outp64, size_t inl);
#endif
#endif /* !NO_AES */

#ifndef NO_DES3
int Octeon_Des3_CbcEncrypt(Des3* des3,
        uint64_t *inp64, uint64_t *outp64, size_t inl);
int Octeon_Des3_CbcDecrypt(Des3* des3,
        uint64_t *inp64, uint64_t *outp64, size_t inl);
#endif /* !NO_DES3 */

#endif /* HAVE_OCTEON_50XX */
#endif /* _CAVIUM_OCTEON_50XX_H_ */
