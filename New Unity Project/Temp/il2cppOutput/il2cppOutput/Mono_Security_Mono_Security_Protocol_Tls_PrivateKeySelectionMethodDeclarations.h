﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t731;
// System.Object
struct Object_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t772;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t754;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t182;
// System.AsyncCallback
struct AsyncCallback_t183;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PrivateKeySelectionCallback__ctor_m4170 (PrivateKeySelectionCallback_t731 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t772 * PrivateKeySelectionCallback_Invoke_m4171 (PrivateKeySelectionCallback_t731 * __this, X509Certificate_t754 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" AsymmetricAlgorithm_t772 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t731(Il2CppObject* delegate, X509Certificate_t754 * ___certificate, String_t* ___targetHost);
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m4172 (PrivateKeySelectionCallback_t731 * __this, X509Certificate_t754 * ___certificate, String_t* ___targetHost, AsyncCallback_t183 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" AsymmetricAlgorithm_t772 * PrivateKeySelectionCallback_EndInvoke_m4173 (PrivateKeySelectionCallback_t731 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
