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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2195;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1872;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t581;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2376;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t302;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2377;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t794;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2200;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m16294_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16294(__this, method) (( void (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2__ctor_m16294_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16295_gshared (Dictionary_2_t2195 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16295(__this, ___comparer, method) (( void (*) (Dictionary_2_t2195 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16295_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16297_gshared (Dictionary_2_t2195 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16297(__this, ___capacity, method) (( void (*) (Dictionary_2_t2195 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16297_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16299_gshared (Dictionary_2_t2195 * __this, SerializationInfo_t581 * ___info, StreamingContext_t582  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16299(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2195 *, SerializationInfo_t581 *, StreamingContext_t582 , const MethodInfo*))Dictionary_2__ctor_m16299_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16301_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16301(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16301_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16303_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16303(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2195 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16303_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16305_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16305(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2195 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16305_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16307_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16307(__this, ___key, method) (( bool (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16307_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16309_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16309(__this, ___key, method) (( void (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16309_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16311_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16311(__this, method) (( bool (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16311_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16313_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16313(__this, method) (( Object_t * (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16313_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16315_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16315(__this, method) (( bool (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16315_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16317_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16317(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2195 *, KeyValuePair_2_t2197 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16317_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16319_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16319(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2195 *, KeyValuePair_2_t2197 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16319_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16321_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2U5BU5D_t2376* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16321(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2195 *, KeyValuePair_2U5BU5D_t2376*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16321_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16323_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16323(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2195 *, KeyValuePair_2_t2197 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16323_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16325_gshared (Dictionary_2_t2195 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16325(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2195 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16325_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16327_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16327(__this, method) (( Object_t * (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16327_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16329_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16329(__this, method) (( Object_t* (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16329_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16331_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16331(__this, method) (( Object_t * (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16333_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16333(__this, method) (( int32_t (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_get_Count_m16333_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m16335_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16335(__this, ___key, method) (( bool (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16335_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16337_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16337(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2195 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m16337_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16339_gshared (Dictionary_2_t2195 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16339(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2195 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16339_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16341_gshared (Dictionary_2_t2195 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16341(__this, ___size, method) (( void (*) (Dictionary_2_t2195 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16341_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16343_gshared (Dictionary_2_t2195 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16343(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2195 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16343_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2197  Dictionary_2_make_pair_m16345_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16345(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2197  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m16345_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m16347_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16347(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m16347_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16349_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2U5BU5D_t2376* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16349(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2195 *, KeyValuePair_2U5BU5D_t2376*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16349_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m16351_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16351(__this, method) (( void (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_Resize_m16351_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16353_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16353(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2195 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m16353_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m16355_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16355(__this, method) (( void (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_Clear_m16355_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16357_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16357(__this, ___key, method) (( bool (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16357_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16359_gshared (Dictionary_2_t2195 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16359(__this, ___value, method) (( bool (*) (Dictionary_2_t2195 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m16359_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16361_gshared (Dictionary_2_t2195 * __this, SerializationInfo_t581 * ___info, StreamingContext_t582  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16361(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2195 *, SerializationInfo_t581 *, StreamingContext_t582 , const MethodInfo*))Dictionary_2_GetObjectData_m16361_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16363_gshared (Dictionary_2_t2195 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16363(__this, ___sender, method) (( void (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16363_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16365_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16365(__this, ___key, method) (( bool (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16365_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16367_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16367(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2195 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m16367_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2200 * Dictionary_2_get_Values_m16369_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16369(__this, method) (( ValueCollection_t2200 * (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_get_Values_m16369_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16371_gshared (Dictionary_2_t2195 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16371(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16371_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m16373_gshared (Dictionary_2_t2195 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16373(__this, ___value, method) (( bool (*) (Dictionary_2_t2195 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16373_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16375_gshared (Dictionary_2_t2195 * __this, KeyValuePair_2_t2197  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16375(__this, ___pair, method) (( bool (*) (Dictionary_2_t2195 *, KeyValuePair_2_t2197 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16375_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2202  Dictionary_2_GetEnumerator_m16377_gshared (Dictionary_2_t2195 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16377(__this, method) (( Enumerator_t2202  (*) (Dictionary_2_t2195 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16377_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t984  Dictionary_2_U3CCopyToU3Em__0_m16379_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16379(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t984  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16379_gshared)(__this /* static, unused */, ___key, ___value, method)
