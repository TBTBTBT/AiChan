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

// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1666;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_TypeCode.h"

// System.Void System.Boolean::.cctor()
extern "C" void Boolean__cctor_m5798 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Boolean::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Boolean_System_IConvertible_ToType_m5799 (bool* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Boolean_System_IConvertible_ToBoolean_m5800 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Boolean::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Boolean_System_IConvertible_ToByte_m5801 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Boolean::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Boolean_System_IConvertible_ToChar_m5802 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Boolean::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t527  Boolean_System_IConvertible_ToDateTime_m5803 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Boolean::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1008  Boolean_System_IConvertible_ToDecimal_m5804 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Boolean::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Boolean_System_IConvertible_ToDouble_m5805 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Boolean::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Boolean_System_IConvertible_ToInt16_m5806 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Boolean_System_IConvertible_ToInt32_m5807 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Boolean::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Boolean_System_IConvertible_ToInt64_m5808 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Boolean::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Boolean_System_IConvertible_ToSByte_m5809 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Boolean::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Boolean_System_IConvertible_ToSingle_m5810 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Boolean::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Boolean_System_IConvertible_ToUInt16_m5811 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Boolean::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Boolean_System_IConvertible_ToUInt32_m5812 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Boolean::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Boolean_System_IConvertible_ToUInt64_m5813 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::CompareTo(System.Object)
extern "C" int32_t Boolean_CompareTo_m5814 (bool* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Equals(System.Object)
extern "C" bool Boolean_Equals_m5815 (bool* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::CompareTo(System.Boolean)
extern "C" int32_t Boolean_CompareTo_m5816 (bool* __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Equals(System.Boolean)
extern "C" bool Boolean_Equals_m5817 (bool* __this, bool ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::GetHashCode()
extern "C" int32_t Boolean_GetHashCode_m5818 (bool* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Parse(System.String)
extern "C" bool Boolean_Parse_m5819 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
extern "C" String_t* Boolean_ToString_m5820 (bool* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Boolean::GetTypeCode()
extern "C" int32_t Boolean_GetTypeCode_m5821 (bool* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString(System.IFormatProvider)
extern "C" String_t* Boolean_ToString_m5822 (bool* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
