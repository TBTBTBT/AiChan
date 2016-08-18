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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1928;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1919;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12884_gshared (ShimEnumerator_t1928 * __this, Dictionary_2_t1919 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12884(__this, ___host, method) (( void (*) (ShimEnumerator_t1928 *, Dictionary_2_t1919 *, const MethodInfo*))ShimEnumerator__ctor_m12884_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12885_gshared (ShimEnumerator_t1928 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12885(__this, method) (( bool (*) (ShimEnumerator_t1928 *, const MethodInfo*))ShimEnumerator_MoveNext_m12885_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t984  ShimEnumerator_get_Entry_m12886_gshared (ShimEnumerator_t1928 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12886(__this, method) (( DictionaryEntry_t984  (*) (ShimEnumerator_t1928 *, const MethodInfo*))ShimEnumerator_get_Entry_m12886_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12887_gshared (ShimEnumerator_t1928 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12887(__this, method) (( Object_t * (*) (ShimEnumerator_t1928 *, const MethodInfo*))ShimEnumerator_get_Key_m12887_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12888_gshared (ShimEnumerator_t1928 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12888(__this, method) (( Object_t * (*) (ShimEnumerator_t1928 *, const MethodInfo*))ShimEnumerator_get_Value_m12888_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12889_gshared (ShimEnumerator_t1928 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12889(__this, method) (( Object_t * (*) (ShimEnumerator_t1928 *, const MethodInfo*))ShimEnumerator_get_Current_m12889_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12890_gshared (ShimEnumerator_t1928 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12890(__this, method) (( void (*) (ShimEnumerator_t1928 *, const MethodInfo*))ShimEnumerator_Reset_m12890_gshared)(__this, method)
