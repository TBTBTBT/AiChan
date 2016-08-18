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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1637;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t581;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1577;
// System.Reflection.Module
struct Module_t1214;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m10339 (UnitySerializationHolder_t1637 * __this, SerializationInfo_t581 * ___info, StreamingContext_t582  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m10340 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t581 * ___info, StreamingContext_t582  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m10341 (Object_t * __this /* static, unused */, DBNull_t1577 * ___instance, SerializationInfo_t581 * ___info, StreamingContext_t582  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m10342 (Object_t * __this /* static, unused */, Module_t1214 * ___instance, SerializationInfo_t581 * ___info, StreamingContext_t582  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m10343 (UnitySerializationHolder_t1637 * __this, SerializationInfo_t581 * ___info, StreamingContext_t582  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m10344 (UnitySerializationHolder_t1637 * __this, StreamingContext_t582  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
