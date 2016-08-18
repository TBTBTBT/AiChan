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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12250_gshared (Enumerator_t1877 * __this, Dictionary_2_t1870 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12250(__this, ___dictionary, method) (( void (*) (Enumerator_t1877 *, Dictionary_2_t1870 *, const MethodInfo*))Enumerator__ctor_m12250_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12251_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12251(__this, method) (( Object_t * (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12251_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m12252_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m12252(__this, method) (( void (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m12252_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t984  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12253_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12253(__this, method) (( DictionaryEntry_t984  (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12253_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12254_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12254(__this, method) (( Object_t * (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12254_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12255_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12255(__this, method) (( Object_t * (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12255_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12256_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12256(__this, method) (( bool (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_MoveNext_m12256_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1873  Enumerator_get_Current_m12257_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12257(__this, method) (( KeyValuePair_2_t1873  (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_get_Current_m12257_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12258_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12258(__this, method) (( Object_t * (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_get_CurrentKey_m12258_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m12259_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12259(__this, method) (( int32_t (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_get_CurrentValue_m12259_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m12260_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_Reset_m12260(__this, method) (( void (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_Reset_m12260_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m12261_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12261(__this, method) (( void (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_VerifyState_m12261_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12262_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12262(__this, method) (( void (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_VerifyCurrent_m12262_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m12263_gshared (Enumerator_t1877 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12263(__this, method) (( void (*) (Enumerator_t1877 *, const MethodInfo*))Enumerator_Dispose_m12263_gshared)(__this, method)
