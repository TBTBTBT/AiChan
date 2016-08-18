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

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t1635;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t581;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnauthorizedAccessException::.ctor()
extern "C" void UnauthorizedAccessException__ctor_m10334 (UnauthorizedAccessException_t1635 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C" void UnauthorizedAccessException__ctor_m10335 (UnauthorizedAccessException_t1635 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnauthorizedAccessException__ctor_m10336 (UnauthorizedAccessException_t1635 * __this, SerializationInfo_t581 * ___info, StreamingContext_t582  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
