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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t581;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IntPtr::.ctor(System.Int32)
extern "C" void IntPtr__ctor_m3159 (IntPtr_t* __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Int64)
extern "C" void IntPtr__ctor_m5823 (IntPtr_t* __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Void*)
extern "C" void IntPtr__ctor_m5824 (IntPtr_t* __this, void* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IntPtr__ctor_m5825 (IntPtr_t* __this, SerializationInfo_t581 * ___info, StreamingContext_t582  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m5826 (IntPtr_t* __this, SerializationInfo_t581 * ___info, StreamingContext_t582  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::get_Size()
extern "C" int32_t IntPtr_get_Size_m5827 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::Equals(System.Object)
extern "C" bool IntPtr_Equals_m5828 (IntPtr_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::GetHashCode()
extern "C" int32_t IntPtr_GetHashCode_m5829 (IntPtr_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IntPtr::ToInt64()
extern "C" int64_t IntPtr_ToInt64_m5830 (IntPtr_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void* System.IntPtr::ToPointer()
extern "C" void* IntPtr_ToPointer_m3152 (IntPtr_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IntPtr::ToString()
extern "C" String_t* IntPtr_ToString_m5831 (IntPtr_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IntPtr::ToString(System.String)
extern "C" String_t* IntPtr_ToString_m5832 (IntPtr_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" bool IntPtr_op_Equality_m3198 (Object_t * __this /* static, unused */, IntPtr_t ___value1, IntPtr_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" bool IntPtr_op_Inequality_m3151 (Object_t * __this /* static, unused */, IntPtr_t ___value1, IntPtr_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
extern "C" IntPtr_t IntPtr_op_Explicit_m5833 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
extern "C" IntPtr_t IntPtr_op_Explicit_m5834 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
extern "C" IntPtr_t IntPtr_op_Explicit_m5835 (Object_t * __this /* static, unused */, void* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
extern "C" int32_t IntPtr_op_Explicit_m3197 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C" void* IntPtr_op_Explicit_m5836 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
