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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t841;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t581;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t842;
// System.Collections.IEnumerator
struct IEnumerator_t302;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t839;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern "C" void NameObjectCollectionBase__ctor_m4365 (NameObjectCollectionBase_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameObjectCollectionBase__ctor_m4366 (NameObjectCollectionBase_t841 * __this, SerializationInfo_t581 * ___info, StreamingContext_t582  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m4367 (NameObjectCollectionBase_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m4368 (NameObjectCollectionBase_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m4369 (NameObjectCollectionBase_t841 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
extern "C" void NameObjectCollectionBase_Init_m4370 (NameObjectCollectionBase_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
extern "C" KeysCollection_t842 * NameObjectCollectionBase_get_Keys_m4371 (NameObjectCollectionBase_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern "C" Object_t * NameObjectCollectionBase_GetEnumerator_m4372 (NameObjectCollectionBase_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameObjectCollectionBase_GetObjectData_m4373 (NameObjectCollectionBase_t841 * __this, SerializationInfo_t581 * ___info, StreamingContext_t582  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern "C" int32_t NameObjectCollectionBase_get_Count_m4374 (NameObjectCollectionBase_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern "C" void NameObjectCollectionBase_OnDeserialization_m4375 (NameObjectCollectionBase_t841 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern "C" bool NameObjectCollectionBase_get_IsReadOnly_m4376 (NameObjectCollectionBase_t841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern "C" void NameObjectCollectionBase_BaseAdd_m4377 (NameObjectCollectionBase_t841 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m4378 (NameObjectCollectionBase_t841 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m4379 (NameObjectCollectionBase_t841 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern "C" String_t* NameObjectCollectionBase_BaseGetKey_m4380 (NameObjectCollectionBase_t841 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
extern "C" _Item_t839 * NameObjectCollectionBase_FindFirstMatchedItem_m4381 (NameObjectCollectionBase_t841 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;