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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1870;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1872;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t581;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2326;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t302;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2327;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t794;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1875;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12174_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12174(__this, method) (( void (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2__ctor_m12174_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12175_gshared (Dictionary_2_t1870 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12175(__this, ___comparer, method) (( void (*) (Dictionary_2_t1870 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12175_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12176_gshared (Dictionary_2_t1870 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12176(__this, ___capacity, method) (( void (*) (Dictionary_2_t1870 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12176_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12177_gshared (Dictionary_2_t1870 * __this, SerializationInfo_t581 * ___info, StreamingContext_t582  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12177(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1870 *, SerializationInfo_t581 *, StreamingContext_t582 , const MethodInfo*))Dictionary_2__ctor_m12177_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12178_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12178(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1870 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12178_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12179_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12179(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1870 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12179_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12180_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12180(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1870 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12180_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12181_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12181(__this, ___key, method) (( bool (*) (Dictionary_2_t1870 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12181_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12182_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12182(__this, ___key, method) (( void (*) (Dictionary_2_t1870 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12182_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12183_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12183(__this, method) (( bool (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12183_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12184_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12184(__this, method) (( Object_t * (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12184_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12185_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12185(__this, method) (( bool (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12185_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12186_gshared (Dictionary_2_t1870 * __this, KeyValuePair_2_t1873  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12186(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1870 *, KeyValuePair_2_t1873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12186_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12187_gshared (Dictionary_2_t1870 * __this, KeyValuePair_2_t1873  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12187(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1870 *, KeyValuePair_2_t1873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12187_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12188_gshared (Dictionary_2_t1870 * __this, KeyValuePair_2U5BU5D_t2326* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12188(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1870 *, KeyValuePair_2U5BU5D_t2326*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12188_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12189_gshared (Dictionary_2_t1870 * __this, KeyValuePair_2_t1873  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12189(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1870 *, KeyValuePair_2_t1873 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12189_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12190_gshared (Dictionary_2_t1870 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12190(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1870 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12190_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12191_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12191(__this, method) (( Object_t * (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12191_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12192_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12192(__this, method) (( Object_t* (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12192_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12193_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12193(__this, method) (( Object_t * (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12193_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12194_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12194(__this, method) (( int32_t (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2_get_Count_m12194_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12195_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12195(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1870 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12195_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12196_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12196(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1870 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12196_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12197_gshared (Dictionary_2_t1870 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12197(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1870 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12197_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12198_gshared (Dictionary_2_t1870 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12198(__this, ___size, method) (( void (*) (Dictionary_2_t1870 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12198_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12199_gshared (Dictionary_2_t1870 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12199(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1870 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12199_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1873  Dictionary_2_make_pair_m12200_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12200(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1873  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12200_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12201_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12201(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12201_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12202_gshared (Dictionary_2_t1870 * __this, KeyValuePair_2U5BU5D_t2326* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12202(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1870 *, KeyValuePair_2U5BU5D_t2326*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12202_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12203_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12203(__this, method) (( void (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2_Resize_m12203_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12204_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12204(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1870 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m12204_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12205_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12205(__this, method) (( void (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2_Clear_m12205_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12206_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12206(__this, ___key, method) (( bool (*) (Dictionary_2_t1870 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12206_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12207_gshared (Dictionary_2_t1870 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12207(__this, ___value, method) (( bool (*) (Dictionary_2_t1870 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12207_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12208_gshared (Dictionary_2_t1870 * __this, SerializationInfo_t581 * ___info, StreamingContext_t582  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12208(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1870 *, SerializationInfo_t581 *, StreamingContext_t582 , const MethodInfo*))Dictionary_2_GetObjectData_m12208_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12209_gshared (Dictionary_2_t1870 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12209(__this, ___sender, method) (( void (*) (Dictionary_2_t1870 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12209_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12210_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12210(__this, ___key, method) (( bool (*) (Dictionary_2_t1870 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12210_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12211_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12211(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1870 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12211_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1875 * Dictionary_2_get_Values_m12212_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12212(__this, method) (( ValueCollection_t1875 * (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2_get_Values_m12212_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12213_gshared (Dictionary_2_t1870 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12213(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1870 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12213_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12214_gshared (Dictionary_2_t1870 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12214(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1870 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12214_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12215_gshared (Dictionary_2_t1870 * __this, KeyValuePair_2_t1873  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12215(__this, ___pair, method) (( bool (*) (Dictionary_2_t1870 *, KeyValuePair_2_t1873 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12215_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1877  Dictionary_2_GetEnumerator_m12216_gshared (Dictionary_2_t1870 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12216(__this, method) (( Enumerator_t1877  (*) (Dictionary_2_t1870 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12216_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t984  Dictionary_2_U3CCopyToU3Em__0_m12217_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12217(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t984  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12217_gshared)(__this /* static, unused */, ___key, ___value, method)
