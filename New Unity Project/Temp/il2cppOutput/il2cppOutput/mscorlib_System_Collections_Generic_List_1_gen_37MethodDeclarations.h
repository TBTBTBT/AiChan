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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t365;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2010;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t302;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2317;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t390;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1736;
// System.Object[]
struct ObjectU5BU5D_t53;
// System.Predicate`1<System.Object>
struct Predicate_1_t1748;
// System.Comparison`1<System.Object>
struct Comparison_1_t1754;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10484_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1__ctor_m10484(__this, method) (( void (*) (List_1_t365 *, const MethodInfo*))List_1__ctor_m10484_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10486_gshared (List_1_t365 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10486(__this, ___capacity, method) (( void (*) (List_1_t365 *, int32_t, const MethodInfo*))List_1__ctor_m10486_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10488_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10488(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10488_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10490_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10490(__this, method) (( Object_t* (*) (List_1_t365 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10490_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10492_gshared (List_1_t365 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10492(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t365 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10492_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10494_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10494(__this, method) (( Object_t * (*) (List_1_t365 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10494_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10496_gshared (List_1_t365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10496(__this, ___item, method) (( int32_t (*) (List_1_t365 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10496_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10498_gshared (List_1_t365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10498(__this, ___item, method) (( bool (*) (List_1_t365 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10498_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10500_gshared (List_1_t365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10500(__this, ___item, method) (( int32_t (*) (List_1_t365 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10500_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10502_gshared (List_1_t365 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10502(__this, ___index, ___item, method) (( void (*) (List_1_t365 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10502_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10504_gshared (List_1_t365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10504(__this, ___item, method) (( void (*) (List_1_t365 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10504_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10506_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10506(__this, method) (( bool (*) (List_1_t365 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10506_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10508_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10508(__this, method) (( bool (*) (List_1_t365 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10508_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10510_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10510(__this, method) (( Object_t * (*) (List_1_t365 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10510_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10512_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10512(__this, method) (( bool (*) (List_1_t365 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10512_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10514(__this, method) (( bool (*) (List_1_t365 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10514_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10516_gshared (List_1_t365 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10516(__this, ___index, method) (( Object_t * (*) (List_1_t365 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10516_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10518_gshared (List_1_t365 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10518(__this, ___index, ___value, method) (( void (*) (List_1_t365 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10518_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10520_gshared (List_1_t365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10520(__this, ___item, method) (( void (*) (List_1_t365 *, Object_t *, const MethodInfo*))List_1_Add_m10520_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10522_gshared (List_1_t365 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10522(__this, ___newCount, method) (( void (*) (List_1_t365 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10522_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10524_gshared (List_1_t365 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10524(__this, ___collection, method) (( void (*) (List_1_t365 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10524_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10526_gshared (List_1_t365 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10526(__this, ___enumerable, method) (( void (*) (List_1_t365 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10526_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10528_gshared (List_1_t365 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10528(__this, ___collection, method) (( void (*) (List_1_t365 *, Object_t*, const MethodInfo*))List_1_AddRange_m10528_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1736 * List_1_AsReadOnly_m10530_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10530(__this, method) (( ReadOnlyCollection_1_t1736 * (*) (List_1_t365 *, const MethodInfo*))List_1_AsReadOnly_m10530_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10532_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_Clear_m10532(__this, method) (( void (*) (List_1_t365 *, const MethodInfo*))List_1_Clear_m10532_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10534_gshared (List_1_t365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10534(__this, ___item, method) (( bool (*) (List_1_t365 *, Object_t *, const MethodInfo*))List_1_Contains_m10534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10536_gshared (List_1_t365 * __this, ObjectU5BU5D_t53* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10536(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t365 *, ObjectU5BU5D_t53*, int32_t, const MethodInfo*))List_1_CopyTo_m10536_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10538_gshared (List_1_t365 * __this, Predicate_1_t1748 * ___match, const MethodInfo* method);
#define List_1_Find_m10538(__this, ___match, method) (( Object_t * (*) (List_1_t365 *, Predicate_1_t1748 *, const MethodInfo*))List_1_Find_m10538_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10540_gshared (Object_t * __this /* static, unused */, Predicate_1_t1748 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10540(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1748 *, const MethodInfo*))List_1_CheckMatch_m10540_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10542_gshared (List_1_t365 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1748 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10542(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t365 *, int32_t, int32_t, Predicate_1_t1748 *, const MethodInfo*))List_1_GetIndex_m10542_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1743  List_1_GetEnumerator_m10544_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10544(__this, method) (( Enumerator_t1743  (*) (List_1_t365 *, const MethodInfo*))List_1_GetEnumerator_m10544_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10546_gshared (List_1_t365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10546(__this, ___item, method) (( int32_t (*) (List_1_t365 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10546_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10548_gshared (List_1_t365 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10548(__this, ___start, ___delta, method) (( void (*) (List_1_t365 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10548_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10550_gshared (List_1_t365 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10550(__this, ___index, method) (( void (*) (List_1_t365 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10550_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10552_gshared (List_1_t365 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10552(__this, ___index, ___item, method) (( void (*) (List_1_t365 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10552_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10554_gshared (List_1_t365 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10554(__this, ___collection, method) (( void (*) (List_1_t365 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10554_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10556_gshared (List_1_t365 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10556(__this, ___item, method) (( bool (*) (List_1_t365 *, Object_t *, const MethodInfo*))List_1_Remove_m10556_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10558_gshared (List_1_t365 * __this, Predicate_1_t1748 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10558(__this, ___match, method) (( int32_t (*) (List_1_t365 *, Predicate_1_t1748 *, const MethodInfo*))List_1_RemoveAll_m10558_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10560_gshared (List_1_t365 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10560(__this, ___index, method) (( void (*) (List_1_t365 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10560_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10562_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_Reverse_m10562(__this, method) (( void (*) (List_1_t365 *, const MethodInfo*))List_1_Reverse_m10562_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10564_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_Sort_m10564(__this, method) (( void (*) (List_1_t365 *, const MethodInfo*))List_1_Sort_m10564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10566_gshared (List_1_t365 * __this, Comparison_1_t1754 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10566(__this, ___comparison, method) (( void (*) (List_1_t365 *, Comparison_1_t1754 *, const MethodInfo*))List_1_Sort_m10566_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t53* List_1_ToArray_m10567_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_ToArray_m10567(__this, method) (( ObjectU5BU5D_t53* (*) (List_1_t365 *, const MethodInfo*))List_1_ToArray_m10567_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10569_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10569(__this, method) (( void (*) (List_1_t365 *, const MethodInfo*))List_1_TrimExcess_m10569_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10571_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10571(__this, method) (( int32_t (*) (List_1_t365 *, const MethodInfo*))List_1_get_Capacity_m10571_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10573_gshared (List_1_t365 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10573(__this, ___value, method) (( void (*) (List_1_t365 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10573_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10575_gshared (List_1_t365 * __this, const MethodInfo* method);
#define List_1_get_Count_m10575(__this, method) (( int32_t (*) (List_1_t365 *, const MethodInfo*))List_1_get_Count_m10575_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10577_gshared (List_1_t365 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10577(__this, ___index, method) (( Object_t * (*) (List_1_t365 *, int32_t, const MethodInfo*))List_1_get_Item_m10577_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10579_gshared (List_1_t365 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10579(__this, ___index, ___value, method) (( void (*) (List_1_t365 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10579_gshared)(__this, ___index, ___value, method)
