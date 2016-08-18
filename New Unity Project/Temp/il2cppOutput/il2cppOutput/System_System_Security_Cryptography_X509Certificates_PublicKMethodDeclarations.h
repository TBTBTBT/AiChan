#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t875;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t680;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t876;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t772;
// System.Security.Cryptography.Oid
struct Oid_t877;
// System.Byte[]
struct ByteU5BU5D_t623;
// System.Security.Cryptography.DSA
struct DSA_t681;
// System.Security.Cryptography.RSA
struct RSA_t674;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4516 (PublicKey_t875 * __this, X509Certificate_t680 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t876 * PublicKey_get_EncodedKeyValue_m4517 (PublicKey_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t876 * PublicKey_get_EncodedParameters_m4518 (PublicKey_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t772 * PublicKey_get_Key_m4519 (PublicKey_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t877 * PublicKey_get_Oid_m4520 (PublicKey_t875 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t623* PublicKey_GetUnsignedBigInteger_m4521 (Object_t * __this /* static, unused */, ByteU5BU5D_t623* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t681 * PublicKey_DecodeDSA_m4522 (Object_t * __this /* static, unused */, ByteU5BU5D_t623* ___rawPublicKey, ByteU5BU5D_t623* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t674 * PublicKey_DecodeRSA_m4523 (Object_t * __this /* static, unused */, ByteU5BU5D_t623* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
