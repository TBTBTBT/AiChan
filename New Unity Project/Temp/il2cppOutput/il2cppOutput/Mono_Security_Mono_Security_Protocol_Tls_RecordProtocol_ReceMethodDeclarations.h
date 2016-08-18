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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t732;
// System.AsyncCallback
struct AsyncCallback_t183;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t623;
// System.IO.Stream
struct Stream_t734;
// System.Exception
struct Exception_t321;
// System.Threading.WaitHandle
struct WaitHandle_t786;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3845 (ReceiveRecordAsyncResult_t732 * __this, AsyncCallback_t183 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t623* ___initialBuffer, Stream_t734 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t734 * ReceiveRecordAsyncResult_get_Record_m3846 (ReceiveRecordAsyncResult_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t623* ReceiveRecordAsyncResult_get_ResultingBuffer_m3847 (ReceiveRecordAsyncResult_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t623* ReceiveRecordAsyncResult_get_InitialBuffer_m3848 (ReceiveRecordAsyncResult_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3849 (ReceiveRecordAsyncResult_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t321 * ReceiveRecordAsyncResult_get_AsyncException_m3850 (ReceiveRecordAsyncResult_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3851 (ReceiveRecordAsyncResult_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t786 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3852 (ReceiveRecordAsyncResult_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3853 (ReceiveRecordAsyncResult_t732 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3854 (ReceiveRecordAsyncResult_t732 * __this, Exception_t321 * ___ex, ByteU5BU5D_t623* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3855 (ReceiveRecordAsyncResult_t732 * __this, Exception_t321 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3856 (ReceiveRecordAsyncResult_t732 * __this, ByteU5BU5D_t623* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
