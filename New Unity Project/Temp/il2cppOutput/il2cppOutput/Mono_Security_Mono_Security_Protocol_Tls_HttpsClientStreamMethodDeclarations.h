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

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t728;
// System.IO.Stream
struct Stream_t734;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t753;
// System.Net.HttpWebRequest
struct HttpWebRequest_t729;
// System.Byte[]
struct ByteU5BU5D_t623;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t754;
// System.Int32[]
struct Int32U5BU5D_t388;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t772;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m3840 (HttpsClientStream_t728 * __this, Stream_t734 * ___stream, X509CertificateCollection_t753 * ___clientCertificates, HttpWebRequest_t729 * ___request, ByteU5BU5D_t623* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m3841 (HttpsClientStream_t728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m3842 (HttpsClientStream_t728 * __this, X509Certificate_t754 * ___certificate, Int32U5BU5D_t388* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t754 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3843 (Object_t * __this /* static, unused */, X509CertificateCollection_t753 * ___clientCerts, X509Certificate_t754 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t753 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t772 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3844 (Object_t * __this /* static, unused */, X509Certificate_t754 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
