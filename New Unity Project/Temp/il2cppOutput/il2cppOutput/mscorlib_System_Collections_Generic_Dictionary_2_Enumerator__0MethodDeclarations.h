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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1842;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11927_gshared (Enumerator_t1850 * __this, Dictionary_2_t1842 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11927(__this, ___dictionary, method) (( void (*) (Enumerator_t1850 *, Dictionary_2_t1842 *, const MethodInfo*))Enumerator__ctor_m11927_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11928_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11928(__this, method) (( Object_t * (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11928_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m11929_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m11929(__this, method) (( void (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m11929_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t984  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11930_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11930(__this, method) (( DictionaryEntry_t984  (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11930_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11931_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11931(__this, method) (( Object_t * (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11931_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11932_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11932(__this, method) (( Object_t * (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11932_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11933_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11933(__this, method) (( bool (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_MoveNext_m11933_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1844  Enumerator_get_Current_m11934_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11934(__this, method) (( KeyValuePair_2_t1844  (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_get_Current_m11934_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m11935_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11935(__this, method) (( int32_t (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_get_CurrentKey_m11935_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m11936_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11936(__this, method) (( Object_t * (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_get_CurrentValue_m11936_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m11937_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_Reset_m11937(__this, method) (( void (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_Reset_m11937_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m11938_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11938(__this, method) (( void (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_VerifyState_m11938_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11939_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11939(__this, method) (( void (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_VerifyCurrent_m11939_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m11940_gshared (Enumerator_t1850 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11940(__this, method) (( void (*) (Enumerator_t1850 *, const MethodInfo*))Enumerator_Dispose_m11940_gshared)(__this, method)
