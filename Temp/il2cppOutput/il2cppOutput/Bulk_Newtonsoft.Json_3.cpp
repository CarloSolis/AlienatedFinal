#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t2278087657;
// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t1283576322;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.TimeZone
struct TimeZone_t4008205267;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t279959794;
// System.ArgumentException
struct ArgumentException_t3259014390;
// System.TimeZoneInfo
struct TimeZoneInfo_t436210607;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>
struct BidirectionalDictionary_2_t2874502390;
// System.StringComparer
struct StringComparer_t1574862926;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1241853011;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>
struct BidirectionalDictionary_2_t1212012318;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t125053523;
// System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.EnumMemberAttribute>
struct IEnumerable_1_t479561038;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2981576340;
// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String>
struct Func_2_t4288392973;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2825504181;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.InvalidOperationException
struct InvalidOperationException_t721527559;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t3230389896;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t472048993;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t3961629604;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t547167195;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>
struct ThreadSafeStore_2_t2258736631;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>
struct ThreadSafeStore_2_t4023353063;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Func`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>
struct Func_2_t1060887749;
// Newtonsoft.Json.Utilities.EnumUtils/<>c
struct U3CU3Ec_t3288905799;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t187433993;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t2823602470;
// System.Collections.Generic.IEnumerable`1<System.Char>
struct IEnumerable_1_t3746608383;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t1662561876;
// System.IO.StringWriter
struct StringWriter_t4139609088;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t2294713146;
// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
struct LateBoundReflectionDelegateFactory_t3208546116;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t1997612730;
// System.Reflection.MethodBase
struct MethodBase_t;
// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t322633509;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Newtonsoft.Json.Utilities.PropertyNameTable
struct PropertyNameTable_t1902004952;
// Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct Entry_t1762676876;
// System.ArgumentNullException
struct ArgumentNullException_t628810857;
// Newtonsoft.Json.Utilities.ReflectionMember
struct ReflectionMember_t4222298801;
// System.Action`2<System.Object,System.Object>
struct Action_2_t2572051853;
// Newtonsoft.Json.Utilities.ReflectionObject
struct ReflectionObject_t1424089768;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>
struct IDictionary_2_t4136161484;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>
struct Dictionary_2_t1842110767;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2281509423;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t1856937010;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t40257009;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_t290853069;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2
struct U3CU3Ec__DisplayClass13_2_t694137596;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;
// System.Func`1<System.Object>
struct Func_1_t348874681;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3985864818;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t2343678841;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
struct IEnumerable_1_t3143943587;
// System.Exception
struct Exception_t;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t3412218392;
// System.Collections.Generic.IList`1<System.Reflection.MemberInfo>
struct IList_1_t289070565;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t2545856110;
// System.Func`2<System.Reflection.MemberInfo,System.String>
struct Func_2_t2789580926;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<System.String,System.Reflection.MemberInfo>>
struct IEnumerable_1_t580464209;
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<System.Object,System.Object>>
struct IEnumerable_1_t1199064406;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.Attribute
struct Attribute_t542643598;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_t834770643;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Module
struct Module_t4282841206;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t101093588;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t1595930271;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t2541167120;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.Binder
struct Binder_t3404612058;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t963192633;
// System.Collections.Generic.List`1<System.Reflection.PropertyInfo>
struct List_1_t1622850197;
// System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>
struct IList_1_t2794669666;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_t3402508478;
// System.Func`2<System.Reflection.PropertyInfo,System.Boolean>
struct Func_2_t2083147554;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_t2709377751;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t3402508447;
// Newtonsoft.Json.Utilities.TypeInformation
struct TypeInformation_t1531269270;
// System.ComponentModel.AddingNewEventArgs
struct AddingNewEventArgs_t3938289828;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_t1821432365;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.ComponentModel.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t1130012643;
// System.ComponentModel.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t2376617142;
// System.ComponentModel.PropertyChangingEventArgs
struct PropertyChangingEventArgs_t2525320927;
// System.EventArgs
struct EventArgs_t3289624707;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t626922954;
// Newtonsoft.Json.Utilities.PropertyNameTable/Entry[]
struct EntryU5BU5D_t749043653;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t62501539;
// Newtonsoft.Json.Utilities.ReflectionMember[]
struct ReflectionMemberU5BU5D_t2840299372;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Newtonsoft.Json.Utilities.ReflectionMember,System.Collections.DictionaryEntry>
struct Transform_1_t1964139016;
// System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>
struct Dictionary_2_t516892991;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1736152084;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2187473504;
// System.Globalization.TextInfo
struct TextInfo_t3620182823;
// System.Globalization.CompareInfo
struct CompareInfo_t2310920157;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3654442685;
// System.Globalization.Calendar
struct Calendar_t585061108;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Int32
struct Int32_t2071877448;
// System.Void
struct Void_t1841601450;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1943082916;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1766862959;
// System.Byte
struct Byte_t3683104436;
// System.Double
struct Double_t4078015681;
// System.UInt16
struct UInt16_t986882611;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t1761494505;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Security.PermissionSet
struct PermissionSet_t1941658161;
// System.DelegateData
struct DelegateData_t1572802995;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t2338614759;
// System.Reflection.MemberFilter
struct MemberFilter_t3405857066;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t4270021860;
// System.Reflection.TypeFilter
struct TypeFilter_t2905709404;

extern RuntimeClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MethodCall_2_Invoke_m3330949966_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__DisplayClass9_0_U3CCreateCastConverterU3Eb__0_m3936800939_MetadataUsageId;
extern RuntimeClass* TypeConvertKey_t1788482786_il2cpp_TypeInfo_var;
extern const uint32_t TypeConvertKey_Equals_m2951854959_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t1328083999_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeParser_t1235213504_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t DateTimeParser_t1235213504_com_FromNativeMethodDefinition_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeParser_t1235213504_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t1486305145____9E31F24F64765FCAA589F589324D17C9FCF6A06D_0_FieldInfo_var;
extern String_t* _stringLiteral164244414;
extern String_t* _stringLiteral351817857;
extern String_t* _stringLiteral1978214733;
extern String_t* _stringLiteral919324862;
extern String_t* _stringLiteral4023469606;
extern String_t* _stringLiteral1751525914;
extern String_t* _stringLiteral475278190;
extern String_t* _stringLiteral480962872;
extern String_t* _stringLiteral4122821210;
extern String_t* _stringLiteral206891516;
extern String_t* _stringLiteral1699032502;
extern String_t* _stringLiteral372029313;
extern String_t* _stringLiteral30620909;
extern const uint32_t DateTimeParser__cctor_m417902444_MetadataUsageId;
extern const uint32_t DateTimeParser_Parse_m93898435_MetadataUsageId;
extern RuntimeClass* DateTime_t693205669_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeParser_ParseDate_m1939298771_MetadataUsageId;
extern const uint32_t DateTimeParser_ParseTime_m508747414_MetadataUsageId;
extern const uint32_t DateTimeParser_ParseZone_m1488795597_MetadataUsageId;
extern RuntimeClass* DateTimeUtils_t919483584_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t1486305145____E92B39D8233061927D9ACDE54665E68E7535635A_4_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t1486305145____DD3AEFEADB1CD615F3017763F1568179FEE640B0_3_FieldInfo_var;
extern const uint32_t DateTimeUtils__cctor_m1038572280_MetadataUsageId;
extern RuntimeClass* TimeZone_t4008205267_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeUtils_GetUtcOffset_m1751279733_MetadataUsageId;
extern RuntimeClass* DateTimeKind_t2186819611_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1891435176;
extern String_t* _stringLiteral2145519785;
extern const uint32_t DateTimeUtils_ToSerializationMode_m1929981297_MetadataUsageId;
extern RuntimeClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3771848130;
extern const uint32_t DateTimeUtils_EnsureDateTime_m1741856844_MetadataUsageId;
extern const uint32_t DateTimeUtils_ToUniversalTicks_m767905220_MetadataUsageId;
extern const uint32_t DateTimeUtils_ToUniversalTicks_m651850560_MetadataUsageId;
extern const uint32_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2461323250_MetadataUsageId;
extern const uint32_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2446514542_MetadataUsageId;
extern const uint32_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2741966059_MetadataUsageId;
extern const uint32_t DateTimeUtils_UniversialTicksToJavaScriptTicks_m1203972718_MetadataUsageId;
extern const uint32_t DateTimeUtils_ConvertJavaScriptTicksToDateTime_m1592762056_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeIso_m2173901879_MetadataUsageId;
extern RuntimeClass* TimeZoneInfo_t436210607_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeUtils_TryParseDateTimeOffsetIso_m4276702460_MetadataUsageId;
extern RuntimeClass* Char_t3454481338_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3824785535;
extern String_t* _stringLiteral51790590;
extern const uint32_t DateTimeUtils_TryParseDateTime_m3365159398_MetadataUsageId;
extern RuntimeClass* CultureInfo_t3500843524_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral347261663;
extern const uint32_t DateTimeUtils_TryParseDateTime_m4134498809_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeOffset_m1459894121_MetadataUsageId;
extern RuntimeClass* DateTimeOffset_t1362988906_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeUtils_TryParseDateTimeOffset_m3282624704_MetadataUsageId;
extern RuntimeClass* TimeSpan_t3430258949_il2cpp_TypeInfo_var;
extern RuntimeClass* ConvertUtils_t2984810590_il2cpp_TypeInfo_var;
extern const uint32_t DateTimeUtils_TryParseMicrosoftDate_m4065592264_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeMicrosoft_m3235248780_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeExact_m756786128_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m660041233_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryParseDateTimeOffsetExact_m2570960041_MetadataUsageId;
extern const uint32_t DateTimeUtils_TryReadOffset_m1024077575_MetadataUsageId;
extern const uint32_t DateTimeUtils_WriteDateTimeString_m1435395168_MetadataUsageId;
extern const RuntimeMethod* Nullable_1_get_HasValue_m3663286555_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m3155916728_RuntimeMethod_var;
extern String_t* _stringLiteral2804007655;
extern String_t* _stringLiteral2094097760;
extern const uint32_t DateTimeUtils_WriteDateTimeString_m3706347442_MetadataUsageId;
extern const uint32_t DateTimeUtils_WriteDefaultIsoDate_m2512864408_MetadataUsageId;
extern const uint32_t DateTimeUtils_WriteDateTimeOffset_m1618693877_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m796575255_RuntimeMethod_var;
extern const uint32_t DateTimeUtils_WriteDateTimeOffsetString_m2854976226_MetadataUsageId;
extern const uint32_t DateTimeUtils_GetDateValues_m2622263554_MetadataUsageId;
extern const RuntimeType* EnumMemberAttribute_t187433993_0_0_0_var;
extern RuntimeClass* StringComparer_t1574862926_il2cpp_TypeInfo_var;
extern RuntimeClass* BidirectionalDictionary_2_t2874502390_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t3288905799_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t4288392973_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t721527559_il2cpp_TypeInfo_var;
extern const RuntimeMethod* BidirectionalDictionary_2__ctor_m1527248422_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Cast_TisEnumMemberAttribute_t187433993_m133715299_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CInitializeEnumTypeU3Eb__1_0_m3143531801_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2049158717_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_TisEnumMemberAttribute_t187433993_TisString_t_m3716904781_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_SingleOrDefault_TisString_t_m3373152221_RuntimeMethod_var;
extern const RuntimeMethod* BidirectionalDictionary_2_TryGetBySecond_m2125404446_RuntimeMethod_var;
extern const RuntimeMethod* BidirectionalDictionary_2_Set_m1677701390_RuntimeMethod_var;
extern String_t* _stringLiteral439311931;
extern const uint32_t EnumUtils_InitializeEnumType_m1034152180_MetadataUsageId;
extern RuntimeClass* List_1_t2058570427_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t472048993_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t547167195_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2025531273_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m310736118_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CGetValuesU3Eb__5_0_m1518037181_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m660135348_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Where_TisFieldInfo_t_m1401957933_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4157722533_RuntimeMethod_var;
extern String_t* _stringLiteral1763939415;
extern String_t* _stringLiteral2733696090;
extern const uint32_t EnumUtils_GetValues_m3424110602_MetadataUsageId;
extern RuntimeClass* EnumUtils_t1099402118_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t2459695545_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ThreadSafeStore_2_Get_m3132986083_RuntimeMethod_var;
extern String_t* _stringLiteral811305474;
extern const uint32_t EnumUtils_ParseEnumName_m4266385615_MetadataUsageId;
extern const RuntimeMethod* BidirectionalDictionary_2_TryGetByFirst_m1620055138_RuntimeMethod_var;
extern const uint32_t EnumUtils_ToEnumName_m2285016169_MetadataUsageId;
extern const uint32_t EnumUtils_ResolvedEnumName_m526477606_MetadataUsageId;
extern RuntimeClass* Func_2_t1060887749_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadSafeStore_2_t2258736631_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EnumUtils_InitializeEnumType_m1034152180_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2375498688_RuntimeMethod_var;
extern const RuntimeMethod* ThreadSafeStore_2__ctor_m119799019_RuntimeMethod_var;
extern const uint32_t EnumUtils__cctor_m2773519876_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m2696538840_MetadataUsageId;
extern RuntimeClass* BooleanU5BU5D_t3568034315_il2cpp_TypeInfo_var;
extern RuntimeClass* JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2823602470_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t111589347_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3746608383_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t930005165_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m1818566713_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1527804517_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Union_TisChar_t3454481338_m247197559_RuntimeMethod_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t1486305145____D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2_FieldInfo_var;
extern const uint32_t JavaScriptUtils__cctor_m568657070_MetadataUsageId;
extern const uint32_t JavaScriptUtils_GetCharEscapeFlags_m4017192528_MetadataUsageId;
extern String_t* _stringLiteral3869568110;
extern String_t* _stringLiteral3062999056;
extern String_t* _stringLiteral381169868;
extern String_t* _stringLiteral3419229416;
extern String_t* _stringLiteral1093630588;
extern String_t* _stringLiteral2088416310;
extern String_t* _stringLiteral2444905594;
extern String_t* _stringLiteral2848190193;
extern String_t* _stringLiteral119306838;
extern String_t* _stringLiteral408021059;
extern String_t* _stringLiteral3943473468;
extern String_t* _stringLiteral372029309;
extern const uint32_t JavaScriptUtils_WriteEscapedJavaScriptString_m349909445_MetadataUsageId;
extern const RuntimeMethod* Nullable_1_get_HasValue_m3680291262_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m3091235761_RuntimeMethod_var;
extern const uint32_t JavaScriptUtils_ToEscapedJavaScriptString_m4206625202_MetadataUsageId;
extern RuntimeClass* LateBoundReflectionDelegateFactory_t3208546116_il2cpp_TypeInfo_var;
extern const uint32_t LateBoundReflectionDelegateFactory_get_Instance_m3416378571_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass3_0_t322633509_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstructorInfo_t2851816542_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectConstructor_1_t1997612730_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m152120987_RuntimeMethod_var;
extern const RuntimeMethod* ObjectConstructor_1__ctor_m2300859629_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_m1832472028_RuntimeMethod_var;
extern String_t* _stringLiteral165463247;
extern const uint32_t LateBoundReflectionDelegateFactory_CreateParameterizedConstructor_m2645948188_MetadataUsageId;
extern const uint32_t LateBoundReflectionDelegateFactory__cctor_m882552914_MetadataUsageId;
extern RuntimeClass* Convert_t2607082565_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t724701077_il2cpp_TypeInfo_var;
extern const uint32_t MiscellaneousUtils_ValueEquals_m2333263074_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral857846564;
extern const uint32_t MiscellaneousUtils_CreateArgumentOutOfRangeException_m4097621156_MetadataUsageId;
extern String_t* _stringLiteral634808489;
extern String_t* _stringLiteral372029312;
extern const uint32_t MiscellaneousUtils_ToString_m803301885_MetadataUsageId;
extern const uint32_t MiscellaneousUtils_FormatValueForPrint_m210569177_MetadataUsageId;
extern RuntimeClass* PropertyNameTable_t1902004952_il2cpp_TypeInfo_var;
extern const uint32_t PropertyNameTable__cctor_m2906877120_MetadataUsageId;
extern RuntimeClass* EntryU5BU5D_t749043653_il2cpp_TypeInfo_var;
extern const uint32_t PropertyNameTable__ctor_m3468246443_MetadataUsageId;
extern const uint32_t PropertyNameTable_Get_m3701298949_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3021628599;
extern const uint32_t PropertyNameTable_Add_m1214517805_MetadataUsageId;
extern RuntimeClass* Entry_t1762676876_il2cpp_TypeInfo_var;
extern const uint32_t PropertyNameTable_AddEntry_m74796914_MetadataUsageId;
extern const uint32_t PropertyNameTable_Grow_m3332910318_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1842110767_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2447020707_RuntimeMethod_var;
extern const uint32_t ReflectionObject__ctor_m2209907547_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t4136161484_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Func_2_Invoke_m3790049603_RuntimeMethod_var;
extern const uint32_t ReflectionObject_GetValue_m3746447183_MetadataUsageId;
extern const uint32_t ReflectionObject_GetType_m1626363475_MetadataUsageId;
extern const RuntimeType* Void_t1841601450_0_0_0_var;
extern RuntimeClass* ReflectionObject_t1424089768_il2cpp_TypeInfo_var;
extern RuntimeClass* JsonTypeReflector_t1473969596_il2cpp_TypeInfo_var;
extern RuntimeClass* ReflectionUtils_t3884221258_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass13_0_t1856937010_il2cpp_TypeInfo_var;
extern RuntimeClass* ReflectionMember_t4222298801_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass13_1_t290853069_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2825504181_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass13_2_t694137596_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t2572051853_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberTypes_t3343038963_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReflectionDelegateFactory_CreateDefaultConstructor_TisRuntimeObject_m88399626_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m1912005429_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Single_TisMemberInfo_t_m43632213_RuntimeMethod_var;
extern const RuntimeMethod* ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m208935903_RuntimeMethod_var;
extern const RuntimeMethod* ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2736460123_RuntimeMethod_var;
extern const RuntimeMethod* ReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_m1597556207_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_m3250173803_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m1741456965_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m989037858_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m290579545_RuntimeMethod_var;
extern String_t* _stringLiteral3766775005;
extern String_t* _stringLiteral535313421;
extern const uint32_t ReflectionObject_Create_m152623496_MetadataUsageId;
extern const RuntimeMethod* Func_1_Invoke_m3495195018_RuntimeMethod_var;
extern const uint32_t U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m1912005429_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_m3250173803_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m989037858_MetadataUsageId;
extern const uint32_t ReflectionUtils__cctor_m1662492392_MetadataUsageId;
extern String_t* _stringLiteral3463778309;
extern const uint32_t ReflectionUtils_IsVirtual_m2993796589_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetBaseDefinition_m1178929304_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetTypeName_m4058960906_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const uint32_t ReflectionUtils_RemoveAssemblyDetails_m1897087320_MetadataUsageId;
extern String_t* _stringLiteral372029386;
extern const uint32_t ReflectionUtils_HasDefaultConstructor_m1906518778_MetadataUsageId;
extern const uint32_t ReflectionUtils_GetDefaultConstructor_m1503256486_MetadataUsageId;
extern RuntimeClass* U3CU3Ec_t2709377751_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2343678841_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_m945974850_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m3361537276_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_SingleOrDefault_TisConstructorInfo_t2851816542_m2433521341_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetDefaultConstructor_m358330343_MetadataUsageId;
extern const uint32_t ReflectionUtils_IsNullable_m5141129_MetadataUsageId;
extern const RuntimeType* Nullable_1_t1398937014_0_0_0_var;
extern const uint32_t ReflectionUtils_IsNullableType_m1952073521_MetadataUsageId;
extern const uint32_t ReflectionUtils_EnsureNotNullableType_m749063498_MetadataUsageId;
extern const uint32_t ReflectionUtils_ImplementsGenericDefinition_m3714033717_MetadataUsageId;
extern String_t* _stringLiteral1421151742;
extern String_t* _stringLiteral1466766781;
extern String_t* _stringLiteral490790171;
extern const uint32_t ReflectionUtils_ImplementsGenericDefinition_m1592756732_MetadataUsageId;
extern const uint32_t ReflectionUtils_InheritsGenericDefinition_m1236997279_MetadataUsageId;
extern String_t* _stringLiteral1580024496;
extern String_t* _stringLiteral4294391246;
extern const uint32_t ReflectionUtils_InheritsGenericDefinition_m122302930_MetadataUsageId;
extern const uint32_t ReflectionUtils_InheritsGenericDefinitionInternal_m1388222941_MetadataUsageId;
extern const RuntimeType* IEnumerable_1_t4048664256_0_0_0_var;
extern const RuntimeType* IEnumerable_t2911409499_0_0_0_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4132000988;
extern const uint32_t ReflectionUtils_GetCollectionItemType_m2131404479_MetadataUsageId;
extern const RuntimeType* IDictionary_2_t3502329323_0_0_0_var;
extern const RuntimeType* IDictionary_t596158605_0_0_0_var;
extern String_t* _stringLiteral1776474642;
extern String_t* _stringLiteral3113829764;
extern const uint32_t ReflectionUtils_GetDictionaryKeyValueTypes_m3575338623_MetadataUsageId;
extern RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* EventInfo_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3499143408;
extern String_t* _stringLiteral1780712526;
extern const uint32_t ReflectionUtils_GetMemberUnderlyingType_m1551178430_MetadataUsageId;
extern const uint32_t ReflectionUtils_IsIndexedProperty_m2510495915_MetadataUsageId;
extern String_t* _stringLiteral3937253415;
extern const uint32_t ReflectionUtils_IsIndexedProperty_m1359866644_MetadataUsageId;
extern RuntimeClass* TargetParameterCountException_t1554451430_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1081251833;
extern String_t* _stringLiteral2325924878;
extern String_t* _stringLiteral1277201470;
extern const uint32_t ReflectionUtils_GetMemberValue_m1108820103_MetadataUsageId;
extern String_t* _stringLiteral383472217;
extern const uint32_t ReflectionUtils_SetMemberValue_m3134817442_MetadataUsageId;
extern const uint32_t ReflectionUtils_CanReadMemberValue_m1471951163_MetadataUsageId;
extern const uint32_t ReflectionUtils_CanSetMemberValue_m1350063670_MetadataUsageId;
extern RuntimeClass* List_1_t3412218392_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2789580926_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t580464209_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t2058828287_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t40257009_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1518621087_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t700205269_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3205487968_RuntimeMethod_var;
extern const RuntimeMethod* CollectionUtils_AddRange_TisMemberInfo_t_m2248164560_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m237274392_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3086459639_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__29_0_m1903479559_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m4199532843_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_GroupBy_TisMemberInfo_t_TisString_t_m3771386506_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Count_TisMemberInfo_t_m555947649_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisMemberInfo_t_m4029470052_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_First_TisMemberInfo_t_m1182807881_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1517359828_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m2644622842_RuntimeMethod_var;
extern String_t* _stringLiteral3168546709;
extern const uint32_t ReflectionUtils_GetFieldsAndProperties_m2968660430_MetadataUsageId;
extern const uint32_t ReflectionUtils_IsOverridenGenericMember_m1359556380_MetadataUsageId;
extern RuntimeClass* Assembly_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Module_t4282841206_il2cpp_TypeInfo_var;
extern RuntimeClass* ParameterInfo_t2249040075_il2cpp_TypeInfo_var;
extern RuntimeClass* ICustomAttributeProvider_t502202687_il2cpp_TypeInfo_var;
extern RuntimeClass* AttributeU5BU5D_t4255796347_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Enumerable_Cast_TisAttribute_t542643598_m1897090966_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisAttribute_t542643598_m3383875288_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Union_TisAttribute_t542643598_m2698737871_RuntimeMethod_var;
extern String_t* _stringLiteral2841435673;
extern const uint32_t ReflectionUtils_GetAttributes_m3650815366_MetadataUsageId;
extern const uint32_t ReflectionUtils_SplitFullyQualifiedTypeName_m3895103026_MetadataUsageId;
extern const RuntimeMethod* Nullable_1__ctor_m2305320521_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetAssemblyDelimiterIndex_m4281428473_MetadataUsageId;
extern RuntimeClass* Func_2_t101093588_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__37_0_m2053928095_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2371337323_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Select_TisParameterInfo_t2249040075_TisType_t_m3128050479_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToArray_TisType_t_m1174505748_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_SingleOrDefault_TisMemberInfo_t_m2811579155_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetMemberInfoFromType_m2104111271_MetadataUsageId;
extern const RuntimeMethod* List_1__ctor_m3378486404_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Cast_TisFieldInfo_t_m2287377147_RuntimeMethod_var;
extern String_t* _stringLiteral3040989817;
extern const uint32_t ReflectionUtils_GetFields_m135069139_MetadataUsageId;
extern const RuntimeMethod* U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__39_0_m388363336_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Cast_TisMemberInfo_t_m69675683_RuntimeMethod_var;
extern const RuntimeMethod* CollectionUtils_AddRange_TisMemberInfo_t_m1995032504_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetChildPrivateFields_m3741033601_MetadataUsageId;
extern RuntimeClass* List_1_t1622850197_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2150122279_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m151432689_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2416941178_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m2454789161_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3589308349_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetProperties_m3440088748_MetadataUsageId;
extern RuntimeClass* U3CU3Ec__DisplayClass42_0_t3402508478_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t2083147554_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3205804370_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t2794669666_il2cpp_TypeInfo_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m586375033_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_m2334976461_RuntimeMethod_var;
extern const RuntimeMethod* CollectionUtils_IndexOf_TisPropertyInfo_t_m514453009_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m48371578_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m3165810171_RuntimeMethod_var;
extern const uint32_t ReflectionUtils_GetChildPrivateProperties_m3750821150_MetadataUsageId;
extern RuntimeClass* Boolean_t3825574718_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t909078037_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern const uint32_t ReflectionUtils_GetDefaultValue_m3102513161_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m2911900720_MetadataUsageId;
extern const RuntimeMethod* Enumerable_Any_TisParameterInfo_t2249040075_m1422437387_RuntimeMethod_var;
extern const uint32_t U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_m945974850_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m586375033_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m48371578_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m3165810171_MetadataUsageId;
extern const uint32_t StringBuffer_t2484172789_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t StringBuffer_t2484172789_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t StringReference_t1873850304_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t StringReference_t1873850304_com_FromNativeMethodDefinition_MetadataUsageId;
extern const RuntimeMethod* Array_IndexOf_TisChar_t3454481338_m409358040_RuntimeMethod_var;
extern const uint32_t StringReferenceExtensions_IndexOf_m2363345508_MetadataUsageId;
extern const uint32_t StringUtils_FormatWith_m2157778407_MetadataUsageId;
extern const uint32_t StringUtils_FormatWith_m3608957081_MetadataUsageId;
extern const uint32_t StringUtils_FormatWith_m4026350631_MetadataUsageId;
extern const uint32_t StringUtils_FormatWith_m1809383129_MetadataUsageId;
extern String_t* _stringLiteral1334200623;
extern const uint32_t StringUtils_FormatWith_m282568793_MetadataUsageId;
extern RuntimeClass* StringWriter_t4139609088_il2cpp_TypeInfo_var;
extern const uint32_t StringUtils_CreateStringWriter_m3259887542_MetadataUsageId;
extern const uint32_t StringUtils_GetLength_m572879386_MetadataUsageId;
extern const uint32_t StringUtils_ToCamelCase_m3781735605_MetadataUsageId;
extern const uint32_t StringUtils_IsHighSurrogate_m1835143636_MetadataUsageId;
extern const uint32_t StringUtils_IsLowSurrogate_m613166546_MetadataUsageId;
extern const uint32_t TypeExtensions_AssignableToTypeName_m2010856624_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1595930271_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3074294349_il2cpp_TypeInfo_var;
extern const uint32_t TypeExtensions_ImplementInterface_m257112361_MetadataUsageId;
extern const uint32_t ValidationUtils_ArgumentNotNull_m1113617486_MetadataUsageId;
extern RuntimeClass* EventArgs_t3289624707_il2cpp_TypeInfo_var;
extern const uint32_t PropertyChangingEventArgs__ctor_m4035205386_MetadataUsageId;

struct ObjectU5BU5D_t3614634134;
struct CharU5BU5D_t1328083999;
struct Int32U5BU5D_t3030399641;
struct FieldInfoU5BU5D_t125053523;
struct StringU5BU5D_t1642385972;
struct BooleanU5BU5D_t3568034315;
struct ByteU5BU5D_t3397334013;
struct EntryU5BU5D_t749043653;
struct ParameterInfoU5BU5D_t2275869610;
struct MemberInfoU5BU5D_t4238939941;
struct TypeU5BU5D_t1664964607;
struct ConstructorInfoU5BU5D_t1996683371;
struct AttributeU5BU5D_t4255796347;
struct ParameterModifierU5BU5D_t963192633;
struct PropertyInfoU5BU5D_t1736152084;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef MATHUTILS_T722929707_H
#define MATHUTILS_T722929707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.MathUtils
struct  MathUtils_t722929707  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHUTILS_T722929707_H
#ifndef MISCELLANEOUSUTILS_T2828154915_H
#define MISCELLANEOUSUTILS_T2828154915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.MiscellaneousUtils
struct  MiscellaneousUtils_t2828154915  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISCELLANEOUSUTILS_T2828154915_H
#ifndef PROPERTYNAMETABLE_T1902004952_H
#define PROPERTYNAMETABLE_T1902004952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.PropertyNameTable
struct  PropertyNameTable_t1902004952  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable::_count
	int32_t ____count_1;
	// Newtonsoft.Json.Utilities.PropertyNameTable/Entry[] Newtonsoft.Json.Utilities.PropertyNameTable::_entries
	EntryU5BU5D_t749043653* ____entries_2;
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable::_mask
	int32_t ____mask_3;

public:
	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(PropertyNameTable_t1902004952, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}

	inline static int32_t get_offset_of__entries_2() { return static_cast<int32_t>(offsetof(PropertyNameTable_t1902004952, ____entries_2)); }
	inline EntryU5BU5D_t749043653* get__entries_2() const { return ____entries_2; }
	inline EntryU5BU5D_t749043653** get_address_of__entries_2() { return &____entries_2; }
	inline void set__entries_2(EntryU5BU5D_t749043653* value)
	{
		____entries_2 = value;
		Il2CppCodeGenWriteBarrier((&____entries_2), value);
	}

	inline static int32_t get_offset_of__mask_3() { return static_cast<int32_t>(offsetof(PropertyNameTable_t1902004952, ____mask_3)); }
	inline int32_t get__mask_3() const { return ____mask_3; }
	inline int32_t* get_address_of__mask_3() { return &____mask_3; }
	inline void set__mask_3(int32_t value)
	{
		____mask_3 = value;
	}
};

struct PropertyNameTable_t1902004952_StaticFields
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable::HashCodeRandomizer
	int32_t ___HashCodeRandomizer_0;

public:
	inline static int32_t get_offset_of_HashCodeRandomizer_0() { return static_cast<int32_t>(offsetof(PropertyNameTable_t1902004952_StaticFields, ___HashCodeRandomizer_0)); }
	inline int32_t get_HashCodeRandomizer_0() const { return ___HashCodeRandomizer_0; }
	inline int32_t* get_address_of_HashCodeRandomizer_0() { return &___HashCodeRandomizer_0; }
	inline void set_HashCodeRandomizer_0(int32_t value)
	{
		___HashCodeRandomizer_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYNAMETABLE_T1902004952_H
#ifndef ENTRY_T1762676876_H
#define ENTRY_T1762676876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct  Entry_t1762676876  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.PropertyNameTable/Entry::Value
	String_t* ___Value_0;
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable/Entry::HashCode
	int32_t ___HashCode_1;
	// Newtonsoft.Json.Utilities.PropertyNameTable/Entry Newtonsoft.Json.Utilities.PropertyNameTable/Entry::Next
	Entry_t1762676876 * ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_t1762676876, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_t1762676876, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_t1762676876, ___Next_2)); }
	inline Entry_t1762676876 * get_Next_2() const { return ___Next_2; }
	inline Entry_t1762676876 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(Entry_t1762676876 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((&___Next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRY_T1762676876_H
#ifndef REFLECTIONMEMBER_T4222298801_H
#define REFLECTIONMEMBER_T4222298801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionMember
struct  ReflectionMember_t4222298801  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.ReflectionMember::<MemberType>k__BackingField
	Type_t * ___U3CMemberTypeU3Ek__BackingField_0;
	// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionMember::<Getter>k__BackingField
	Func_2_t2825504181 * ___U3CGetterU3Ek__BackingField_1;
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionMember::<Setter>k__BackingField
	Action_2_t2572051853 * ___U3CSetterU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMemberTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReflectionMember_t4222298801, ___U3CMemberTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CMemberTypeU3Ek__BackingField_0() const { return ___U3CMemberTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CMemberTypeU3Ek__BackingField_0() { return &___U3CMemberTypeU3Ek__BackingField_0; }
	inline void set_U3CMemberTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CMemberTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMemberTypeU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CGetterU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReflectionMember_t4222298801, ___U3CGetterU3Ek__BackingField_1)); }
	inline Func_2_t2825504181 * get_U3CGetterU3Ek__BackingField_1() const { return ___U3CGetterU3Ek__BackingField_1; }
	inline Func_2_t2825504181 ** get_address_of_U3CGetterU3Ek__BackingField_1() { return &___U3CGetterU3Ek__BackingField_1; }
	inline void set_U3CGetterU3Ek__BackingField_1(Func_2_t2825504181 * value)
	{
		___U3CGetterU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGetterU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CSetterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReflectionMember_t4222298801, ___U3CSetterU3Ek__BackingField_2)); }
	inline Action_2_t2572051853 * get_U3CSetterU3Ek__BackingField_2() const { return ___U3CSetterU3Ek__BackingField_2; }
	inline Action_2_t2572051853 ** get_address_of_U3CSetterU3Ek__BackingField_2() { return &___U3CSetterU3Ek__BackingField_2; }
	inline void set_U3CSetterU3Ek__BackingField_2(Action_2_t2572051853 * value)
	{
		___U3CSetterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSetterU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONMEMBER_T4222298801_H
#ifndef REFLECTIONOBJECT_T1424089768_H
#define REFLECTIONOBJECT_T1424089768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionObject
struct  ReflectionObject_t1424089768  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject::<Creator>k__BackingField
	ObjectConstructor_1_t1997612730 * ___U3CCreatorU3Ek__BackingField_0;
	// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> Newtonsoft.Json.Utilities.ReflectionObject::<Members>k__BackingField
	RuntimeObject* ___U3CMembersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCreatorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReflectionObject_t1424089768, ___U3CCreatorU3Ek__BackingField_0)); }
	inline ObjectConstructor_1_t1997612730 * get_U3CCreatorU3Ek__BackingField_0() const { return ___U3CCreatorU3Ek__BackingField_0; }
	inline ObjectConstructor_1_t1997612730 ** get_address_of_U3CCreatorU3Ek__BackingField_0() { return &___U3CCreatorU3Ek__BackingField_0; }
	inline void set_U3CCreatorU3Ek__BackingField_0(ObjectConstructor_1_t1997612730 * value)
	{
		___U3CCreatorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCreatorU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CMembersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReflectionObject_t1424089768, ___U3CMembersU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CMembersU3Ek__BackingField_1() const { return ___U3CMembersU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CMembersU3Ek__BackingField_1() { return &___U3CMembersU3Ek__BackingField_1; }
	inline void set_U3CMembersU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CMembersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMembersU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONOBJECT_T1424089768_H
#ifndef DICTIONARY_2_T1842110767_H
#define DICTIONARY_2_T1842110767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>
struct  Dictionary_2_t1842110767  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t3030399641* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t62501539* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1642385972* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ReflectionMemberU5BU5D_t2840299372* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t228987430 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767, ___table_4)); }
	inline Int32U5BU5D_t3030399641* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t3030399641* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767, ___linkSlots_5)); }
	inline LinkU5BU5D_t62501539* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t62501539** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t62501539* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767, ___keySlots_6)); }
	inline StringU5BU5D_t1642385972* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1642385972** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1642385972* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767, ___valueSlots_7)); }
	inline ReflectionMemberU5BU5D_t2840299372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ReflectionMemberU5BU5D_t2840299372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ReflectionMemberU5BU5D_t2840299372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767, ___serialization_info_13)); }
	inline SerializationInfo_t228987430 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t228987430 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t228987430 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1842110767_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1964139016 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1842110767_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1964139016 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1964139016 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1964139016 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1842110767_H
#ifndef U3CU3EC__DISPLAYCLASS13_0_T1856937010_H
#define U3CU3EC__DISPLAYCLASS13_0_T1856937010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t1856937010  : public RuntimeObject
{
public:
	// System.Func`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::ctor
	Func_1_t348874681 * ___ctor_0;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t1856937010, ___ctor_0)); }
	inline Func_1_t348874681 * get_ctor_0() const { return ___ctor_0; }
	inline Func_1_t348874681 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(Func_1_t348874681 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctor_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS13_0_T1856937010_H
#ifndef U3CU3EC__DISPLAYCLASS13_1_T290853069_H
#define U3CU3EC__DISPLAYCLASS13_1_T290853069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1
struct  U3CU3Ec__DisplayClass13_1_t290853069  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::call
	MethodCall_2_t1283576322 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_1_t290853069, ___call_0)); }
	inline MethodCall_2_t1283576322 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t1283576322 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t1283576322 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((&___call_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS13_1_T290853069_H
#ifndef U3CU3EC__DISPLAYCLASS3_0_T322633509_H
#define U3CU3EC__DISPLAYCLASS3_0_T322633509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t322633509  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::c
	ConstructorInfo_t2851816542 * ___c_0;
	// System.Reflection.MethodBase Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t322633509, ___c_0)); }
	inline ConstructorInfo_t2851816542 * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t2851816542 ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t2851816542 * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((&___c_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t322633509, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS3_0_T322633509_H
#ifndef STRINGCOMPARER_T1574862926_H
#define STRINGCOMPARER_T1574862926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t1574862926  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t1574862926_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t1574862926 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t1574862926 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t1574862926 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t1574862926 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t1574862926_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t1574862926 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t1574862926 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t1574862926 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t1574862926_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t1574862926 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t1574862926 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t1574862926 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t1574862926_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t1574862926 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t1574862926 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t1574862926 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t1574862926_StaticFields, ___ordinal_3)); }
	inline StringComparer_t1574862926 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t1574862926 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t1574862926 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T1574862926_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef U3CU3EC_T3288905799_H
#define U3CU3EC_T3288905799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.EnumUtils/<>c
struct  U3CU3Ec_t3288905799  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3288905799_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.EnumUtils/<>c Newtonsoft.Json.Utilities.EnumUtils/<>c::<>9
	U3CU3Ec_t3288905799 * ___U3CU3E9_0;
	// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String> Newtonsoft.Json.Utilities.EnumUtils/<>c::<>9__1_0
	Func_2_t4288392973 * ___U3CU3E9__1_0_1;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Newtonsoft.Json.Utilities.EnumUtils/<>c::<>9__5_0
	Func_2_t472048993 * ___U3CU3E9__5_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3288905799_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3288905799 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3288905799 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3288905799 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3288905799_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t4288392973 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t4288392973 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t4288392973 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3288905799_StaticFields, ___U3CU3E9__5_0_2)); }
	inline Func_2_t472048993 * get_U3CU3E9__5_0_2() const { return ___U3CU3E9__5_0_2; }
	inline Func_2_t472048993 ** get_address_of_U3CU3E9__5_0_2() { return &___U3CU3E9__5_0_2; }
	inline void set_U3CU3E9__5_0_2(Func_2_t472048993 * value)
	{
		___U3CU3E9__5_0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__5_0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3288905799_H
#ifndef LIST_1_T2058570427_H
#define LIST_1_T2058570427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t2058570427  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3614634134* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2058570427, ____items_1)); }
	inline ObjectU5BU5D_t3614634134* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3614634134* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2058570427, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2058570427, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2058570427_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t3614634134* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2058570427_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t3614634134* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t3614634134** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t3614634134* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2058570427_H
#ifndef THREADSAFESTORE_2_T2258736631_H
#define THREADSAFESTORE_2_T2258736631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>
struct  ThreadSafeStore_2_t2258736631  : public RuntimeObject
{
public:
	// System.Object Newtonsoft.Json.Utilities.ThreadSafeStore`2::_lock
	RuntimeObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Newtonsoft.Json.Utilities.ThreadSafeStore`2::_store
	Dictionary_2_t516892991 * ____store_1;
	// System.Func`2<TKey,TValue> Newtonsoft.Json.Utilities.ThreadSafeStore`2::_creator
	Func_2_t1060887749 * ____creator_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t2258736631, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}

	inline static int32_t get_offset_of__store_1() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t2258736631, ____store_1)); }
	inline Dictionary_2_t516892991 * get__store_1() const { return ____store_1; }
	inline Dictionary_2_t516892991 ** get_address_of__store_1() { return &____store_1; }
	inline void set__store_1(Dictionary_2_t516892991 * value)
	{
		____store_1 = value;
		Il2CppCodeGenWriteBarrier((&____store_1), value);
	}

	inline static int32_t get_offset_of__creator_2() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t2258736631, ____creator_2)); }
	inline Func_2_t1060887749 * get__creator_2() const { return ____creator_2; }
	inline Func_2_t1060887749 ** get_address_of__creator_2() { return &____creator_2; }
	inline void set__creator_2(Func_2_t1060887749 * value)
	{
		____creator_2 = value;
		Il2CppCodeGenWriteBarrier((&____creator_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFESTORE_2_T2258736631_H
#ifndef JAVASCRIPTUTILS_T4013793858_H
#define JAVASCRIPTUTILS_T4013793858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.JavaScriptUtils
struct  JavaScriptUtils_t4013793858  : public RuntimeObject
{
public:

public:
};

struct JavaScriptUtils_t4013793858_StaticFields
{
public:
	// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::SingleQuoteCharEscapeFlags
	BooleanU5BU5D_t3568034315* ___SingleQuoteCharEscapeFlags_0;
	// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::DoubleQuoteCharEscapeFlags
	BooleanU5BU5D_t3568034315* ___DoubleQuoteCharEscapeFlags_1;
	// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::HtmlCharEscapeFlags
	BooleanU5BU5D_t3568034315* ___HtmlCharEscapeFlags_2;

public:
	inline static int32_t get_offset_of_SingleQuoteCharEscapeFlags_0() { return static_cast<int32_t>(offsetof(JavaScriptUtils_t4013793858_StaticFields, ___SingleQuoteCharEscapeFlags_0)); }
	inline BooleanU5BU5D_t3568034315* get_SingleQuoteCharEscapeFlags_0() const { return ___SingleQuoteCharEscapeFlags_0; }
	inline BooleanU5BU5D_t3568034315** get_address_of_SingleQuoteCharEscapeFlags_0() { return &___SingleQuoteCharEscapeFlags_0; }
	inline void set_SingleQuoteCharEscapeFlags_0(BooleanU5BU5D_t3568034315* value)
	{
		___SingleQuoteCharEscapeFlags_0 = value;
		Il2CppCodeGenWriteBarrier((&___SingleQuoteCharEscapeFlags_0), value);
	}

	inline static int32_t get_offset_of_DoubleQuoteCharEscapeFlags_1() { return static_cast<int32_t>(offsetof(JavaScriptUtils_t4013793858_StaticFields, ___DoubleQuoteCharEscapeFlags_1)); }
	inline BooleanU5BU5D_t3568034315* get_DoubleQuoteCharEscapeFlags_1() const { return ___DoubleQuoteCharEscapeFlags_1; }
	inline BooleanU5BU5D_t3568034315** get_address_of_DoubleQuoteCharEscapeFlags_1() { return &___DoubleQuoteCharEscapeFlags_1; }
	inline void set_DoubleQuoteCharEscapeFlags_1(BooleanU5BU5D_t3568034315* value)
	{
		___DoubleQuoteCharEscapeFlags_1 = value;
		Il2CppCodeGenWriteBarrier((&___DoubleQuoteCharEscapeFlags_1), value);
	}

	inline static int32_t get_offset_of_HtmlCharEscapeFlags_2() { return static_cast<int32_t>(offsetof(JavaScriptUtils_t4013793858_StaticFields, ___HtmlCharEscapeFlags_2)); }
	inline BooleanU5BU5D_t3568034315* get_HtmlCharEscapeFlags_2() const { return ___HtmlCharEscapeFlags_2; }
	inline BooleanU5BU5D_t3568034315** get_address_of_HtmlCharEscapeFlags_2() { return &___HtmlCharEscapeFlags_2; }
	inline void set_HtmlCharEscapeFlags_2(BooleanU5BU5D_t3568034315* value)
	{
		___HtmlCharEscapeFlags_2 = value;
		Il2CppCodeGenWriteBarrier((&___HtmlCharEscapeFlags_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JAVASCRIPTUTILS_T4013793858_H
#ifndef LIST_1_T2823602470_H
#define LIST_1_T2823602470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Char>
struct  List_1_t2823602470  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CharU5BU5D_t1328083999* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2823602470, ____items_1)); }
	inline CharU5BU5D_t1328083999* get__items_1() const { return ____items_1; }
	inline CharU5BU5D_t1328083999** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CharU5BU5D_t1328083999* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2823602470, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2823602470, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2823602470_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CharU5BU5D_t1328083999* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2823602470_StaticFields, ___EmptyArray_4)); }
	inline CharU5BU5D_t1328083999* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline CharU5BU5D_t1328083999** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(CharU5BU5D_t1328083999* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2823602470_H
#ifndef JSONTOKENUTILS_T387653842_H
#define JSONTOKENUTILS_T387653842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.JsonTokenUtils
struct  JsonTokenUtils_t387653842  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONTOKENUTILS_T387653842_H
#ifndef REFLECTIONDELEGATEFACTORY_T2294713146_H
#define REFLECTIONDELEGATEFACTORY_T2294713146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct  ReflectionDelegateFactory_t2294713146  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONDELEGATEFACTORY_T2294713146_H
#ifndef U3CU3EC__DISPLAYCLASS13_2_T694137596_H
#define U3CU3EC__DISPLAYCLASS13_2_T694137596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2
struct  U3CU3Ec__DisplayClass13_2_t694137596  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::call
	MethodCall_2_t1283576322 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_2_t694137596, ___call_0)); }
	inline MethodCall_2_t1283576322 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t1283576322 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t1283576322 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((&___call_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS13_2_T694137596_H
#ifndef U3CU3EC__DISPLAYCLASS43_0_T3402508447_H
#define U3CU3EC__DISPLAYCLASS43_0_T3402508447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0
struct  U3CU3Ec__DisplayClass43_0_t3402508447  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS43_0_T3402508447_H
#ifndef STRINGREFERENCEEXTENSIONS_T223215850_H
#define STRINGREFERENCEEXTENSIONS_T223215850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringReferenceExtensions
struct  StringReferenceExtensions_t223215850  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREFERENCEEXTENSIONS_T223215850_H
#ifndef STRINGUTILS_T1768673176_H
#define STRINGUTILS_T1768673176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringUtils
struct  StringUtils_t1768673176  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGUTILS_T1768673176_H
#ifndef TYPEEXTENSIONS_T2974070984_H
#define TYPEEXTENSIONS_T2974070984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.TypeExtensions
struct  TypeExtensions_t2974070984  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEEXTENSIONS_T2974070984_H
#ifndef VALIDATIONUTILS_T1621959402_H
#define VALIDATIONUTILS_T1621959402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ValidationUtils
struct  ValidationUtils_t1621959402  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONUTILS_T1621959402_H
#ifndef ADDINGNEWEVENTARGS_T3938289828_H
#define ADDINGNEWEVENTARGS_T3938289828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AddingNewEventArgs
struct  AddingNewEventArgs_t3938289828  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDINGNEWEVENTARGS_T3938289828_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTARGS_T2376617142_H
#define NOTIFYCOLLECTIONCHANGEDEVENTARGS_T2376617142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyCollectionChangedEventArgs
struct  NotifyCollectionChangedEventArgs_t2376617142  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDEVENTARGS_T2376617142_H
#ifndef EVENTARGS_T3289624707_H
#define EVENTARGS_T3289624707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3289624707  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3289624707_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3289624707 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3289624707_StaticFields, ___Empty_0)); }
	inline EventArgs_t3289624707 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3289624707 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3289624707 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3289624707_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef U3CU3EC__DISPLAYCLASS42_0_T3402508478_H
#define U3CU3EC__DISPLAYCLASS42_0_T3402508478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0
struct  U3CU3Ec__DisplayClass42_0_t3402508478  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::subTypeProperty
	PropertyInfo_t * ___subTypeProperty_0;

public:
	inline static int32_t get_offset_of_subTypeProperty_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t3402508478, ___subTypeProperty_0)); }
	inline PropertyInfo_t * get_subTypeProperty_0() const { return ___subTypeProperty_0; }
	inline PropertyInfo_t ** get_address_of_subTypeProperty_0() { return &___subTypeProperty_0; }
	inline void set_subTypeProperty_0(PropertyInfo_t * value)
	{
		___subTypeProperty_0 = value;
		Il2CppCodeGenWriteBarrier((&___subTypeProperty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS42_0_T3402508478_H
#ifndef REFLECTIONUTILS_T3884221258_H
#define REFLECTIONUTILS_T3884221258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionUtils
struct  ReflectionUtils_t3884221258  : public RuntimeObject
{
public:

public:
};

struct ReflectionUtils_t3884221258_StaticFields
{
public:
	// System.Type[] Newtonsoft.Json.Utilities.ReflectionUtils::EmptyTypes
	TypeU5BU5D_t1664964607* ___EmptyTypes_0;

public:
	inline static int32_t get_offset_of_EmptyTypes_0() { return static_cast<int32_t>(offsetof(ReflectionUtils_t3884221258_StaticFields, ___EmptyTypes_0)); }
	inline TypeU5BU5D_t1664964607* get_EmptyTypes_0() const { return ___EmptyTypes_0; }
	inline TypeU5BU5D_t1664964607** get_address_of_EmptyTypes_0() { return &___EmptyTypes_0; }
	inline void set_EmptyTypes_0(TypeU5BU5D_t1664964607* value)
	{
		___EmptyTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONUTILS_T3884221258_H
#ifndef SERIALIZATIONBINDER_T3985864818_H
#define SERIALIZATIONBINDER_T3985864818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationBinder
struct  SerializationBinder_t3985864818  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONBINDER_T3985864818_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef U3CU3EC_T2709377751_H
#define U3CU3EC_T2709377751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct  U3CU3Ec_t2709377751  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2709377751_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ReflectionUtils/<>c Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9
	U3CU3Ec_t2709377751 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__10_0
	Func_2_t2343678841 * ___U3CU3E9__10_0_1;
	// System.Func`2<System.Reflection.MemberInfo,System.String> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__29_0
	Func_2_t2789580926 * ___U3CU3E9__29_0_2;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__37_0
	Func_2_t101093588 * ___U3CU3E9__37_0_3;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__39_0
	Func_2_t472048993 * ___U3CU3E9__39_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2709377751_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2709377751 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2709377751 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2709377751 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2709377751_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_t2343678841 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_t2343678841 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_t2343678841 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__10_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2709377751_StaticFields, ___U3CU3E9__29_0_2)); }
	inline Func_2_t2789580926 * get_U3CU3E9__29_0_2() const { return ___U3CU3E9__29_0_2; }
	inline Func_2_t2789580926 ** get_address_of_U3CU3E9__29_0_2() { return &___U3CU3E9__29_0_2; }
	inline void set_U3CU3E9__29_0_2(Func_2_t2789580926 * value)
	{
		___U3CU3E9__29_0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__29_0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2709377751_StaticFields, ___U3CU3E9__37_0_3)); }
	inline Func_2_t101093588 * get_U3CU3E9__37_0_3() const { return ___U3CU3E9__37_0_3; }
	inline Func_2_t101093588 ** get_address_of_U3CU3E9__37_0_3() { return &___U3CU3E9__37_0_3; }
	inline void set_U3CU3E9__37_0_3(Func_2_t101093588 * value)
	{
		___U3CU3E9__37_0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__37_0_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2709377751_StaticFields, ___U3CU3E9__39_0_4)); }
	inline Func_2_t472048993 * get_U3CU3E9__39_0_4() const { return ___U3CU3E9__39_0_4; }
	inline Func_2_t472048993 ** get_address_of_U3CU3E9__39_0_4() { return &___U3CU3E9__39_0_4; }
	inline void set_U3CU3E9__39_0_4(Func_2_t472048993 * value)
	{
		___U3CU3E9__39_0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__39_0_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T2709377751_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t169632028* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t169632028* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t169632028** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t169632028* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef LIST_1_T3412218392_H
#define LIST_1_T3412218392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct  List_1_t3412218392  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MemberInfoU5BU5D_t4238939941* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3412218392, ____items_1)); }
	inline MemberInfoU5BU5D_t4238939941* get__items_1() const { return ____items_1; }
	inline MemberInfoU5BU5D_t4238939941** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemberInfoU5BU5D_t4238939941* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3412218392, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3412218392, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3412218392_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MemberInfoU5BU5D_t4238939941* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3412218392_StaticFields, ___EmptyArray_4)); }
	inline MemberInfoU5BU5D_t4238939941* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline MemberInfoU5BU5D_t4238939941** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(MemberInfoU5BU5D_t4238939941* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3412218392_H
#ifndef ATTRIBUTE_T542643598_H
#define ATTRIBUTE_T542643598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t542643598  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T542643598_H
#ifndef BINDER_T3404612058_H
#define BINDER_T3404612058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t3404612058  : public RuntimeObject
{
public:

public:
};

struct Binder_t3404612058_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t3404612058 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t3404612058_StaticFields, ___default_binder_0)); }
	inline Binder_t3404612058 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t3404612058 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t3404612058 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T3404612058_H
#ifndef LIST_1_T1622850197_H
#define LIST_1_T1622850197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Reflection.PropertyInfo>
struct  List_1_t1622850197  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PropertyInfoU5BU5D_t1736152084* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1622850197, ____items_1)); }
	inline PropertyInfoU5BU5D_t1736152084* get__items_1() const { return ____items_1; }
	inline PropertyInfoU5BU5D_t1736152084** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PropertyInfoU5BU5D_t1736152084* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1622850197, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1622850197, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1622850197_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PropertyInfoU5BU5D_t1736152084* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1622850197_StaticFields, ___EmptyArray_4)); }
	inline PropertyInfoU5BU5D_t1736152084* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PropertyInfoU5BU5D_t1736152084** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PropertyInfoU5BU5D_t1736152084* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1622850197_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1328083999* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1328083999* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1328083999** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1328083999* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef U3CU3EC__DISPLAYCLASS9_0_T2278087657_H
#define U3CU3EC__DISPLAYCLASS9_0_T2278087657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t2278087657  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0::call
	MethodCall_2_t1283576322 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t2278087657, ___call_0)); }
	inline MethodCall_2_t1283576322 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t1283576322 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t1283576322 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((&___call_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS9_0_T2278087657_H
#ifndef DATETIMEUTILS_T919483584_H
#define DATETIMEUTILS_T919483584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.DateTimeUtils
struct  DateTimeUtils_t919483584  : public RuntimeObject
{
public:

public:
};

struct DateTimeUtils_t919483584_StaticFields
{
public:
	// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::InitialJavaScriptDateTicks
	int64_t ___InitialJavaScriptDateTicks_0;
	// System.Int32[] Newtonsoft.Json.Utilities.DateTimeUtils::DaysToMonth365
	Int32U5BU5D_t3030399641* ___DaysToMonth365_1;
	// System.Int32[] Newtonsoft.Json.Utilities.DateTimeUtils::DaysToMonth366
	Int32U5BU5D_t3030399641* ___DaysToMonth366_2;

public:
	inline static int32_t get_offset_of_InitialJavaScriptDateTicks_0() { return static_cast<int32_t>(offsetof(DateTimeUtils_t919483584_StaticFields, ___InitialJavaScriptDateTicks_0)); }
	inline int64_t get_InitialJavaScriptDateTicks_0() const { return ___InitialJavaScriptDateTicks_0; }
	inline int64_t* get_address_of_InitialJavaScriptDateTicks_0() { return &___InitialJavaScriptDateTicks_0; }
	inline void set_InitialJavaScriptDateTicks_0(int64_t value)
	{
		___InitialJavaScriptDateTicks_0 = value;
	}

	inline static int32_t get_offset_of_DaysToMonth365_1() { return static_cast<int32_t>(offsetof(DateTimeUtils_t919483584_StaticFields, ___DaysToMonth365_1)); }
	inline Int32U5BU5D_t3030399641* get_DaysToMonth365_1() const { return ___DaysToMonth365_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_DaysToMonth365_1() { return &___DaysToMonth365_1; }
	inline void set_DaysToMonth365_1(Int32U5BU5D_t3030399641* value)
	{
		___DaysToMonth365_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_1), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_2() { return static_cast<int32_t>(offsetof(DateTimeUtils_t919483584_StaticFields, ___DaysToMonth366_2)); }
	inline Int32U5BU5D_t3030399641* get_DaysToMonth366_2() const { return ___DaysToMonth366_2; }
	inline Int32U5BU5D_t3030399641** get_address_of_DaysToMonth366_2() { return &___DaysToMonth366_2; }
	inline void set_DaysToMonth366_2(Int32U5BU5D_t3030399641* value)
	{
		___DaysToMonth366_2 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEUTILS_T919483584_H
#ifndef CULTUREINFO_T3500843524_H
#define CULTUREINFO_T3500843524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t3500843524  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t104580544 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2187473504 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3620182823 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t2310920157 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3654442685* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t3500843524 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t585061108 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t3397334013* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___numInfo_14)); }
	inline NumberFormatInfo_t104580544 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t104580544 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t104580544 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2187473504 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2187473504 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2187473504 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___textInfo_16)); }
	inline TextInfo_t3620182823 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3620182823 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3620182823 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___compareInfo_26)); }
	inline CompareInfo_t2310920157 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t2310920157 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t2310920157 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3654442685* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3654442685** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3654442685* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___parent_culture_30)); }
	inline CultureInfo_t3500843524 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t3500843524 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t3500843524 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___calendar_32)); }
	inline Calendar_t585061108 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t585061108 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t585061108 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t3397334013* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t3397334013** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t3397334013* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t3500843524_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t3500843524 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t909839986 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t909839986 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t3500843524 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t3500843524 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t3500843524 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t909839986 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t909839986 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t909839986 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t909839986 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t909839986 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t909839986 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t3500843524_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T3500843524_H
#ifndef TIMEZONE_T4008205267_H
#define TIMEZONE_T4008205267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t4008205267  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t4008205267_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t4008205267 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t4008205267_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t4008205267 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t4008205267 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t4008205267 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t4008205267_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t4008205267_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T4008205267_H
#ifndef TEXTWRITER_T4027217640_H
#define TEXTWRITER_T4027217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t4027217640  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t1328083999* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t4027217640, ___CoreNewLine_0)); }
	inline CharU5BU5D_t1328083999* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t1328083999** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t1328083999* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t4027217640, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t4027217640_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4027217640 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t4027217640_StaticFields, ___Null_2)); }
	inline TextWriter_t4027217640 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t4027217640 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t4027217640 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T4027217640_H
#ifndef BIDIRECTIONALDICTIONARY_2_T2874502390_H
#define BIDIRECTIONALDICTIONARY_2_T2874502390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>
struct  BidirectionalDictionary_2_t2874502390  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TFirst,TSecond> Newtonsoft.Json.Utilities.BidirectionalDictionary`2::_firstToSecond
	RuntimeObject* ____firstToSecond_0;
	// System.Collections.Generic.IDictionary`2<TSecond,TFirst> Newtonsoft.Json.Utilities.BidirectionalDictionary`2::_secondToFirst
	RuntimeObject* ____secondToFirst_1;
	// System.String Newtonsoft.Json.Utilities.BidirectionalDictionary`2::_duplicateFirstErrorMessage
	String_t* ____duplicateFirstErrorMessage_2;
	// System.String Newtonsoft.Json.Utilities.BidirectionalDictionary`2::_duplicateSecondErrorMessage
	String_t* ____duplicateSecondErrorMessage_3;

public:
	inline static int32_t get_offset_of__firstToSecond_0() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t2874502390, ____firstToSecond_0)); }
	inline RuntimeObject* get__firstToSecond_0() const { return ____firstToSecond_0; }
	inline RuntimeObject** get_address_of__firstToSecond_0() { return &____firstToSecond_0; }
	inline void set__firstToSecond_0(RuntimeObject* value)
	{
		____firstToSecond_0 = value;
		Il2CppCodeGenWriteBarrier((&____firstToSecond_0), value);
	}

	inline static int32_t get_offset_of__secondToFirst_1() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t2874502390, ____secondToFirst_1)); }
	inline RuntimeObject* get__secondToFirst_1() const { return ____secondToFirst_1; }
	inline RuntimeObject** get_address_of__secondToFirst_1() { return &____secondToFirst_1; }
	inline void set__secondToFirst_1(RuntimeObject* value)
	{
		____secondToFirst_1 = value;
		Il2CppCodeGenWriteBarrier((&____secondToFirst_1), value);
	}

	inline static int32_t get_offset_of__duplicateFirstErrorMessage_2() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t2874502390, ____duplicateFirstErrorMessage_2)); }
	inline String_t* get__duplicateFirstErrorMessage_2() const { return ____duplicateFirstErrorMessage_2; }
	inline String_t** get_address_of__duplicateFirstErrorMessage_2() { return &____duplicateFirstErrorMessage_2; }
	inline void set__duplicateFirstErrorMessage_2(String_t* value)
	{
		____duplicateFirstErrorMessage_2 = value;
		Il2CppCodeGenWriteBarrier((&____duplicateFirstErrorMessage_2), value);
	}

	inline static int32_t get_offset_of__duplicateSecondErrorMessage_3() { return static_cast<int32_t>(offsetof(BidirectionalDictionary_2_t2874502390, ____duplicateSecondErrorMessage_3)); }
	inline String_t* get__duplicateSecondErrorMessage_3() const { return ____duplicateSecondErrorMessage_3; }
	inline String_t** get_address_of__duplicateSecondErrorMessage_3() { return &____duplicateSecondErrorMessage_3; }
	inline void set__duplicateSecondErrorMessage_3(String_t* value)
	{
		____duplicateSecondErrorMessage_3 = value;
		Il2CppCodeGenWriteBarrier((&____duplicateSecondErrorMessage_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIDIRECTIONALDICTIONARY_2_T2874502390_H
#ifndef ENUMUTILS_T1099402118_H
#define ENUMUTILS_T1099402118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.EnumUtils
struct  EnumUtils_t1099402118  : public RuntimeObject
{
public:

public:
};

struct EnumUtils_t1099402118_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>> Newtonsoft.Json.Utilities.EnumUtils::EnumMemberNamesPerType
	ThreadSafeStore_2_t2258736631 * ___EnumMemberNamesPerType_0;

public:
	inline static int32_t get_offset_of_EnumMemberNamesPerType_0() { return static_cast<int32_t>(offsetof(EnumUtils_t1099402118_StaticFields, ___EnumMemberNamesPerType_0)); }
	inline ThreadSafeStore_2_t2258736631 * get_EnumMemberNamesPerType_0() const { return ___EnumMemberNamesPerType_0; }
	inline ThreadSafeStore_2_t2258736631 ** get_address_of_EnumMemberNamesPerType_0() { return &___EnumMemberNamesPerType_0; }
	inline void set_EnumMemberNamesPerType_0(ThreadSafeStore_2_t2258736631 * value)
	{
		___EnumMemberNamesPerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___EnumMemberNamesPerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMUTILS_T1099402118_H
#ifndef DECIMAL_T724701077_H
#define DECIMAL_T724701077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t724701077 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_6;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_7;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_8;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_9;

public:
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t724701077, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t724701077_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t724701077  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t724701077  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t724701077  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t724701077  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t724701077  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t724701077  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___MinValue_0)); }
	inline Decimal_t724701077  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t724701077 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t724701077  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___MaxValue_1)); }
	inline Decimal_t724701077  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t724701077 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t724701077  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___MinusOne_2)); }
	inline Decimal_t724701077  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t724701077 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t724701077  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___One_3)); }
	inline Decimal_t724701077  get_One_3() const { return ___One_3; }
	inline Decimal_t724701077 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t724701077  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___Zero_4)); }
	inline Decimal_t724701077  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t724701077 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t724701077  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t724701077_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t724701077  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t724701077 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t724701077  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T724701077_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2510243513 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2510243513 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2510243513 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2510243513 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2510243513 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2510243513 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef BYTE_T3683104436_H
#define BYTE_T3683104436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t3683104436 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t3683104436, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T3683104436_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef UINT64_T2909196914_H
#define UINT64_T2909196914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t2909196914 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt64_t2909196914, ___m_value_2)); }
	inline uint64_t get_m_value_2() const { return ___m_value_2; }
	inline uint64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T2909196914_H
#ifndef DOUBLE_T4078015681_H
#define DOUBLE_T4078015681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t4078015681 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t4078015681, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T4078015681_H
#ifndef STRINGBUFFER_T2484172789_H
#define STRINGBUFFER_T2484172789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringBuffer
struct  StringBuffer_t2484172789 
{
public:
	// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::_buffer
	CharU5BU5D_t1328083999* ____buffer_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::_position
	int32_t ____position_1;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(StringBuffer_t2484172789, ____buffer_0)); }
	inline CharU5BU5D_t1328083999* get__buffer_0() const { return ____buffer_0; }
	inline CharU5BU5D_t1328083999** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(CharU5BU5D_t1328083999* value)
	{
		____buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_0), value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(StringBuffer_t2484172789, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_t2484172789_marshaled_pinvoke
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_t2484172789_marshaled_com
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};
#endif // STRINGBUFFER_T2484172789_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef STRINGREFERENCE_T1873850304_H
#define STRINGREFERENCE_T1873850304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringReference
struct  StringReference_t1873850304 
{
public:
	// System.Char[] Newtonsoft.Json.Utilities.StringReference::_chars
	CharU5BU5D_t1328083999* ____chars_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_startIndex
	int32_t ____startIndex_1;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__chars_0() { return static_cast<int32_t>(offsetof(StringReference_t1873850304, ____chars_0)); }
	inline CharU5BU5D_t1328083999* get__chars_0() const { return ____chars_0; }
	inline CharU5BU5D_t1328083999** get_address_of__chars_0() { return &____chars_0; }
	inline void set__chars_0(CharU5BU5D_t1328083999* value)
	{
		____chars_0 = value;
		Il2CppCodeGenWriteBarrier((&____chars_0), value);
	}

	inline static int32_t get_offset_of__startIndex_1() { return static_cast<int32_t>(offsetof(StringReference_t1873850304, ____startIndex_1)); }
	inline int32_t get__startIndex_1() const { return ____startIndex_1; }
	inline int32_t* get_address_of__startIndex_1() { return &____startIndex_1; }
	inline void set__startIndex_1(int32_t value)
	{
		____startIndex_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(StringReference_t1873850304, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.StringReference
struct StringReference_t1873850304_marshaled_pinvoke
{
	uint8_t* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.StringReference
struct StringReference_t1873850304_marshaled_com
{
	uint8_t* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};
#endif // STRINGREFERENCE_T1873850304_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef __STATICARRAYINITTYPESIZEU3D52_T3707359369_H
#define __STATICARRAYINITTYPESIZEU3D52_T3707359369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct  __StaticArrayInitTypeSizeU3D52_t3707359369 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t3707359369__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D52_T3707359369_H
#ifndef INT64_T909078037_H
#define INT64_T909078037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t909078037 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t909078037, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T909078037_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t1766862959 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t1766862959 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t1766862959 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t1766862959 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
#define TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t1554451430  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
#ifndef __STATICARRAYINITTYPESIZEU3D28_T978476020_H
#define __STATICARRAYINITTYPESIZEU3D28_T978476020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct  __StaticArrayInitTypeSizeU3D28_t978476020 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t978476020__padding[28];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D28_T978476020_H
#ifndef PARAMETERMODIFIER_T1820634920_H
#define PARAMETERMODIFIER_T1820634920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1820634920 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t3568034315* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1820634920, ____byref_0)); }
	inline BooleanU5BU5D_t3568034315* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t3568034315** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t3568034315* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1820634920_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1820634920_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T1820634920_H
#ifndef CHAR_T3454481338_H
#define CHAR_T3454481338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3454481338 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3454481338, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3454481338_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3454481338_H
#ifndef TIMESPAN_T3430258949_H
#define TIMESPAN_T3430258949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3430258949 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3430258949_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3430258949  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3430258949  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3430258949  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3430258949  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3430258949 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3430258949  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3430258949  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3430258949 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3430258949  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3430258949  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3430258949 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3430258949  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3430258949_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef __STATICARRAYINITTYPESIZEU3D10_T1381760539_H
#define __STATICARRAYINITTYPESIZEU3D10_T1381760539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct  __StaticArrayInitTypeSizeU3D10_t1381760539 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t1381760539__padding[10];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D10_T1381760539_H
#ifndef SYSTEMEXCEPTION_T3877406272_H
#define SYSTEMEXCEPTION_T3877406272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3877406272  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3877406272_H
#ifndef ENUMMEMBERATTRIBUTE_T187433993_H
#define ENUMMEMBERATTRIBUTE_T187433993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.EnumMemberAttribute
struct  EnumMemberAttribute_t187433993  : public Attribute_t542643598
{
public:
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t187433993, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMMEMBERATTRIBUTE_T187433993_H
#ifndef __STATICARRAYINITTYPESIZEU3D12_T1381760541_H
#define __STATICARRAYINITTYPESIZEU3D12_T1381760541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t1381760541 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1381760541__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T1381760541_H
#ifndef PROPERTYCHANGINGEVENTARGS_T2525320927_H
#define PROPERTYCHANGINGEVENTARGS_T2525320927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangingEventArgs
struct  PropertyChangingEventArgs_t2525320927  : public EventArgs_t3289624707
{
public:
	// System.String System.ComponentModel.PropertyChangingEventArgs::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPropertyNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PropertyChangingEventArgs_t2525320927, ___U3CPropertyNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CPropertyNameU3Ek__BackingField_1() const { return ___U3CPropertyNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPropertyNameU3Ek__BackingField_1() { return &___U3CPropertyNameU3Ek__BackingField_1; }
	inline void set_U3CPropertyNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CPropertyNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPropertyNameU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGINGEVENTARGS_T2525320927_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef LATEBOUNDREFLECTIONDELEGATEFACTORY_T3208546116_H
#define LATEBOUNDREFLECTIONDELEGATEFACTORY_T3208546116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory
struct  LateBoundReflectionDelegateFactory_t3208546116  : public ReflectionDelegateFactory_t2294713146
{
public:

public:
};

struct LateBoundReflectionDelegateFactory_t3208546116_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::_instance
	LateBoundReflectionDelegateFactory_t3208546116 * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(LateBoundReflectionDelegateFactory_t3208546116_StaticFields, ____instance_0)); }
	inline LateBoundReflectionDelegateFactory_t3208546116 * get__instance_0() const { return ____instance_0; }
	inline LateBoundReflectionDelegateFactory_t3208546116 ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(LateBoundReflectionDelegateFactory_t3208546116 * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((&____instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATEBOUNDREFLECTIONDELEGATEFACTORY_T3208546116_H
#ifndef TYPECONVERTKEY_T1788482786_H
#define TYPECONVERTKEY_T1788482786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct  TypeConvertKey_t1788482786 
{
public:
	// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::_initialType
	Type_t * ____initialType_0;
	// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::_targetType
	Type_t * ____targetType_1;

public:
	inline static int32_t get_offset_of__initialType_0() { return static_cast<int32_t>(offsetof(TypeConvertKey_t1788482786, ____initialType_0)); }
	inline Type_t * get__initialType_0() const { return ____initialType_0; }
	inline Type_t ** get_address_of__initialType_0() { return &____initialType_0; }
	inline void set__initialType_0(Type_t * value)
	{
		____initialType_0 = value;
		Il2CppCodeGenWriteBarrier((&____initialType_0), value);
	}

	inline static int32_t get_offset_of__targetType_1() { return static_cast<int32_t>(offsetof(TypeConvertKey_t1788482786, ____targetType_1)); }
	inline Type_t * get__targetType_1() const { return ____targetType_1; }
	inline Type_t ** get_address_of__targetType_1() { return &____targetType_1; }
	inline void set__targetType_1(Type_t * value)
	{
		____targetType_1 = value;
		Il2CppCodeGenWriteBarrier((&____targetType_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t1788482786_marshaled_pinvoke
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t1788482786_marshaled_com
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
#endif // TYPECONVERTKEY_T1788482786_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef STRINGWRITER_T4139609088_H
#define STRINGWRITER_T4139609088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t4139609088  : public TextWriter_t4027217640
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t4139609088, ___internalString_3)); }
	inline StringBuilder_t * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t4139609088, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T4139609088_H
#ifndef NULLABLE_1_T334943763_H
#define NULLABLE_1_T334943763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t334943763 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t334943763, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t334943763, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T334943763_H
#ifndef PARAMETERATTRIBUTES_T1266705348_H
#define PARAMETERATTRIBUTES_T1266705348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1266705348 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1266705348, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T1266705348_H
#ifndef FORMATTERASSEMBLYSTYLE_T999493661_H
#define FORMATTERASSEMBLYSTYLE_T999493661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t999493661 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t999493661, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERASSEMBLYSTYLE_T999493661_H
#ifndef WRITESTATE_T1009238728_H
#define WRITESTATE_T1009238728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.WriteState
struct  WriteState_t1009238728 
{
public:
	// System.Int32 Newtonsoft.Json.WriteState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WriteState_t1009238728, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITESTATE_T1009238728_H
#ifndef PARSERTIMEZONE_T3773981114_H
#define PARSERTIMEZONE_T3773981114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ParserTimeZone
struct  ParserTimeZone_t3773981114 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.ParserTimeZone::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParserTimeZone_t3773981114, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSERTIMEZONE_T3773981114_H
#ifndef CONVERTRESULT_T2285525878_H
#define CONVERTRESULT_T2285525878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult
struct  ConvertResult_t2285525878 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConvertResult_t2285525878, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERTRESULT_T2285525878_H
#ifndef NOTIFYCOLLECTIONCHANGEDACTION_T3105391041_H
#define NOTIFYCOLLECTIONCHANGEDACTION_T3105391041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_t3105391041 
{
public:
	// System.Int32 System.ComponentModel.NotifyCollectionChangedAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t3105391041, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDACTION_T3105391041_H
#ifndef RUNTIMEFIELDHANDLE_T2331729674_H
#define RUNTIMEFIELDHANDLE_T2331729674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2331729674 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2331729674, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T2331729674_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t1761494505 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t1407710183 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t1941658161 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t1941658161 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t1941658161 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t1941658161 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t1941658161 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t1761494505 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t1761494505 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t1761494505 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t1407710183 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t1407710183 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t1407710183 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t1941658161 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t1941658161 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t1941658161 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t1941658161 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t1941658161 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t1941658161 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t1941658161 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t1941658161 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t1941658161 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t1941658161 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t1941658161 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t1941658161 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t1941658161 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t1941658161 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t1941658161 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305145_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1486305145  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1486305145_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::9E31F24F64765FCAA589F589324D17C9FCF6A06D
	__StaticArrayInitTypeSizeU3D28_t978476020  ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::ADFD2E1C801C825415DD53F4F2F72A13B389313C
	__StaticArrayInitTypeSizeU3D12_t1381760541  ___ADFD2E1C801C825415DD53F4F2F72A13B389313C_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB
	__StaticArrayInitTypeSizeU3D10_t1381760539  ___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_t3707359369  ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_t3707359369  ___E92B39D8233061927D9ACDE54665E68E7535635A_4;

public:
	inline static int32_t get_offset_of_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305145_StaticFields, ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_0)); }
	inline __StaticArrayInitTypeSizeU3D28_t978476020  get_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_0() const { return ___9E31F24F64765FCAA589F589324D17C9FCF6A06D_0; }
	inline __StaticArrayInitTypeSizeU3D28_t978476020 * get_address_of_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_0() { return &___9E31F24F64765FCAA589F589324D17C9FCF6A06D_0; }
	inline void set_U39E31F24F64765FCAA589F589324D17C9FCF6A06D_0(__StaticArrayInitTypeSizeU3D28_t978476020  value)
	{
		___9E31F24F64765FCAA589F589324D17C9FCF6A06D_0 = value;
	}

	inline static int32_t get_offset_of_ADFD2E1C801C825415DD53F4F2F72A13B389313C_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305145_StaticFields, ___ADFD2E1C801C825415DD53F4F2F72A13B389313C_1)); }
	inline __StaticArrayInitTypeSizeU3D12_t1381760541  get_ADFD2E1C801C825415DD53F4F2F72A13B389313C_1() const { return ___ADFD2E1C801C825415DD53F4F2F72A13B389313C_1; }
	inline __StaticArrayInitTypeSizeU3D12_t1381760541 * get_address_of_ADFD2E1C801C825415DD53F4F2F72A13B389313C_1() { return &___ADFD2E1C801C825415DD53F4F2F72A13B389313C_1; }
	inline void set_ADFD2E1C801C825415DD53F4F2F72A13B389313C_1(__StaticArrayInitTypeSizeU3D12_t1381760541  value)
	{
		___ADFD2E1C801C825415DD53F4F2F72A13B389313C_1 = value;
	}

	inline static int32_t get_offset_of_D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305145_StaticFields, ___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2)); }
	inline __StaticArrayInitTypeSizeU3D10_t1381760539  get_D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2() const { return ___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2; }
	inline __StaticArrayInitTypeSizeU3D10_t1381760539 * get_address_of_D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2() { return &___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2; }
	inline void set_D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2(__StaticArrayInitTypeSizeU3D10_t1381760539  value)
	{
		___D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2 = value;
	}

	inline static int32_t get_offset_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305145_StaticFields, ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_3)); }
	inline __StaticArrayInitTypeSizeU3D52_t3707359369  get_DD3AEFEADB1CD615F3017763F1568179FEE640B0_3() const { return ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_3; }
	inline __StaticArrayInitTypeSizeU3D52_t3707359369 * get_address_of_DD3AEFEADB1CD615F3017763F1568179FEE640B0_3() { return &___DD3AEFEADB1CD615F3017763F1568179FEE640B0_3; }
	inline void set_DD3AEFEADB1CD615F3017763F1568179FEE640B0_3(__StaticArrayInitTypeSizeU3D52_t3707359369  value)
	{
		___DD3AEFEADB1CD615F3017763F1568179FEE640B0_3 = value;
	}

	inline static int32_t get_offset_of_E92B39D8233061927D9ACDE54665E68E7535635A_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305145_StaticFields, ___E92B39D8233061927D9ACDE54665E68E7535635A_4)); }
	inline __StaticArrayInitTypeSizeU3D52_t3707359369  get_E92B39D8233061927D9ACDE54665E68E7535635A_4() const { return ___E92B39D8233061927D9ACDE54665E68E7535635A_4; }
	inline __StaticArrayInitTypeSizeU3D52_t3707359369 * get_address_of_E92B39D8233061927D9ACDE54665E68E7535635A_4() { return &___E92B39D8233061927D9ACDE54665E68E7535635A_4; }
	inline void set_E92B39D8233061927D9ACDE54665E68E7535635A_4(__StaticArrayInitTypeSizeU3D52_t3707359369  value)
	{
		___E92B39D8233061927D9ACDE54665E68E7535635A_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305145_H
#ifndef RUNTIMETYPEHANDLE_T2330101084_H
#define RUNTIMETYPEHANDLE_T2330101084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t2330101084 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2330101084, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T2330101084_H
#ifndef PARSERESULT_T3601995942_H
#define PARSERESULT_T3601995942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ParseResult
struct  ParseResult_t3601995942 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.ParseResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParseResult_t3601995942, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSERESULT_T3601995942_H
#ifndef DATETIMESTYLES_T370343085_H
#define DATETIMESTYLES_T370343085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t370343085 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeStyles_t370343085, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMESTYLES_T370343085_H
#ifndef STRINGESCAPEHANDLING_T3827428951_H
#define STRINGESCAPEHANDLING_T3827428951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.StringEscapeHandling
struct  StringEscapeHandling_t3827428951 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t3827428951, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGESCAPEHANDLING_T3827428951_H
#ifndef STRINGCOMPARISON_T2376310518_H
#define STRINGCOMPARISON_T2376310518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t2376310518 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t2376310518, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARISON_T2376310518_H
#ifndef DATETIMEZONEHANDLING_T478160270_H
#define DATETIMEZONEHANDLING_T478160270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.DateTimeZoneHandling
struct  DateTimeZoneHandling_t478160270 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t478160270, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEZONEHANDLING_T478160270_H
#ifndef JSONTOKEN_T620654565_H
#define JSONTOKEN_T620654565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonToken
struct  JsonToken_t620654565 
{
public:
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(JsonToken_t620654565, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONTOKEN_T620654565_H
#ifndef ARGUMENTEXCEPTION_T3259014390_H
#define ARGUMENTEXCEPTION_T3259014390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t3259014390  : public SystemException_t3877406272
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t3259014390, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T3259014390_H
#ifndef PRIMITIVETYPECODE_T2593001762_H
#define PRIMITIVETYPECODE_T2593001762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.PrimitiveTypeCode
struct  PrimitiveTypeCode_t2593001762 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.PrimitiveTypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrimitiveTypeCode_t2593001762, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMITIVETYPECODE_T2593001762_H
#ifndef CONSTRUCTORINFO_T2851816542_H
#define CONSTRUCTORINFO_T2851816542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t2851816542  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t2851816542_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t2851816542_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t2851816542_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T2851816542_H
#ifndef INVALIDOPERATIONEXCEPTION_T721527559_H
#define INVALIDOPERATIONEXCEPTION_T721527559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t721527559  : public SystemException_t3877406272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T721527559_H
#ifndef BINDINGFLAGS_T1082350898_H
#define BINDINGFLAGS_T1082350898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t1082350898 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t1082350898, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T1082350898_H
#ifndef NULLABLE_1_T1693325264_H
#define NULLABLE_1_T1693325264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.TimeSpan>
struct  Nullable_1_t1693325264 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t3430258949  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1693325264, ___value_0)); }
	inline TimeSpan_t3430258949  get_value_0() const { return ___value_0; }
	inline TimeSpan_t3430258949 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t3430258949  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1693325264, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1693325264_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_8)); }
	inline DelegateData_t1572802995 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1572802995 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1572802995 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3022476291_H
#ifndef TIMEZONEINFO_T436210607_H
#define TIMEZONEINFO_T436210607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo
struct  TimeZoneInfo_t436210607  : public RuntimeObject
{
public:
	// System.TimeSpan System.TimeZoneInfo::baseUtcOffset
	TimeSpan_t3430258949  ___baseUtcOffset_0;
	// System.String System.TimeZoneInfo::daylightDisplayName
	String_t* ___daylightDisplayName_1;
	// System.String System.TimeZoneInfo::displayName
	String_t* ___displayName_2;
	// System.String System.TimeZoneInfo::id
	String_t* ___id_3;
	// System.String System.TimeZoneInfo::standardDisplayName
	String_t* ___standardDisplayName_5;
	// System.Boolean System.TimeZoneInfo::disableDaylightSavingTime
	bool ___disableDaylightSavingTime_6;
	// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::adjustmentRules
	AdjustmentRuleU5BU5D_t2338614759* ___adjustmentRules_9;

public:
	inline static int32_t get_offset_of_baseUtcOffset_0() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___baseUtcOffset_0)); }
	inline TimeSpan_t3430258949  get_baseUtcOffset_0() const { return ___baseUtcOffset_0; }
	inline TimeSpan_t3430258949 * get_address_of_baseUtcOffset_0() { return &___baseUtcOffset_0; }
	inline void set_baseUtcOffset_0(TimeSpan_t3430258949  value)
	{
		___baseUtcOffset_0 = value;
	}

	inline static int32_t get_offset_of_daylightDisplayName_1() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___daylightDisplayName_1)); }
	inline String_t* get_daylightDisplayName_1() const { return ___daylightDisplayName_1; }
	inline String_t** get_address_of_daylightDisplayName_1() { return &___daylightDisplayName_1; }
	inline void set_daylightDisplayName_1(String_t* value)
	{
		___daylightDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___daylightDisplayName_1), value);
	}

	inline static int32_t get_offset_of_displayName_2() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___displayName_2)); }
	inline String_t* get_displayName_2() const { return ___displayName_2; }
	inline String_t** get_address_of_displayName_2() { return &___displayName_2; }
	inline void set_displayName_2(String_t* value)
	{
		___displayName_2 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_2), value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier((&___id_3), value);
	}

	inline static int32_t get_offset_of_standardDisplayName_5() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___standardDisplayName_5)); }
	inline String_t* get_standardDisplayName_5() const { return ___standardDisplayName_5; }
	inline String_t** get_address_of_standardDisplayName_5() { return &___standardDisplayName_5; }
	inline void set_standardDisplayName_5(String_t* value)
	{
		___standardDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((&___standardDisplayName_5), value);
	}

	inline static int32_t get_offset_of_disableDaylightSavingTime_6() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___disableDaylightSavingTime_6)); }
	inline bool get_disableDaylightSavingTime_6() const { return ___disableDaylightSavingTime_6; }
	inline bool* get_address_of_disableDaylightSavingTime_6() { return &___disableDaylightSavingTime_6; }
	inline void set_disableDaylightSavingTime_6(bool value)
	{
		___disableDaylightSavingTime_6 = value;
	}

	inline static int32_t get_offset_of_adjustmentRules_9() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607, ___adjustmentRules_9)); }
	inline AdjustmentRuleU5BU5D_t2338614759* get_adjustmentRules_9() const { return ___adjustmentRules_9; }
	inline AdjustmentRuleU5BU5D_t2338614759** get_address_of_adjustmentRules_9() { return &___adjustmentRules_9; }
	inline void set_adjustmentRules_9(AdjustmentRuleU5BU5D_t2338614759* value)
	{
		___adjustmentRules_9 = value;
		Il2CppCodeGenWriteBarrier((&___adjustmentRules_9), value);
	}
};

struct TimeZoneInfo_t436210607_StaticFields
{
public:
	// System.TimeZoneInfo System.TimeZoneInfo::local
	TimeZoneInfo_t436210607 * ___local_4;
	// System.TimeZoneInfo System.TimeZoneInfo::utc
	TimeZoneInfo_t436210607 * ___utc_7;
	// System.String System.TimeZoneInfo::timeZoneDirectory
	String_t* ___timeZoneDirectory_8;

public:
	inline static int32_t get_offset_of_local_4() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607_StaticFields, ___local_4)); }
	inline TimeZoneInfo_t436210607 * get_local_4() const { return ___local_4; }
	inline TimeZoneInfo_t436210607 ** get_address_of_local_4() { return &___local_4; }
	inline void set_local_4(TimeZoneInfo_t436210607 * value)
	{
		___local_4 = value;
		Il2CppCodeGenWriteBarrier((&___local_4), value);
	}

	inline static int32_t get_offset_of_utc_7() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607_StaticFields, ___utc_7)); }
	inline TimeZoneInfo_t436210607 * get_utc_7() const { return ___utc_7; }
	inline TimeZoneInfo_t436210607 ** get_address_of_utc_7() { return &___utc_7; }
	inline void set_utc_7(TimeZoneInfo_t436210607 * value)
	{
		___utc_7 = value;
		Il2CppCodeGenWriteBarrier((&___utc_7), value);
	}

	inline static int32_t get_offset_of_timeZoneDirectory_8() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t436210607_StaticFields, ___timeZoneDirectory_8)); }
	inline String_t* get_timeZoneDirectory_8() const { return ___timeZoneDirectory_8; }
	inline String_t** get_address_of_timeZoneDirectory_8() { return &___timeZoneDirectory_8; }
	inline void set_timeZoneDirectory_8(String_t* value)
	{
		___timeZoneDirectory_8 = value;
		Il2CppCodeGenWriteBarrier((&___timeZoneDirectory_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONEINFO_T436210607_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef DATETIMEKIND_T2186819611_H
#define DATETIMEKIND_T2186819611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2186819611 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2186819611, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T2186819611_H
#ifndef MEMBERTYPES_T3343038963_H
#define MEMBERTYPES_T3343038963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t3343038963 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t3343038963, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPES_T3343038963_H
#ifndef XMLDATETIMESERIALIZATIONMODE_T137774893_H
#define XMLDATETIMESERIALIZATIONMODE_T137774893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDateTimeSerializationMode
struct  XmlDateTimeSerializationMode_t137774893 
{
public:
	// System.Int32 System.Xml.XmlDateTimeSerializationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDateTimeSerializationMode_t137774893, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDATETIMESERIALIZATIONMODE_T137774893_H
#ifndef DATEFORMATHANDLING_T147563782_H
#define DATEFORMATHANDLING_T147563782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.DateFormatHandling
struct  DateFormatHandling_t147563782 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateFormatHandling_t147563782, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATEFORMATHANDLING_T147563782_H
#ifndef TYPEINFORMATION_T1531269270_H
#define TYPEINFORMATION_T1531269270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.TypeInformation
struct  TypeInformation_t1531269270  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.TypeInformation::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_0;
	// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.TypeInformation::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TypeInformation_t1531269270, ___U3CTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTypeU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TypeInformation_t1531269270, ___U3CTypeCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_1() const { return ___U3CTypeCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_1() { return &___U3CTypeCodeU3Ek__BackingField_1; }
	inline void set_U3CTypeCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFORMATION_T1531269270_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t2330101084  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t2330101084  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t2330101084 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t2330101084  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t1664964607* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3405857066 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3405857066 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3405857066 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t1664964607* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t1664964607** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t1664964607* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t3405857066 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t3405857066 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t3405857066 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t3405857066 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t3405857066 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t3405857066 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t3022476291
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef PARAMETERINFO_T2249040075_H
#define PARAMETERINFO_T2249040075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t2249040075  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t4270021860 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___marshalAs_6)); }
	inline UnmanagedMarshal_t4270021860 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t4270021860 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t4270021860 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T2249040075_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T279959794_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T279959794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t279959794  : public ArgumentException_t3259014390
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t279959794, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T279959794_H
#ifndef DATETIME_T693205669_H
#define DATETIME_T693205669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t693205669 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t3430258949  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t693205669, ___ticks_0)); }
	inline TimeSpan_t3430258949  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t3430258949 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t3430258949  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t693205669, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t693205669_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t693205669  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t693205669  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1642385972* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1642385972* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1642385972* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1642385972* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1642385972* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1642385972* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1642385972* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t3030399641* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t3030399641* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MaxValue_2)); }
	inline DateTime_t693205669  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t693205669 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t693205669  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MinValue_3)); }
	inline DateTime_t693205669  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t693205669 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t693205669  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1642385972* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1642385972* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1642385972* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1642385972* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1642385972* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1642385972* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1642385972* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1642385972* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1642385972* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1642385972* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1642385972* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1642385972** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1642385972* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1642385972* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1642385972** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1642385972* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t3030399641* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t3030399641** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t3030399641* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t3030399641* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t3030399641** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t3030399641* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T693205669_H
#ifndef MODULE_T4282841206_H
#define MODULE_T4282841206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t4282841206  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t4282841206, ____impl_3)); }
	inline intptr_t get__impl_3() const { return ____impl_3; }
	inline intptr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(intptr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___assembly_4)); }
	inline Assembly_t * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t4282841206_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2905709404 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2905709404 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t4282841206_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t2905709404 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t2905709404 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t2905709404 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t4282841206_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t2905709404 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t2905709404 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t2905709404 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T4282841206_H
#ifndef ARGUMENTNULLEXCEPTION_T628810857_H
#define ARGUMENTNULLEXCEPTION_T628810857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t628810857  : public ArgumentException_t3259014390
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T628810857_H
#ifndef DATETIMEPARSER_T1235213504_H
#define DATETIMEPARSER_T1235213504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.DateTimeParser
struct  DateTimeParser_t1235213504 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Year
	int32_t ___Year_0;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Month
	int32_t ___Month_1;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Day
	int32_t ___Day_2;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Hour
	int32_t ___Hour_3;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Minute
	int32_t ___Minute_4;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Second
	int32_t ___Second_5;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Fraction
	int32_t ___Fraction_6;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::ZoneHour
	int32_t ___ZoneHour_7;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::ZoneMinute
	int32_t ___ZoneMinute_8;
	// Newtonsoft.Json.Utilities.ParserTimeZone Newtonsoft.Json.Utilities.DateTimeParser::Zone
	int32_t ___Zone_9;
	// System.Char[] Newtonsoft.Json.Utilities.DateTimeParser::_text
	CharU5BU5D_t1328083999* ____text_10;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::_end
	int32_t ____end_11;

public:
	inline static int32_t get_offset_of_Year_0() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ___Year_0)); }
	inline int32_t get_Year_0() const { return ___Year_0; }
	inline int32_t* get_address_of_Year_0() { return &___Year_0; }
	inline void set_Year_0(int32_t value)
	{
		___Year_0 = value;
	}

	inline static int32_t get_offset_of_Month_1() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ___Month_1)); }
	inline int32_t get_Month_1() const { return ___Month_1; }
	inline int32_t* get_address_of_Month_1() { return &___Month_1; }
	inline void set_Month_1(int32_t value)
	{
		___Month_1 = value;
	}

	inline static int32_t get_offset_of_Day_2() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ___Day_2)); }
	inline int32_t get_Day_2() const { return ___Day_2; }
	inline int32_t* get_address_of_Day_2() { return &___Day_2; }
	inline void set_Day_2(int32_t value)
	{
		___Day_2 = value;
	}

	inline static int32_t get_offset_of_Hour_3() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ___Hour_3)); }
	inline int32_t get_Hour_3() const { return ___Hour_3; }
	inline int32_t* get_address_of_Hour_3() { return &___Hour_3; }
	inline void set_Hour_3(int32_t value)
	{
		___Hour_3 = value;
	}

	inline static int32_t get_offset_of_Minute_4() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ___Minute_4)); }
	inline int32_t get_Minute_4() const { return ___Minute_4; }
	inline int32_t* get_address_of_Minute_4() { return &___Minute_4; }
	inline void set_Minute_4(int32_t value)
	{
		___Minute_4 = value;
	}

	inline static int32_t get_offset_of_Second_5() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ___Second_5)); }
	inline int32_t get_Second_5() const { return ___Second_5; }
	inline int32_t* get_address_of_Second_5() { return &___Second_5; }
	inline void set_Second_5(int32_t value)
	{
		___Second_5 = value;
	}

	inline static int32_t get_offset_of_Fraction_6() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ___Fraction_6)); }
	inline int32_t get_Fraction_6() const { return ___Fraction_6; }
	inline int32_t* get_address_of_Fraction_6() { return &___Fraction_6; }
	inline void set_Fraction_6(int32_t value)
	{
		___Fraction_6 = value;
	}

	inline static int32_t get_offset_of_ZoneHour_7() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ___ZoneHour_7)); }
	inline int32_t get_ZoneHour_7() const { return ___ZoneHour_7; }
	inline int32_t* get_address_of_ZoneHour_7() { return &___ZoneHour_7; }
	inline void set_ZoneHour_7(int32_t value)
	{
		___ZoneHour_7 = value;
	}

	inline static int32_t get_offset_of_ZoneMinute_8() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ___ZoneMinute_8)); }
	inline int32_t get_ZoneMinute_8() const { return ___ZoneMinute_8; }
	inline int32_t* get_address_of_ZoneMinute_8() { return &___ZoneMinute_8; }
	inline void set_ZoneMinute_8(int32_t value)
	{
		___ZoneMinute_8 = value;
	}

	inline static int32_t get_offset_of_Zone_9() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ___Zone_9)); }
	inline int32_t get_Zone_9() const { return ___Zone_9; }
	inline int32_t* get_address_of_Zone_9() { return &___Zone_9; }
	inline void set_Zone_9(int32_t value)
	{
		___Zone_9 = value;
	}

	inline static int32_t get_offset_of__text_10() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ____text_10)); }
	inline CharU5BU5D_t1328083999* get__text_10() const { return ____text_10; }
	inline CharU5BU5D_t1328083999** get_address_of__text_10() { return &____text_10; }
	inline void set__text_10(CharU5BU5D_t1328083999* value)
	{
		____text_10 = value;
		Il2CppCodeGenWriteBarrier((&____text_10), value);
	}

	inline static int32_t get_offset_of__end_11() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504, ____end_11)); }
	inline int32_t get__end_11() const { return ____end_11; }
	inline int32_t* get_address_of__end_11() { return &____end_11; }
	inline void set__end_11(int32_t value)
	{
		____end_11 = value;
	}
};

struct DateTimeParser_t1235213504_StaticFields
{
public:
	// System.Int32[] Newtonsoft.Json.Utilities.DateTimeParser::Power10
	Int32U5BU5D_t3030399641* ___Power10_12;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy
	int32_t ___Lzyyyy_13;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy_
	int32_t ___Lzyyyy__14;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy_MM
	int32_t ___Lzyyyy_MM_15;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy_MM_
	int32_t ___Lzyyyy_MM__16;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy_MM_dd
	int32_t ___Lzyyyy_MM_dd_17;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lzyyyy_MM_ddT
	int32_t ___Lzyyyy_MM_ddT_18;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::LzHH
	int32_t ___LzHH_19;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::LzHH_
	int32_t ___LzHH__20;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::LzHH_mm
	int32_t ___LzHH_mm_21;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::LzHH_mm_
	int32_t ___LzHH_mm__22;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::LzHH_mm_ss
	int32_t ___LzHH_mm_ss_23;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lz_
	int32_t ___Lz__24;
	// System.Int32 Newtonsoft.Json.Utilities.DateTimeParser::Lz_zz
	int32_t ___Lz_zz_25;

public:
	inline static int32_t get_offset_of_Power10_12() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___Power10_12)); }
	inline Int32U5BU5D_t3030399641* get_Power10_12() const { return ___Power10_12; }
	inline Int32U5BU5D_t3030399641** get_address_of_Power10_12() { return &___Power10_12; }
	inline void set_Power10_12(Int32U5BU5D_t3030399641* value)
	{
		___Power10_12 = value;
		Il2CppCodeGenWriteBarrier((&___Power10_12), value);
	}

	inline static int32_t get_offset_of_Lzyyyy_13() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___Lzyyyy_13)); }
	inline int32_t get_Lzyyyy_13() const { return ___Lzyyyy_13; }
	inline int32_t* get_address_of_Lzyyyy_13() { return &___Lzyyyy_13; }
	inline void set_Lzyyyy_13(int32_t value)
	{
		___Lzyyyy_13 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy__14() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___Lzyyyy__14)); }
	inline int32_t get_Lzyyyy__14() const { return ___Lzyyyy__14; }
	inline int32_t* get_address_of_Lzyyyy__14() { return &___Lzyyyy__14; }
	inline void set_Lzyyyy__14(int32_t value)
	{
		___Lzyyyy__14 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM_15() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___Lzyyyy_MM_15)); }
	inline int32_t get_Lzyyyy_MM_15() const { return ___Lzyyyy_MM_15; }
	inline int32_t* get_address_of_Lzyyyy_MM_15() { return &___Lzyyyy_MM_15; }
	inline void set_Lzyyyy_MM_15(int32_t value)
	{
		___Lzyyyy_MM_15 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM__16() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___Lzyyyy_MM__16)); }
	inline int32_t get_Lzyyyy_MM__16() const { return ___Lzyyyy_MM__16; }
	inline int32_t* get_address_of_Lzyyyy_MM__16() { return &___Lzyyyy_MM__16; }
	inline void set_Lzyyyy_MM__16(int32_t value)
	{
		___Lzyyyy_MM__16 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM_dd_17() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___Lzyyyy_MM_dd_17)); }
	inline int32_t get_Lzyyyy_MM_dd_17() const { return ___Lzyyyy_MM_dd_17; }
	inline int32_t* get_address_of_Lzyyyy_MM_dd_17() { return &___Lzyyyy_MM_dd_17; }
	inline void set_Lzyyyy_MM_dd_17(int32_t value)
	{
		___Lzyyyy_MM_dd_17 = value;
	}

	inline static int32_t get_offset_of_Lzyyyy_MM_ddT_18() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___Lzyyyy_MM_ddT_18)); }
	inline int32_t get_Lzyyyy_MM_ddT_18() const { return ___Lzyyyy_MM_ddT_18; }
	inline int32_t* get_address_of_Lzyyyy_MM_ddT_18() { return &___Lzyyyy_MM_ddT_18; }
	inline void set_Lzyyyy_MM_ddT_18(int32_t value)
	{
		___Lzyyyy_MM_ddT_18 = value;
	}

	inline static int32_t get_offset_of_LzHH_19() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___LzHH_19)); }
	inline int32_t get_LzHH_19() const { return ___LzHH_19; }
	inline int32_t* get_address_of_LzHH_19() { return &___LzHH_19; }
	inline void set_LzHH_19(int32_t value)
	{
		___LzHH_19 = value;
	}

	inline static int32_t get_offset_of_LzHH__20() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___LzHH__20)); }
	inline int32_t get_LzHH__20() const { return ___LzHH__20; }
	inline int32_t* get_address_of_LzHH__20() { return &___LzHH__20; }
	inline void set_LzHH__20(int32_t value)
	{
		___LzHH__20 = value;
	}

	inline static int32_t get_offset_of_LzHH_mm_21() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___LzHH_mm_21)); }
	inline int32_t get_LzHH_mm_21() const { return ___LzHH_mm_21; }
	inline int32_t* get_address_of_LzHH_mm_21() { return &___LzHH_mm_21; }
	inline void set_LzHH_mm_21(int32_t value)
	{
		___LzHH_mm_21 = value;
	}

	inline static int32_t get_offset_of_LzHH_mm__22() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___LzHH_mm__22)); }
	inline int32_t get_LzHH_mm__22() const { return ___LzHH_mm__22; }
	inline int32_t* get_address_of_LzHH_mm__22() { return &___LzHH_mm__22; }
	inline void set_LzHH_mm__22(int32_t value)
	{
		___LzHH_mm__22 = value;
	}

	inline static int32_t get_offset_of_LzHH_mm_ss_23() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___LzHH_mm_ss_23)); }
	inline int32_t get_LzHH_mm_ss_23() const { return ___LzHH_mm_ss_23; }
	inline int32_t* get_address_of_LzHH_mm_ss_23() { return &___LzHH_mm_ss_23; }
	inline void set_LzHH_mm_ss_23(int32_t value)
	{
		___LzHH_mm_ss_23 = value;
	}

	inline static int32_t get_offset_of_Lz__24() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___Lz__24)); }
	inline int32_t get_Lz__24() const { return ___Lz__24; }
	inline int32_t* get_address_of_Lz__24() { return &___Lz__24; }
	inline void set_Lz__24(int32_t value)
	{
		___Lz__24 = value;
	}

	inline static int32_t get_offset_of_Lz_zz_25() { return static_cast<int32_t>(offsetof(DateTimeParser_t1235213504_StaticFields, ___Lz_zz_25)); }
	inline int32_t get_Lz_zz_25() const { return ___Lz_zz_25; }
	inline int32_t* get_address_of_Lz_zz_25() { return &___Lz_zz_25; }
	inline void set_Lz_zz_25(int32_t value)
	{
		___Lz_zz_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.DateTimeParser
struct DateTimeParser_t1235213504_marshaled_pinvoke
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	int32_t ___Fraction_6;
	int32_t ___ZoneHour_7;
	int32_t ___ZoneMinute_8;
	int32_t ___Zone_9;
	uint8_t* ____text_10;
	int32_t ____end_11;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.DateTimeParser
struct DateTimeParser_t1235213504_marshaled_com
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	int32_t ___Fraction_6;
	int32_t ___ZoneHour_7;
	int32_t ___ZoneMinute_8;
	int32_t ___Zone_9;
	uint8_t* ____text_10;
	int32_t ____end_11;
};
#endif // DATETIMEPARSER_T1235213504_H
#ifndef FUNC_2_T1060887749_H
#define FUNC_2_T1060887749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>
struct  Func_2_t1060887749  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T1060887749_H
#ifndef PROPERTYCHANGINGEVENTHANDLER_T626922954_H
#define PROPERTYCHANGINGEVENTHANDLER_T626922954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangingEventHandler
struct  PropertyChangingEventHandler_t626922954  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGINGEVENTHANDLER_T626922954_H
#ifndef FUNC_2_T472048993_H
#define FUNC_2_T472048993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct  Func_2_t472048993  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T472048993_H
#ifndef DATETIMEOFFSET_T1362988906_H
#define DATETIMEOFFSET_T1362988906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t1362988906 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t693205669  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t3430258949  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906, ___dt_2)); }
	inline DateTime_t693205669  get_dt_2() const { return ___dt_2; }
	inline DateTime_t693205669 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t693205669  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906, ___utc_offset_3)); }
	inline TimeSpan_t3430258949  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t3430258949 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t3430258949  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t1362988906_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t1362988906  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t1362988906  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t1362988906  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t1362988906 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t1362988906  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t1362988906  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t1362988906 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t1362988906  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T1362988906_H
#ifndef FUNC_2_T2343678841_H
#define FUNC_2_T2343678841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct  Func_2_t2343678841  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2343678841_H
#ifndef FUNC_2_T4288392973_H
#define FUNC_2_T4288392973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String>
struct  Func_2_t4288392973  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T4288392973_H
#ifndef FUNC_1_T348874681_H
#define FUNC_1_T348874681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Object>
struct  Func_1_t348874681  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T348874681_H
#ifndef FUNC_2_T2789580926_H
#define FUNC_2_T2789580926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.MemberInfo,System.String>
struct  Func_2_t2789580926  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2789580926_H
#ifndef FUNC_2_T101093588_H
#define FUNC_2_T101093588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct  Func_2_t101093588  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T101093588_H
#ifndef FUNC_2_T2083147554_H
#define FUNC_2_T2083147554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Reflection.PropertyInfo,System.Boolean>
struct  Func_2_t2083147554  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2083147554_H
#ifndef FUNC_2_T2825504181_H
#define FUNC_2_T2825504181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Object,System.Object>
struct  Func_2_t2825504181  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T2825504181_H
#ifndef ADDINGNEWEVENTHANDLER_T1821432365_H
#define ADDINGNEWEVENTHANDLER_T1821432365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AddingNewEventHandler
struct  AddingNewEventHandler_t1821432365  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDINGNEWEVENTHANDLER_T1821432365_H
#ifndef ASYNCCALLBACK_T163412349_H
#define ASYNCCALLBACK_T163412349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t163412349  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T163412349_H
#ifndef OBJECTCONSTRUCTOR_1_T1997612730_H
#define OBJECTCONSTRUCTOR_1_T1997612730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct  ObjectConstructor_1_t1997612730  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTCONSTRUCTOR_1_T1997612730_H
#ifndef METHODCALL_2_T1283576322_H
#define METHODCALL_2_T1283576322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct  MethodCall_2_t1283576322  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALL_2_T1283576322_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T1130012643_H
#define NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T1130012643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NotifyCollectionChangedEventHandler
struct  NotifyCollectionChangedEventHandler_t1130012643  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T1130012643_H
#ifndef ACTION_2_T2572051853_H
#define ACTION_2_T2572051853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.Object,System.Object>
struct  Action_2_t2572051853  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T2572051853_H
// System.Object[]
struct ObjectU5BU5D_t3614634134  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t1328083999  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t3030399641  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t125053523  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1642385972  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t3568034315  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_t3397334013  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Newtonsoft.Json.Utilities.PropertyNameTable/Entry[]
struct EntryU5BU5D_t749043653  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t1762676876 * m_Items[1];

public:
	inline Entry_t1762676876 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t1762676876 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t1762676876 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Entry_t1762676876 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t1762676876 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t1762676876 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t2275869610  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t2249040075 * m_Items[1];

public:
	inline ParameterInfo_t2249040075 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t2249040075 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t2249040075 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t2249040075 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t2249040075 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t2249040075 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4238939941  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Type[]
struct TypeU5BU5D_t1664964607  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1996683371  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConstructorInfo_t2851816542 * m_Items[1];

public:
	inline ConstructorInfo_t2851816542 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t2851816542 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t2851816542 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ConstructorInfo_t2851816542 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t2851816542 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t2851816542 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Attribute[]
struct AttributeU5BU5D_t4255796347  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Attribute_t542643598 * m_Items[1];

public:
	inline Attribute_t542643598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_t542643598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_t542643598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Attribute_t542643598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_t542643598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_t542643598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t963192633  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_t1820634920  m_Items[1];

public:
	inline ParameterModifier_t1820634920  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t1820634920 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t1820634920  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ParameterModifier_t1820634920  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t1820634920 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t1820634920  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1736152084  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
extern "C"  RuntimeObject * MethodCall_2_Invoke_m3330949966_gshared (MethodCall_2_t1283576322 * __this, RuntimeObject * p0, ObjectU5BU5D_t3614634134* p1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m3663286555_gshared (Nullable_1_t1693325264 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
extern "C"  TimeSpan_t3430258949  Nullable_1_GetValueOrDefault_m3155916728_gshared (Nullable_1_t1693325264 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m796575255_gshared (Nullable_1_t1693325264 * __this, TimeSpan_t3430258949  p0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TFirst>,System.Collections.Generic.IEqualityComparer`1<TSecond>)
extern "C"  void BidirectionalDictionary_2__ctor_m3063061286_gshared (BidirectionalDictionary_2_t1212012318 * __this, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
extern "C"  RuntimeObject* Enumerable_Cast_TisRuntimeObject_m4021800683_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1741456965_gshared (Func_2_t2825504181 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m2887651677_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2825504181 * p1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m2912617385_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::TryGetBySecond(TSecond,TFirst&)
extern "C"  bool BidirectionalDictionary_2_TryGetBySecond_m3074883102_gshared (BidirectionalDictionary_2_t1212012318 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::Set(TFirst,TSecond)
extern "C"  void BidirectionalDictionary_2_Set_m196403406_gshared (BidirectionalDictionary_2_t1212012318 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m310736118_gshared (List_1_t2058570427 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1354888807_gshared (Func_2_t3961629604 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  RuntimeObject* Enumerable_Where_TisRuntimeObject_m1140705402_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3961629604 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m4157722533_gshared (List_1_t2058570427 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// TValue Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>::Get(TKey)
extern "C"  RuntimeObject * ThreadSafeStore_2_Get_m641473834_gshared (ThreadSafeStore_2_t4023353063 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::TryGetByFirst(TFirst,TSecond&)
extern "C"  bool BidirectionalDictionary_2_TryGetByFirst_m3866719394_gshared (BidirectionalDictionary_2_t1212012318 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Object,System.Object>::.ctor(System.Func`2<TKey,TValue>)
extern "C"  void ThreadSafeStore_2__ctor_m2672388494_gshared (ThreadSafeStore_2_t4023353063 * __this, Func_2_t2825504181 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
extern "C"  void List_1__ctor_m1818566713_gshared (List_1_t2823602470 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Char>::Add(!0)
extern "C"  void List_1_Add_m1527804517_gshared (List_1_t2823602470 * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject* Enumerable_Union_TisChar_t3454481338_m247197559_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m3680291262_gshared (Nullable_1_t334943763 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C"  int32_t Nullable_1_GetValueOrDefault_m3091235761_gshared (Nullable_1_t334943763 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void ObjectConstructor_1__ctor_m2300859629_gshared (ObjectConstructor_1_t1997612730 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m584589095_gshared (Dictionary_2_t2281509423 * __this, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
extern "C"  RuntimeObject * Func_2_Invoke_m3790049603_gshared (Func_2_t2825504181 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_Single_TisRuntimeObject_m671889399_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Func`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateGet<System.Object>(System.Reflection.MemberInfo)
extern "C"  Func_2_t2825504181 * ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m208935903_gshared (ReflectionDelegateFactory_t2294713146 * __this, MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.Action`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateSet<System.Object>(System.Reflection.MemberInfo)
extern "C"  Action_2_t2572051853 * ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2736460123_gshared (ReflectionDelegateFactory_t2294713146 * __this, MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_2__ctor_m290579545_gshared (Action_2_t2572051853 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
extern "C"  RuntimeObject * Func_1_Invoke_m3495195018_gshared (Func_1_t348874681 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
extern "C"  RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m4073914327_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t3961629604 * p1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Object>(System.Collections.Generic.IList`1<T>,System.Collections.IEnumerable)
extern "C"  void CollectionUtils_AddRange_TisRuntimeObject_m3182995924_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2375293942_gshared (List_1_t2058570427 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m136460305_gshared (List_1_t2058570427 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!0>> System.Linq.Enumerable::GroupBy<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
extern "C"  RuntimeObject* Enumerable_GroupBy_TisRuntimeObject_TisRuntimeObject_m2467942546_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, Func_2_t2825504181 * p1, const RuntimeMethod* method);
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  int32_t Enumerable_Count_TisRuntimeObject_m970524031_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  List_1_t2058570427 * Enumerable_ToList_TisRuntimeObject_m1715047877_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_First_TisRuntimeObject_m3278037299_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1_AddRange_m3537433232_gshared (List_1_t2058570427 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  ObjectU5BU5D_t3614634134* Enumerable_ToArray_TisRuntimeObject_m2729329109_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject* Enumerable_Union_TisRuntimeObject_m431492322_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, RuntimeObject* p1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m2305320521_gshared (Nullable_1_t334943763 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m2848015482_gshared (List_1_t2058570427 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Object>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
extern "C"  void CollectionUtils_AddRange_TisRuntimeObject_m3419027900_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2062981835_gshared (List_1_t2058570427 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m4246197648_gshared (List_1_t2058570427 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 Newtonsoft.Json.Utilities.CollectionUtils::IndexOf<System.Object>(System.Collections.Generic.IEnumerable`1<T>,System.Func`2<T,System.Boolean>)
extern "C"  int32_t CollectionUtils_IndexOf_TisRuntimeObject_m2990947732_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* ___collection0, Func_2_t3961629604 * ___predicate1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  bool Enumerable_Any_TisRuntimeObject_m32651785_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0,System.Int32,System.Int32)
extern "C"  int32_t Array_IndexOf_TisChar_t3454481338_m409358040_gshared (RuntimeObject * __this /* static, unused */, CharU5BU5D_t1328083999* p0, Il2CppChar p1, int32_t p2, int32_t p3, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
#define MethodCall_2_Invoke_m3330949966(__this, p0, p1, method) ((  RuntimeObject * (*) (MethodCall_2_t1283576322 *, RuntimeObject *, ObjectU5BU5D_t3614634134*, const RuntimeMethod*))MethodCall_2_Invoke_m3330949966_gshared)(__this, p0, p1, method)
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_InitialType()
extern "C"  Type_t * TypeConvertKey_get_InitialType_m2407353397 (TypeConvertKey_t1788482786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_TargetType()
extern "C"  Type_t * TypeConvertKey_get_TargetType_m1306869422 (TypeConvertKey_t1788482786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::.ctor(System.Type,System.Type)
extern "C"  void TypeConvertKey__ctor_m2656598064 (TypeConvertKey_t1788482786 * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::GetHashCode()
extern "C"  int32_t TypeConvertKey_GetHashCode_m684609717 (TypeConvertKey_t1788482786 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
extern "C"  bool TypeConvertKey_Equals_m2262100465 (TypeConvertKey_t1788482786 * __this, TypeConvertKey_t1788482786  ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(System.Object)
extern "C"  bool TypeConvertKey_Equals_m2951854959 (TypeConvertKey_t1788482786 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3920580167 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t2331729674  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m1606060069 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseDate(System.Int32)
extern "C"  bool DateTimeParser_ParseDate_m1939298771 (DateTimeParser_t1235213504 * __this, int32_t ___start0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseChar(System.Int32,System.Char)
extern "C"  bool DateTimeParser_ParseChar_m616730816 (DateTimeParser_t1235213504 * __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTimeAndZoneAndWhitespace(System.Int32)
extern "C"  bool DateTimeParser_ParseTimeAndZoneAndWhitespace_m3098691983 (DateTimeParser_t1235213504 * __this, int32_t ___start0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse(System.Char[],System.Int32,System.Int32)
extern "C"  bool DateTimeParser_Parse_m93898435 (DateTimeParser_t1235213504 * __this, CharU5BU5D_t1328083999* ___text0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse4Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse4Digit_m3838417687 (DateTimeParser_t1235213504 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse2Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse2Digit_m1081024017 (DateTimeParser_t1235213504 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
extern "C"  int32_t DateTime_DaysInMonth_m2275365236 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTime(System.Int32&)
extern "C"  bool DateTimeParser_ParseTime_m508747414 (DateTimeParser_t1235213504 * __this, int32_t* ___start0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseZone(System.Int32)
extern "C"  bool DateTimeParser_ParseZone_m1488795597 (DateTimeParser_t1235213504 * __this, int32_t ___start0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C"  TimeZone_t4008205267 * TimeZone_get_CurrentTimeZone_m3729014954 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.ArgumentOutOfRangeException Newtonsoft.Json.Utilities.MiscellaneousUtils::CreateArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C"  ArgumentOutOfRangeException_t279959794 * MiscellaneousUtils_CreateArgumentOutOfRangeException_m4097621156 (RuntimeObject * __this /* static, unused */, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToLocalTime(System.DateTime)
extern "C"  DateTime_t693205669  DateTimeUtils_SwitchToLocalTime_m3566274725 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToUtcTime(System.DateTime)
extern "C"  DateTime_t693205669  DateTimeUtils_SwitchToUtcTime_m1060208122 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C"  int64_t DateTime_get_Ticks_m310281298 (DateTime_t693205669 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
extern "C"  void DateTime__ctor_m1100326092 (DateTime_t693205669 * __this, int64_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m3739475201 (ArgumentException_t3259014390 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
extern "C"  int32_t DateTime_get_Kind_m1331920314 (DateTime_t693205669 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToLocalTime()
extern "C"  DateTime_t693205669  DateTime_ToLocalTime_m1957689902 (DateTime_t693205669 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ToUniversalTime()
extern "C"  DateTime_t693205669  DateTime_ToUniversalTime_m1815024752 (DateTime_t693205669 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Newtonsoft.Json.Utilities.DateTimeUtils::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t3430258949  DateTimeUtils_GetUtcOffset_m1751279733 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___d0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m651850560 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_Equality_m1867073872 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  p0, DateTime_t693205669  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C"  int64_t TimeSpan_get_Ticks_m2285358246 (TimeSpan_t3430258949 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::UniversialTicksToJavaScriptTicks(System.Int64)
extern "C"  int64_t DateTimeUtils_UniversialTicksToJavaScriptTicks_m1203972718 (RuntimeObject * __this /* static, unused */, int64_t ___universialTicks0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2741966059 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, bool ___convertToUtc1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m767905220 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.StringReference::get_Chars()
extern "C"  CharU5BU5D_t1328083999* StringReference_get_Chars_m1908699287 (StringReference_t1873850304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_StartIndex()
extern "C"  int32_t StringReference_get_StartIndex_m1490521704 (StringReference_t1873850304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_Length()
extern "C"  int32_t StringReference_get_Length_m976735280 (StringReference_t1873850304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::CreateDateTime(Newtonsoft.Json.Utilities.DateTimeParser)
extern "C"  DateTime_t693205669  DateTimeUtils_CreateDateTime_m618640832 (RuntimeObject * __this /* static, unused */, DateTimeParser_t1235213504  ___dateTimeParser0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void TimeSpan__ctor_m1888018443 (TimeSpan_t3430258949 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::EnsureDateTime(System.DateTime,Newtonsoft.Json.DateTimeZoneHandling)
extern "C"  DateTime_t693205669  DateTimeUtils_EnsureDateTime_m1741856844 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___value0, int32_t ___timeZone1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C"  void TimeSpan__ctor_m96381766 (TimeSpan_t3430258949 * __this, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::get_Local()
extern "C"  TimeZoneInfo_t436210607 * TimeZoneInfo_get_Local_m194546780 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZoneInfo::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t3430258949  TimeZoneInfo_GetUtcOffset_m3060553967 (TimeZoneInfo_t436210607 * __this, DateTime_t693205669  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2870721395 (DateTimeOffset_t1362988906 * __this, DateTime_t693205669  p0, TimeSpan_t3430258949  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m3153923094 (DateTime_t693205669 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddTicks(System.Int64)
extern "C"  DateTime_t693205669  DateTime_AddTicks_m3057746860 (DateTime_t693205669 * __this, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::AddDays(System.Double)
extern "C"  DateTime_t693205669  DateTime_AddDays_m1926530883 (DateTime_t693205669 * __this, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.Utilities.StringReference::get_Item(System.Int32)
extern "C"  Il2CppChar StringReference_get_Item_m395816280 (StringReference_t1873850304 * __this, int32_t ___i0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringReferenceExtensions::StartsWith(Newtonsoft.Json.Utilities.StringReference,System.String)
extern "C"  bool StringReferenceExtensions_StartsWith_m2119043723 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___s0, String_t* ___text1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringReferenceExtensions::EndsWith(Newtonsoft.Json.Utilities.StringReference,System.String)
extern "C"  bool StringReferenceExtensions_EndsWith_m2892765720 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___s0, String_t* ___text1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeMicrosoft(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeMicrosoft_m3235248780 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___text0, int32_t ___dateTimeZoneHandling1, DateTime_t693205669 * ___dt2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
extern "C"  bool Char_IsDigit_m751559221 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeIso(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeIso_m2173901879 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___text0, int32_t ___dateTimeZoneHandling1, DateTime_t693205669 * ___dt2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2802126737 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringReference::ToString()
extern "C"  String_t* StringReference_ToString_m2319348590 (StringReference_t1873850304 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeExact(System.String,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeExact_m756786128 (RuntimeObject * __this /* static, unused */, String_t* ___text0, int32_t ___dateTimeZoneHandling1, String_t* ___dateFormatString2, CultureInfo_t3500843524 * ___culture3, DateTime_t693205669 * ___dt4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m4230566705 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
extern "C"  bool String_StartsWith_m46695182 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
extern "C"  bool String_EndsWith_m4071916069 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t1328083999* String_ToCharArray_m870309954 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringReference::.ctor(System.Char[],System.Int32,System.Int32)
extern "C"  void StringReference__ctor_m814259320 (StringReference_t1873850304 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t3500843524 * CultureInfo_get_InvariantCulture_m398972276 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::TryParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&)
extern "C"  bool DateTime_TryParseExact_m1931192990 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, RuntimeObject* p2, int32_t p3, DateTime_t693205669 * p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetMicrosoft(Newtonsoft.Json.Utilities.StringReference,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m660041233 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___text0, DateTimeOffset_t1362988906 * ___dt1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetIso(Newtonsoft.Json.Utilities.StringReference,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetIso_m4276702460 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___text0, DateTimeOffset_t1362988906 * ___dt1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetExact(System.String,System.String,System.Globalization.CultureInfo,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetExact_m2570960041 (RuntimeObject * __this /* static, unused */, String_t* ___text0, String_t* ___dateFormatString1, CultureInfo_t3500843524 * ___culture2, DateTimeOffset_t1362988906 * ___dt3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::TryParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTimeOffset&)
extern "C"  bool DateTimeOffset_TryParseExact_m1231270494 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, RuntimeObject* p2, int32_t p3, DateTimeOffset_t1362988906 * p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringReferenceExtensions::IndexOf(Newtonsoft.Json.Utilities.StringReference,System.Char,System.Int32,System.Int32)
extern "C"  int32_t StringReferenceExtensions_IndexOf_m2363345508 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___s0, Il2CppChar ___c1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryReadOffset(Newtonsoft.Json.Utilities.StringReference,System.Int32,System.TimeSpan&)
extern "C"  bool DateTimeUtils_TryReadOffset_m1024077575 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___offsetText0, int32_t ___startIndex1, TimeSpan_t3430258949 * ___offset2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ParseResult Newtonsoft.Json.Utilities.ConvertUtils::Int64TryParse(System.Char[],System.Int32,System.Int32,System.Int64&)
extern "C"  int32_t ConvertUtils_Int64TryParse_m1460425539 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, int32_t ___length2, int64_t* ___value3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseMicrosoftDate(Newtonsoft.Json.Utilities.StringReference,System.Int64&,System.TimeSpan&,System.DateTimeKind&)
extern "C"  bool DateTimeUtils_TryParseMicrosoftDate_m4065592264 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___text0, int64_t* ___ticks1, TimeSpan_t3430258949 * ___offset2, int32_t* ___kind3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
extern "C"  DateTime_t693205669  DateTimeUtils_ConvertJavaScriptTicksToDateTime_m1592762056 (RuntimeObject * __this /* static, unused */, int64_t ___javaScriptTicks0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C"  DateTime_t693205669  DateTime_SpecifyKind_m1282445794 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::op_Implicit(System.DateTime)
extern "C"  DateTimeOffset_t1362988906  DateTimeOffset_op_Implicit_m3072392326 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
extern "C"  DateTime_t693205669  DateTime_Add_m4237489122 (DateTime_t693205669 * __this, TimeSpan_t3430258949  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2110004919 (DateTimeOffset_t1362988906 * __this, int64_t p0, TimeSpan_t3430258949  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ParseResult Newtonsoft.Json.Utilities.ConvertUtils::Int32TryParse(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C"  int32_t ConvertUtils_Int32TryParse_m4283984055 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, int32_t ___length2, int32_t* ___value3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromHours(System.Double)
extern "C"  TimeSpan_t3430258949  TimeSpan_FromHours_m2521548378 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern "C"  TimeSpan_t3430258949  TimeSpan_FromMinutes_m1997633268 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C"  TimeSpan_t3430258949  TimeSpan_op_Addition_m3421801803 (RuntimeObject * __this /* static, unused */, TimeSpan_t3430258949  p0, TimeSpan_t3430258949  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
extern "C"  TimeSpan_t3430258949  TimeSpan_Negate_m4198463235 (TimeSpan_t3430258949 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeString(System.Char[],System.Int32,System.DateTime,System.Nullable`1<System.TimeSpan>,System.DateTimeKind,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeString_m3706347442 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, DateTime_t693205669  ___value2, Nullable_1_t1693325264  ___offset3, int32_t ___kind4, int32_t ___format5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTime_ToString_m2276663647 (DateTime_t693205669 * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
#define Nullable_1_get_HasValue_m3663286555(__this, method) ((  bool (*) (Nullable_1_t1693325264 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3663286555_gshared)(__this, method)
// !0 System.Nullable`1<System.TimeSpan>::GetValueOrDefault()
#define Nullable_1_GetValueOrDefault_m3155916728(__this, method) ((  TimeSpan_t3430258949  (*) (Nullable_1_t1693325264 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m3155916728_gshared)(__this, method)
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2461323250 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
extern "C"  void String_CopyTo_m3397208344 (String_t* __this, int32_t p0, CharU5BU5D_t1328083999* p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.IFormatProvider)
extern "C"  String_t* Int64_ToString_m1275187741 (int64_t* __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_Inequality(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_Inequality_m1607380213 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  p0, DateTime_t693205669  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeOffset(System.Char[],System.Int32,System.TimeSpan,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeOffset_m1618693877 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, TimeSpan_t3430258949  ___offset2, int32_t ___format3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDefaultIsoDate(System.Char[],System.Int32,System.DateTime)
extern "C"  int32_t DateTimeUtils_WriteDefaultIsoDate_m2512864408 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, DateTime_t693205669  ___dt2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::GetDateValues(System.DateTime,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void DateTimeUtils_GetDateValues_m2622263554 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___td0, int32_t* ___year1, int32_t* ___month2, int32_t* ___day3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::CopyIntToCharArray(System.Char[],System.Int32,System.Int32,System.Int32)
extern "C"  void DateTimeUtils_CopyIntToCharArray_m161915955 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, int32_t ___value2, int32_t ___digits3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Hour()
extern "C"  int32_t DateTime_get_Hour_m2925715777 (DateTime_t693205669 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Minute()
extern "C"  int32_t DateTime_get_Minute_m803043551 (DateTime_t693205669 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Second()
extern "C"  int32_t DateTime_get_Second_m853575361 (DateTime_t693205669 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
extern "C"  int32_t TimeSpan_get_Hours_m3804628138 (TimeSpan_t3430258949 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
extern "C"  int32_t TimeSpan_get_Minutes_m2575030536 (TimeSpan_t3430258949 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C"  DateTime_t693205669  DateTimeOffset_get_UtcDateTime_m3162550774 (DateTimeOffset_t1362988906 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C"  DateTime_t693205669  DateTimeOffset_get_DateTime_m229084964 (DateTimeOffset_t1362988906 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C"  TimeSpan_t3430258949  DateTimeOffset_get_Offset_m2335492074 (DateTimeOffset_t1362988906 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(!0)
#define Nullable_1__ctor_m796575255(__this, p0, method) ((  void (*) (Nullable_1_t1693325264 *, TimeSpan_t3430258949 , const RuntimeMethod*))Nullable_1__ctor_m796575255_gshared)(__this, p0, method)
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTimeOffset_ToString_m2121173678 (DateTimeOffset_t1362988906 * __this, String_t* p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
extern "C"  StringComparer_t1574862926 * StringComparer_get_OrdinalIgnoreCase_m3428639861 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IEqualityComparer`1<TFirst>,System.Collections.Generic.IEqualityComparer`1<TSecond>)
#define BidirectionalDictionary_2__ctor_m1527248422(__this, p0, p1, method) ((  void (*) (BidirectionalDictionary_2_t2874502390 *, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))BidirectionalDictionary_2__ctor_m3063061286_gshared)(__this, p0, p1, method)
// System.Reflection.FieldInfo[] System.Type::GetFields()
extern "C"  FieldInfoU5BU5D_t125053523* Type_GetFields_m445058499 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m432505302 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t2330101084  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Runtime.Serialization.EnumMemberAttribute>(System.Collections.IEnumerable)
#define Enumerable_Cast_TisEnumMemberAttribute_t187433993_m133715299(__this /* static, unused */, p0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m4021800683_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m2049158717(__this, p0, p1, method) ((  void (*) (Func_2_t4288392973 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1741456965_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Runtime.Serialization.EnumMemberAttribute,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisEnumMemberAttribute_t187433993_TisString_t_m3716904781(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t4288392973 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m2887651677_gshared)(__this /* static, unused */, p0, p1, method)
// !!0 System.Linq.Enumerable::SingleOrDefault<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_SingleOrDefault_TisString_t_m3373152221(__this /* static, unused */, p0, method) ((  String_t* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m2912617385_gshared)(__this /* static, unused */, p0, method)
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>::TryGetBySecond(TSecond,TFirst&)
#define BidirectionalDictionary_2_TryGetBySecond_m2125404446(__this, p0, p1, method) ((  bool (*) (BidirectionalDictionary_2_t2874502390 *, String_t*, String_t**, const RuntimeMethod*))BidirectionalDictionary_2_TryGetBySecond_m3074883102_gshared)(__this, p0, p1, method)
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m3608957081 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m2801133788 (InvalidOperationException_t721527559 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>::Set(TFirst,TSecond)
#define BidirectionalDictionary_2_Set_m1677701390(__this, p0, p1, method) ((  void (*) (BidirectionalDictionary_2_t2874502390 *, String_t*, String_t*, const RuntimeMethod*))BidirectionalDictionary_2_Set_m196403406_gshared)(__this, p0, p1, method)
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsEnum(System.Type)
extern "C"  bool TypeExtensions_IsEnum_m3232841617 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m612901809 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
#define List_1__ctor_m310736118(__this, method) ((  void (*) (List_1_t2058570427 *, const RuntimeMethod*))List_1__ctor_m310736118_gshared)(__this, method)
// System.Void System.Func`2<System.Reflection.FieldInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m660135348(__this, p0, p1, method) ((  void (*) (Func_2_t472048993 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1354888807_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Reflection.FieldInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_Where_TisFieldInfo_t_m1401957933(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t472048993 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m1140705402_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
#define List_1_Add_m4157722533(__this, p0, method) ((  void (*) (List_1_t2058570427 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m4157722533_gshared)(__this, p0, method)
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// TValue Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>::Get(TKey)
#define ThreadSafeStore_2_Get_m3132986083(__this, p0, method) ((  BidirectionalDictionary_2_t2874502390 * (*) (ThreadSafeStore_2_t2258736631 *, Type_t *, const RuntimeMethod*))ThreadSafeStore_2_Get_m641473834_gshared)(__this, p0, method)
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m2358239236 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1642385972* String_Split_m3326265864 (String_t* __this, CharU5BU5D_t1328083999* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C"  String_t* String_Trim_m2668767713 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.EnumUtils::ResolvedEnumName(Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>,System.String)
extern "C"  String_t* EnumUtils_ResolvedEnumName_m526477606 (RuntimeObject * __this /* static, unused */, BidirectionalDictionary_2_t2874502390 * ___map0, String_t* ___enumText1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C"  String_t* String_Join_m1966872927 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1642385972* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
extern "C"  RuntimeObject * Enum_Parse_m982704874 (RuntimeObject * __this /* static, unused */, Type_t * p0, String_t* p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>::TryGetByFirst(TFirst,TSecond&)
#define BidirectionalDictionary_2_TryGetByFirst_m1620055138(__this, p0, p1, method) ((  bool (*) (BidirectionalDictionary_2_t2874502390 *, String_t*, String_t**, const RuntimeMethod*))BidirectionalDictionary_2_TryGetByFirst_m3866719394_gshared)(__this, p0, p1, method)
// System.String Newtonsoft.Json.Utilities.StringUtils::ToCamelCase(System.String)
extern "C"  String_t* StringUtils_ToCamelCase_m3781735605 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m2375498688(__this, p0, p1, method) ((  void (*) (Func_2_t1060887749 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1741456965_gshared)(__this, p0, p1, method)
// System.Void Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>>::.ctor(System.Func`2<TKey,TValue>)
#define ThreadSafeStore_2__ctor_m119799019(__this, p0, method) ((  void (*) (ThreadSafeStore_2_t2258736631 *, Func_2_t1060887749 *, const RuntimeMethod*))ThreadSafeStore_2__ctor_m2672388494_gshared)(__this, p0, method)
// System.Void Newtonsoft.Json.Utilities.EnumUtils/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m713765559 (U3CU3Ec_t3288905799 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
extern "C"  String_t* EnumMemberAttribute_get_Value_m2675028753 (EnumMemberAttribute_t187433993 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
extern "C"  bool FieldInfo_get_IsLiteral_m267898096 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
#define List_1__ctor_m1818566713(__this, method) ((  void (*) (List_1_t2823602470 *, const RuntimeMethod*))List_1__ctor_m1818566713_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Char>::Add(!0)
#define List_1_Add_m1527804517(__this, p0, method) ((  void (*) (List_1_t2823602470 *, Il2CppChar, const RuntimeMethod*))List_1_Add_m1527804517_gshared)(__this, p0, method)
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Char>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Union_TisChar_t3454481338_m247197559(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisChar_t3454481338_m247197559_gshared)(__this /* static, unused */, p0, p1, method)
// System.Char[] Newtonsoft.Json.Utilities.BufferUtils::EnsureBufferSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32,System.Char[])
extern "C"  CharU5BU5D_t1328083999* BufferUtils_EnsureBufferSize_m1357837076 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___bufferPool0, int32_t ___size1, CharU5BU5D_t1328083999* ___buffer2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::ToCharAsUnicode(System.Char,System.Char[])
extern "C"  void StringUtils_ToCharAsUnicode_m3430462003 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, CharU5BU5D_t1328083999* ___buffer1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String)
extern "C"  bool String_Equals_m3568148125 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.BufferUtils::RentBuffer(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  CharU5BU5D_t1328083999* BufferUtils_RentBuffer_m567587815 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___bufferPool0, int32_t ___minSize1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C"  void Array_Copy_m2363740072 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.BufferUtils::ReturnBuffer(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[])
extern "C"  void BufferUtils_ReturnBuffer_m2353484450 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___bufferPool0, CharU5BU5D_t1328083999* ___buffer1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::GetCharEscapeFlags(Newtonsoft.Json.StringEscapeHandling,System.Char)
extern "C"  BooleanU5BU5D_t3568034315* JavaScriptUtils_GetCharEscapeFlags_m4017192528 (RuntimeObject * __this /* static, unused */, int32_t ___stringEscapeHandling0, Il2CppChar ___quoteChar1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.StringUtils::GetLength(System.String)
extern "C"  Nullable_1_t334943763  StringUtils_GetLength_m572879386 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
#define Nullable_1_get_HasValue_m3680291262(__this, method) ((  bool (*) (Nullable_1_t334943763 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3680291262_gshared)(__this, method)
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
#define Nullable_1_GetValueOrDefault_m3091235761(__this, method) ((  int32_t (*) (Nullable_1_t334943763 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m3091235761_gshared)(__this, method)
// System.IO.StringWriter Newtonsoft.Json.Utilities.StringUtils::CreateStringWriter(System.Int32)
extern "C"  StringWriter_t4139609088 * StringUtils_CreateStringWriter_m3259887542 (RuntimeObject * __this /* static, unused */, int32_t ___capacity0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::WriteEscapedJavaScriptString(System.IO.TextWriter,System.String,System.Char,System.Boolean,System.Boolean[],Newtonsoft.Json.StringEscapeHandling,Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[]&)
extern "C"  void JavaScriptUtils_WriteEscapedJavaScriptString_m349909445 (RuntimeObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, String_t* ___s1, Il2CppChar ___delimiter2, bool ___appendDelimiters3, BooleanU5BU5D_t3568034315* ___charEscapeFlags4, int32_t ___stringEscapeHandling5, RuntimeObject* ___bufferPool6, CharU5BU5D_t1328083999** ___writeBuffer7, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass3_0__ctor_m1570344605 (U3CU3Ec__DisplayClass3_0_t322633509 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
extern "C"  void ValidationUtils_ArgumentNotNull_m1113617486 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, String_t* ___parameterName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::.ctor(System.Object,System.IntPtr)
#define ObjectConstructor_1__ctor_m2300859629(__this, p0, p1, method) ((  void (*) (ObjectConstructor_1_t1997612730 *, RuntimeObject *, intptr_t, const RuntimeMethod*))ObjectConstructor_1__ctor_m2300859629_gshared)(__this, p0, p1, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionDelegateFactory::.ctor()
extern "C"  void ReflectionDelegateFactory__ctor_m3256007077 (ReflectionDelegateFactory_t2294713146 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::.ctor()
extern "C"  void LateBoundReflectionDelegateFactory__ctor_m1051997327 (LateBoundReflectionDelegateFactory_t3208546116 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern "C"  RuntimeObject * ConstructorInfo_Invoke_m2144827141 (ConstructorInfo_t2851816542 * __this, ObjectU5BU5D_t3614634134* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C"  RuntimeObject * MethodBase_Invoke_m1075809207 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t3614634134* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m191970594 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::IsInteger(System.Object)
extern "C"  bool ConvertUtils_IsInteger_m3596203515 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
extern "C"  CultureInfo_t3500843524 * CultureInfo_get_CurrentCulture_m711066087 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
extern "C"  Decimal_t724701077  Convert_ToDecimal_m349440953 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
extern "C"  bool Decimal_Equals_m1115043331 (Decimal_t724701077 * __this, Decimal_t724701077  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
extern "C"  double Convert_ToDouble_m574888941 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.MathUtils::ApproxEquals(System.Double,System.Double)
extern "C"  bool MathUtils_ApproxEquals_m3302882273 (RuntimeObject * __this /* static, unused */, double ___d10, double ___d21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Environment::get_NewLine()
extern "C"  String_t* Environment_get_NewLine_m266316410 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m2157778407 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m4234257711 (ArgumentOutOfRangeException_t279959794 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::CompareTo(System.Int32)
extern "C"  int32_t Int32_CompareTo_m3808534558 (int32_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::CompareTo(System.Byte)
extern "C"  int32_t Byte_CompareTo_m1850579028 (uint8_t* __this, uint8_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.MiscellaneousUtils::GetQualifiedNameParts(System.String,System.String&,System.String&)
extern "C"  void MiscellaneousUtils_GetQualifiedNameParts_m1789388425 (RuntimeObject * __this /* static, unused */, String_t* ___qualifiedName0, String_t** ___prefix1, String_t** ___localName2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m12482732 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2032624251 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m2000667605 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Environment::get_TickCount()
extern "C"  int32_t Environment_get_TickCount_m3538062563 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.PropertyNameTable::TextEquals(System.String,System.Char[],System.Int32,System.Int32)
extern "C"  bool PropertyNameTable_TextEquals_m1464055630 (RuntimeObject * __this /* static, unused */, String_t* ___str10, CharU5BU5D_t1328083999* ___str21, int32_t ___str2Start2, int32_t ___str2Length3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m3380712306 (ArgumentNullException_t628810857 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2633592423 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::AddEntry(System.String,System.Int32)
extern "C"  String_t* PropertyNameTable_AddEntry_m74796914 (PropertyNameTable_t1902004952 * __this, String_t* ___str0, int32_t ___hashCode1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable/Entry::.ctor(System.String,System.Int32,Newtonsoft.Json.Utilities.PropertyNameTable/Entry)
extern "C"  void Entry__ctor_m4130845181 (Entry_t1762676876 * __this, String_t* ___value0, int32_t ___hashCode1, Entry_t1762676876 * ___next2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::Grow()
extern "C"  void PropertyNameTable_Grow_m3332910318 (PropertyNameTable_t1902004952 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>::.ctor()
#define Dictionary_2__ctor_m2447020707(__this, method) ((  void (*) (Dictionary_2_t1842110767 *, const RuntimeMethod*))Dictionary_2__ctor_m584589095_gshared)(__this, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Members(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>)
extern "C"  void ReflectionObject_set_Members_m4034020977 (ReflectionObject_t1424089768 * __this, RuntimeObject* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> Newtonsoft.Json.Utilities.ReflectionObject::get_Members()
extern "C"  RuntimeObject* ReflectionObject_get_Members_m2127406134 (ReflectionObject_t1424089768 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionMember::get_Getter()
extern "C"  Func_2_t2825504181 * ReflectionMember_get_Getter_m3691765536 (ReflectionMember_t4222298801 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
#define Func_2_Invoke_m3790049603(__this, p0, method) ((  RuntimeObject * (*) (Func_2_t2825504181 *, RuntimeObject *, const RuntimeMethod*))Func_2_Invoke_m3790049603_gshared)(__this, p0, method)
// System.Type Newtonsoft.Json.Utilities.ReflectionMember::get_MemberType()
extern "C"  Type_t * ReflectionMember_get_MemberType_m614458395 (ReflectionMember_t4222298801 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Utilities.ReflectionObject::Create(System.Type,System.Reflection.MethodBase,System.String[])
extern "C"  ReflectionObject_t1424089768 * ReflectionObject_Create_m152623496 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, MethodBase_t * ___creator1, StringU5BU5D_t1642385972* ___memberNames2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::.ctor()
extern "C"  void ReflectionObject__ctor_m2209907547 (ReflectionObject_t1424089768 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
extern "C"  ReflectionDelegateFactory_t2294713146 * JsonTypeReflector_get_ReflectionDelegateFactory_m2391908748 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Creator(Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>)
extern "C"  void ReflectionObject_set_Creator_m3388855541 (ReflectionObject_t1424089768 * __this, ObjectConstructor_1_t1997612730 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::HasDefaultConstructor(System.Type,System.Boolean)
extern "C"  bool ReflectionUtils_HasDefaultConstructor_m1906518778 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_0__ctor_m3282333788 (U3CU3Ec__DisplayClass13_0_t1856937010 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 System.Linq.Enumerable::Single<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Single_TisMemberInfo_t_m43632213(__this /* static, unused */, p0, method) ((  MemberInfo_t * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Single_TisRuntimeObject_m671889399_gshared)(__this /* static, unused */, p0, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::.ctor()
extern "C"  void ReflectionMember__ctor_m3088613086 (ReflectionMember_t4222298801 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
extern "C"  int32_t TypeExtensions_MemberType_m2192645245 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
extern "C"  bool ReflectionUtils_CanReadMemberValue_m1471951163 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Func`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateGet<System.Object>(System.Reflection.MemberInfo)
#define ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m208935903(__this, ___memberInfo0, method) ((  Func_2_t2825504181 * (*) (ReflectionDelegateFactory_t2294713146 *, MemberInfo_t *, const RuntimeMethod*))ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m208935903_gshared)(__this, ___memberInfo0, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_Getter(System.Func`2<System.Object,System.Object>)
extern "C"  void ReflectionMember_set_Getter_m649122439 (ReflectionMember_t4222298801 * __this, Func_2_t2825504181 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanSetMemberValue(System.Reflection.MemberInfo,System.Boolean,System.Boolean)
extern "C"  bool ReflectionUtils_CanSetMemberValue_m1350063670 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, bool ___canSetReadOnly2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Action`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateSet<System.Object>(System.Reflection.MemberInfo)
#define ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2736460123(__this, ___memberInfo0, method) ((  Action_2_t2572051853 * (*) (ReflectionDelegateFactory_t2294713146 *, MemberInfo_t *, const RuntimeMethod*))ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2736460123_gshared)(__this, ___memberInfo0, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_Setter(System.Action`2<System.Object,System.Object>)
extern "C"  void ReflectionMember_set_Setter_m35574259 (ReflectionMember_t4222298801 * __this, Action_2_t2572051853 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C"  bool MethodBase_get_IsPublic_m479656180 (MethodBase_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_1__ctor_m796488321 (U3CU3Ec__DisplayClass13_1_t290853069 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m1741456965(__this, p0, p1, method) ((  void (*) (Func_2_t2825504181 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1741456965_gshared)(__this, p0, p1, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_2__ctor_m1027159206 (U3CU3Ec__DisplayClass13_2_t694137596 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
#define Action_2__ctor_m290579545(__this, p0, p1, method) ((  void (*) (Action_2_t2572051853 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m290579545_gshared)(__this, p0, p1, method)
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
extern "C"  Type_t * ReflectionUtils_GetMemberUnderlyingType_m1551178430 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_MemberType(System.Type)
extern "C"  void ReflectionMember_set_MemberType_m2920115996 (ReflectionMember_t4222298801 * __this, Type_t * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Func`1<System.Object>::Invoke()
#define Func_1_Invoke_m3495195018(__this, method) ((  RuntimeObject * (*) (Func_1_t348874681 *, const RuntimeMethod*))Func_1_Invoke_m3495195018_gshared)(__this, method)
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
extern "C"  MethodInfo_t * PropertyInfo_GetGetMethod_m1759237908 (PropertyInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C"  bool MethodBase_get_IsVirtual_m1107721718 (MethodBase_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod()
extern "C"  MethodInfo_t * PropertyInfo_GetSetMethod_m2842076792 (PropertyInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::RemoveAssemblyDetails(System.String)
extern "C"  String_t* ReflectionUtils_RemoveAssemblyDetails_m1897087320 (RuntimeObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C"  void ArgumentOutOfRangeException__ctor_m15523695 (ArgumentOutOfRangeException_t279959794 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3946851802 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C"  StringBuilder_t * StringBuilder_Append_m3618697540 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsValueType(System.Type)
extern "C"  bool TypeExtensions_IsValueType_m2298155509 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type,System.Boolean)
extern "C"  ConstructorInfo_t2851816542 * ReflectionUtils_GetDefaultConstructor_m358330343 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m3361537276(__this, p0, p1, method) ((  void (*) (Func_2_t2343678841 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1354888807_gshared)(__this, p0, p1, method)
// !!0 System.Linq.Enumerable::SingleOrDefault<System.Reflection.ConstructorInfo>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
#define Enumerable_SingleOrDefault_TisConstructorInfo_t2851816542_m2433521341(__this /* static, unused */, p0, p1, method) ((  ConstructorInfo_t2851816542 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2343678841 *, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m4073914327_gshared)(__this /* static, unused */, p0, p1, method)
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
extern "C"  bool ReflectionUtils_IsNullableType_m1952073521 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
extern "C"  bool TypeExtensions_IsGenericType_m2573949791 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Nullable::GetUnderlyingType(System.Type)
extern "C"  Type_t * Nullable_GetUnderlyingType_m4057508352 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m1592756732 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsInterface(System.Type)
extern "C"  bool TypeExtensions_IsInterface_m4027938127 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericTypeDefinition(System.Type)
extern "C"  bool TypeExtensions_IsGenericTypeDefinition_m1841056122 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m122302930 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsClass(System.Type)
extern "C"  bool TypeExtensions_IsClass_m1190811054 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinitionInternal(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinitionInternal_m1388222941 (RuntimeObject * __this /* static, unused */, Type_t * ___currentType0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.TypeExtensions::BaseType(System.Type)
extern "C"  Type_t * TypeExtensions_BaseType_m3858355017 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m811277129 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m485833136 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.EventInfo::get_EventHandlerType()
extern "C"  Type_t * EventInfo_get_EventHandlerType_m2787680849 (EventInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m544251339 (ArgumentException_t3259014390 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m1359866644 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___property0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
extern "C"  void ArgumentException__ctor_m3553968249 (ArgumentException_t3259014390 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C"  void FieldInfo_SetValue_m2504255891 (FieldInfo_t * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
extern "C"  bool FieldInfo_get_IsPublic_m618896610 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
extern "C"  bool FieldInfo_get_IsInitOnly_m3059790683 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor()
#define List_1__ctor_m3205487968(__this, method) ((  void (*) (List_1_t3412218392 *, const RuntimeMethod*))List_1__ctor_m310736118_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFields(System.Type,System.Reflection.BindingFlags)
extern "C"  RuntimeObject* ReflectionUtils_GetFields_m135069139 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Reflection.MemberInfo>(System.Collections.Generic.IList`1<T>,System.Collections.IEnumerable)
#define CollectionUtils_AddRange_TisMemberInfo_t_m2248164560(__this /* static, unused */, ___initial0, ___collection1, method) ((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))CollectionUtils_AddRange_TisRuntimeObject_m3182995924_gshared)(__this /* static, unused */, ___initial0, ___collection1, method)
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  RuntimeObject* ReflectionUtils_GetProperties_m3440088748 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Reflection.MemberInfo>::get_Count()
#define List_1_get_Count_m237274392(__this, method) ((  int32_t (*) (List_1_t3412218392 *, const RuntimeMethod*))List_1_get_Count_m2375293942_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor(System.Int32)
#define List_1__ctor_m3086459639(__this, p0, method) ((  void (*) (List_1_t3412218392 *, int32_t, const RuntimeMethod*))List_1__ctor_m136460305_gshared)(__this, p0, method)
// System.Void System.Func`2<System.Reflection.MemberInfo,System.String>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m4199532843(__this, p0, p1, method) ((  void (*) (Func_2_t2789580926 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1741456965_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<!!1,!!0>> System.Linq.Enumerable::GroupBy<System.Reflection.MemberInfo,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_GroupBy_TisMemberInfo_t_TisString_t_m3771386506(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2789580926 *, const RuntimeMethod*))Enumerable_GroupBy_TisRuntimeObject_TisRuntimeObject_m2467942546_gshared)(__this /* static, unused */, p0, p1, method)
// System.Int32 System.Linq.Enumerable::Count<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Count_TisMemberInfo_t_m555947649(__this /* static, unused */, p0, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_m970524031_gshared)(__this /* static, unused */, p0, method)
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToList_TisMemberInfo_t_m4029470052(__this /* static, unused */, p0, method) ((  List_1_t3412218392 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1715047877_gshared)(__this /* static, unused */, p0, method)
// !!0 System.Linq.Enumerable::First<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_First_TisMemberInfo_t_m1182807881(__this /* static, unused */, p0, method) ((  MemberInfo_t * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_m3278037299_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::Add(!0)
#define List_1_Add_m1517359828(__this, p0, method) ((  void (*) (List_1_t3412218392 *, MemberInfo_t *, const RuntimeMethod*))List_1_Add_m4157722533_gshared)(__this, p0, method)
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsOverridenGenericMember(System.Reflection.MemberInfo,System.Reflection.BindingFlags)
extern "C"  bool ReflectionUtils_IsOverridenGenericMember_m1359556380 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, int32_t ___bindingAttr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m2644622842(__this, p0, method) ((  void (*) (List_1_t3412218392 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3537433232_gshared)(__this, p0, method)
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsVirtual_m2993796589 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Attribute>(System.Collections.IEnumerable)
#define Enumerable_Cast_TisAttribute_t542643598_m1897090966(__this /* static, unused */, p0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m4021800683_gshared)(__this /* static, unused */, p0, method)
// !!0[] System.Linq.Enumerable::ToArray<System.Attribute>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisAttribute_t542643598_m3383875288(__this /* static, unused */, p0, method) ((  AttributeU5BU5D_t4255796347* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m2729329109_gshared)(__this /* static, unused */, p0, method)
// System.Attribute[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes(System.Object,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* ReflectionUtils_GetAttributes_m3650815366 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___attributeProvider0, Type_t * ___attributeType1, bool ___inherit2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Attribute>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Union_TisAttribute_t542643598_m2698737871(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisRuntimeObject_m431492322_gshared)(__this /* static, unused */, p0, p1, method)
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Assembly)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m3452110163 (RuntimeObject * __this /* static, unused */, Assembly_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Assembly,System.Type)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m1027548962 (RuntimeObject * __this /* static, unused */, Assembly_t * p0, Type_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.MemberInfo,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m4082301034 (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m2468178975 (RuntimeObject * __this /* static, unused */, MemberInfo_t * p0, Type_t * p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Module,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m2740621604 (RuntimeObject * __this /* static, unused */, Module_t4282841206 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Module,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m3847944167 (RuntimeObject * __this /* static, unused */, Module_t4282841206 * p0, Type_t * p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.ParameterInfo,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m1246435837 (RuntimeObject * __this /* static, unused */, ParameterInfo_t2249040075 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m1900696014 (RuntimeObject * __this /* static, unused */, ParameterInfo_t2249040075 * p0, Type_t * p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.ReflectionUtils::GetAssemblyDelimiterIndex(System.String)
extern "C"  Nullable_1_t334943763  ReflectionUtils_GetAssemblyDelimiterIndex_m4281428473 (RuntimeObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
#define Nullable_1__ctor_m2305320521(__this, p0, method) ((  void (*) (Nullable_1_t334943763 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m2305320521_gshared)(__this, p0, method)
// System.Void System.Func`2<System.Reflection.ParameterInfo,System.Type>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m2371337323(__this, p0, p1, method) ((  void (*) (Func_2_t101093588 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1741456965_gshared)(__this, p0, p1, method)
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Reflection.ParameterInfo,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
#define Enumerable_Select_TisParameterInfo_t2249040075_TisType_t_m3128050479(__this /* static, unused */, p0, p1, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t101093588 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m2887651677_gshared)(__this /* static, unused */, p0, p1, method)
// !!0[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_ToArray_TisType_t_m1174505748(__this /* static, unused */, p0, method) ((  TypeU5BU5D_t1664964607* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m2729329109_gshared)(__this /* static, unused */, p0, method)
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * Type_GetProperty_m2172000670 (Type_t * __this, String_t* p0, int32_t p1, Binder_t3404612058 * p2, Type_t * p3, TypeU5BU5D_t1664964607* p4, ParameterModifierU5BU5D_t963192633* p5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 System.Linq.Enumerable::SingleOrDefault<System.Reflection.MemberInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_SingleOrDefault_TisMemberInfo_t_m2811579155(__this /* static, unused */, p0, method) ((  MemberInfo_t * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_SingleOrDefault_TisRuntimeObject_m2912617385_gshared)(__this /* static, unused */, p0, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m3378486404(__this, p0, method) ((  void (*) (List_1_t3412218392 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m2848015482_gshared)(__this, p0, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateFields(System.Collections.Generic.IList`1<System.Reflection.MemberInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateFields_m3741033601 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initialFields0, Type_t * ___targetType1, int32_t ___bindingAttr2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Reflection.FieldInfo>(System.Collections.IEnumerable)
#define Enumerable_Cast_TisFieldInfo_t_m2287377147(__this /* static, unused */, p0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m4021800683_gshared)(__this /* static, unused */, p0, method)
// System.Reflection.BindingFlags Newtonsoft.Json.Utilities.ReflectionUtils::RemoveFlag(System.Reflection.BindingFlags,System.Reflection.BindingFlags)
extern "C"  int32_t ReflectionUtils_RemoveFlag_m902828796 (RuntimeObject * __this /* static, unused */, int32_t ___bindingAttr0, int32_t ___flag1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Reflection.MemberInfo>(System.Collections.IEnumerable)
#define Enumerable_Cast_TisMemberInfo_t_m69675683(__this /* static, unused */, p0, method) ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m4021800683_gshared)(__this /* static, unused */, p0, method)
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Reflection.MemberInfo>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
#define CollectionUtils_AddRange_TisMemberInfo_t_m1995032504(__this /* static, unused */, ___initial0, ___collection1, method) ((  void (*) (RuntimeObject * /* static, unused */, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))CollectionUtils_AddRange_TisRuntimeObject_m3419027900_gshared)(__this /* static, unused */, ___initial0, ___collection1, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m2150122279(__this, p0, method) ((  void (*) (List_1_t1622850197 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m2848015482_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1_AddRange_m151432689(__this, p0, method) ((  void (*) (List_1_t1622850197 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3537433232_gshared)(__this, p0, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateProperties(System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateProperties_m3750821150 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initialProperties0, Type_t * ___targetType1, int32_t ___bindingAttr2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::get_Item(System.Int32)
#define List_1_get_Item_m2416941178(__this, p0, method) ((  PropertyInfo_t * (*) (List_1_t1622850197 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2062981835_gshared)(__this, p0, method)
// System.Reflection.MemberInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberInfoFromType(System.Type,System.Reflection.MemberInfo)
extern "C"  MemberInfo_t * ReflectionUtils_GetMemberInfoFromType_m2104111271 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, MemberInfo_t * ___memberInfo1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::set_Item(System.Int32,!0)
#define List_1_set_Item_m2454789161(__this, p0, p1, method) ((  void (*) (List_1_t1622850197 *, int32_t, PropertyInfo_t *, const RuntimeMethod*))List_1_set_Item_m4246197648_gshared)(__this, p0, p1, method)
// System.Int32 System.Collections.Generic.List`1<System.Reflection.PropertyInfo>::get_Count()
#define List_1_get_Count_m3589308349(__this, method) ((  int32_t (*) (List_1_t1622850197 *, const RuntimeMethod*))List_1_get_Count_m2375293942_gshared)(__this, method)
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass42_0__ctor_m3229611402 (U3CU3Ec__DisplayClass42_0_t3402508478 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsPublic(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsPublic_m3591214589 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___property0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Func`2<System.Reflection.PropertyInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
#define Func_2__ctor_m2334976461(__this, p0, p1, method) ((  void (*) (Func_2_t2083147554 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m1354888807_gshared)(__this, p0, p1, method)
// System.Int32 Newtonsoft.Json.Utilities.CollectionUtils::IndexOf<System.Reflection.PropertyInfo>(System.Collections.Generic.IEnumerable`1<T>,System.Func`2<T,System.Boolean>)
#define CollectionUtils_IndexOf_TisPropertyInfo_t_m514453009(__this /* static, unused */, ___collection0, ___predicate1, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, RuntimeObject*, Func_2_t2083147554 *, const RuntimeMethod*))CollectionUtils_IndexOf_TisRuntimeObject_m2990947732_gshared)(__this /* static, unused */, ___collection0, ___predicate1, method)
// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.ConvertUtils::GetTypeCode(System.Type)
extern "C"  int32_t ConvertUtils_GetTypeCode_m1177375997 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullable(System.Type)
extern "C"  bool ReflectionUtils_IsNullable_m5141129 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Activator::CreateInstance(System.Type)
extern "C"  RuntimeObject * Activator_CreateInstance_m383294261 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m1513865691 (U3CU3Ec_t2709377751 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_Any_TisParameterInfo_t2249040075_m1422437387(__this /* static, unused */, p0, method) ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m32651785_gshared)(__this /* static, unused */, p0, method)
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
extern "C"  bool FieldInfo_get_IsPrivate_m1850902972 (FieldInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetBaseDefinition_m1178929304 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::get_Position()
extern "C"  int32_t StringBuffer_get_Position_m2165238534 (StringBuffer_t2484172789 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::set_Position(System.Int32)
extern "C"  void StringBuffer_set_Position_m164325637 (StringBuffer_t2484172789 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringBuffer::get_IsEmpty()
extern "C"  bool StringBuffer_get_IsEmpty_m2064517116 (StringBuffer_t2484172789 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(System.Char[])
extern "C"  void StringBuffer__ctor_m1128116153 (StringBuffer_t2484172789 * __this, CharU5BU5D_t1328083999* ___buffer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer__ctor_m55458746 (StringBuffer_t2484172789 * __this, RuntimeObject* ___bufferPool0, int32_t ___initalSize1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::EnsureSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer_EnsureSize_m2788268905 (StringBuffer_t2484172789 * __this, RuntimeObject* ___bufferPool0, int32_t ___appendLength1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char)
extern "C"  void StringBuffer_Append_m1538974178 (StringBuffer_t2484172789 * __this, RuntimeObject* ___bufferPool0, Il2CppChar ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Copy_m3808317496 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[],System.Int32,System.Int32)
extern "C"  void StringBuffer_Append_m1382521736 (StringBuffer_t2484172789 * __this, RuntimeObject* ___bufferPool0, CharU5BU5D_t1328083999* ___buffer1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Clear(Newtonsoft.Json.IArrayPool`1<System.Char>)
extern "C"  void StringBuffer_Clear_m2728963920 (StringBuffer_t2484172789 * __this, RuntimeObject* ___bufferPool0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString(System.Int32,System.Int32)
extern "C"  String_t* StringBuffer_ToString_m3486543647 (StringBuffer_t2484172789 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString()
extern "C"  String_t* StringBuffer_ToString_m1070456547 (StringBuffer_t2484172789 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m2448464375 (String_t* __this, CharU5BU5D_t1328083999* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::get_InternalBuffer()
extern "C"  CharU5BU5D_t1328083999* StringBuffer_get_InternalBuffer_m339238344 (StringBuffer_t2484172789 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0,System.Int32,System.Int32)
#define Array_IndexOf_TisChar_t3454481338_m409358040(__this /* static, unused */, p0, p1, p2, p3, method) ((  int32_t (*) (RuntimeObject * /* static, unused */, CharU5BU5D_t1328083999*, Il2CppChar, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisChar_t3454481338_m409358040_gshared)(__this /* static, unused */, p0, p1, p2, p3, method)
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
extern "C"  String_t* StringUtils_FormatWith_m282568793 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, ObjectU5BU5D_t3614634134* ___args2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C"  String_t* String_Format_m876527052 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t3614634134* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C"  void StringBuilder__ctor_m536337337 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
extern "C"  void StringWriter__ctor_m2262370389 (StringWriter_t4139609088 * __this, StringBuilder_t * p0, RuntimeObject* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.Utilities.MathUtils::IntToHex(System.Int32)
extern "C"  Il2CppChar MathUtils_IntToHex_m2884723570 (RuntimeObject * __this /* static, unused */, int32_t ___n0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsUpper(System.Char)
extern "C"  bool Char_IsUpper_m4083577610 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char,System.Globalization.CultureInfo)
extern "C"  Il2CppChar Char_ToLower_m3456131102 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, CultureInfo_t3500843524 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C"  String_t* String_CreateString_m3818307083 (String_t* __this, CharU5BU5D_t1328083999* ___val0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsHighSurrogate(System.Char)
extern "C"  bool Char_IsHighSurrogate_m361050852 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLowSurrogate(System.Char)
extern "C"  bool Char_IsLowSurrogate_m534472094 (RuntimeObject * __this /* static, unused */, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C"  bool Type_get_IsInterface_m3583817465 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsEnum()
extern "C"  bool Type_get_IsEnum_m313908919 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsClass()
extern "C"  bool Type_get_IsClass_m2968663946 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSealed()
extern "C"  bool Type_get_IsSealed_m2380985836 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsAbstract()
extern "C"  bool Type_get_IsAbstract_m2532060002 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m1733572463 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
extern "C"  bool String_Equals_m2950069882 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String,System.Type&)
extern "C"  bool TypeExtensions_AssignableToTypeName_m2010856624 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, Type_t ** ___match2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ImplementInterface(System.Type,System.Type)
extern "C"  bool TypeExtensions_ImplementInterface_m257112361 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___interfaceType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.AddingNewEventHandler::Invoke(System.Object,System.ComponentModel.AddingNewEventArgs)
extern "C"  void AddingNewEventHandler_Invoke_m2006288771 (AddingNewEventHandler_t1821432365 * __this, RuntimeObject * ___sender0, AddingNewEventArgs_t3938289828 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.NotifyCollectionChangedEventHandler::Invoke(System.Object,System.ComponentModel.NotifyCollectionChangedEventArgs)
extern "C"  void NotifyCollectionChangedEventHandler_Invoke_m1188434563 (NotifyCollectionChangedEventHandler_t1130012643 * __this, RuntimeObject * ___sender0, NotifyCollectionChangedEventArgs_t2376617142 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m3696060910 (EventArgs_t3289624707 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangingEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangingEventArgs)
extern "C"  void PropertyChangingEventHandler_Invoke_m3923434999 (PropertyChangingEventHandler_t626922954 * __this, RuntimeObject * ___sender0, PropertyChangingEventArgs_t2525320927 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass9_0__ctor_m2122976933 (U3CU3Ec__DisplayClass9_0_t2278087657 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0::<CreateCastConverter>b__0(System.Object)
extern "C"  RuntimeObject * U3CU3Ec__DisplayClass9_0_U3CCreateCastConverterU3Eb__0_m3936800939 (U3CU3Ec__DisplayClass9_0_t2278087657 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass9_0_U3CCreateCastConverterU3Eb__0_m3936800939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t1283576322 * L_0 = __this->get_call_0();
		ObjectU5BU5D_t3614634134* L_1 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject * L_2 = ___o0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		NullCheck(L_0);
		RuntimeObject * L_3 = MethodCall_2_Invoke_m3330949966(L_0, NULL, L_1, /*hidden argument*/MethodCall_2_Invoke_m3330949966_RuntimeMethod_var);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
extern "C" void TypeConvertKey_t1788482786_marshal_pinvoke(const TypeConvertKey_t1788482786& unmarshaled, TypeConvertKey_t1788482786_marshaled_pinvoke& marshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception);
}
extern "C" void TypeConvertKey_t1788482786_marshal_pinvoke_back(const TypeConvertKey_t1788482786_marshaled_pinvoke& marshaled, TypeConvertKey_t1788482786& unmarshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
extern "C" void TypeConvertKey_t1788482786_marshal_pinvoke_cleanup(TypeConvertKey_t1788482786_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
extern "C" void TypeConvertKey_t1788482786_marshal_com(const TypeConvertKey_t1788482786& unmarshaled, TypeConvertKey_t1788482786_marshaled_com& marshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception);
}
extern "C" void TypeConvertKey_t1788482786_marshal_com_back(const TypeConvertKey_t1788482786_marshaled_com& marshaled, TypeConvertKey_t1788482786& unmarshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
extern "C" void TypeConvertKey_t1788482786_marshal_com_cleanup(TypeConvertKey_t1788482786_marshaled_com& marshaled)
{
}
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_InitialType()
extern "C"  Type_t * TypeConvertKey_get_InitialType_m2407353397 (TypeConvertKey_t1788482786 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		return L_0;
	}
}
extern "C"  Type_t * TypeConvertKey_get_InitialType_m2407353397_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TypeConvertKey_t1788482786 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t1788482786 *>(__this + 1);
	return TypeConvertKey_get_InitialType_m2407353397(_thisAdjusted, method);
}
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_TargetType()
extern "C"  Type_t * TypeConvertKey_get_TargetType_m1306869422 (TypeConvertKey_t1788482786 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__targetType_1();
		return L_0;
	}
}
extern "C"  Type_t * TypeConvertKey_get_TargetType_m1306869422_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TypeConvertKey_t1788482786 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t1788482786 *>(__this + 1);
	return TypeConvertKey_get_TargetType_m1306869422(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::.ctor(System.Type,System.Type)
extern "C"  void TypeConvertKey__ctor_m2656598064 (TypeConvertKey_t1788482786 * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___initialType0;
		__this->set__initialType_0(L_0);
		Type_t * L_1 = ___targetType1;
		__this->set__targetType_1(L_1);
		return;
	}
}
extern "C"  void TypeConvertKey__ctor_m2656598064_AdjustorThunk (RuntimeObject * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method)
{
	TypeConvertKey_t1788482786 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t1788482786 *>(__this + 1);
	TypeConvertKey__ctor_m2656598064(_thisAdjusted, ___initialType0, ___targetType1, method);
}
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::GetHashCode()
extern "C"  int32_t TypeConvertKey_GetHashCode_m684609717 (TypeConvertKey_t1788482786 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		Type_t * L_2 = __this->get__targetType_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
extern "C"  int32_t TypeConvertKey_GetHashCode_m684609717_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TypeConvertKey_t1788482786 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t1788482786 *>(__this + 1);
	return TypeConvertKey_GetHashCode_m684609717(_thisAdjusted, method);
}
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(System.Object)
extern "C"  bool TypeConvertKey_Equals_m2951854959 (TypeConvertKey_t1788482786 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeConvertKey_Equals_m2951854959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TypeConvertKey_t1788482786_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = TypeConvertKey_Equals_m2262100465(__this, ((*(TypeConvertKey_t1788482786 *)((TypeConvertKey_t1788482786 *)UnBox(L_1, TypeConvertKey_t1788482786_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool TypeConvertKey_Equals_m2951854959_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	TypeConvertKey_t1788482786 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t1788482786 *>(__this + 1);
	return TypeConvertKey_Equals_m2951854959(_thisAdjusted, ___obj0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
extern "C"  bool TypeConvertKey_Equals_m2262100465 (TypeConvertKey_t1788482786 * __this, TypeConvertKey_t1788482786  ___other0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		TypeConvertKey_t1788482786  L_1 = ___other0;
		Type_t * L_2 = L_1.get__initialType_0();
		if ((!(((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_3 = __this->get__targetType_1();
		TypeConvertKey_t1788482786  L_4 = ___other0;
		Type_t * L_5 = L_4.get__targetType_1();
		return (bool)((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
extern "C"  bool TypeConvertKey_Equals_m2262100465_AdjustorThunk (RuntimeObject * __this, TypeConvertKey_t1788482786  ___other0, const RuntimeMethod* method)
{
	TypeConvertKey_t1788482786 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t1788482786 *>(__this + 1);
	return TypeConvertKey_Equals_m2262100465(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.DateTimeParser
extern "C" void DateTimeParser_t1235213504_marshal_pinvoke(const DateTimeParser_t1235213504& unmarshaled, DateTimeParser_t1235213504_marshaled_pinvoke& marshaled)
{
	marshaled.___Year_0 = unmarshaled.get_Year_0();
	marshaled.___Month_1 = unmarshaled.get_Month_1();
	marshaled.___Day_2 = unmarshaled.get_Day_2();
	marshaled.___Hour_3 = unmarshaled.get_Hour_3();
	marshaled.___Minute_4 = unmarshaled.get_Minute_4();
	marshaled.___Second_5 = unmarshaled.get_Second_5();
	marshaled.___Fraction_6 = unmarshaled.get_Fraction_6();
	marshaled.___ZoneHour_7 = unmarshaled.get_ZoneHour_7();
	marshaled.___ZoneMinute_8 = unmarshaled.get_ZoneMinute_8();
	marshaled.___Zone_9 = unmarshaled.get_Zone_9();
	if (unmarshaled.get__text_10() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__text_Length = (unmarshaled.get__text_10())->max_length;
		marshaled.____text_10 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__text_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__text_Length); i++)
		{
			(marshaled.____text_10)[i] = static_cast<uint8_t>((unmarshaled.get__text_10())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____text_10 = NULL;
	}
	marshaled.____end_11 = unmarshaled.get__end_11();
}
extern "C" void DateTimeParser_t1235213504_marshal_pinvoke_back(const DateTimeParser_t1235213504_marshaled_pinvoke& marshaled, DateTimeParser_t1235213504& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_t1235213504_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Year_temp_0 = 0;
	unmarshaled_Year_temp_0 = marshaled.___Year_0;
	unmarshaled.set_Year_0(unmarshaled_Year_temp_0);
	int32_t unmarshaled_Month_temp_1 = 0;
	unmarshaled_Month_temp_1 = marshaled.___Month_1;
	unmarshaled.set_Month_1(unmarshaled_Month_temp_1);
	int32_t unmarshaled_Day_temp_2 = 0;
	unmarshaled_Day_temp_2 = marshaled.___Day_2;
	unmarshaled.set_Day_2(unmarshaled_Day_temp_2);
	int32_t unmarshaled_Hour_temp_3 = 0;
	unmarshaled_Hour_temp_3 = marshaled.___Hour_3;
	unmarshaled.set_Hour_3(unmarshaled_Hour_temp_3);
	int32_t unmarshaled_Minute_temp_4 = 0;
	unmarshaled_Minute_temp_4 = marshaled.___Minute_4;
	unmarshaled.set_Minute_4(unmarshaled_Minute_temp_4);
	int32_t unmarshaled_Second_temp_5 = 0;
	unmarshaled_Second_temp_5 = marshaled.___Second_5;
	unmarshaled.set_Second_5(unmarshaled_Second_temp_5);
	int32_t unmarshaled_Fraction_temp_6 = 0;
	unmarshaled_Fraction_temp_6 = marshaled.___Fraction_6;
	unmarshaled.set_Fraction_6(unmarshaled_Fraction_temp_6);
	int32_t unmarshaled_ZoneHour_temp_7 = 0;
	unmarshaled_ZoneHour_temp_7 = marshaled.___ZoneHour_7;
	unmarshaled.set_ZoneHour_7(unmarshaled_ZoneHour_temp_7);
	int32_t unmarshaled_ZoneMinute_temp_8 = 0;
	unmarshaled_ZoneMinute_temp_8 = marshaled.___ZoneMinute_8;
	unmarshaled.set_ZoneMinute_8(unmarshaled_ZoneMinute_temp_8);
	int32_t unmarshaled_Zone_temp_9 = 0;
	unmarshaled_Zone_temp_9 = marshaled.___Zone_9;
	unmarshaled.set_Zone_9(unmarshaled_Zone_temp_9);
	if (marshaled.____text_10 != NULL)
	{
		if (unmarshaled.get__text_10() == NULL)
		{
			unmarshaled.set__text_10(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__text_10())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__text_10())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____text_10)[i]));
		}
	}
	int32_t unmarshaled__end_temp_11 = 0;
	unmarshaled__end_temp_11 = marshaled.____end_11;
	unmarshaled.set__end_11(unmarshaled__end_temp_11);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.DateTimeParser
extern "C" void DateTimeParser_t1235213504_marshal_pinvoke_cleanup(DateTimeParser_t1235213504_marshaled_pinvoke& marshaled)
{
	if (marshaled.____text_10 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____text_10);
		marshaled.____text_10 = NULL;
	}
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.DateTimeParser
extern "C" void DateTimeParser_t1235213504_marshal_com(const DateTimeParser_t1235213504& unmarshaled, DateTimeParser_t1235213504_marshaled_com& marshaled)
{
	marshaled.___Year_0 = unmarshaled.get_Year_0();
	marshaled.___Month_1 = unmarshaled.get_Month_1();
	marshaled.___Day_2 = unmarshaled.get_Day_2();
	marshaled.___Hour_3 = unmarshaled.get_Hour_3();
	marshaled.___Minute_4 = unmarshaled.get_Minute_4();
	marshaled.___Second_5 = unmarshaled.get_Second_5();
	marshaled.___Fraction_6 = unmarshaled.get_Fraction_6();
	marshaled.___ZoneHour_7 = unmarshaled.get_ZoneHour_7();
	marshaled.___ZoneMinute_8 = unmarshaled.get_ZoneMinute_8();
	marshaled.___Zone_9 = unmarshaled.get_Zone_9();
	if (unmarshaled.get__text_10() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__text_Length = (unmarshaled.get__text_10())->max_length;
		marshaled.____text_10 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__text_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__text_Length); i++)
		{
			(marshaled.____text_10)[i] = static_cast<uint8_t>((unmarshaled.get__text_10())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____text_10 = NULL;
	}
	marshaled.____end_11 = unmarshaled.get__end_11();
}
extern "C" void DateTimeParser_t1235213504_marshal_com_back(const DateTimeParser_t1235213504_marshaled_com& marshaled, DateTimeParser_t1235213504& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_t1235213504_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_Year_temp_0 = 0;
	unmarshaled_Year_temp_0 = marshaled.___Year_0;
	unmarshaled.set_Year_0(unmarshaled_Year_temp_0);
	int32_t unmarshaled_Month_temp_1 = 0;
	unmarshaled_Month_temp_1 = marshaled.___Month_1;
	unmarshaled.set_Month_1(unmarshaled_Month_temp_1);
	int32_t unmarshaled_Day_temp_2 = 0;
	unmarshaled_Day_temp_2 = marshaled.___Day_2;
	unmarshaled.set_Day_2(unmarshaled_Day_temp_2);
	int32_t unmarshaled_Hour_temp_3 = 0;
	unmarshaled_Hour_temp_3 = marshaled.___Hour_3;
	unmarshaled.set_Hour_3(unmarshaled_Hour_temp_3);
	int32_t unmarshaled_Minute_temp_4 = 0;
	unmarshaled_Minute_temp_4 = marshaled.___Minute_4;
	unmarshaled.set_Minute_4(unmarshaled_Minute_temp_4);
	int32_t unmarshaled_Second_temp_5 = 0;
	unmarshaled_Second_temp_5 = marshaled.___Second_5;
	unmarshaled.set_Second_5(unmarshaled_Second_temp_5);
	int32_t unmarshaled_Fraction_temp_6 = 0;
	unmarshaled_Fraction_temp_6 = marshaled.___Fraction_6;
	unmarshaled.set_Fraction_6(unmarshaled_Fraction_temp_6);
	int32_t unmarshaled_ZoneHour_temp_7 = 0;
	unmarshaled_ZoneHour_temp_7 = marshaled.___ZoneHour_7;
	unmarshaled.set_ZoneHour_7(unmarshaled_ZoneHour_temp_7);
	int32_t unmarshaled_ZoneMinute_temp_8 = 0;
	unmarshaled_ZoneMinute_temp_8 = marshaled.___ZoneMinute_8;
	unmarshaled.set_ZoneMinute_8(unmarshaled_ZoneMinute_temp_8);
	int32_t unmarshaled_Zone_temp_9 = 0;
	unmarshaled_Zone_temp_9 = marshaled.___Zone_9;
	unmarshaled.set_Zone_9(unmarshaled_Zone_temp_9);
	if (marshaled.____text_10 != NULL)
	{
		if (unmarshaled.get__text_10() == NULL)
		{
			unmarshaled.set__text_10(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__text_10())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__text_10())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____text_10)[i]));
		}
	}
	int32_t unmarshaled__end_temp_11 = 0;
	unmarshaled__end_temp_11 = marshaled.____end_11;
	unmarshaled.set__end_11(unmarshaled__end_temp_11);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.DateTimeParser
extern "C" void DateTimeParser_t1235213504_marshal_com_cleanup(DateTimeParser_t1235213504_marshaled_com& marshaled)
{
	if (marshaled.____text_10 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____text_10);
		marshaled.____text_10 = NULL;
	}
}
// System.Void Newtonsoft.Json.Utilities.DateTimeParser::.cctor()
extern "C"  void DateTimeParser__cctor_m417902444 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser__cctor_m417902444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t3030399641* L_0 = ((Int32U5BU5D_t3030399641*)SZArrayNew(Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var, (uint32_t)7));
		RuntimeFieldHandle_t2331729674  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1486305145____9E31F24F64765FCAA589F589324D17C9FCF6A06D_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3920580167(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_Power10_12(L_0);
		NullCheck(_stringLiteral164244414);
		int32_t L_2 = String_get_Length_m1606060069(_stringLiteral164244414, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_Lzyyyy_13(L_2);
		NullCheck(_stringLiteral351817857);
		int32_t L_3 = String_get_Length_m1606060069(_stringLiteral351817857, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_Lzyyyy__14(L_3);
		NullCheck(_stringLiteral1978214733);
		int32_t L_4 = String_get_Length_m1606060069(_stringLiteral1978214733, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_Lzyyyy_MM_15(L_4);
		NullCheck(_stringLiteral919324862);
		int32_t L_5 = String_get_Length_m1606060069(_stringLiteral919324862, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_Lzyyyy_MM__16(L_5);
		NullCheck(_stringLiteral4023469606);
		int32_t L_6 = String_get_Length_m1606060069(_stringLiteral4023469606, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_Lzyyyy_MM_dd_17(L_6);
		NullCheck(_stringLiteral1751525914);
		int32_t L_7 = String_get_Length_m1606060069(_stringLiteral1751525914, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_Lzyyyy_MM_ddT_18(L_7);
		NullCheck(_stringLiteral475278190);
		int32_t L_8 = String_get_Length_m1606060069(_stringLiteral475278190, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_LzHH_19(L_8);
		NullCheck(_stringLiteral480962872);
		int32_t L_9 = String_get_Length_m1606060069(_stringLiteral480962872, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_LzHH__20(L_9);
		NullCheck(_stringLiteral4122821210);
		int32_t L_10 = String_get_Length_m1606060069(_stringLiteral4122821210, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_LzHH_mm_21(L_10);
		NullCheck(_stringLiteral206891516);
		int32_t L_11 = String_get_Length_m1606060069(_stringLiteral206891516, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_LzHH_mm__22(L_11);
		NullCheck(_stringLiteral1699032502);
		int32_t L_12 = String_get_Length_m1606060069(_stringLiteral1699032502, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_LzHH_mm_ss_23(L_12);
		NullCheck(_stringLiteral372029313);
		int32_t L_13 = String_get_Length_m1606060069(_stringLiteral372029313, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_Lz__24(L_13);
		NullCheck(_stringLiteral30620909);
		int32_t L_14 = String_get_Length_m1606060069(_stringLiteral30620909, /*hidden argument*/NULL);
		((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->set_Lz_zz_25(L_14);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse(System.Char[],System.Int32,System.Int32)
extern "C"  bool DateTimeParser_Parse_m93898435 (DateTimeParser_t1235213504 * __this, CharU5BU5D_t1328083999* ___text0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_Parse_m93898435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t1328083999* L_0 = ___text0;
		__this->set__text_10(L_0);
		int32_t L_1 = ___startIndex1;
		int32_t L_2 = ___length2;
		__this->set__end_11(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)));
		int32_t L_3 = ___startIndex1;
		bool L_4 = DateTimeParser_ParseDate_m1939298771(__this, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_dd_17();
		int32_t L_6 = ___startIndex1;
		bool L_7 = DateTimeParser_ParseChar_m616730816(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_6)), ((int32_t)84), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_8 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_ddT_18();
		int32_t L_9 = ___startIndex1;
		bool L_10 = DateTimeParser_ParseTimeAndZoneAndWhitespace_m3098691983(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)1;
	}

IL_003b:
	{
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_Parse_m93898435_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t1328083999* ___text0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	DateTimeParser_t1235213504 * _thisAdjusted = reinterpret_cast<DateTimeParser_t1235213504 *>(__this + 1);
	return DateTimeParser_Parse_m93898435(_thisAdjusted, ___text0, ___startIndex1, ___length2, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseDate(System.Int32)
extern "C"  bool DateTimeParser_ParseDate_m1939298771 (DateTimeParser_t1235213504 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_ParseDate_m1939298771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___start0;
		int32_t* L_1 = __this->get_address_of_Year_0();
		bool L_2 = DateTimeParser_Parse4Digit_m3838417687(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_3 = __this->get_Year_0();
		if ((((int32_t)1) > ((int32_t)L_3)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_4 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_Lzyyyy_13();
		bool L_6 = DateTimeParser_ParseChar_m616730816(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_7 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_8 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_Lzyyyy__14();
		int32_t* L_9 = __this->get_address_of_Month_1();
		bool L_10 = DateTimeParser_Parse2Digit_m1081024017(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_11 = __this->get_Month_1();
		if ((((int32_t)1) > ((int32_t)L_11)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_12 = __this->get_Month_1();
		if ((((int32_t)L_12) > ((int32_t)((int32_t)12))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_13 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_14 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_Lzyyyy_MM_15();
		bool L_15 = DateTimeParser_ParseChar_m616730816(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)), ((int32_t)45), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_16 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_17 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_Lzyyyy_MM__16();
		int32_t* L_18 = __this->get_address_of_Day_2();
		bool L_19 = DateTimeParser_Parse2Digit_m1081024017(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_17)), L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_20 = __this->get_Day_2();
		if ((((int32_t)1) > ((int32_t)L_20)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_21 = __this->get_Day_2();
		int32_t L_22 = __this->get_Year_0();
		int32_t L_23 = __this->get_Month_1();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		int32_t L_24 = DateTime_DaysInMonth_m2275365236(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_21) > ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00a3:
	{
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_ParseDate_m1939298771_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, const RuntimeMethod* method)
{
	DateTimeParser_t1235213504 * _thisAdjusted = reinterpret_cast<DateTimeParser_t1235213504 *>(__this + 1);
	return DateTimeParser_ParseDate_m1939298771(_thisAdjusted, ___start0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTimeAndZoneAndWhitespace(System.Int32)
extern "C"  bool DateTimeParser_ParseTimeAndZoneAndWhitespace_m3098691983 (DateTimeParser_t1235213504 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	{
		bool L_0 = DateTimeParser_ParseTime_m508747414(__this, (&___start0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___start0;
		bool L_2 = DateTimeParser_ParseZone_m1488795597(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_ParseTimeAndZoneAndWhitespace_m3098691983_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, const RuntimeMethod* method)
{
	DateTimeParser_t1235213504 * _thisAdjusted = reinterpret_cast<DateTimeParser_t1235213504 *>(__this + 1);
	return DateTimeParser_ParseTimeAndZoneAndWhitespace_m3098691983(_thisAdjusted, ___start0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTime(System.Int32&)
extern "C"  bool DateTimeParser_ParseTime_m508747414 (DateTimeParser_t1235213504 * __this, int32_t* ___start0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_ParseTime_m508747414_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___start0;
		int32_t* L_1 = __this->get_address_of_Hour_3();
		bool L_2 = DateTimeParser_Parse2Digit_m1081024017(__this, (*((int32_t*)L_0)), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_3 = __this->get_Hour_3();
		if ((((int32_t)L_3) > ((int32_t)((int32_t)24))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_4 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_5 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_LzHH_19();
		bool L_6 = DateTimeParser_ParseChar_m616730816(__this, ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_4)), (int32_t)L_5)), ((int32_t)58), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_7 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_8 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_LzHH__20();
		int32_t* L_9 = __this->get_address_of_Minute_4();
		bool L_10 = DateTimeParser_Parse2Digit_m1081024017(__this, ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_7)), (int32_t)L_8)), L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_11 = __this->get_Minute_4();
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)60))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_12 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_13 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_LzHH_mm_21();
		bool L_14 = DateTimeParser_ParseChar_m616730816(__this, ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_12)), (int32_t)L_13)), ((int32_t)58), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_009b;
		}
	}
	{
		int32_t* L_15 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_16 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_LzHH_mm__22();
		int32_t* L_17 = __this->get_address_of_Second_5();
		bool L_18 = DateTimeParser_Parse2Digit_m1081024017(__this, ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_15)), (int32_t)L_16)), L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_19 = __this->get_Second_5();
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)60))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_20 = __this->get_Hour_3();
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_21 = __this->get_Minute_4();
		if (L_21)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_22 = __this->get_Second_5();
		if (!L_22)
		{
			goto IL_009d;
		}
	}

IL_009b:
	{
		return (bool)0;
	}

IL_009d:
	{
		int32_t* L_23 = ___start0;
		int32_t* L_24 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_25 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_LzHH_mm_ss_23();
		*((int32_t*)(L_23)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_24)), (int32_t)L_25));
		int32_t* L_26 = ___start0;
		bool L_27 = DateTimeParser_ParseChar_m616730816(__this, (*((int32_t*)L_26)), ((int32_t)46), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0131;
		}
	}
	{
		__this->set_Fraction_6(0);
		V_0 = 0;
		goto IL_00e9;
	}

IL_00be:
	{
		CharU5BU5D_t1328083999* L_28 = __this->get__text_10();
		int32_t* L_29 = ___start0;
		NullCheck(L_28);
		int32_t L_30 = (*((int32_t*)L_29));
		uint16_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)((int32_t)48)));
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) > ((int32_t)((int32_t)9))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_34 = __this->get_Fraction_6();
		int32_t L_35 = V_1;
		__this->set_Fraction_6(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)((int32_t)10))), (int32_t)L_35)));
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00e9:
	{
		int32_t* L_37 = ___start0;
		int32_t* L_38 = ___start0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)(*((int32_t*)L_38)), (int32_t)1));
		int32_t L_39 = V_2;
		*((int32_t*)(L_37)) = (int32_t)L_39;
		int32_t L_40 = V_2;
		int32_t L_41 = __this->get__end_11();
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_42 = V_0;
		if ((((int32_t)L_42) < ((int32_t)7)))
		{
			goto IL_00be;
		}
	}

IL_00fe:
	{
		int32_t L_43 = V_0;
		if ((((int32_t)L_43) >= ((int32_t)7)))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_44 = V_0;
		if (L_44)
		{
			goto IL_0107;
		}
	}
	{
		return (bool)0;
	}

IL_0107:
	{
		int32_t L_45 = __this->get_Fraction_6();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		Int32U5BU5D_t3030399641* L_46 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_Power10_12();
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract((int32_t)7, (int32_t)L_47));
		int32_t L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		__this->set_Fraction_6(((int32_t)il2cpp_codegen_multiply((int32_t)L_45, (int32_t)L_49)));
	}

IL_011d:
	{
		int32_t L_50 = __this->get_Hour_3();
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_51 = __this->get_Fraction_6();
		if (!L_51)
		{
			goto IL_0131;
		}
	}
	{
		return (bool)0;
	}

IL_0131:
	{
		return (bool)1;
	}
}
extern "C"  bool DateTimeParser_ParseTime_m508747414_AdjustorThunk (RuntimeObject * __this, int32_t* ___start0, const RuntimeMethod* method)
{
	DateTimeParser_t1235213504 * _thisAdjusted = reinterpret_cast<DateTimeParser_t1235213504 *>(__this + 1);
	return DateTimeParser_ParseTime_m508747414(_thisAdjusted, ___start0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseZone(System.Int32)
extern "C"  bool DateTimeParser_ParseZone_m1488795597 (DateTimeParser_t1235213504 * __this, int32_t ___start0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeParser_ParseZone_m1488795597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get__end_11();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_00f3;
		}
	}
	{
		CharU5BU5D_t1328083999* L_2 = __this->get__text_10();
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)90))))
		{
			goto IL_001f;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)122)))))
		{
			goto IL_0030;
		}
	}

IL_001f:
	{
		__this->set_Zone_9(1);
		int32_t L_8 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		goto IL_00f3;
	}

IL_0030:
	{
		int32_t L_9 = ___start0;
		int32_t L_10 = __this->get__end_11();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2))) >= ((int32_t)L_10)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_11 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_12 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_Lz__24();
		int32_t* L_13 = __this->get_address_of_ZoneHour_7();
		bool L_14 = DateTimeParser_Parse2Digit_m1081024017(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_15 = __this->get_ZoneHour_7();
		if ((((int32_t)L_15) > ((int32_t)((int32_t)99))))
		{
			goto IL_0086;
		}
	}
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)43))))
		{
			goto IL_0076;
		}
	}
	{
		Il2CppChar L_17 = V_0;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0086;
		}
	}
	{
		__this->set_Zone_9(2);
		int32_t L_18 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_19 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_Lz_zz_25();
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19));
		goto IL_0086;
	}

IL_0076:
	{
		__this->set_Zone_9(3);
		int32_t L_20 = ___start0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeParser_t1235213504_il2cpp_TypeInfo_var);
		int32_t L_21 = ((DateTimeParser_t1235213504_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeParser_t1235213504_il2cpp_TypeInfo_var))->get_Lz_zz_25();
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21));
	}

IL_0086:
	{
		int32_t L_22 = ___start0;
		int32_t L_23 = __this->get__end_11();
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_24 = ___start0;
		bool L_25 = DateTimeParser_ParseChar_m616730816(__this, L_24, ((int32_t)58), /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_26 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		int32_t L_27 = ___start0;
		int32_t L_28 = __this->get__end_11();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1))) >= ((int32_t)L_28)))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_29 = ___start0;
		int32_t* L_30 = __this->get_address_of_ZoneMinute_8();
		bool L_31 = DateTimeParser_Parse2Digit_m1081024017(__this, L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_32 = __this->get_ZoneMinute_8();
		if ((((int32_t)L_32) > ((int32_t)((int32_t)99))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_33 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)2));
		goto IL_00f3;
	}

IL_00ca:
	{
		int32_t L_34 = ___start0;
		int32_t L_35 = __this->get__end_11();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1))) >= ((int32_t)L_35)))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_36 = ___start0;
		int32_t* L_37 = __this->get_address_of_ZoneMinute_8();
		bool L_38 = DateTimeParser_Parse2Digit_m1081024017(__this, L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_39 = __this->get_ZoneMinute_8();
		if ((((int32_t)L_39) > ((int32_t)((int32_t)99))))
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_40 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)2));
	}

IL_00f3:
	{
		int32_t L_41 = ___start0;
		int32_t L_42 = __this->get__end_11();
		return (bool)((((int32_t)L_41) == ((int32_t)L_42))? 1 : 0);
	}
}
extern "C"  bool DateTimeParser_ParseZone_m1488795597_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, const RuntimeMethod* method)
{
	DateTimeParser_t1235213504 * _thisAdjusted = reinterpret_cast<DateTimeParser_t1235213504 *>(__this + 1);
	return DateTimeParser_ParseZone_m1488795597(_thisAdjusted, ___start0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse4Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse4Digit_m3838417687 (DateTimeParser_t1235213504 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get__end_11();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)3))) >= ((int32_t)L_1)))
		{
			goto IL_0079;
		}
	}
	{
		CharU5BU5D_t1328083999* L_2 = __this->get__text_10();
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)48)));
		CharU5BU5D_t1328083999* L_6 = __this->get__text_10();
		int32_t L_7 = ___start0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		uint16_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)48)));
		CharU5BU5D_t1328083999* L_10 = __this->get__text_10();
		int32_t L_11 = ___start0;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)2));
		uint16_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)48)));
		CharU5BU5D_t1328083999* L_14 = __this->get__text_10();
		int32_t L_15 = ___start0;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)3));
		uint16_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)48)));
		int32_t L_18 = V_0;
		if ((((int32_t)0) > ((int32_t)L_18)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_20 = V_1;
		if ((((int32_t)0) > ((int32_t)L_20)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_22 = V_2;
		if ((((int32_t)0) > ((int32_t)L_22)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_24 = V_3;
		if ((((int32_t)0) > ((int32_t)L_24)))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_25 = V_3;
		if ((((int32_t)L_25) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t* L_26 = ___num1;
		int32_t L_27 = V_0;
		int32_t L_28 = V_1;
		int32_t L_29 = V_2;
		int32_t L_30 = V_3;
		*((int32_t*)(L_26)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)((int32_t)10))), (int32_t)L_28)), (int32_t)((int32_t)10))), (int32_t)L_29)), (int32_t)((int32_t)10))), (int32_t)L_30));
		return (bool)1;
	}

IL_0079:
	{
		int32_t* L_31 = ___num1;
		*((int32_t*)(L_31)) = (int32_t)0;
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_Parse4Digit_m3838417687_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	DateTimeParser_t1235213504 * _thisAdjusted = reinterpret_cast<DateTimeParser_t1235213504 *>(__this + 1);
	return DateTimeParser_Parse4Digit_m3838417687(_thisAdjusted, ___start0, ___num1, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse2Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse2Digit_m1081024017 (DateTimeParser_t1235213504 * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get__end_11();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) >= ((int32_t)L_1)))
		{
			goto IL_0041;
		}
	}
	{
		CharU5BU5D_t1328083999* L_2 = __this->get__text_10();
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)48)));
		CharU5BU5D_t1328083999* L_6 = __this->get__text_10();
		int32_t L_7 = ___start0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		uint16_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)48)));
		int32_t L_10 = V_0;
		if ((((int32_t)0) > ((int32_t)L_10)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_12 = V_1;
		if ((((int32_t)0) > ((int32_t)L_12)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t* L_14 = ___num1;
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)((int32_t)10))), (int32_t)L_16));
		return (bool)1;
	}

IL_0041:
	{
		int32_t* L_17 = ___num1;
		*((int32_t*)(L_17)) = (int32_t)0;
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_Parse2Digit_m1081024017_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	DateTimeParser_t1235213504 * _thisAdjusted = reinterpret_cast<DateTimeParser_t1235213504 *>(__this + 1);
	return DateTimeParser_Parse2Digit_m1081024017(_thisAdjusted, ___start0, ___num1, method);
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseChar(System.Int32,System.Char)
extern "C"  bool DateTimeParser_ParseChar_m616730816 (DateTimeParser_t1235213504 * __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->get__end_11();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		CharU5BU5D_t1328083999* L_2 = __this->get__text_10();
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint16_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Il2CppChar L_6 = ___ch1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
	}

IL_0015:
	{
		return (bool)0;
	}
}
extern "C"  bool DateTimeParser_ParseChar_m616730816_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method)
{
	DateTimeParser_t1235213504 * _thisAdjusted = reinterpret_cast<DateTimeParser_t1235213504 *>(__this + 1);
	return DateTimeParser_ParseChar_m616730816(_thisAdjusted, ___start0, ___ch1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::.cctor()
extern "C"  void DateTimeUtils__cctor_m1038572280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils__cctor_m1038572280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((DateTimeUtils_t919483584_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t919483584_il2cpp_TypeInfo_var))->set_InitialJavaScriptDateTicks_0(((int64_t)621355968000000000LL));
		Int32U5BU5D_t3030399641* L_0 = ((Int32U5BU5D_t3030399641*)SZArrayNew(Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13)));
		RuntimeFieldHandle_t2331729674  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1486305145____E92B39D8233061927D9ACDE54665E68E7535635A_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3920580167(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((DateTimeUtils_t919483584_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t919483584_il2cpp_TypeInfo_var))->set_DaysToMonth365_1(L_0);
		Int32U5BU5D_t3030399641* L_2 = ((Int32U5BU5D_t3030399641*)SZArrayNew(Int32U5BU5D_t3030399641_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13)));
		RuntimeFieldHandle_t2331729674  L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1486305145____DD3AEFEADB1CD615F3017763F1568179FEE640B0_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3920580167(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, L_3, /*hidden argument*/NULL);
		((DateTimeUtils_t919483584_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t919483584_il2cpp_TypeInfo_var))->set_DaysToMonth366_2(L_2);
		return;
	}
}
// System.TimeSpan Newtonsoft.Json.Utilities.DateTimeUtils::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t3430258949  DateTimeUtils_GetUtcOffset_m1751279733 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___d0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_GetUtcOffset_m1751279733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t4008205267_il2cpp_TypeInfo_var);
		TimeZone_t4008205267 * L_0 = TimeZone_get_CurrentTimeZone_m3729014954(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTime_t693205669  L_1 = ___d0;
		NullCheck(L_0);
		TimeSpan_t3430258949  L_2 = VirtFuncInvoker1< TimeSpan_t3430258949 , DateTime_t693205669  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, L_0, L_1);
		return L_2;
	}
}
// System.Xml.XmlDateTimeSerializationMode Newtonsoft.Json.Utilities.DateTimeUtils::ToSerializationMode(System.DateTimeKind)
extern "C"  int32_t DateTimeUtils_ToSerializationMode_m1929981297 (RuntimeObject * __this /* static, unused */, int32_t ___kind0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ToSerializationMode_m1929981297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___kind0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0016;
			}
			case 1:
			{
				goto IL_0018;
			}
			case 2:
			{
				goto IL_0014;
			}
		}
	}
	{
		goto IL_001a;
	}

IL_0014:
	{
		return (int32_t)(0);
	}

IL_0016:
	{
		return (int32_t)(2);
	}

IL_0018:
	{
		return (int32_t)(1);
	}

IL_001a:
	{
		int32_t L_1 = ___kind0;
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(DateTimeKind_t2186819611_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_t279959794 * L_4 = MiscellaneousUtils_CreateArgumentOutOfRangeException_m4097621156(NULL /*static, unused*/, _stringLiteral1891435176, L_3, _stringLiteral2145519785, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}
}
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::EnsureDateTime(System.DateTime,Newtonsoft.Json.DateTimeZoneHandling)
extern "C"  DateTime_t693205669  DateTimeUtils_EnsureDateTime_m1741856844 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___value0, int32_t ___timeZone1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_EnsureDateTime_m1741856844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___timeZone1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_0048;
			}
		}
	}
	{
		goto IL_003d;
	}

IL_0018:
	{
		DateTime_t693205669  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_2 = DateTimeUtils_SwitchToLocalTime_m3566274725(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		___value0 = L_2;
		goto IL_0048;
	}

IL_0022:
	{
		DateTime_t693205669  L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_4 = DateTimeUtils_SwitchToUtcTime_m1060208122(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		___value0 = L_4;
		goto IL_0048;
	}

IL_002c:
	{
		int64_t L_5 = DateTime_get_Ticks_m310281298((&___value0), /*hidden argument*/NULL);
		DateTime__ctor_m1100326092((&___value0), L_5, 0, /*hidden argument*/NULL);
		goto IL_0048;
	}

IL_003d:
	{
		ArgumentException_t3259014390 * L_6 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_6, _stringLiteral3771848130, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0048:
	{
		DateTime_t693205669  L_7 = ___value0;
		return L_7;
	}
}
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToLocalTime(System.DateTime)
extern "C"  DateTime_t693205669  DateTimeUtils_SwitchToLocalTime_m3566274725 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = DateTime_get_Kind_m1331920314((&___value0), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_001c:
	{
		int64_t L_2 = DateTime_get_Ticks_m310281298((&___value0), /*hidden argument*/NULL);
		DateTime_t693205669  L_3;
		memset(&L_3, 0, sizeof(L_3));
		DateTime__ctor_m1100326092((&L_3), L_2, 2, /*hidden argument*/NULL);
		return L_3;
	}

IL_002a:
	{
		DateTime_t693205669  L_4 = DateTime_ToLocalTime_m1957689902((&___value0), /*hidden argument*/NULL);
		return L_4;
	}

IL_0032:
	{
		DateTime_t693205669  L_5 = ___value0;
		return L_5;
	}

IL_0034:
	{
		DateTime_t693205669  L_6 = ___value0;
		return L_6;
	}
}
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToUtcTime(System.DateTime)
extern "C"  DateTime_t693205669  DateTimeUtils_SwitchToUtcTime_m1060208122 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = DateTime_get_Kind_m1331920314((&___value0), /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_001c:
	{
		int64_t L_2 = DateTime_get_Ticks_m310281298((&___value0), /*hidden argument*/NULL);
		DateTime_t693205669  L_3;
		memset(&L_3, 0, sizeof(L_3));
		DateTime__ctor_m1100326092((&L_3), L_2, 1, /*hidden argument*/NULL);
		return L_3;
	}

IL_002a:
	{
		DateTime_t693205669  L_4 = ___value0;
		return L_4;
	}

IL_002c:
	{
		DateTime_t693205669  L_5 = DateTime_ToUniversalTime_m1815024752((&___value0), /*hidden argument*/NULL);
		return L_5;
	}

IL_0034:
	{
		DateTime_t693205669  L_6 = ___value0;
		return L_6;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m767905220 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ToUniversalTicks_m767905220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = DateTime_get_Kind_m1331920314((&___dateTime0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int64_t L_1 = DateTime_get_Ticks_m310281298((&___dateTime0), /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		DateTime_t693205669  L_2 = ___dateTime0;
		DateTime_t693205669  L_3 = ___dateTime0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_4 = DateTimeUtils_GetUtcOffset_m1751279733(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int64_t L_5 = DateTimeUtils_ToUniversalTicks_m651850560(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m651850560 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ToUniversalTicks_m651850560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = DateTime_get_Kind_m1331920314((&___dateTime0), /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		DateTime_t693205669  L_1 = ___dateTime0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_2 = ((DateTime_t693205669_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t693205669_il2cpp_TypeInfo_var))->get_MaxValue_2();
		bool L_3 = DateTime_op_Equality_m1867073872(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		DateTime_t693205669  L_4 = ___dateTime0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_5 = ((DateTime_t693205669_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t693205669_il2cpp_TypeInfo_var))->get_MinValue_3();
		bool L_6 = DateTime_op_Equality_m1867073872(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002c;
		}
	}

IL_0024:
	{
		int64_t L_7 = DateTime_get_Ticks_m310281298((&___dateTime0), /*hidden argument*/NULL);
		return L_7;
	}

IL_002c:
	{
		int64_t L_8 = DateTime_get_Ticks_m310281298((&___dateTime0), /*hidden argument*/NULL);
		int64_t L_9 = TimeSpan_get_Ticks_m2285358246((&___offset1), /*hidden argument*/NULL);
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_8, (int64_t)L_9));
		int64_t L_10 = V_0;
		if ((((int64_t)L_10) <= ((int64_t)((int64_t)3155378975999999999LL))))
		{
			goto IL_0052;
		}
	}
	{
		return ((int64_t)3155378975999999999LL);
	}

IL_0052:
	{
		int64_t L_11 = V_0;
		if ((((int64_t)L_11) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_005a;
		}
	}
	{
		return (((int64_t)((int64_t)0)));
	}

IL_005a:
	{
		int64_t L_12 = V_0;
		return L_12;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2461323250 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2461323250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t693205669  L_0 = ___dateTime0;
		TimeSpan_t3430258949  L_1 = ___offset1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int64_t L_2 = DateTimeUtils_ToUniversalTicks_m651850560(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		int64_t L_3 = DateTimeUtils_UniversialTicksToJavaScriptTicks_m1203972718(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2446514542 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2446514542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t693205669  L_0 = ___dateTime0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int64_t L_1 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2741966059(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2741966059 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, bool ___convertToUtc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2741966059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t G_B3_0 = 0;
	{
		bool L_0 = ___convertToUtc1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int64_t L_1 = DateTime_get_Ticks_m310281298((&___dateTime0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_000c:
	{
		DateTime_t693205669  L_2 = ___dateTime0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int64_t L_3 = DateTimeUtils_ToUniversalTicks_m767905220(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int64_t L_4 = DateTimeUtils_UniversialTicksToJavaScriptTicks_m1203972718(NULL /*static, unused*/, G_B3_0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::UniversialTicksToJavaScriptTicks(System.Int64)
extern "C"  int64_t DateTimeUtils_UniversialTicksToJavaScriptTicks_m1203972718 (RuntimeObject * __this /* static, unused */, int64_t ___universialTicks0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_UniversialTicksToJavaScriptTicks_m1203972718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___universialTicks0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int64_t L_1 = ((DateTimeUtils_t919483584_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t919483584_il2cpp_TypeInfo_var))->get_InitialJavaScriptDateTicks_0();
		return ((int64_t)((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_0, (int64_t)L_1))/(int64_t)(((int64_t)((int64_t)((int32_t)10000))))));
	}
}
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
extern "C"  DateTime_t693205669  DateTimeUtils_ConvertJavaScriptTicksToDateTime_m1592762056 (RuntimeObject * __this /* static, unused */, int64_t ___javaScriptTicks0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_ConvertJavaScriptTicksToDateTime_m1592762056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___javaScriptTicks0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int64_t L_1 = ((DateTimeUtils_t919483584_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t919483584_il2cpp_TypeInfo_var))->get_InitialJavaScriptDateTicks_0();
		DateTime_t693205669  L_2;
		memset(&L_2, 0, sizeof(L_2));
		DateTime__ctor_m1100326092((&L_2), ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_0, (int64_t)(((int64_t)((int64_t)((int32_t)10000)))))), (int64_t)L_1)), 1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeIso(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeIso_m2173901879 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___text0, int32_t ___dateTimeZoneHandling1, DateTime_t693205669 * ___dt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeIso_m2173901879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeParser_t1235213504  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DateTime_t693205669  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	TimeSpan_t3430258949  V_4;
	memset(&V_4, 0, sizeof(V_4));
	DateTime_t693205669  V_5;
	memset(&V_5, 0, sizeof(V_5));
	TimeSpan_t3430258949  V_6;
	memset(&V_6, 0, sizeof(V_6));
	TimeSpan_t3430258949  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTimeParser_t1235213504 ));
		CharU5BU5D_t1328083999* L_0 = StringReference_get_Chars_m1908699287((&___text0), /*hidden argument*/NULL);
		int32_t L_1 = StringReference_get_StartIndex_m1490521704((&___text0), /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m976735280((&___text0), /*hidden argument*/NULL);
		bool L_3 = DateTimeParser_Parse_m93898435((&V_0), L_0, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		DateTime_t693205669 * L_4 = ___dt2;
		il2cpp_codegen_initobj(L_4, sizeof(DateTime_t693205669 ));
		return (bool)0;
	}

IL_002f:
	{
		DateTimeParser_t1235213504  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_6 = DateTimeUtils_CreateDateTime_m618640832(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		DateTimeParser_t1235213504  L_7 = V_0;
		int32_t L_8 = L_7.get_Zone_9();
		V_3 = L_8;
		int32_t L_9 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_00f5;
			}
		}
	}
	{
		goto IL_0178;
	}

IL_0056:
	{
		int64_t L_10 = DateTime_get_Ticks_m310281298((&V_1), /*hidden argument*/NULL);
		DateTime__ctor_m1100326092((&V_1), L_10, 1, /*hidden argument*/NULL);
		goto IL_0178;
	}

IL_006a:
	{
		DateTimeParser_t1235213504  L_11 = V_0;
		int32_t L_12 = L_11.get_ZoneHour_7();
		DateTimeParser_t1235213504  L_13 = V_0;
		int32_t L_14 = L_13.get_ZoneMinute_8();
		TimeSpan__ctor_m1888018443((&V_4), L_12, L_14, 0, /*hidden argument*/NULL);
		int64_t L_15 = DateTime_get_Ticks_m310281298((&V_1), /*hidden argument*/NULL);
		int64_t L_16 = TimeSpan_get_Ticks_m2285358246((&V_4), /*hidden argument*/NULL);
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_15, (int64_t)L_16));
		int64_t L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_18 = ((DateTime_t693205669_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t693205669_il2cpp_TypeInfo_var))->get_MaxValue_2();
		V_5 = L_18;
		int64_t L_19 = DateTime_get_Ticks_m310281298((&V_5), /*hidden argument*/NULL);
		if ((((int64_t)L_17) > ((int64_t)L_19)))
		{
			goto IL_00b5;
		}
	}
	{
		int64_t L_20 = V_2;
		DateTime_t693205669  L_21;
		memset(&L_21, 0, sizeof(L_21));
		DateTime__ctor_m1100326092((&L_21), L_20, 1, /*hidden argument*/NULL);
		V_5 = L_21;
		DateTime_t693205669  L_22 = DateTime_ToLocalTime_m1957689902((&V_5), /*hidden argument*/NULL);
		V_1 = L_22;
		goto IL_0178;
	}

IL_00b5:
	{
		int64_t L_23 = V_2;
		DateTime_t693205669  L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_25 = DateTimeUtils_GetUtcOffset_m1751279733(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		int64_t L_26 = TimeSpan_get_Ticks_m2285358246((&V_6), /*hidden argument*/NULL);
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_23, (int64_t)L_26));
		int64_t L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_28 = ((DateTime_t693205669_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t693205669_il2cpp_TypeInfo_var))->get_MaxValue_2();
		V_5 = L_28;
		int64_t L_29 = DateTime_get_Ticks_m310281298((&V_5), /*hidden argument*/NULL);
		if ((((int64_t)L_27) <= ((int64_t)L_29)))
		{
			goto IL_00e7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_30 = ((DateTime_t693205669_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t693205669_il2cpp_TypeInfo_var))->get_MaxValue_2();
		V_5 = L_30;
		int64_t L_31 = DateTime_get_Ticks_m310281298((&V_5), /*hidden argument*/NULL);
		V_2 = L_31;
	}

IL_00e7:
	{
		int64_t L_32 = V_2;
		DateTime__ctor_m1100326092((&V_1), L_32, 2, /*hidden argument*/NULL);
		goto IL_0178;
	}

IL_00f5:
	{
		DateTimeParser_t1235213504  L_33 = V_0;
		int32_t L_34 = L_33.get_ZoneHour_7();
		DateTimeParser_t1235213504  L_35 = V_0;
		int32_t L_36 = L_35.get_ZoneMinute_8();
		TimeSpan__ctor_m1888018443((&V_7), L_34, L_36, 0, /*hidden argument*/NULL);
		int64_t L_37 = DateTime_get_Ticks_m310281298((&V_1), /*hidden argument*/NULL);
		int64_t L_38 = TimeSpan_get_Ticks_m2285358246((&V_7), /*hidden argument*/NULL);
		V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_37, (int64_t)L_38));
		int64_t L_39 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_40 = ((DateTime_t693205669_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t693205669_il2cpp_TypeInfo_var))->get_MinValue_3();
		V_5 = L_40;
		int64_t L_41 = DateTime_get_Ticks_m310281298((&V_5), /*hidden argument*/NULL);
		if ((((int64_t)L_39) < ((int64_t)L_41)))
		{
			goto IL_013d;
		}
	}
	{
		int64_t L_42 = V_2;
		DateTime_t693205669  L_43;
		memset(&L_43, 0, sizeof(L_43));
		DateTime__ctor_m1100326092((&L_43), L_42, 1, /*hidden argument*/NULL);
		V_5 = L_43;
		DateTime_t693205669  L_44 = DateTime_ToLocalTime_m1957689902((&V_5), /*hidden argument*/NULL);
		V_1 = L_44;
		goto IL_0178;
	}

IL_013d:
	{
		int64_t L_45 = V_2;
		DateTime_t693205669  L_46 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_47 = DateTimeUtils_GetUtcOffset_m1751279733(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		V_6 = L_47;
		int64_t L_48 = TimeSpan_get_Ticks_m2285358246((&V_6), /*hidden argument*/NULL);
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_45, (int64_t)L_48));
		int64_t L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_50 = ((DateTime_t693205669_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t693205669_il2cpp_TypeInfo_var))->get_MinValue_3();
		V_5 = L_50;
		int64_t L_51 = DateTime_get_Ticks_m310281298((&V_5), /*hidden argument*/NULL);
		if ((((int64_t)L_49) >= ((int64_t)L_51)))
		{
			goto IL_016f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_52 = ((DateTime_t693205669_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t693205669_il2cpp_TypeInfo_var))->get_MinValue_3();
		V_5 = L_52;
		int64_t L_53 = DateTime_get_Ticks_m310281298((&V_5), /*hidden argument*/NULL);
		V_2 = L_53;
	}

IL_016f:
	{
		int64_t L_54 = V_2;
		DateTime__ctor_m1100326092((&V_1), L_54, 2, /*hidden argument*/NULL);
	}

IL_0178:
	{
		DateTime_t693205669 * L_55 = ___dt2;
		DateTime_t693205669  L_56 = V_1;
		int32_t L_57 = ___dateTimeZoneHandling1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_58 = DateTimeUtils_EnsureDateTime_m1741856844(NULL /*static, unused*/, L_56, L_57, /*hidden argument*/NULL);
		*(DateTime_t693205669 *)L_55 = L_58;
		return (bool)1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetIso(Newtonsoft.Json.Utilities.StringReference,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetIso_m4276702460 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___text0, DateTimeOffset_t1362988906 * ___dt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeOffsetIso_m4276702460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeParser_t1235213504  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DateTime_t693205669  V_1;
	memset(&V_1, 0, sizeof(V_1));
	TimeSpan_t3430258949  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DateTimeParser_t1235213504 ));
		CharU5BU5D_t1328083999* L_0 = StringReference_get_Chars_m1908699287((&___text0), /*hidden argument*/NULL);
		int32_t L_1 = StringReference_get_StartIndex_m1490521704((&___text0), /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m976735280((&___text0), /*hidden argument*/NULL);
		bool L_3 = DateTimeParser_Parse_m93898435((&V_0), L_0, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		DateTimeOffset_t1362988906 * L_4 = ___dt1;
		il2cpp_codegen_initobj(L_4, sizeof(DateTimeOffset_t1362988906 ));
		return (bool)0;
	}

IL_002f:
	{
		DateTimeParser_t1235213504  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_6 = DateTimeUtils_CreateDateTime_m618640832(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		DateTimeParser_t1235213504  L_7 = V_0;
		int32_t L_8 = L_7.get_Zone_9();
		V_4 = L_8;
		int32_t L_9 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0055;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_0078;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_0055:
	{
		TimeSpan__ctor_m96381766((&V_2), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0060:
	{
		DateTimeParser_t1235213504  L_10 = V_0;
		int32_t L_11 = L_10.get_ZoneHour_7();
		DateTimeParser_t1235213504  L_12 = V_0;
		int32_t L_13 = L_12.get_ZoneMinute_8();
		TimeSpan__ctor_m1888018443((&V_2), ((-L_11)), ((-L_13)), 0, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0078:
	{
		DateTimeParser_t1235213504  L_14 = V_0;
		int32_t L_15 = L_14.get_ZoneHour_7();
		DateTimeParser_t1235213504  L_16 = V_0;
		int32_t L_17 = L_16.get_ZoneMinute_8();
		TimeSpan__ctor_m1888018443((&V_2), L_15, L_17, 0, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_008e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeZoneInfo_t436210607_il2cpp_TypeInfo_var);
		TimeZoneInfo_t436210607 * L_18 = TimeZoneInfo_get_Local_m194546780(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTime_t693205669  L_19 = V_1;
		NullCheck(L_18);
		TimeSpan_t3430258949  L_20 = TimeZoneInfo_GetUtcOffset_m3060553967(L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
	}

IL_009a:
	{
		int64_t L_21 = DateTime_get_Ticks_m310281298((&V_1), /*hidden argument*/NULL);
		int64_t L_22 = TimeSpan_get_Ticks_m2285358246((&V_2), /*hidden argument*/NULL);
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_21, (int64_t)L_22));
		int64_t L_23 = V_3;
		if ((((int64_t)L_23) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_00bb;
		}
	}
	{
		int64_t L_24 = V_3;
		if ((((int64_t)L_24) <= ((int64_t)((int64_t)3155378975999999999LL))))
		{
			goto IL_00c4;
		}
	}

IL_00bb:
	{
		DateTimeOffset_t1362988906 * L_25 = ___dt1;
		il2cpp_codegen_initobj(L_25, sizeof(DateTimeOffset_t1362988906 ));
		return (bool)0;
	}

IL_00c4:
	{
		DateTimeOffset_t1362988906 * L_26 = ___dt1;
		DateTime_t693205669  L_27 = V_1;
		TimeSpan_t3430258949  L_28 = V_2;
		DateTimeOffset_t1362988906  L_29;
		memset(&L_29, 0, sizeof(L_29));
		DateTimeOffset__ctor_m2870721395((&L_29), L_27, L_28, /*hidden argument*/NULL);
		*(DateTimeOffset_t1362988906 *)L_26 = L_29;
		return (bool)1;
	}
}
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::CreateDateTime(Newtonsoft.Json.Utilities.DateTimeParser)
extern "C"  DateTime_t693205669  DateTimeUtils_CreateDateTime_m618640832 (RuntimeObject * __this /* static, unused */, DateTimeParser_t1235213504  ___dateTimeParser0, const RuntimeMethod* method)
{
	bool V_0 = false;
	DateTime_t693205669  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		DateTimeParser_t1235213504  L_0 = ___dateTimeParser0;
		int32_t L_1 = L_0.get_Hour_3();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0016;
		}
	}
	{
		V_0 = (bool)1;
		(&___dateTimeParser0)->set_Hour_3(0);
		goto IL_0018;
	}

IL_0016:
	{
		V_0 = (bool)0;
	}

IL_0018:
	{
		DateTimeParser_t1235213504  L_2 = ___dateTimeParser0;
		int32_t L_3 = L_2.get_Year_0();
		DateTimeParser_t1235213504  L_4 = ___dateTimeParser0;
		int32_t L_5 = L_4.get_Month_1();
		DateTimeParser_t1235213504  L_6 = ___dateTimeParser0;
		int32_t L_7 = L_6.get_Day_2();
		DateTimeParser_t1235213504  L_8 = ___dateTimeParser0;
		int32_t L_9 = L_8.get_Hour_3();
		DateTimeParser_t1235213504  L_10 = ___dateTimeParser0;
		int32_t L_11 = L_10.get_Minute_4();
		DateTimeParser_t1235213504  L_12 = ___dateTimeParser0;
		int32_t L_13 = L_12.get_Second_5();
		DateTime__ctor_m3153923094((&V_1), L_3, L_5, L_7, L_9, L_11, L_13, /*hidden argument*/NULL);
		DateTimeParser_t1235213504  L_14 = ___dateTimeParser0;
		int32_t L_15 = L_14.get_Fraction_6();
		DateTime_t693205669  L_16 = DateTime_AddTicks_m3057746860((&V_1), (((int64_t)((int64_t)L_15))), /*hidden argument*/NULL);
		V_1 = L_16;
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_0066;
		}
	}
	{
		DateTime_t693205669  L_18 = DateTime_AddDays_m1926530883((&V_1), (1.0), /*hidden argument*/NULL);
		V_1 = L_18;
	}

IL_0066:
	{
		DateTime_t693205669  L_19 = V_1;
		return L_19;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTime(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTime_m3365159398 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___s0, int32_t ___dateTimeZoneHandling1, String_t* ___dateFormatString2, CultureInfo_t3500843524 * ___culture3, DateTime_t693205669 * ___dt4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTime_m3365159398_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = StringReference_get_Length_m976735280((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_1 = StringReference_get_StartIndex_m1490521704((&___s0), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Il2CppChar L_3 = StringReference_get_Item_m395816280((&___s0), L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_4 = StringReference_get_Length_m976735280((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)9))))
		{
			goto IL_0094;
		}
	}
	{
		StringReference_t1873850304  L_5 = ___s0;
		bool L_6 = StringReferenceExtensions_StartsWith_m2119043723(NULL /*static, unused*/, L_5, _stringLiteral3824785535, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0094;
		}
	}
	{
		StringReference_t1873850304  L_7 = ___s0;
		bool L_8 = StringReferenceExtensions_EndsWith_m2892765720(NULL /*static, unused*/, L_7, _stringLiteral51790590, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0094;
		}
	}
	{
		StringReference_t1873850304  L_9 = ___s0;
		int32_t L_10 = ___dateTimeZoneHandling1;
		DateTime_t693205669 * L_11 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_12 = DateTimeUtils_TryParseDateTimeMicrosoft_m3235248780(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		return (bool)1;
	}

IL_0053:
	{
		int32_t L_13 = StringReference_get_Length_m976735280((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)19))))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_14 = StringReference_get_Length_m976735280((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_14) > ((int32_t)((int32_t)40))))
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_15 = V_0;
		Il2CppChar L_16 = StringReference_get_Item_m395816280((&___s0), L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_17 = Char_IsDigit_m751559221(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_18 = V_0;
		Il2CppChar L_19 = StringReference_get_Item_m395816280((&___s0), ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0094;
		}
	}
	{
		StringReference_t1873850304  L_20 = ___s0;
		int32_t L_21 = ___dateTimeZoneHandling1;
		DateTime_t693205669 * L_22 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_23 = DateTimeUtils_TryParseDateTimeIso_m2173901879(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		return (bool)1;
	}

IL_0094:
	{
		String_t* L_24 = ___dateFormatString2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_26 = StringReference_ToString_m2319348590((&___s0), /*hidden argument*/NULL);
		int32_t L_27 = ___dateTimeZoneHandling1;
		String_t* L_28 = ___dateFormatString2;
		CultureInfo_t3500843524 * L_29 = ___culture3;
		DateTime_t693205669 * L_30 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_31 = DateTimeUtils_TryParseDateTimeExact_m756786128(NULL /*static, unused*/, L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00b7;
		}
	}
	{
		return (bool)1;
	}

IL_00b7:
	{
		DateTime_t693205669 * L_32 = ___dt4;
		il2cpp_codegen_initobj(L_32, sizeof(DateTime_t693205669 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTime(System.String,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTime_m4134498809 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___dateTimeZoneHandling1, String_t* ___dateFormatString2, CultureInfo_t3500843524 * ___culture3, DateTime_t693205669 * ___dt4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTime_m4134498809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1606060069(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		Il2CppChar L_3 = String_get_Chars_m4230566705(L_2, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_4 = ___s0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m1606060069(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		bool L_7 = String_StartsWith_m46695182(L_6, _stringLiteral3824785535, 4, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_8 = ___s0;
		NullCheck(L_8);
		bool L_9 = String_EndsWith_m4071916069(L_8, _stringLiteral51790590, 4, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		CharU5BU5D_t1328083999* L_11 = String_ToCharArray_m870309954(L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___s0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m1606060069(L_12, /*hidden argument*/NULL);
		StringReference_t1873850304  L_14;
		memset(&L_14, 0, sizeof(L_14));
		StringReference__ctor_m814259320((&L_14), L_11, 0, L_13, /*hidden argument*/NULL);
		int32_t L_15 = ___dateTimeZoneHandling1;
		DateTime_t693205669 * L_16 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_17 = DateTimeUtils_TryParseDateTimeMicrosoft_m3235248780(NULL /*static, unused*/, L_14, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00be;
		}
	}
	{
		return (bool)1;
	}

IL_0061:
	{
		String_t* L_18 = ___s0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m1606060069(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)19))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_20 = ___s0;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1606060069(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) > ((int32_t)((int32_t)40))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_22 = ___s0;
		NullCheck(L_22);
		Il2CppChar L_23 = String_get_Chars_m4230566705(L_22, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_24 = Char_IsDigit_m751559221(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_25 = ___s0;
		NullCheck(L_25);
		Il2CppChar L_26 = String_get_Chars_m4230566705(L_25, ((int32_t)10), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_27 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_28 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTime_t693205669 * L_29 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		bool L_30 = DateTime_TryParseExact_m1931192990(NULL /*static, unused*/, L_27, _stringLiteral347261663, L_28, ((int32_t)128), L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00be;
		}
	}
	{
		DateTime_t693205669 * L_31 = ___dt4;
		DateTime_t693205669 * L_32 = ___dt4;
		int32_t L_33 = ___dateTimeZoneHandling1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_34 = DateTimeUtils_EnsureDateTime_m1741856844(NULL /*static, unused*/, (*(DateTime_t693205669 *)L_32), L_33, /*hidden argument*/NULL);
		*(DateTime_t693205669 *)L_31 = L_34;
		return (bool)1;
	}

IL_00be:
	{
		String_t* L_35 = ___dateFormatString2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_00d5;
		}
	}
	{
		String_t* L_37 = ___s0;
		int32_t L_38 = ___dateTimeZoneHandling1;
		String_t* L_39 = ___dateFormatString2;
		CultureInfo_t3500843524 * L_40 = ___culture3;
		DateTime_t693205669 * L_41 = ___dt4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_42 = DateTimeUtils_TryParseDateTimeExact_m756786128(NULL /*static, unused*/, L_37, L_38, L_39, L_40, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_00d5;
		}
	}
	{
		return (bool)1;
	}

IL_00d5:
	{
		DateTime_t693205669 * L_43 = ___dt4;
		il2cpp_codegen_initobj(L_43, sizeof(DateTime_t693205669 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffset(Newtonsoft.Json.Utilities.StringReference,System.String,System.Globalization.CultureInfo,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffset_m1459894121 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___s0, String_t* ___dateFormatString1, CultureInfo_t3500843524 * ___culture2, DateTimeOffset_t1362988906 * ___dt3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeOffset_m1459894121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = StringReference_get_Length_m976735280((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00b1;
		}
	}
	{
		int32_t L_1 = StringReference_get_StartIndex_m1490521704((&___s0), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Il2CppChar L_3 = StringReference_get_Item_m395816280((&___s0), L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_4 = StringReference_get_Length_m976735280((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)9))))
		{
			goto IL_0090;
		}
	}
	{
		StringReference_t1873850304  L_5 = ___s0;
		bool L_6 = StringReferenceExtensions_StartsWith_m2119043723(NULL /*static, unused*/, L_5, _stringLiteral3824785535, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0090;
		}
	}
	{
		StringReference_t1873850304  L_7 = ___s0;
		bool L_8 = StringReferenceExtensions_EndsWith_m2892765720(NULL /*static, unused*/, L_7, _stringLiteral51790590, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0090;
		}
	}
	{
		StringReference_t1873850304  L_9 = ___s0;
		DateTimeOffset_t1362988906 * L_10 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_11 = DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m660041233(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_12 = StringReference_get_Length_m976735280((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)19))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_13 = StringReference_get_Length_m976735280((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_13) > ((int32_t)((int32_t)40))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_14 = V_0;
		Il2CppChar L_15 = StringReference_get_Item_m395816280((&___s0), L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_16 = Char_IsDigit_m751559221(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_17 = V_0;
		Il2CppChar L_18 = StringReference_get_Item_m395816280((&___s0), ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)10))), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0090;
		}
	}
	{
		StringReference_t1873850304  L_19 = ___s0;
		DateTimeOffset_t1362988906 * L_20 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_21 = DateTimeUtils_TryParseDateTimeOffsetIso_m4276702460(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0090;
		}
	}
	{
		return (bool)1;
	}

IL_0090:
	{
		String_t* L_22 = ___dateFormatString1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_24 = StringReference_ToString_m2319348590((&___s0), /*hidden argument*/NULL);
		String_t* L_25 = ___dateFormatString1;
		CultureInfo_t3500843524 * L_26 = ___culture2;
		DateTimeOffset_t1362988906 * L_27 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_28 = DateTimeUtils_TryParseDateTimeOffsetExact_m2570960041(NULL /*static, unused*/, L_24, L_25, L_26, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00b1;
		}
	}
	{
		return (bool)1;
	}

IL_00b1:
	{
		DateTimeOffset_t1362988906 * L_29 = ___dt3;
		il2cpp_codegen_initobj(L_29, sizeof(DateTimeOffset_t1362988906 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffset(System.String,System.String,System.Globalization.CultureInfo,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffset_m3282624704 (RuntimeObject * __this /* static, unused */, String_t* ___s0, String_t* ___dateFormatString1, CultureInfo_t3500843524 * ___culture2, DateTimeOffset_t1362988906 * ___dt3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeOffset_m3282624704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___s0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1606060069(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		Il2CppChar L_3 = String_get_Chars_m4230566705(L_2, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_4 = ___s0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m1606060069(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		bool L_7 = String_StartsWith_m46695182(L_6, _stringLiteral3824785535, 4, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_8 = ___s0;
		NullCheck(L_8);
		bool L_9 = String_EndsWith_m4071916069(L_8, _stringLiteral51790590, 4, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_10 = ___s0;
		NullCheck(L_10);
		CharU5BU5D_t1328083999* L_11 = String_ToCharArray_m870309954(L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___s0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m1606060069(L_12, /*hidden argument*/NULL);
		StringReference_t1873850304  L_14;
		memset(&L_14, 0, sizeof(L_14));
		StringReference__ctor_m814259320((&L_14), L_11, 0, L_13, /*hidden argument*/NULL);
		DateTimeOffset_t1362988906 * L_15 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_16 = DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m660041233(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00c1;
		}
	}
	{
		return (bool)1;
	}

IL_005f:
	{
		String_t* L_17 = ___s0;
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m1606060069(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)19))))
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_19 = ___s0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m1606060069(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) > ((int32_t)((int32_t)40))))
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_21 = ___s0;
		NullCheck(L_21);
		Il2CppChar L_22 = String_get_Chars_m4230566705(L_21, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_23 = Char_IsDigit_m751559221(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_24 = ___s0;
		NullCheck(L_24);
		Il2CppChar L_25 = String_get_Chars_m4230566705(L_24, ((int32_t)10), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_26 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_27 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTimeOffset_t1362988906 * L_28 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t1362988906_il2cpp_TypeInfo_var);
		bool L_29 = DateTimeOffset_TryParseExact_m1231270494(NULL /*static, unused*/, L_26, _stringLiteral347261663, L_27, ((int32_t)128), L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_30 = ___s0;
		NullCheck(L_30);
		CharU5BU5D_t1328083999* L_31 = String_ToCharArray_m870309954(L_30, /*hidden argument*/NULL);
		String_t* L_32 = ___s0;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_m1606060069(L_32, /*hidden argument*/NULL);
		StringReference_t1873850304  L_34;
		memset(&L_34, 0, sizeof(L_34));
		StringReference__ctor_m814259320((&L_34), L_31, 0, L_33, /*hidden argument*/NULL);
		DateTimeOffset_t1362988906 * L_35 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_36 = DateTimeUtils_TryParseDateTimeOffsetIso_m4276702460(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00c1;
		}
	}
	{
		return (bool)1;
	}

IL_00c1:
	{
		String_t* L_37 = ___dateFormatString1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_38 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_00d6;
		}
	}
	{
		String_t* L_39 = ___s0;
		String_t* L_40 = ___dateFormatString1;
		CultureInfo_t3500843524 * L_41 = ___culture2;
		DateTimeOffset_t1362988906 * L_42 = ___dt3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_43 = DateTimeUtils_TryParseDateTimeOffsetExact_m2570960041(NULL /*static, unused*/, L_39, L_40, L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_00d6;
		}
	}
	{
		return (bool)1;
	}

IL_00d6:
	{
		DateTimeOffset_t1362988906 * L_44 = ___dt3;
		il2cpp_codegen_initobj(L_44, sizeof(DateTimeOffset_t1362988906 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseMicrosoftDate(Newtonsoft.Json.Utilities.StringReference,System.Int64&,System.TimeSpan&,System.DateTimeKind&)
extern "C"  bool DateTimeUtils_TryParseMicrosoftDate_m4065592264 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___text0, int64_t* ___ticks1, TimeSpan_t3430258949 * ___offset2, int32_t* ___kind3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseMicrosoftDate_m4065592264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___kind3;
		*((int32_t*)(L_0)) = (int32_t)1;
		StringReference_t1873850304  L_1 = ___text0;
		int32_t L_2 = StringReference_get_Length_m976735280((&___text0), /*hidden argument*/NULL);
		int32_t L_3 = StringReferenceExtensions_IndexOf_m2363345508(NULL /*static, unused*/, L_1, ((int32_t)43), 7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)8)), /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002d;
		}
	}
	{
		StringReference_t1873850304  L_5 = ___text0;
		int32_t L_6 = StringReference_get_Length_m976735280((&___text0), /*hidden argument*/NULL);
		int32_t L_7 = StringReferenceExtensions_IndexOf_m2363345508(NULL /*static, unused*/, L_5, ((int32_t)45), 7, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)8)), /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t* L_9 = ___kind3;
		*((int32_t*)(L_9)) = (int32_t)2;
		StringReference_t1873850304  L_10 = ___text0;
		int32_t L_11 = V_0;
		int32_t L_12 = StringReference_get_StartIndex_m1490521704((&___text0), /*hidden argument*/NULL);
		TimeSpan_t3430258949 * L_13 = ___offset2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_14 = DateTimeUtils_TryReadOffset_m1024077575(NULL /*static, unused*/, L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)), L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0061;
		}
	}
	{
		int64_t* L_15 = ___ticks1;
		*((int64_t*)(L_15)) = (int64_t)(((int64_t)((int64_t)0)));
		return (bool)0;
	}

IL_004c:
	{
		TimeSpan_t3430258949 * L_16 = ___offset2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t3430258949_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_17 = ((TimeSpan_t3430258949_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t3430258949_il2cpp_TypeInfo_var))->get_Zero_2();
		*(TimeSpan_t3430258949 *)L_16 = L_17;
		int32_t L_18 = StringReference_get_Length_m976735280((&___text0), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)2));
	}

IL_0061:
	{
		CharU5BU5D_t1328083999* L_19 = StringReference_get_Chars_m1908699287((&___text0), /*hidden argument*/NULL);
		int32_t L_20 = StringReference_get_StartIndex_m1490521704((&___text0), /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		int64_t* L_22 = ___ticks1;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2984810590_il2cpp_TypeInfo_var);
		int32_t L_23 = ConvertUtils_Int64TryParse_m1460425539(NULL /*static, unused*/, L_19, ((int32_t)il2cpp_codegen_add((int32_t)6, (int32_t)L_20)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)6)), L_22, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_23) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeMicrosoft(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeMicrosoft_m3235248780 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___text0, int32_t ___dateTimeZoneHandling1, DateTime_t693205669 * ___dt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeMicrosoft_m3235248780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	TimeSpan_t3430258949  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	DateTime_t693205669  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		StringReference_t1873850304  L_0 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_1 = DateTimeUtils_TryParseMicrosoftDate_m4065592264(NULL /*static, unused*/, L_0, (&V_0), (&V_1), (&V_2), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		DateTime_t693205669 * L_2 = ___dt2;
		il2cpp_codegen_initobj(L_2, sizeof(DateTime_t693205669 ));
		return (bool)0;
	}

IL_0017:
	{
		int64_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_4 = DateTimeUtils_ConvertJavaScriptTicksToDateTime_m1592762056(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_004b;
	}

IL_0027:
	{
		DateTime_t693205669 * L_7 = ___dt2;
		DateTime_t693205669  L_8 = DateTime_ToLocalTime_m1957689902((&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_9 = DateTime_SpecifyKind_m1282445794(NULL /*static, unused*/, L_8, 0, /*hidden argument*/NULL);
		*(DateTime_t693205669 *)L_7 = L_9;
		goto IL_0052;
	}

IL_003c:
	{
		DateTime_t693205669 * L_10 = ___dt2;
		DateTime_t693205669  L_11 = DateTime_ToLocalTime_m1957689902((&V_3), /*hidden argument*/NULL);
		*(DateTime_t693205669 *)L_10 = L_11;
		goto IL_0052;
	}

IL_004b:
	{
		DateTime_t693205669 * L_12 = ___dt2;
		DateTime_t693205669  L_13 = V_3;
		*(DateTime_t693205669 *)L_12 = L_13;
	}

IL_0052:
	{
		DateTime_t693205669 * L_14 = ___dt2;
		DateTime_t693205669 * L_15 = ___dt2;
		int32_t L_16 = ___dateTimeZoneHandling1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_17 = DateTimeUtils_EnsureDateTime_m1741856844(NULL /*static, unused*/, (*(DateTime_t693205669 *)L_15), L_16, /*hidden argument*/NULL);
		*(DateTime_t693205669 *)L_14 = L_17;
		return (bool)1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeExact(System.String,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeExact_m756786128 (RuntimeObject * __this /* static, unused */, String_t* ___text0, int32_t ___dateTimeZoneHandling1, String_t* ___dateFormatString2, CultureInfo_t3500843524 * ___culture3, DateTime_t693205669 * ___dt4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeExact_m756786128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t693205669  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		String_t* L_1 = ___dateFormatString2;
		CultureInfo_t3500843524 * L_2 = ___culture3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		bool L_3 = DateTime_TryParseExact_m1931192990(NULL /*static, unused*/, L_0, L_1, L_2, ((int32_t)128), (&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		DateTime_t693205669  L_4 = V_0;
		int32_t L_5 = ___dateTimeZoneHandling1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_6 = DateTimeUtils_EnsureDateTime_m1741856844(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		DateTime_t693205669 * L_7 = ___dt4;
		DateTime_t693205669  L_8 = V_0;
		*(DateTime_t693205669 *)L_7 = L_8;
		return (bool)1;
	}

IL_0023:
	{
		DateTime_t693205669 * L_9 = ___dt4;
		il2cpp_codegen_initobj(L_9, sizeof(DateTime_t693205669 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetMicrosoft(Newtonsoft.Json.Utilities.StringReference,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m660041233 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___text0, DateTimeOffset_t1362988906 * ___dt1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m660041233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	TimeSpan_t3430258949  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	DateTime_t693205669  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DateTime_t693205669  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		StringReference_t1873850304  L_0 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		bool L_1 = DateTimeUtils_TryParseMicrosoftDate_m4065592264(NULL /*static, unused*/, L_0, (&V_0), (&V_1), (&V_2), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		DateTimeOffset_t1362988906 * L_2 = ___dt1;
		il2cpp_codegen_initobj((&V_4), sizeof(DateTime_t693205669 ));
		DateTime_t693205669  L_3 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t1362988906_il2cpp_TypeInfo_var);
		DateTimeOffset_t1362988906  L_4 = DateTimeOffset_op_Implicit_m3072392326(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		*(DateTimeOffset_t1362988906 *)L_2 = L_4;
		return (bool)0;
	}

IL_0025:
	{
		int64_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_6 = DateTimeUtils_ConvertJavaScriptTicksToDateTime_m1592762056(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		DateTimeOffset_t1362988906 * L_7 = ___dt1;
		TimeSpan_t3430258949  L_8 = V_1;
		DateTime_t693205669  L_9 = DateTime_Add_m4237489122((&V_3), L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		int64_t L_10 = DateTime_get_Ticks_m310281298((&V_4), /*hidden argument*/NULL);
		TimeSpan_t3430258949  L_11 = V_1;
		DateTimeOffset_t1362988906  L_12;
		memset(&L_12, 0, sizeof(L_12));
		DateTimeOffset__ctor_m2110004919((&L_12), L_10, L_11, /*hidden argument*/NULL);
		*(DateTimeOffset_t1362988906 *)L_7 = L_12;
		return (bool)1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetExact(System.String,System.String,System.Globalization.CultureInfo,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetExact_m2570960041 (RuntimeObject * __this /* static, unused */, String_t* ___text0, String_t* ___dateFormatString1, CultureInfo_t3500843524 * ___culture2, DateTimeOffset_t1362988906 * ___dt3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryParseDateTimeOffsetExact_m2570960041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t1362988906  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		String_t* L_1 = ___dateFormatString1;
		CultureInfo_t3500843524 * L_2 = ___culture2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t1362988906_il2cpp_TypeInfo_var);
		bool L_3 = DateTimeOffset_TryParseExact_m1231270494(NULL /*static, unused*/, L_0, L_1, L_2, ((int32_t)128), (&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		DateTimeOffset_t1362988906 * L_4 = ___dt3;
		DateTimeOffset_t1362988906  L_5 = V_0;
		*(DateTimeOffset_t1362988906 *)L_4 = L_5;
		return (bool)1;
	}

IL_001a:
	{
		DateTimeOffset_t1362988906 * L_6 = ___dt3;
		il2cpp_codegen_initobj(L_6, sizeof(DateTimeOffset_t1362988906 ));
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryReadOffset(Newtonsoft.Json.Utilities.StringReference,System.Int32,System.TimeSpan&)
extern "C"  bool DateTimeUtils_TryReadOffset_m1024077575 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___offsetText0, int32_t ___startIndex1, TimeSpan_t3430258949 * ___offset2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_TryReadOffset_m1024077575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___startIndex1;
		Il2CppChar L_1 = StringReference_get_Item_m395816280((&___offsetText0), L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)45)))? 1 : 0);
		CharU5BU5D_t1328083999* L_2 = StringReference_get_Chars_m1908699287((&___offsetText0), /*hidden argument*/NULL);
		int32_t L_3 = ___startIndex1;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2984810590_il2cpp_TypeInfo_var);
		int32_t L_4 = ConvertUtils_Int32TryParse_m4283984055(NULL /*static, unused*/, L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), 2, (&V_1), /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		TimeSpan_t3430258949 * L_5 = ___offset2;
		il2cpp_codegen_initobj(L_5, sizeof(TimeSpan_t3430258949 ));
		return (bool)0;
	}

IL_002b:
	{
		V_2 = 0;
		int32_t L_6 = StringReference_get_Length_m976735280((&___offsetText0), /*hidden argument*/NULL);
		int32_t L_7 = ___startIndex1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7))) <= ((int32_t)5)))
		{
			goto IL_0057;
		}
	}
	{
		CharU5BU5D_t1328083999* L_8 = StringReference_get_Chars_m1908699287((&___offsetText0), /*hidden argument*/NULL);
		int32_t L_9 = ___startIndex1;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2984810590_il2cpp_TypeInfo_var);
		int32_t L_10 = ConvertUtils_Int32TryParse_m4283984055(NULL /*static, unused*/, L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)3)), 2, (&V_2), /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0057;
		}
	}
	{
		TimeSpan_t3430258949 * L_11 = ___offset2;
		il2cpp_codegen_initobj(L_11, sizeof(TimeSpan_t3430258949 ));
		return (bool)0;
	}

IL_0057:
	{
		TimeSpan_t3430258949 * L_12 = ___offset2;
		int32_t L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t3430258949_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_14 = TimeSpan_FromHours_m2521548378(NULL /*static, unused*/, (((double)((double)L_13))), /*hidden argument*/NULL);
		int32_t L_15 = V_2;
		TimeSpan_t3430258949  L_16 = TimeSpan_FromMinutes_m1997633268(NULL /*static, unused*/, (((double)((double)L_15))), /*hidden argument*/NULL);
		TimeSpan_t3430258949  L_17 = TimeSpan_op_Addition_m3421801803(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		*(TimeSpan_t3430258949 *)L_12 = L_17;
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_007f;
		}
	}
	{
		TimeSpan_t3430258949 * L_19 = ___offset2;
		TimeSpan_t3430258949 * L_20 = ___offset2;
		TimeSpan_t3430258949  L_21 = TimeSpan_Negate_m4198463235(L_20, /*hidden argument*/NULL);
		*(TimeSpan_t3430258949 *)L_19 = L_21;
	}

IL_007f:
	{
		return (bool)1;
	}
}
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeString(System.IO.TextWriter,System.DateTime,Newtonsoft.Json.DateFormatHandling,System.String,System.Globalization.CultureInfo)
extern "C"  void DateTimeUtils_WriteDateTimeString_m1435395168 (RuntimeObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, DateTime_t693205669  ___value1, int32_t ___format2, String_t* ___formatString3, CultureInfo_t3500843524 * ___culture4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_WriteDateTimeString_m1435395168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t1328083999* V_0 = NULL;
	int32_t V_1 = 0;
	Nullable_1_t1693325264  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		String_t* L_0 = ___formatString3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		V_0 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64)));
		CharU5BU5D_t1328083999* L_2 = V_0;
		DateTime_t693205669  L_3 = ___value1;
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t1693325264 ));
		Nullable_1_t1693325264  L_4 = V_2;
		int32_t L_5 = DateTime_get_Kind_m1331920314((&___value1), /*hidden argument*/NULL);
		int32_t L_6 = ___format2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int32_t L_7 = DateTimeUtils_WriteDateTimeString_m3706347442(NULL /*static, unused*/, L_2, 0, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		TextWriter_t4027217640 * L_8 = ___writer0;
		CharU5BU5D_t1328083999* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		VirtActionInvoker3< CharU5BU5D_t1328083999*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		return;
	}

IL_0034:
	{
		TextWriter_t4027217640 * L_11 = ___writer0;
		String_t* L_12 = ___formatString3;
		CultureInfo_t3500843524 * L_13 = ___culture4;
		String_t* L_14 = DateTime_ToString_m2276663647((&___value1), L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_14);
		return;
	}
}
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeString(System.Char[],System.Int32,System.DateTime,System.Nullable`1<System.TimeSpan>,System.DateTimeKind,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeString_m3706347442 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, DateTime_t693205669  ___value2, Nullable_1_t1693325264  ___offset3, int32_t ___kind4, int32_t ___format5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_WriteDateTimeString_m3706347442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimeSpan_t3430258949  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int64_t V_2 = 0;
	String_t* V_3 = NULL;
	Nullable_1_t1693325264  V_4;
	memset(&V_4, 0, sizeof(V_4));
	TimeSpan_t3430258949  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	int32_t G_B16_0 = 0;
	CharU5BU5D_t1328083999* G_B16_1 = NULL;
	int32_t G_B15_0 = 0;
	CharU5BU5D_t1328083999* G_B15_1 = NULL;
	TimeSpan_t3430258949  G_B17_0;
	memset(&G_B17_0, 0, sizeof(G_B17_0));
	int32_t G_B17_1 = 0;
	CharU5BU5D_t1328083999* G_B17_2 = NULL;
	{
		int32_t L_0 = ___start1;
		V_0 = L_0;
		int32_t L_1 = ___format5;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_00b6;
		}
	}
	{
		Nullable_1_t1693325264  L_2 = ___offset3;
		V_4 = L_2;
		bool L_3 = Nullable_1_get_HasValue_m3663286555((&V_4), /*hidden argument*/Nullable_1_get_HasValue_m3663286555_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		DateTime_t693205669  L_4 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_5 = DateTimeUtils_GetUtcOffset_m1751279733(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B4_0 = L_5;
		goto IL_0025;
	}

IL_001e:
	{
		TimeSpan_t3430258949  L_6 = Nullable_1_GetValueOrDefault_m3155916728((&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m3155916728_RuntimeMethod_var);
		G_B4_0 = L_6;
	}

IL_0025:
	{
		V_1 = G_B4_0;
		DateTime_t693205669  L_7 = ___value2;
		TimeSpan_t3430258949  L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int64_t L_9 = DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2461323250(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		CharU5BU5D_t1328083999* L_10 = ___chars0;
		int32_t L_11 = V_0;
		NullCheck(_stringLiteral2804007655);
		String_CopyTo_m3397208344(_stringLiteral2804007655, 0, L_10, L_11, 7, /*hidden argument*/NULL);
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)7));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_13 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = Int64_ToString_m1275187741((&V_2), L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		String_t* L_15 = V_3;
		CharU5BU5D_t1328083999* L_16 = ___chars0;
		int32_t L_17 = V_0;
		String_t* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m1606060069(L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_CopyTo_m3397208344(L_15, 0, L_16, L_17, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_0;
		String_t* L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m1606060069(L_21, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_22));
		int32_t L_23 = ___kind4;
		if (!L_23)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_24 = ___kind4;
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_0097;
		}
	}
	{
		goto IL_00a2;
	}

IL_0070:
	{
		DateTime_t693205669  L_25 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_26 = ((DateTime_t693205669_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t693205669_il2cpp_TypeInfo_var))->get_MaxValue_2();
		bool L_27 = DateTime_op_Inequality_m1607380213(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00a2;
		}
	}
	{
		DateTime_t693205669  L_28 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_29 = ((DateTime_t693205669_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t693205669_il2cpp_TypeInfo_var))->get_MinValue_3();
		bool L_30 = DateTime_op_Inequality_m1607380213(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00a2;
		}
	}
	{
		CharU5BU5D_t1328083999* L_31 = ___chars0;
		int32_t L_32 = V_0;
		TimeSpan_t3430258949  L_33 = V_1;
		int32_t L_34 = ___format5;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int32_t L_35 = DateTimeUtils_WriteDateTimeOffset_m1618693877(NULL /*static, unused*/, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		goto IL_00a2;
	}

IL_0097:
	{
		CharU5BU5D_t1328083999* L_36 = ___chars0;
		int32_t L_37 = V_0;
		TimeSpan_t3430258949  L_38 = V_1;
		int32_t L_39 = ___format5;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int32_t L_40 = DateTimeUtils_WriteDateTimeOffset_m1618693877(NULL /*static, unused*/, L_36, L_37, L_38, L_39, /*hidden argument*/NULL);
		V_0 = L_40;
	}

IL_00a2:
	{
		CharU5BU5D_t1328083999* L_41 = ___chars0;
		int32_t L_42 = V_0;
		NullCheck(_stringLiteral2094097760);
		String_CopyTo_m3397208344(_stringLiteral2094097760, 0, L_41, L_42, 3, /*hidden argument*/NULL);
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)3));
		goto IL_00f9;
	}

IL_00b6:
	{
		CharU5BU5D_t1328083999* L_44 = ___chars0;
		int32_t L_45 = V_0;
		DateTime_t693205669  L_46 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int32_t L_47 = DateTimeUtils_WriteDefaultIsoDate_m2512864408(NULL /*static, unused*/, L_44, L_45, L_46, /*hidden argument*/NULL);
		V_0 = L_47;
		int32_t L_48 = ___kind4;
		if ((((int32_t)L_48) == ((int32_t)1)))
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_49 = ___kind4;
		if ((!(((uint32_t)L_49) == ((uint32_t)2))))
		{
			goto IL_00f9;
		}
	}
	{
		CharU5BU5D_t1328083999* L_50 = ___chars0;
		int32_t L_51 = V_0;
		Nullable_1_t1693325264  L_52 = ___offset3;
		V_4 = L_52;
		bool L_53 = Nullable_1_get_HasValue_m3663286555((&V_4), /*hidden argument*/Nullable_1_get_HasValue_m3663286555_RuntimeMethod_var);
		G_B15_0 = L_51;
		G_B15_1 = L_50;
		if (L_53)
		{
			G_B16_0 = L_51;
			G_B16_1 = L_50;
			goto IL_00df;
		}
	}
	{
		DateTime_t693205669  L_54 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		TimeSpan_t3430258949  L_55 = DateTimeUtils_GetUtcOffset_m1751279733(NULL /*static, unused*/, L_54, /*hidden argument*/NULL);
		G_B17_0 = L_55;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_00e6;
	}

IL_00df:
	{
		TimeSpan_t3430258949  L_56 = Nullable_1_GetValueOrDefault_m3155916728((&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m3155916728_RuntimeMethod_var);
		G_B17_0 = L_56;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_00e6:
	{
		int32_t L_57 = ___format5;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int32_t L_58 = DateTimeUtils_WriteDateTimeOffset_m1618693877(NULL /*static, unused*/, G_B17_2, G_B17_1, G_B17_0, L_57, /*hidden argument*/NULL);
		V_0 = L_58;
		goto IL_00f9;
	}

IL_00f0:
	{
		CharU5BU5D_t1328083999* L_59 = ___chars0;
		int32_t L_60 = V_0;
		int32_t L_61 = L_60;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (Il2CppChar)((int32_t)90));
	}

IL_00f9:
	{
		int32_t L_62 = V_0;
		return L_62;
	}
}
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDefaultIsoDate(System.Char[],System.Int32,System.DateTime)
extern "C"  int32_t DateTimeUtils_WriteDefaultIsoDate_m2512864408 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, DateTime_t693205669  ___dt2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_WriteDefaultIsoDate_m2512864408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		V_0 = ((int32_t)19);
		DateTime_t693205669  L_0 = ___dt2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTimeUtils_GetDateValues_m2622263554(NULL /*static, unused*/, L_0, (&V_1), (&V_2), (&V_3), /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_1 = ___chars0;
		int32_t L_2 = ___start1;
		int32_t L_3 = V_1;
		DateTimeUtils_CopyIntToCharArray_m161915955(NULL /*static, unused*/, L_1, L_2, L_3, 4, /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_4 = ___chars0;
		int32_t L_5 = ___start1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)4))), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t1328083999* L_6 = ___chars0;
		int32_t L_7 = ___start1;
		int32_t L_8 = V_2;
		DateTimeUtils_CopyIntToCharArray_m161915955(NULL /*static, unused*/, L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)5)), L_8, 2, /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_9 = ___chars0;
		int32_t L_10 = ___start1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)7))), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t1328083999* L_11 = ___chars0;
		int32_t L_12 = ___start1;
		int32_t L_13 = V_3;
		DateTimeUtils_CopyIntToCharArray_m161915955(NULL /*static, unused*/, L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)8)), L_13, 2, /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_14 = ___chars0;
		int32_t L_15 = ___start1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)((int32_t)10)))), (Il2CppChar)((int32_t)84));
		CharU5BU5D_t1328083999* L_16 = ___chars0;
		int32_t L_17 = ___start1;
		int32_t L_18 = DateTime_get_Hour_m2925715777((&___dt2), /*hidden argument*/NULL);
		DateTimeUtils_CopyIntToCharArray_m161915955(NULL /*static, unused*/, L_16, ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)11))), L_18, 2, /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_19 = ___chars0;
		int32_t L_20 = ___start1;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)((int32_t)13)))), (Il2CppChar)((int32_t)58));
		CharU5BU5D_t1328083999* L_21 = ___chars0;
		int32_t L_22 = ___start1;
		int32_t L_23 = DateTime_get_Minute_m803043551((&___dt2), /*hidden argument*/NULL);
		DateTimeUtils_CopyIntToCharArray_m161915955(NULL /*static, unused*/, L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)((int32_t)14))), L_23, 2, /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_24 = ___chars0;
		int32_t L_25 = ___start1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)((int32_t)16)))), (Il2CppChar)((int32_t)58));
		CharU5BU5D_t1328083999* L_26 = ___chars0;
		int32_t L_27 = ___start1;
		int32_t L_28 = DateTime_get_Second_m853575361((&___dt2), /*hidden argument*/NULL);
		DateTimeUtils_CopyIntToCharArray_m161915955(NULL /*static, unused*/, L_26, ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)((int32_t)17))), L_28, 2, /*hidden argument*/NULL);
		int64_t L_29 = DateTime_get_Ticks_m310281298((&___dt2), /*hidden argument*/NULL);
		V_4 = (((int32_t)((int32_t)((int64_t)((int64_t)L_29%(int64_t)(((int64_t)((int64_t)((int32_t)10000000)))))))));
		int32_t L_30 = V_4;
		if (!L_30)
		{
			goto IL_00d5;
		}
	}
	{
		V_5 = 7;
		goto IL_00b1;
	}

IL_00a4:
	{
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)((int32_t)L_32/(int32_t)((int32_t)10)));
	}

IL_00b1:
	{
		int32_t L_33 = V_4;
		if (!((int32_t)((int32_t)L_33%(int32_t)((int32_t)10))))
		{
			goto IL_00a4;
		}
	}
	{
		CharU5BU5D_t1328083999* L_34 = ___chars0;
		int32_t L_35 = ___start1;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)((int32_t)19)))), (Il2CppChar)((int32_t)46));
		CharU5BU5D_t1328083999* L_36 = ___chars0;
		int32_t L_37 = ___start1;
		int32_t L_38 = V_4;
		int32_t L_39 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTimeUtils_CopyIntToCharArray_m161915955(NULL /*static, unused*/, L_36, ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)((int32_t)20))), L_38, L_39, /*hidden argument*/NULL);
		int32_t L_40 = V_0;
		int32_t L_41 = V_5;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1))));
	}

IL_00d5:
	{
		int32_t L_42 = ___start1;
		int32_t L_43 = V_0;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)L_43));
	}
}
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::CopyIntToCharArray(System.Char[],System.Int32,System.Int32,System.Int32)
extern "C"  void DateTimeUtils_CopyIntToCharArray_m161915955 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, int32_t ___value2, int32_t ___digits3, const RuntimeMethod* method)
{
	{
		goto IL_0015;
	}

IL_0002:
	{
		CharU5BU5D_t1328083999* L_0 = ___chars0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___digits3;
		int32_t L_3 = ___value2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_3%(int32_t)((int32_t)10))), (int32_t)((int32_t)48)))))));
		int32_t L_4 = ___value2;
		___value2 = ((int32_t)((int32_t)L_4/(int32_t)((int32_t)10)));
	}

IL_0015:
	{
		int32_t L_5 = ___digits3;
		int32_t L_6 = L_5;
		___digits3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeOffset(System.Char[],System.Int32,System.TimeSpan,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeOffset_m1618693877 (RuntimeObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, TimeSpan_t3430258949  ___offset2, int32_t ___format3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_WriteDateTimeOffset_m1618693877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	CharU5BU5D_t1328083999* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	CharU5BU5D_t1328083999* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	CharU5BU5D_t1328083999* G_B3_2 = NULL;
	{
		CharU5BU5D_t1328083999* L_0 = ___chars0;
		int32_t L_1 = ___start1;
		int32_t L_2 = L_1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		int64_t L_3 = TimeSpan_get_Ticks_m2285358246((&___offset2), /*hidden argument*/NULL);
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if ((((int64_t)L_3) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((int32_t)45);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0018;
	}

IL_0016:
	{
		G_B3_0 = ((int32_t)43);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0018:
	{
		NullCheck(G_B3_2);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (Il2CppChar)G_B3_0);
		int32_t L_4 = TimeSpan_get_Hours_m3804628138((&___offset2), /*hidden argument*/NULL);
		int32_t L_5 = il2cpp_codegen_abs(L_4);
		V_0 = L_5;
		CharU5BU5D_t1328083999* L_6 = ___chars0;
		int32_t L_7 = ___start1;
		int32_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTimeUtils_CopyIntToCharArray_m161915955(NULL /*static, unused*/, L_6, L_7, L_8, 2, /*hidden argument*/NULL);
		int32_t L_9 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		int32_t L_10 = ___format3;
		if (L_10)
		{
			goto IL_0041;
		}
	}
	{
		CharU5BU5D_t1328083999* L_11 = ___chars0;
		int32_t L_12 = ___start1;
		int32_t L_13 = L_12;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppChar)((int32_t)58));
	}

IL_0041:
	{
		int32_t L_14 = TimeSpan_get_Minutes_m2575030536((&___offset2), /*hidden argument*/NULL);
		int32_t L_15 = il2cpp_codegen_abs(L_14);
		V_1 = L_15;
		CharU5BU5D_t1328083999* L_16 = ___chars0;
		int32_t L_17 = ___start1;
		int32_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		DateTimeUtils_CopyIntToCharArray_m161915955(NULL /*static, unused*/, L_16, L_17, L_18, 2, /*hidden argument*/NULL);
		int32_t L_19 = ___start1;
		___start1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)2));
		int32_t L_20 = ___start1;
		return L_20;
	}
}
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeOffsetString(System.IO.TextWriter,System.DateTimeOffset,Newtonsoft.Json.DateFormatHandling,System.String,System.Globalization.CultureInfo)
extern "C"  void DateTimeUtils_WriteDateTimeOffsetString_m2854976226 (RuntimeObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, DateTimeOffset_t1362988906  ___value1, int32_t ___format2, String_t* ___formatString3, CultureInfo_t3500843524 * ___culture4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_WriteDateTimeOffsetString_m2854976226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t1328083999* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	CharU5BU5D_t1328083999* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	CharU5BU5D_t1328083999* G_B2_1 = NULL;
	DateTime_t693205669  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	int32_t G_B4_1 = 0;
	CharU5BU5D_t1328083999* G_B4_2 = NULL;
	{
		String_t* L_0 = ___formatString3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		V_0 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64)));
		CharU5BU5D_t1328083999* L_2 = V_0;
		int32_t L_3 = ___format2;
		G_B2_0 = 0;
		G_B2_1 = L_2;
		if (!L_3)
		{
			G_B3_0 = 0;
			G_B3_1 = L_2;
			goto IL_001e;
		}
	}
	{
		DateTime_t693205669  L_4 = DateTimeOffset_get_UtcDateTime_m3162550774((&___value1), /*hidden argument*/NULL);
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0025;
	}

IL_001e:
	{
		DateTime_t693205669  L_5 = DateTimeOffset_get_DateTime_m229084964((&___value1), /*hidden argument*/NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0025:
	{
		TimeSpan_t3430258949  L_6 = DateTimeOffset_get_Offset_m2335492074((&___value1), /*hidden argument*/NULL);
		Nullable_1_t1693325264  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Nullable_1__ctor_m796575255((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_m796575255_RuntimeMethod_var);
		int32_t L_8 = ___format2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		int32_t L_9 = DateTimeUtils_WriteDateTimeString_m3706347442(NULL /*static, unused*/, G_B4_2, G_B4_1, G_B4_0, L_7, 2, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		TextWriter_t4027217640 * L_10 = ___writer0;
		CharU5BU5D_t1328083999* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		VirtActionInvoker3< CharU5BU5D_t1328083999*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_10, L_11, 0, L_12);
		return;
	}

IL_0043:
	{
		TextWriter_t4027217640 * L_13 = ___writer0;
		String_t* L_14 = ___formatString3;
		CultureInfo_t3500843524 * L_15 = ___culture4;
		String_t* L_16 = DateTimeOffset_ToString_m2121173678((&___value1), L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, L_16);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::GetDateValues(System.DateTime,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void DateTimeUtils_GetDateValues_m2622263554 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  ___td0, int32_t* ___year1, int32_t* ___month2, int32_t* ___day3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DateTimeUtils_GetDateValues_m2622263554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Int32U5BU5D_t3030399641* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B9_0 = 0;
	Int32U5BU5D_t3030399641* G_B12_0 = NULL;
	{
		int64_t L_0 = DateTime_get_Ticks_m310281298((&___td0), /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)((int64_t)((int64_t)L_0/(int64_t)((int64_t)864000000000LL))))));
		int32_t L_1 = V_0;
		V_1 = ((int32_t)((int32_t)L_1/(int32_t)((int32_t)146097)));
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)146097)))));
		int32_t L_4 = V_0;
		V_2 = ((int32_t)((int32_t)L_4/(int32_t)((int32_t)36524)));
		int32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)4))))
		{
			goto IL_0033;
		}
	}
	{
		V_2 = 3;
	}

IL_0033:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)36524)))));
		int32_t L_8 = V_0;
		V_3 = ((int32_t)((int32_t)L_8/(int32_t)((int32_t)1461)));
		int32_t L_9 = V_0;
		int32_t L_10 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)((int32_t)1461)))));
		int32_t L_11 = V_0;
		V_4 = ((int32_t)((int32_t)L_11/(int32_t)((int32_t)365)));
		int32_t L_12 = V_4;
		if ((!(((uint32_t)L_12) == ((uint32_t)4))))
		{
			goto IL_0060;
		}
	}
	{
		V_4 = 3;
	}

IL_0060:
	{
		int32_t* L_13 = ___year1;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = V_4;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)400))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)((int32_t)100))))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)4)))), (int32_t)L_17)), (int32_t)1));
		int32_t L_18 = V_0;
		int32_t L_19 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)((int32_t)365)))));
		int32_t L_20 = V_4;
		if ((!(((uint32_t)L_20) == ((uint32_t)3))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_21 = V_3;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_22 = V_2;
		G_B9_0 = ((((int32_t)L_22) == ((int32_t)3))? 1 : 0);
		goto IL_0096;
	}

IL_0092:
	{
		G_B9_0 = 1;
		goto IL_0096;
	}

IL_0095:
	{
		G_B9_0 = 0;
	}

IL_0096:
	{
		if (G_B9_0)
		{
			goto IL_009f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		Int32U5BU5D_t3030399641* L_23 = ((DateTimeUtils_t919483584_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t919483584_il2cpp_TypeInfo_var))->get_DaysToMonth365_1();
		G_B12_0 = L_23;
		goto IL_00a4;
	}

IL_009f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeUtils_t919483584_il2cpp_TypeInfo_var);
		Int32U5BU5D_t3030399641* L_24 = ((DateTimeUtils_t919483584_StaticFields*)il2cpp_codegen_static_fields_for(DateTimeUtils_t919483584_il2cpp_TypeInfo_var))->get_DaysToMonth366_2();
		G_B12_0 = L_24;
	}

IL_00a4:
	{
		V_5 = G_B12_0;
		int32_t L_25 = V_0;
		V_6 = ((int32_t)((int32_t)L_25>>(int32_t)6));
		goto IL_00b3;
	}

IL_00ad:
	{
		int32_t L_26 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00b3:
	{
		int32_t L_27 = V_0;
		Int32U5BU5D_t3030399641* L_28 = V_5;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if ((((int32_t)L_27) >= ((int32_t)L_31)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t* L_32 = ___month2;
		int32_t L_33 = V_6;
		*((int32_t*)(L_32)) = (int32_t)L_33;
		int32_t* L_34 = ___day3;
		int32_t L_35 = V_0;
		Int32U5BU5D_t3030399641* L_36 = V_5;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		*((int32_t*)(L_34)) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_39)), (int32_t)1));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String> Newtonsoft.Json.Utilities.EnumUtils::InitializeEnumType(System.Type)
extern "C"  BidirectionalDictionary_2_t2874502390 * EnumUtils_InitializeEnumType_m1034152180 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils_InitializeEnumType_m1034152180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BidirectionalDictionary_2_t2874502390 * V_0 = NULL;
	FieldInfoU5BU5D_t125053523* V_1 = NULL;
	int32_t V_2 = 0;
	FieldInfo_t * V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	Func_2_t4288392973 * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_t4288392973 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t1574862926_il2cpp_TypeInfo_var);
		StringComparer_t1574862926 * L_0 = StringComparer_get_OrdinalIgnoreCase_m3428639861(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringComparer_t1574862926 * L_1 = StringComparer_get_OrdinalIgnoreCase_m3428639861(NULL /*static, unused*/, /*hidden argument*/NULL);
		BidirectionalDictionary_2_t2874502390 * L_2 = (BidirectionalDictionary_2_t2874502390 *)il2cpp_codegen_object_new(BidirectionalDictionary_2_t2874502390_il2cpp_TypeInfo_var);
		BidirectionalDictionary_2__ctor_m1527248422(L_2, L_0, L_1, /*hidden argument*/BidirectionalDictionary_2__ctor_m1527248422_RuntimeMethod_var);
		V_0 = L_2;
		Type_t * L_3 = ___type0;
		NullCheck(L_3);
		FieldInfoU5BU5D_t125053523* L_4 = Type_GetFields_m445058499(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_00ac;
	}

IL_001e:
	{
		FieldInfoU5BU5D_t125053523* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FieldInfo_t * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		FieldInfo_t * L_9 = V_3;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		V_4 = L_10;
		FieldInfo_t * L_11 = V_3;
		RuntimeTypeHandle_t2330101084  L_12 = { reinterpret_cast<intptr_t> (EnumMemberAttribute_t187433993_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ObjectU5BU5D_t3614634134* L_14 = VirtFuncInvoker2< ObjectU5BU5D_t3614634134*, Type_t *, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_11, L_13, (bool)1);
		RuntimeObject* L_15 = Enumerable_Cast_TisEnumMemberAttribute_t187433993_m133715299(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/Enumerable_Cast_TisEnumMemberAttribute_t187433993_m133715299_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var);
		Func_2_t4288392973 * L_16 = ((U3CU3Ec_t3288905799_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var))->get_U3CU3E9__1_0_1();
		Func_2_t4288392973 * L_17 = L_16;
		G_B2_0 = L_17;
		G_B2_1 = L_15;
		if (L_17)
		{
			G_B3_0 = L_17;
			G_B3_1 = L_15;
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var);
		U3CU3Ec_t3288905799 * L_18 = ((U3CU3Ec_t3288905799_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_19 = (intptr_t)U3CU3Ec_U3CInitializeEnumTypeU3Eb__1_0_m3143531801_RuntimeMethod_var;
		Func_2_t4288392973 * L_20 = (Func_2_t4288392973 *)il2cpp_codegen_object_new(Func_2_t4288392973_il2cpp_TypeInfo_var);
		Func_2__ctor_m2049158717(L_20, L_18, L_19, /*hidden argument*/Func_2__ctor_m2049158717_RuntimeMethod_var);
		Func_2_t4288392973 * L_21 = L_20;
		((U3CU3Ec_t3288905799_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var))->set_U3CU3E9__1_0_1(L_21);
		G_B3_0 = L_21;
		G_B3_1 = G_B2_1;
	}

IL_005f:
	{
		RuntimeObject* L_22 = Enumerable_Select_TisEnumMemberAttribute_t187433993_TisString_t_m3716904781(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/Enumerable_Select_TisEnumMemberAttribute_t187433993_TisString_t_m3716904781_RuntimeMethod_var);
		String_t* L_23 = Enumerable_SingleOrDefault_TisString_t_m3373152221(NULL /*static, unused*/, L_22, /*hidden argument*/Enumerable_SingleOrDefault_TisString_t_m3373152221_RuntimeMethod_var);
		String_t* L_24 = L_23;
		G_B4_0 = L_24;
		if (L_24)
		{
			G_B5_0 = L_24;
			goto IL_0073;
		}
	}
	{
		FieldInfo_t * L_25 = V_3;
		NullCheck(L_25);
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_25);
		G_B5_0 = L_26;
	}

IL_0073:
	{
		V_5 = G_B5_0;
		BidirectionalDictionary_2_t2874502390 * L_27 = V_0;
		String_t* L_28 = V_5;
		NullCheck(L_27);
		bool L_29 = BidirectionalDictionary_2_TryGetBySecond_m2125404446(L_27, L_28, (&V_6), /*hidden argument*/BidirectionalDictionary_2_TryGetBySecond_m2125404446_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_009e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_30 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_31 = V_5;
		Type_t * L_32 = ___type0;
		NullCheck(L_32);
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_32);
		String_t* L_34 = StringUtils_FormatWith_m3608957081(NULL /*static, unused*/, _stringLiteral439311931, L_30, L_31, L_33, /*hidden argument*/NULL);
		InvalidOperationException_t721527559 * L_35 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_35, L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35);
	}

IL_009e:
	{
		BidirectionalDictionary_2_t2874502390 * L_36 = V_0;
		String_t* L_37 = V_4;
		String_t* L_38 = V_5;
		NullCheck(L_36);
		BidirectionalDictionary_2_Set_m1677701390(L_36, L_37, L_38, /*hidden argument*/BidirectionalDictionary_2_Set_m1677701390_RuntimeMethod_var);
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00ac:
	{
		int32_t L_40 = V_2;
		FieldInfoU5BU5D_t125053523* L_41 = V_1;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		BidirectionalDictionary_2_t2874502390 * L_42 = V_0;
		return L_42;
	}
}
// System.Collections.Generic.IList`1<System.Object> Newtonsoft.Json.Utilities.EnumUtils::GetValues(System.Type)
extern "C"  RuntimeObject* EnumUtils_GetValues_m3424110602 (RuntimeObject * __this /* static, unused */, Type_t * ___enumType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils_GetValues_m3424110602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t2058570427 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Func_2_t472048993 * G_B4_0 = NULL;
	FieldInfoU5BU5D_t125053523* G_B4_1 = NULL;
	Func_2_t472048993 * G_B3_0 = NULL;
	FieldInfoU5BU5D_t125053523* G_B3_1 = NULL;
	{
		Type_t * L_0 = ___enumType0;
		bool L_1 = TypeExtensions_IsEnum_m3232841617(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_2 = ___enumType0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m612901809(NULL /*static, unused*/, _stringLiteral1763939415, L_3, _stringLiteral2733696090, /*hidden argument*/NULL);
		ArgumentException_t3259014390 * L_5 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0023:
	{
		List_1_t2058570427 * L_6 = (List_1_t2058570427 *)il2cpp_codegen_object_new(List_1_t2058570427_il2cpp_TypeInfo_var);
		List_1__ctor_m310736118(L_6, /*hidden argument*/List_1__ctor_m310736118_RuntimeMethod_var);
		V_0 = L_6;
		Type_t * L_7 = ___enumType0;
		NullCheck(L_7);
		FieldInfoU5BU5D_t125053523* L_8 = Type_GetFields_m445058499(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var);
		Func_2_t472048993 * L_9 = ((U3CU3Ec_t3288905799_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var))->get_U3CU3E9__5_0_2();
		Func_2_t472048993 * L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = L_8;
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_8;
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var);
		U3CU3Ec_t3288905799 * L_11 = ((U3CU3Ec_t3288905799_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_12 = (intptr_t)U3CU3Ec_U3CGetValuesU3Eb__5_0_m1518037181_RuntimeMethod_var;
		Func_2_t472048993 * L_13 = (Func_2_t472048993 *)il2cpp_codegen_object_new(Func_2_t472048993_il2cpp_TypeInfo_var);
		Func_2__ctor_m660135348(L_13, L_11, L_12, /*hidden argument*/Func_2__ctor_m660135348_RuntimeMethod_var);
		Func_2_t472048993 * L_14 = L_13;
		((U3CU3Ec_t3288905799_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var))->set_U3CU3E9__5_0_2(L_14);
		G_B4_0 = L_14;
		G_B4_1 = G_B3_1;
	}

IL_004e:
	{
		RuntimeObject* L_15 = Enumerable_Where_TisFieldInfo_t_m1401957933(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Where_TisFieldInfo_t_m1401957933_RuntimeMethod_var);
		NullCheck(L_15);
		RuntimeObject* L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t547167195_il2cpp_TypeInfo_var, L_15);
		V_1 = L_16;
	}

IL_0059:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_005b:
		{
			RuntimeObject* L_17 = V_1;
			NullCheck(L_17);
			FieldInfo_t * L_18 = InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t2025531273_il2cpp_TypeInfo_var, L_17);
			Type_t * L_19 = ___enumType0;
			NullCheck(L_18);
			RuntimeObject * L_20 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_18, L_19);
			V_2 = L_20;
			List_1_t2058570427 * L_21 = V_0;
			RuntimeObject * L_22 = V_2;
			NullCheck(L_21);
			List_1_Add_m4157722533(L_21, L_22, /*hidden argument*/List_1_Add_m4157722533_RuntimeMethod_var);
		}

IL_006f:
		{
			RuntimeObject* L_23 = V_1;
			NullCheck(L_23);
			bool L_24 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_005b;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x83, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_25 = V_1;
			if (!L_25)
			{
				goto IL_0082;
			}
		}

IL_007c:
		{
			RuntimeObject* L_26 = V_1;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_26);
		}

IL_0082:
		{
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0083:
	{
		List_1_t2058570427 * L_27 = V_0;
		return L_27;
	}
}
// System.Object Newtonsoft.Json.Utilities.EnumUtils::ParseEnumName(System.String,System.Boolean,System.Type)
extern "C"  RuntimeObject * EnumUtils_ParseEnumName_m4266385615 (RuntimeObject * __this /* static, unused */, String_t* ___enumText0, bool ___isNullable1, Type_t * ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils_ParseEnumName_m4266385615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	BidirectionalDictionary_2_t2874502390 * V_1 = NULL;
	StringU5BU5D_t1642385972* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		String_t* L_0 = ___enumText0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		bool L_3 = ___isNullable1;
		if (!((int32_t)((int32_t)L_2&(int32_t)L_3)))
		{
			goto IL_0011;
		}
	}
	{
		return NULL;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EnumUtils_t1099402118_il2cpp_TypeInfo_var);
		ThreadSafeStore_2_t2258736631 * L_4 = ((EnumUtils_t1099402118_StaticFields*)il2cpp_codegen_static_fields_for(EnumUtils_t1099402118_il2cpp_TypeInfo_var))->get_EnumMemberNamesPerType_0();
		Type_t * L_5 = ___t2;
		NullCheck(L_4);
		BidirectionalDictionary_2_t2874502390 * L_6 = ThreadSafeStore_2_Get_m3132986083(L_4, L_5, /*hidden argument*/ThreadSafeStore_2_Get_m3132986083_RuntimeMethod_var);
		V_1 = L_6;
		String_t* L_7 = ___enumText0;
		NullCheck(L_7);
		int32_t L_8 = String_IndexOf_m2358239236(L_7, ((int32_t)44), /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_9 = ___enumText0;
		CharU5BU5D_t1328083999* L_10 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_9);
		StringU5BU5D_t1642385972* L_11 = String_Split_m3326265864(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		V_3 = 0;
		goto IL_0057;
	}

IL_003e:
	{
		StringU5BU5D_t1642385972* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16 = String_Trim_m2668767713(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		StringU5BU5D_t1642385972* L_17 = V_2;
		int32_t L_18 = V_3;
		BidirectionalDictionary_2_t2874502390 * L_19 = V_1;
		String_t* L_20 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(EnumUtils_t1099402118_il2cpp_TypeInfo_var);
		String_t* L_21 = EnumUtils_ResolvedEnumName_m526477606(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (String_t*)L_21);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_23 = V_3;
		StringU5BU5D_t1642385972* L_24 = V_2;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_003e;
		}
	}
	{
		StringU5BU5D_t1642385972* L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Join_m1966872927(NULL /*static, unused*/, _stringLiteral811305474, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		goto IL_0073;
	}

IL_006b:
	{
		BidirectionalDictionary_2_t2874502390 * L_27 = V_1;
		String_t* L_28 = ___enumText0;
		IL2CPP_RUNTIME_CLASS_INIT(EnumUtils_t1099402118_il2cpp_TypeInfo_var);
		String_t* L_29 = EnumUtils_ResolvedEnumName_m526477606(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
	}

IL_0073:
	{
		Type_t * L_30 = ___t2;
		String_t* L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2459695545_il2cpp_TypeInfo_var);
		RuntimeObject * L_32 = Enum_Parse_m982704874(NULL /*static, unused*/, L_30, L_31, (bool)1, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.String Newtonsoft.Json.Utilities.EnumUtils::ToEnumName(System.Type,System.String,System.Boolean)
extern "C"  String_t* EnumUtils_ToEnumName_m2285016169 (RuntimeObject * __this /* static, unused */, Type_t * ___enumType0, String_t* ___enumText1, bool ___camelCaseText2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils_ToEnumName_m2285016169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BidirectionalDictionary_2_t2874502390 * V_0 = NULL;
	StringU5BU5D_t1642385972* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EnumUtils_t1099402118_il2cpp_TypeInfo_var);
		ThreadSafeStore_2_t2258736631 * L_0 = ((EnumUtils_t1099402118_StaticFields*)il2cpp_codegen_static_fields_for(EnumUtils_t1099402118_il2cpp_TypeInfo_var))->get_EnumMemberNamesPerType_0();
		Type_t * L_1 = ___enumType0;
		NullCheck(L_0);
		BidirectionalDictionary_2_t2874502390 * L_2 = ThreadSafeStore_2_Get_m3132986083(L_0, L_1, /*hidden argument*/ThreadSafeStore_2_Get_m3132986083_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3 = ___enumText1;
		CharU5BU5D_t1328083999* L_4 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_3);
		StringU5BU5D_t1642385972* L_5 = String_Split_m3326265864(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0053;
	}

IL_0022:
	{
		StringU5BU5D_t1642385972* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m2668767713(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		BidirectionalDictionary_2_t2874502390 * L_11 = V_0;
		String_t* L_12 = V_3;
		NullCheck(L_11);
		BidirectionalDictionary_2_TryGetByFirst_m1620055138(L_11, L_12, (&V_4), /*hidden argument*/BidirectionalDictionary_2_TryGetByFirst_m1620055138_RuntimeMethod_var);
		String_t* L_13 = V_4;
		String_t* L_14 = L_13;
		G_B2_0 = L_14;
		if (L_14)
		{
			G_B3_0 = L_14;
			goto IL_003c;
		}
	}
	{
		String_t* L_15 = V_3;
		G_B3_0 = L_15;
	}

IL_003c:
	{
		V_4 = G_B3_0;
		bool L_16 = ___camelCaseText2;
		if (!L_16)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_17 = V_4;
		String_t* L_18 = StringUtils_ToCamelCase_m3781735605(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
	}

IL_004a:
	{
		StringU5BU5D_t1642385972* L_19 = V_1;
		int32_t L_20 = V_2;
		String_t* L_21 = V_4;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (String_t*)L_21);
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_23 = V_2;
		StringU5BU5D_t1642385972* L_24 = V_1;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_0022;
		}
	}
	{
		StringU5BU5D_t1642385972* L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Join_m1966872927(NULL /*static, unused*/, _stringLiteral811305474, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.String Newtonsoft.Json.Utilities.EnumUtils::ResolvedEnumName(Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>,System.String)
extern "C"  String_t* EnumUtils_ResolvedEnumName_m526477606 (RuntimeObject * __this /* static, unused */, BidirectionalDictionary_2_t2874502390 * ___map0, String_t* ___enumText1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils_ResolvedEnumName_m526477606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		BidirectionalDictionary_2_t2874502390 * L_0 = ___map0;
		String_t* L_1 = ___enumText1;
		NullCheck(L_0);
		BidirectionalDictionary_2_TryGetBySecond_m2125404446(L_0, L_1, (&V_0), /*hidden argument*/BidirectionalDictionary_2_TryGetBySecond_m2125404446_RuntimeMethod_var);
		String_t* L_2 = V_0;
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0010;
		}
	}
	{
		String_t* L_4 = ___enumText1;
		G_B2_0 = L_4;
	}

IL_0010:
	{
		V_0 = G_B2_0;
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void Newtonsoft.Json.Utilities.EnumUtils::.cctor()
extern "C"  void EnumUtils__cctor_m2773519876 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnumUtils__cctor_m2773519876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)EnumUtils_InitializeEnumType_m1034152180_RuntimeMethod_var;
		Func_2_t1060887749 * L_1 = (Func_2_t1060887749 *)il2cpp_codegen_object_new(Func_2_t1060887749_il2cpp_TypeInfo_var);
		Func_2__ctor_m2375498688(L_1, NULL, L_0, /*hidden argument*/Func_2__ctor_m2375498688_RuntimeMethod_var);
		ThreadSafeStore_2_t2258736631 * L_2 = (ThreadSafeStore_2_t2258736631 *)il2cpp_codegen_object_new(ThreadSafeStore_2_t2258736631_il2cpp_TypeInfo_var);
		ThreadSafeStore_2__ctor_m119799019(L_2, L_1, /*hidden argument*/ThreadSafeStore_2__ctor_m119799019_RuntimeMethod_var);
		((EnumUtils_t1099402118_StaticFields*)il2cpp_codegen_static_fields_for(EnumUtils_t1099402118_il2cpp_TypeInfo_var))->set_EnumMemberNamesPerType_0(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.EnumUtils/<>c::.cctor()
extern "C"  void U3CU3Ec__cctor_m2696538840 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m2696538840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3288905799 * L_0 = (U3CU3Ec_t3288905799 *)il2cpp_codegen_object_new(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m713765559(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3288905799_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3288905799_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.EnumUtils/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m713765559 (U3CU3Ec_t3288905799 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.EnumUtils/<>c::<InitializeEnumType>b__1_0(System.Runtime.Serialization.EnumMemberAttribute)
extern "C"  String_t* U3CU3Ec_U3CInitializeEnumTypeU3Eb__1_0_m3143531801 (U3CU3Ec_t3288905799 * __this, EnumMemberAttribute_t187433993 * ___a0, const RuntimeMethod* method)
{
	{
		EnumMemberAttribute_t187433993 * L_0 = ___a0;
		NullCheck(L_0);
		String_t* L_1 = EnumMemberAttribute_get_Value_m2675028753(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.EnumUtils/<>c::<GetValues>b__5_0(System.Reflection.FieldInfo)
extern "C"  bool U3CU3Ec_U3CGetValuesU3Eb__5_0_m1518037181 (U3CU3Ec_t3288905799 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		NullCheck(L_0);
		bool L_1 = FieldInfo_get_IsLiteral_m267898096(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::.cctor()
extern "C"  void JavaScriptUtils__cctor_m568657070 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JavaScriptUtils__cctor_m568657070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Il2CppChar V_3 = 0x0;
	Il2CppChar V_4 = 0x0;
	Il2CppChar V_5 = 0x0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		((JavaScriptUtils_t4013793858_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var))->set_SingleQuoteCharEscapeFlags_0(((BooleanU5BU5D_t3568034315*)SZArrayNew(BooleanU5BU5D_t3568034315_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128))));
		((JavaScriptUtils_t4013793858_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var))->set_DoubleQuoteCharEscapeFlags_1(((BooleanU5BU5D_t3568034315*)SZArrayNew(BooleanU5BU5D_t3568034315_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128))));
		((JavaScriptUtils_t4013793858_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var))->set_HtmlCharEscapeFlags_2(((BooleanU5BU5D_t3568034315*)SZArrayNew(BooleanU5BU5D_t3568034315_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128))));
		List_1_t2823602470 * L_0 = (List_1_t2823602470 *)il2cpp_codegen_object_new(List_1_t2823602470_il2cpp_TypeInfo_var);
		List_1__ctor_m1818566713(L_0, /*hidden argument*/List_1__ctor_m1818566713_RuntimeMethod_var);
		List_1_t2823602470 * L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_m1527804517(L_1, ((int32_t)10), /*hidden argument*/List_1_Add_m1527804517_RuntimeMethod_var);
		List_1_t2823602470 * L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_m1527804517(L_2, ((int32_t)13), /*hidden argument*/List_1_Add_m1527804517_RuntimeMethod_var);
		List_1_t2823602470 * L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_m1527804517(L_3, ((int32_t)9), /*hidden argument*/List_1_Add_m1527804517_RuntimeMethod_var);
		List_1_t2823602470 * L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_m1527804517(L_4, ((int32_t)92), /*hidden argument*/List_1_Add_m1527804517_RuntimeMethod_var);
		List_1_t2823602470 * L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_m1527804517(L_5, ((int32_t)12), /*hidden argument*/List_1_Add_m1527804517_RuntimeMethod_var);
		List_1_t2823602470 * L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_m1527804517(L_6, 8, /*hidden argument*/List_1_Add_m1527804517_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_6;
		V_1 = 0;
		goto IL_0072;
	}

IL_0066:
	{
		RuntimeObject* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		InterfaceActionInvoker1< Il2CppChar >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Char>::Add(!0) */, ICollection_1_t111589347_il2cpp_TypeInfo_var, L_7, (((int32_t)((uint16_t)L_8))));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0072:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)32))))
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		CharU5BU5D_t1328083999* L_12 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)39));
		RuntimeObject* L_13 = Enumerable_Union_TisChar_t3454481338_m247197559(NULL /*static, unused*/, L_11, (RuntimeObject*)(RuntimeObject*)L_12, /*hidden argument*/Enumerable_Union_TisChar_t3454481338_m247197559_RuntimeMethod_var);
		NullCheck(L_13);
		RuntimeObject* L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator() */, IEnumerable_1_t3746608383_il2cpp_TypeInfo_var, L_13);
		V_2 = L_14;
	}

IL_008e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009f;
		}

IL_0090:
		{
			RuntimeObject* L_15 = V_2;
			NullCheck(L_15);
			Il2CppChar L_16 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Char>::get_Current() */, IEnumerator_1_t930005165_il2cpp_TypeInfo_var, L_15);
			V_3 = L_16;
			BooleanU5BU5D_t3568034315* L_17 = ((JavaScriptUtils_t4013793858_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var))->get_SingleQuoteCharEscapeFlags_0();
			Il2CppChar L_18 = V_3;
			NullCheck(L_17);
			(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (bool)1);
		}

IL_009f:
		{
			RuntimeObject* L_19 = V_2;
			NullCheck(L_19);
			bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_0090;
			}
		}

IL_00a7:
		{
			IL2CPP_LEAVE(0xB3, FINALLY_00a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a9;
	}

FINALLY_00a9:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_21 = V_2;
			if (!L_21)
			{
				goto IL_00b2;
			}
		}

IL_00ac:
		{
			RuntimeObject* L_22 = V_2;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_22);
		}

IL_00b2:
		{
			IL2CPP_END_FINALLY(169)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(169)
	{
		IL2CPP_JUMP_TBL(0xB3, IL_00b3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b3:
	{
		RuntimeObject* L_23 = V_0;
		CharU5BU5D_t1328083999* L_24 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)34));
		RuntimeObject* L_25 = Enumerable_Union_TisChar_t3454481338_m247197559(NULL /*static, unused*/, L_23, (RuntimeObject*)(RuntimeObject*)L_24, /*hidden argument*/Enumerable_Union_TisChar_t3454481338_m247197559_RuntimeMethod_var);
		NullCheck(L_25);
		RuntimeObject* L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator() */, IEnumerable_1_t3746608383_il2cpp_TypeInfo_var, L_25);
		V_2 = L_26;
	}

IL_00ca:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00dd;
		}

IL_00cc:
		{
			RuntimeObject* L_27 = V_2;
			NullCheck(L_27);
			Il2CppChar L_28 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Char>::get_Current() */, IEnumerator_1_t930005165_il2cpp_TypeInfo_var, L_27);
			V_4 = L_28;
			BooleanU5BU5D_t3568034315* L_29 = ((JavaScriptUtils_t4013793858_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var))->get_DoubleQuoteCharEscapeFlags_1();
			Il2CppChar L_30 = V_4;
			NullCheck(L_29);
			(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (bool)1);
		}

IL_00dd:
		{
			RuntimeObject* L_31 = V_2;
			NullCheck(L_31);
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_31);
			if (L_32)
			{
				goto IL_00cc;
			}
		}

IL_00e5:
		{
			IL2CPP_LEAVE(0xF1, FINALLY_00e7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e7;
	}

FINALLY_00e7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_2;
			if (!L_33)
			{
				goto IL_00f0;
			}
		}

IL_00ea:
		{
			RuntimeObject* L_34 = V_2;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_34);
		}

IL_00f0:
		{
			IL2CPP_END_FINALLY(231)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(231)
	{
		IL2CPP_JUMP_TBL(0xF1, IL_00f1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f1:
	{
		RuntimeObject* L_35 = V_0;
		CharU5BU5D_t1328083999* L_36 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)5));
		RuntimeFieldHandle_t2331729674  L_37 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1486305145____D40004AB0E92BF6C8DFE481B56BE3D04ABDA76EB_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3920580167(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_36, L_37, /*hidden argument*/NULL);
		RuntimeObject* L_38 = Enumerable_Union_TisChar_t3454481338_m247197559(NULL /*static, unused*/, L_35, (RuntimeObject*)(RuntimeObject*)L_36, /*hidden argument*/Enumerable_Union_TisChar_t3454481338_m247197559_RuntimeMethod_var);
		NullCheck(L_38);
		RuntimeObject* L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Char>::GetEnumerator() */, IEnumerable_1_t3746608383_il2cpp_TypeInfo_var, L_38);
		V_2 = L_39;
	}

IL_010e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0121;
		}

IL_0110:
		{
			RuntimeObject* L_40 = V_2;
			NullCheck(L_40);
			Il2CppChar L_41 = InterfaceFuncInvoker0< Il2CppChar >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Char>::get_Current() */, IEnumerator_1_t930005165_il2cpp_TypeInfo_var, L_40);
			V_5 = L_41;
			BooleanU5BU5D_t3568034315* L_42 = ((JavaScriptUtils_t4013793858_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var))->get_HtmlCharEscapeFlags_2();
			Il2CppChar L_43 = V_5;
			NullCheck(L_42);
			(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (bool)1);
		}

IL_0121:
		{
			RuntimeObject* L_44 = V_2;
			NullCheck(L_44);
			bool L_45 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_44);
			if (L_45)
			{
				goto IL_0110;
			}
		}

IL_0129:
		{
			IL2CPP_LEAVE(0x135, FINALLY_012b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012b;
	}

FINALLY_012b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_46 = V_2;
			if (!L_46)
			{
				goto IL_0134;
			}
		}

IL_012e:
		{
			RuntimeObject* L_47 = V_2;
			NullCheck(L_47);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_47);
		}

IL_0134:
		{
			IL2CPP_END_FINALLY(299)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(299)
	{
		IL2CPP_JUMP_TBL(0x135, IL_0135)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0135:
	{
		return;
	}
}
// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::GetCharEscapeFlags(Newtonsoft.Json.StringEscapeHandling,System.Char)
extern "C"  BooleanU5BU5D_t3568034315* JavaScriptUtils_GetCharEscapeFlags_m4017192528 (RuntimeObject * __this /* static, unused */, int32_t ___stringEscapeHandling0, Il2CppChar ___quoteChar1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JavaScriptUtils_GetCharEscapeFlags_m4017192528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___stringEscapeHandling0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t3568034315* L_1 = ((JavaScriptUtils_t4013793858_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var))->get_HtmlCharEscapeFlags_2();
		return L_1;
	}

IL_000a:
	{
		Il2CppChar L_2 = ___quoteChar1;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0015;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t3568034315* L_3 = ((JavaScriptUtils_t4013793858_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var))->get_DoubleQuoteCharEscapeFlags_1();
		return L_3;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t3568034315* L_4 = ((JavaScriptUtils_t4013793858_StaticFields*)il2cpp_codegen_static_fields_for(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var))->get_SingleQuoteCharEscapeFlags_0();
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.JavaScriptUtils::ShouldEscapeJavaScriptString(System.String,System.Boolean[])
extern "C"  bool JavaScriptUtils_ShouldEscapeJavaScriptString_m926784044 (RuntimeObject * __this /* static, unused */, String_t* ___s0, BooleanU5BU5D_t3568034315* ___charEscapeFlags1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		String_t* L_1 = ___s0;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0024;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m4230566705(L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Il2CppChar L_5 = V_2;
		BooleanU5BU5D_t3568034315* L_6 = ___charEscapeFlags1;
		NullCheck(L_6);
		if ((((int32_t)L_5) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))))
		{
			goto IL_001e;
		}
	}
	{
		BooleanU5BU5D_t3568034315* L_7 = ___charEscapeFlags1;
		Il2CppChar L_8 = V_2;
		NullCheck(L_7);
		Il2CppChar L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if (!L_10)
		{
			goto IL_0020;
		}
	}

IL_001e:
	{
		return (bool)1;
	}

IL_0020:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m1606060069(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::WriteEscapedJavaScriptString(System.IO.TextWriter,System.String,System.Char,System.Boolean,System.Boolean[],Newtonsoft.Json.StringEscapeHandling,Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[]&)
extern "C"  void JavaScriptUtils_WriteEscapedJavaScriptString_m349909445 (RuntimeObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, String_t* ___s1, Il2CppChar ___delimiter2, bool ___appendDelimiters3, BooleanU5BU5D_t3568034315* ___charEscapeFlags4, int32_t ___stringEscapeHandling5, RuntimeObject* ___bufferPool6, CharU5BU5D_t1328083999** ___writeBuffer7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JavaScriptUtils_WriteEscapedJavaScriptString_m349909445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	String_t* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	CharU5BU5D_t1328083999* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B41_1 = 0;
	int32_t G_B44_0 = 0;
	{
		bool L_0 = ___appendDelimiters3;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		TextWriter_t4027217640 * L_1 = ___writer0;
		Il2CppChar L_2 = ___delimiter2;
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, L_2);
	}

IL_000a:
	{
		String_t* L_3 = ___s1;
		if (!L_3)
		{
			goto IL_0228;
		}
	}
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_01d0;
	}

IL_0019:
	{
		String_t* L_4 = ___s1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m4230566705(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		BooleanU5BU5D_t3568034315* L_8 = ___charEscapeFlags4;
		NullCheck(L_8);
		if ((((int32_t)L_7) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		BooleanU5BU5D_t3568034315* L_9 = ___charEscapeFlags4;
		Il2CppChar L_10 = V_2;
		NullCheck(L_9);
		Il2CppChar L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if (!L_12)
		{
			goto IL_01cc;
		}
	}

IL_0031:
	{
		Il2CppChar L_13 = V_2;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_005d;
		}
	}
	{
		Il2CppChar L_14 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00a3;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_0082;
			}
			case 3:
			{
				goto IL_00cb;
			}
			case 4:
			{
				goto IL_0098;
			}
			case 5:
			{
				goto IL_008d;
			}
		}
	}
	{
		Il2CppChar L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)92))))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00cb;
	}

IL_005d:
	{
		Il2CppChar L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)133))))
		{
			goto IL_00b3;
		}
	}
	{
		Il2CppChar L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)8232))))
		{
			goto IL_00bb;
		}
	}
	{
		Il2CppChar L_18 = V_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)8233))))
		{
			goto IL_00c3;
		}
	}
	{
		goto IL_00cb;
	}

IL_0077:
	{
		V_3 = _stringLiteral3869568110;
		goto IL_0129;
	}

IL_0082:
	{
		V_3 = _stringLiteral3062999056;
		goto IL_0129;
	}

IL_008d:
	{
		V_3 = _stringLiteral381169868;
		goto IL_0129;
	}

IL_0098:
	{
		V_3 = _stringLiteral3419229416;
		goto IL_0129;
	}

IL_00a3:
	{
		V_3 = _stringLiteral1093630588;
		goto IL_0129;
	}

IL_00ab:
	{
		V_3 = _stringLiteral2088416310;
		goto IL_0129;
	}

IL_00b3:
	{
		V_3 = _stringLiteral2444905594;
		goto IL_0129;
	}

IL_00bb:
	{
		V_3 = _stringLiteral2848190193;
		goto IL_0129;
	}

IL_00c3:
	{
		V_3 = _stringLiteral119306838;
		goto IL_0129;
	}

IL_00cb:
	{
		Il2CppChar L_19 = V_2;
		BooleanU5BU5D_t3568034315* L_20 = ___charEscapeFlags4;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_21 = ___stringEscapeHandling5;
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_0127;
		}
	}

IL_00d7:
	{
		Il2CppChar L_22 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_23 = ___stringEscapeHandling5;
		if ((((int32_t)L_23) == ((int32_t)2)))
		{
			goto IL_00e9;
		}
	}
	{
		V_3 = _stringLiteral408021059;
		goto IL_0129;
	}

IL_00e9:
	{
		Il2CppChar L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_25 = ___stringEscapeHandling5;
		if ((((int32_t)L_25) == ((int32_t)2)))
		{
			goto IL_00fb;
		}
	}
	{
		V_3 = _stringLiteral3943473468;
		goto IL_0129;
	}

IL_00fb:
	{
		CharU5BU5D_t1328083999** L_26 = ___writeBuffer7;
		if (!(*((CharU5BU5D_t1328083999**)L_26)))
		{
			goto IL_0108;
		}
	}
	{
		CharU5BU5D_t1328083999** L_27 = ___writeBuffer7;
		NullCheck((*((CharU5BU5D_t1328083999**)L_27)));
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((CharU5BU5D_t1328083999**)L_27)))->max_length))))) >= ((int32_t)6)))
		{
			goto IL_0116;
		}
	}

IL_0108:
	{
		CharU5BU5D_t1328083999** L_28 = ___writeBuffer7;
		RuntimeObject* L_29 = ___bufferPool6;
		CharU5BU5D_t1328083999** L_30 = ___writeBuffer7;
		CharU5BU5D_t1328083999* L_31 = BufferUtils_EnsureBufferSize_m1357837076(NULL /*static, unused*/, L_29, 6, (*((CharU5BU5D_t1328083999**)L_30)), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_28)) = (RuntimeObject *)L_31;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_28), (RuntimeObject *)L_31);
	}

IL_0116:
	{
		Il2CppChar L_32 = V_2;
		CharU5BU5D_t1328083999** L_33 = ___writeBuffer7;
		StringUtils_ToCharAsUnicode_m3430462003(NULL /*static, unused*/, L_32, (*((CharU5BU5D_t1328083999**)L_33)), /*hidden argument*/NULL);
		V_3 = _stringLiteral372029309;
		goto IL_0129;
	}

IL_0127:
	{
		V_3 = (String_t*)NULL;
	}

IL_0129:
	{
		String_t* L_34 = V_3;
		if (!L_34)
		{
			goto IL_01cc;
		}
	}
	{
		String_t* L_35 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_Equals_m3568148125(NULL /*static, unused*/, L_35, _stringLiteral372029309, /*hidden argument*/NULL);
		V_4 = L_36;
		int32_t L_37 = V_1;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) <= ((int32_t)L_38)))
		{
			goto IL_01b0;
		}
	}
	{
		int32_t L_39 = V_1;
		int32_t L_40 = V_0;
		bool L_41 = V_4;
		G_B39_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40));
		if (L_41)
		{
			G_B40_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)L_40));
			goto IL_014a;
		}
	}
	{
		G_B41_0 = 0;
		G_B41_1 = G_B39_0;
		goto IL_014b;
	}

IL_014a:
	{
		G_B41_0 = 6;
		G_B41_1 = G_B40_0;
	}

IL_014b:
	{
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)G_B41_1, (int32_t)G_B41_0));
		bool L_42 = V_4;
		if (L_42)
		{
			goto IL_0155;
		}
	}
	{
		G_B44_0 = 0;
		goto IL_0156;
	}

IL_0155:
	{
		G_B44_0 = 6;
	}

IL_0156:
	{
		V_6 = G_B44_0;
		CharU5BU5D_t1328083999** L_43 = ___writeBuffer7;
		if (!(*((CharU5BU5D_t1328083999**)L_43)))
		{
			goto IL_0166;
		}
	}
	{
		CharU5BU5D_t1328083999** L_44 = ___writeBuffer7;
		NullCheck((*((CharU5BU5D_t1328083999**)L_44)));
		int32_t L_45 = V_5;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((CharU5BU5D_t1328083999**)L_44)))->max_length))))) >= ((int32_t)L_45)))
		{
			goto IL_018f;
		}
	}

IL_0166:
	{
		RuntimeObject* L_46 = ___bufferPool6;
		int32_t L_47 = V_5;
		CharU5BU5D_t1328083999* L_48 = BufferUtils_RentBuffer_m567587815(NULL /*static, unused*/, L_46, L_47, /*hidden argument*/NULL);
		V_7 = L_48;
		bool L_49 = V_4;
		if (!L_49)
		{
			goto IL_0180;
		}
	}
	{
		CharU5BU5D_t1328083999** L_50 = ___writeBuffer7;
		CharU5BU5D_t1328083999* L_51 = V_7;
		Array_Copy_m2363740072(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)(*((CharU5BU5D_t1328083999**)L_50)), (RuntimeArray *)(RuntimeArray *)L_51, 6, /*hidden argument*/NULL);
	}

IL_0180:
	{
		RuntimeObject* L_52 = ___bufferPool6;
		CharU5BU5D_t1328083999** L_53 = ___writeBuffer7;
		BufferUtils_ReturnBuffer_m2353484450(NULL /*static, unused*/, L_52, (*((CharU5BU5D_t1328083999**)L_53)), /*hidden argument*/NULL);
		CharU5BU5D_t1328083999** L_54 = ___writeBuffer7;
		CharU5BU5D_t1328083999* L_55 = V_7;
		*((RuntimeObject **)(L_54)) = (RuntimeObject *)L_55;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_54), (RuntimeObject *)L_55);
	}

IL_018f:
	{
		String_t* L_56 = ___s1;
		int32_t L_57 = V_0;
		CharU5BU5D_t1328083999** L_58 = ___writeBuffer7;
		int32_t L_59 = V_6;
		int32_t L_60 = V_5;
		int32_t L_61 = V_6;
		NullCheck(L_56);
		String_CopyTo_m3397208344(L_56, L_57, (*((CharU5BU5D_t1328083999**)L_58)), L_59, ((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)L_61)), /*hidden argument*/NULL);
		TextWriter_t4027217640 * L_62 = ___writer0;
		CharU5BU5D_t1328083999** L_63 = ___writeBuffer7;
		int32_t L_64 = V_6;
		int32_t L_65 = V_5;
		int32_t L_66 = V_6;
		NullCheck(L_62);
		VirtActionInvoker3< CharU5BU5D_t1328083999*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_62, (*((CharU5BU5D_t1328083999**)L_63)), L_64, ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)L_66)));
	}

IL_01b0:
	{
		int32_t L_67 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		bool L_68 = V_4;
		if (L_68)
		{
			goto IL_01c1;
		}
	}
	{
		TextWriter_t4027217640 * L_69 = ___writer0;
		String_t* L_70 = V_3;
		NullCheck(L_69);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_69, L_70);
		goto IL_01cc;
	}

IL_01c1:
	{
		TextWriter_t4027217640 * L_71 = ___writer0;
		CharU5BU5D_t1328083999** L_72 = ___writeBuffer7;
		NullCheck(L_71);
		VirtActionInvoker3< CharU5BU5D_t1328083999*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_71, (*((CharU5BU5D_t1328083999**)L_72)), 0, 6);
	}

IL_01cc:
	{
		int32_t L_73 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_01d0:
	{
		int32_t L_74 = V_1;
		String_t* L_75 = ___s1;
		NullCheck(L_75);
		int32_t L_76 = String_get_Length_m1606060069(L_75, /*hidden argument*/NULL);
		if ((((int32_t)L_74) < ((int32_t)L_76)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_77 = V_0;
		if (L_77)
		{
			goto IL_01e8;
		}
	}
	{
		TextWriter_t4027217640 * L_78 = ___writer0;
		String_t* L_79 = ___s1;
		NullCheck(L_78);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.String) */, L_78, L_79);
		goto IL_0228;
	}

IL_01e8:
	{
		String_t* L_80 = ___s1;
		NullCheck(L_80);
		int32_t L_81 = String_get_Length_m1606060069(L_80, /*hidden argument*/NULL);
		int32_t L_82 = V_0;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_81, (int32_t)L_82));
		CharU5BU5D_t1328083999** L_83 = ___writeBuffer7;
		if (!(*((CharU5BU5D_t1328083999**)L_83)))
		{
			goto IL_0200;
		}
	}
	{
		CharU5BU5D_t1328083999** L_84 = ___writeBuffer7;
		NullCheck((*((CharU5BU5D_t1328083999**)L_84)));
		int32_t L_85 = V_8;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)(*((CharU5BU5D_t1328083999**)L_84)))->max_length))))) >= ((int32_t)L_85)))
		{
			goto IL_020f;
		}
	}

IL_0200:
	{
		CharU5BU5D_t1328083999** L_86 = ___writeBuffer7;
		RuntimeObject* L_87 = ___bufferPool6;
		int32_t L_88 = V_8;
		CharU5BU5D_t1328083999** L_89 = ___writeBuffer7;
		CharU5BU5D_t1328083999* L_90 = BufferUtils_EnsureBufferSize_m1357837076(NULL /*static, unused*/, L_87, L_88, (*((CharU5BU5D_t1328083999**)L_89)), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_86)) = (RuntimeObject *)L_90;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_86), (RuntimeObject *)L_90);
	}

IL_020f:
	{
		String_t* L_91 = ___s1;
		int32_t L_92 = V_0;
		CharU5BU5D_t1328083999** L_93 = ___writeBuffer7;
		int32_t L_94 = V_8;
		NullCheck(L_91);
		String_CopyTo_m3397208344(L_91, L_92, (*((CharU5BU5D_t1328083999**)L_93)), 0, L_94, /*hidden argument*/NULL);
		TextWriter_t4027217640 * L_95 = ___writer0;
		CharU5BU5D_t1328083999** L_96 = ___writeBuffer7;
		int32_t L_97 = V_8;
		NullCheck(L_95);
		VirtActionInvoker3< CharU5BU5D_t1328083999*, int32_t, int32_t >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32) */, L_95, (*((CharU5BU5D_t1328083999**)L_96)), 0, L_97);
	}

IL_0228:
	{
		bool L_98 = ___appendDelimiters3;
		if (!L_98)
		{
			goto IL_0232;
		}
	}
	{
		TextWriter_t4027217640 * L_99 = ___writer0;
		Il2CppChar L_100 = ___delimiter2;
		NullCheck(L_99);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_99, L_100);
	}

IL_0232:
	{
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.JavaScriptUtils::ToEscapedJavaScriptString(System.String,System.Char,System.Boolean,Newtonsoft.Json.StringEscapeHandling)
extern "C"  String_t* JavaScriptUtils_ToEscapedJavaScriptString_m4206625202 (RuntimeObject * __this /* static, unused */, String_t* ___value0, Il2CppChar ___delimiter1, bool ___appendDelimiters2, int32_t ___stringEscapeHandling3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JavaScriptUtils_ToEscapedJavaScriptString_m4206625202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU5D_t3568034315* V_0 = NULL;
	StringWriter_t4139609088 * V_1 = NULL;
	Nullable_1_t334943763  V_2;
	memset(&V_2, 0, sizeof(V_2));
	CharU5BU5D_t1328083999* V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___stringEscapeHandling3;
		Il2CppChar L_1 = ___delimiter1;
		IL2CPP_RUNTIME_CLASS_INIT(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var);
		BooleanU5BU5D_t3568034315* L_2 = JavaScriptUtils_GetCharEscapeFlags_m4017192528(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___value0;
		Nullable_1_t334943763  L_4 = StringUtils_GetLength_m572879386(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = Nullable_1_get_HasValue_m3680291262((&V_2), /*hidden argument*/Nullable_1_get_HasValue_m3680291262_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		G_B3_0 = ((int32_t)16);
		goto IL_0023;
	}

IL_001c:
	{
		int32_t L_6 = Nullable_1_GetValueOrDefault_m3091235761((&V_2), /*hidden argument*/Nullable_1_GetValueOrDefault_m3091235761_RuntimeMethod_var);
		G_B3_0 = L_6;
	}

IL_0023:
	{
		StringWriter_t4139609088 * L_7 = StringUtils_CreateStringWriter_m3259887542(NULL /*static, unused*/, G_B3_0, /*hidden argument*/NULL);
		V_1 = L_7;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		V_3 = (CharU5BU5D_t1328083999*)NULL;
		StringWriter_t4139609088 * L_8 = V_1;
		String_t* L_9 = ___value0;
		Il2CppChar L_10 = ___delimiter1;
		bool L_11 = ___appendDelimiters2;
		BooleanU5BU5D_t3568034315* L_12 = V_0;
		int32_t L_13 = ___stringEscapeHandling3;
		IL2CPP_RUNTIME_CLASS_INIT(JavaScriptUtils_t4013793858_il2cpp_TypeInfo_var);
		JavaScriptUtils_WriteEscapedJavaScriptString_m349909445(NULL /*static, unused*/, L_8, L_9, L_10, L_11, L_12, L_13, (RuntimeObject*)NULL, (&V_3), /*hidden argument*/NULL);
		StringWriter_t4139609088 * L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		V_4 = L_15;
		IL2CPP_LEAVE(0x4D, FINALLY_0043);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			StringWriter_t4139609088 * L_16 = V_1;
			if (!L_16)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			StringWriter_t4139609088 * L_17 = V_1;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_17);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		String_t* L_18 = V_4;
		return L_18;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Newtonsoft.Json.Utilities.JsonTokenUtils::IsEndToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonTokenUtils_IsEndToken_m301488887 (RuntimeObject * __this /* static, unused */, int32_t ___token0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)13))))
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_0017;
			}
			case 2:
			{
				goto IL_0017;
			}
		}
	}
	{
		goto IL_0019;
	}

IL_0017:
	{
		return (bool)1;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.JsonTokenUtils::IsStartToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonTokenUtils_IsStartToken_m1200502800 (RuntimeObject * __this /* static, unused */, int32_t ___token0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0016;
			}
			case 1:
			{
				goto IL_0016;
			}
			case 2:
			{
				goto IL_0016;
			}
		}
	}
	{
		goto IL_0018;
	}

IL_0016:
	{
		return (bool)1;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.JsonTokenUtils::IsPrimitiveToken(Newtonsoft.Json.JsonToken)
extern "C"  bool JsonTokenUtils_IsPrimitiveToken_m3701704309 (RuntimeObject * __this /* static, unused */, int32_t ___token0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)7)))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_0036;
			}
			case 4:
			{
				goto IL_0036;
			}
			case 5:
			{
				goto IL_0036;
			}
			case 6:
			{
				goto IL_0038;
			}
			case 7:
			{
				goto IL_0038;
			}
			case 8:
			{
				goto IL_0038;
			}
			case 9:
			{
				goto IL_0036;
			}
			case 10:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_0038;
	}

IL_0036:
	{
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::get_Instance()
extern "C"  ReflectionDelegateFactory_t2294713146 * LateBoundReflectionDelegateFactory_get_Instance_m3416378571 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LateBoundReflectionDelegateFactory_get_Instance_m3416378571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LateBoundReflectionDelegateFactory_t3208546116_il2cpp_TypeInfo_var);
		LateBoundReflectionDelegateFactory_t3208546116 * L_0 = ((LateBoundReflectionDelegateFactory_t3208546116_StaticFields*)il2cpp_codegen_static_fields_for(LateBoundReflectionDelegateFactory_t3208546116_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase)
extern "C"  ObjectConstructor_1_t1997612730 * LateBoundReflectionDelegateFactory_CreateParameterizedConstructor_m2645948188 (LateBoundReflectionDelegateFactory_t3208546116 * __this, MethodBase_t * ___method0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LateBoundReflectionDelegateFactory_CreateParameterizedConstructor_m2645948188_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t322633509 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t322633509 * L_0 = (U3CU3Ec__DisplayClass3_0_t322633509 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t322633509_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m1570344605(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t322633509 * L_1 = V_0;
		MethodBase_t * L_2 = ___method0;
		NullCheck(L_1);
		L_1->set_method_1(L_2);
		U3CU3Ec__DisplayClass3_0_t322633509 * L_3 = V_0;
		NullCheck(L_3);
		MethodBase_t * L_4 = L_3->get_method_1();
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_4, _stringLiteral165463247, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass3_0_t322633509 * L_5 = V_0;
		U3CU3Ec__DisplayClass3_0_t322633509 * L_6 = V_0;
		NullCheck(L_6);
		MethodBase_t * L_7 = L_6->get_method_1();
		NullCheck(L_5);
		L_5->set_c_0(((ConstructorInfo_t2851816542 *)IsInstClass((RuntimeObject*)L_7, ConstructorInfo_t2851816542_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass3_0_t322633509 * L_8 = V_0;
		NullCheck(L_8);
		ConstructorInfo_t2851816542 * L_9 = L_8->get_c_0();
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		U3CU3Ec__DisplayClass3_0_t322633509 * L_10 = V_0;
		intptr_t L_11 = (intptr_t)U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m152120987_RuntimeMethod_var;
		ObjectConstructor_1_t1997612730 * L_12 = (ObjectConstructor_1_t1997612730 *)il2cpp_codegen_object_new(ObjectConstructor_1_t1997612730_il2cpp_TypeInfo_var);
		ObjectConstructor_1__ctor_m2300859629(L_12, L_10, L_11, /*hidden argument*/ObjectConstructor_1__ctor_m2300859629_RuntimeMethod_var);
		return L_12;
	}

IL_0043:
	{
		U3CU3Ec__DisplayClass3_0_t322633509 * L_13 = V_0;
		intptr_t L_14 = (intptr_t)U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_m1832472028_RuntimeMethod_var;
		ObjectConstructor_1_t1997612730 * L_15 = (ObjectConstructor_1_t1997612730 *)il2cpp_codegen_object_new(ObjectConstructor_1_t1997612730_il2cpp_TypeInfo_var);
		ObjectConstructor_1__ctor_m2300859629(L_15, L_13, L_14, /*hidden argument*/ObjectConstructor_1__ctor_m2300859629_RuntimeMethod_var);
		return L_15;
	}
}
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::.ctor()
extern "C"  void LateBoundReflectionDelegateFactory__ctor_m1051997327 (LateBoundReflectionDelegateFactory_t3208546116 * __this, const RuntimeMethod* method)
{
	{
		ReflectionDelegateFactory__ctor_m3256007077(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory::.cctor()
extern "C"  void LateBoundReflectionDelegateFactory__cctor_m882552914 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LateBoundReflectionDelegateFactory__cctor_m882552914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LateBoundReflectionDelegateFactory_t3208546116 * L_0 = (LateBoundReflectionDelegateFactory_t3208546116 *)il2cpp_codegen_object_new(LateBoundReflectionDelegateFactory_t3208546116_il2cpp_TypeInfo_var);
		LateBoundReflectionDelegateFactory__ctor_m1051997327(L_0, /*hidden argument*/NULL);
		((LateBoundReflectionDelegateFactory_t3208546116_StaticFields*)il2cpp_codegen_static_fields_for(LateBoundReflectionDelegateFactory_t3208546116_il2cpp_TypeInfo_var))->set__instance_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass3_0__ctor_m1570344605 (U3CU3Ec__DisplayClass3_0_t322633509 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__0(System.Object[])
extern "C"  RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m152120987 (U3CU3Ec__DisplayClass3_0_t322633509 * __this, ObjectU5BU5D_t3614634134* ___a0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3614634134* V_0 = NULL;
	{
		ObjectU5BU5D_t3614634134* L_0 = ___a0;
		V_0 = L_0;
		ConstructorInfo_t2851816542 * L_1 = __this->get_c_0();
		ObjectU5BU5D_t3614634134* L_2 = V_0;
		NullCheck(L_1);
		RuntimeObject * L_3 = ConstructorInfo_Invoke_m2144827141(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__1(System.Object[])
extern "C"  RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_m1832472028 (U3CU3Ec__DisplayClass3_0_t322633509 * __this, ObjectU5BU5D_t3614634134* ___a0, const RuntimeMethod* method)
{
	{
		MethodBase_t * L_0 = __this->get_method_1();
		ObjectU5BU5D_t3614634134* L_1 = ___a0;
		NullCheck(L_0);
		RuntimeObject * L_2 = MethodBase_Invoke_m1075809207(L_0, NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Newtonsoft.Json.Utilities.MathUtils::IntLength(System.UInt64)
extern "C"  int32_t MathUtils_IntLength_m4052179826 (RuntimeObject * __this /* static, unused */, uint64_t ___i0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___i0;
		if ((!(((uint64_t)L_0) < ((uint64_t)((int64_t)10000000000LL)))))
		{
			goto IL_006d;
		}
	}
	{
		uint64_t L_1 = ___i0;
		if ((!(((uint64_t)L_1) < ((uint64_t)(((int64_t)((int64_t)((int32_t)10))))))))
		{
			goto IL_0014;
		}
	}
	{
		return 1;
	}

IL_0014:
	{
		uint64_t L_2 = ___i0;
		if ((!(((uint64_t)L_2) < ((uint64_t)(((int64_t)((int64_t)((int32_t)100))))))))
		{
			goto IL_001c;
		}
	}
	{
		return 2;
	}

IL_001c:
	{
		uint64_t L_3 = ___i0;
		if ((!(((uint64_t)L_3) < ((uint64_t)(((int64_t)((int64_t)((int32_t)1000))))))))
		{
			goto IL_0027;
		}
	}
	{
		return 3;
	}

IL_0027:
	{
		uint64_t L_4 = ___i0;
		if ((!(((uint64_t)L_4) < ((uint64_t)(((int64_t)((int64_t)((int32_t)10000))))))))
		{
			goto IL_0032;
		}
	}
	{
		return 4;
	}

IL_0032:
	{
		uint64_t L_5 = ___i0;
		if ((!(((uint64_t)L_5) < ((uint64_t)(((int64_t)((int64_t)((int32_t)100000))))))))
		{
			goto IL_003d;
		}
	}
	{
		return 5;
	}

IL_003d:
	{
		uint64_t L_6 = ___i0;
		if ((!(((uint64_t)L_6) < ((uint64_t)(((int64_t)((int64_t)((int32_t)1000000))))))))
		{
			goto IL_0048;
		}
	}
	{
		return 6;
	}

IL_0048:
	{
		uint64_t L_7 = ___i0;
		if ((!(((uint64_t)L_7) < ((uint64_t)(((int64_t)((int64_t)((int32_t)10000000))))))))
		{
			goto IL_0053;
		}
	}
	{
		return 7;
	}

IL_0053:
	{
		uint64_t L_8 = ___i0;
		if ((!(((uint64_t)L_8) < ((uint64_t)(((int64_t)((int64_t)((int32_t)100000000))))))))
		{
			goto IL_005e;
		}
	}
	{
		return 8;
	}

IL_005e:
	{
		uint64_t L_9 = ___i0;
		if ((!(((uint64_t)L_9) < ((uint64_t)(((int64_t)((int64_t)((int32_t)1000000000))))))))
		{
			goto IL_006a;
		}
	}
	{
		return ((int32_t)9);
	}

IL_006a:
	{
		return ((int32_t)10);
	}

IL_006d:
	{
		uint64_t L_10 = ___i0;
		if ((!(((uint64_t)L_10) < ((uint64_t)((int64_t)100000000000LL)))))
		{
			goto IL_007c;
		}
	}
	{
		return ((int32_t)11);
	}

IL_007c:
	{
		uint64_t L_11 = ___i0;
		if ((!(((uint64_t)L_11) < ((uint64_t)((int64_t)1000000000000LL)))))
		{
			goto IL_008b;
		}
	}
	{
		return ((int32_t)12);
	}

IL_008b:
	{
		uint64_t L_12 = ___i0;
		if ((!(((uint64_t)L_12) < ((uint64_t)((int64_t)10000000000000LL)))))
		{
			goto IL_009a;
		}
	}
	{
		return ((int32_t)13);
	}

IL_009a:
	{
		uint64_t L_13 = ___i0;
		if ((!(((uint64_t)L_13) < ((uint64_t)((int64_t)100000000000000LL)))))
		{
			goto IL_00a9;
		}
	}
	{
		return ((int32_t)14);
	}

IL_00a9:
	{
		uint64_t L_14 = ___i0;
		if ((!(((uint64_t)L_14) < ((uint64_t)((int64_t)1000000000000000LL)))))
		{
			goto IL_00b8;
		}
	}
	{
		return ((int32_t)15);
	}

IL_00b8:
	{
		uint64_t L_15 = ___i0;
		if ((!(((uint64_t)L_15) < ((uint64_t)((int64_t)10000000000000000LL)))))
		{
			goto IL_00c7;
		}
	}
	{
		return ((int32_t)16);
	}

IL_00c7:
	{
		uint64_t L_16 = ___i0;
		if ((!(((uint64_t)L_16) < ((uint64_t)((int64_t)100000000000000000LL)))))
		{
			goto IL_00d6;
		}
	}
	{
		return ((int32_t)17);
	}

IL_00d6:
	{
		uint64_t L_17 = ___i0;
		if ((!(((uint64_t)L_17) < ((uint64_t)((int64_t)1000000000000000000LL)))))
		{
			goto IL_00e5;
		}
	}
	{
		return ((int32_t)18);
	}

IL_00e5:
	{
		uint64_t L_18 = ___i0;
		if ((!(((uint64_t)L_18) < ((uint64_t)((int64_t)-8446744073709551616LL)))))
		{
			goto IL_00f4;
		}
	}
	{
		return ((int32_t)19);
	}

IL_00f4:
	{
		return ((int32_t)20);
	}
}
// System.Char Newtonsoft.Json.Utilities.MathUtils::IntToHex(System.Int32)
extern "C"  Il2CppChar MathUtils_IntToHex_m2884723570 (RuntimeObject * __this /* static, unused */, int32_t ___n0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___n0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)9))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___n0;
		return (((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)48))))));
	}

IL_000b:
	{
		int32_t L_2 = ___n0;
		return (((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)10))), (int32_t)((int32_t)97))))));
	}
}
// System.Boolean Newtonsoft.Json.Utilities.MathUtils::ApproxEquals(System.Double,System.Double)
extern "C"  bool MathUtils_ApproxEquals_m3302882273 (RuntimeObject * __this /* static, unused */, double ___d10, double ___d21, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = ___d10;
		double L_1 = ___d21;
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		double L_2 = ___d10;
		double L_3 = fabs(L_2);
		double L_4 = ___d21;
		double L_5 = fabs(L_4);
		V_0 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)L_3, (double)L_5)), (double)(10.0))), (double)(2.2204460492503131E-16)));
		double L_6 = ___d10;
		double L_7 = ___d21;
		V_1 = ((double)il2cpp_codegen_subtract((double)L_6, (double)L_7));
		double L_8 = V_0;
		double L_9 = V_1;
		if ((!(((double)((-L_8))) < ((double)L_9))))
		{
			goto IL_0036;
		}
	}
	{
		double L_10 = V_0;
		double L_11 = V_1;
		return (bool)((((double)L_10) > ((double)L_11))? 1 : 0);
	}

IL_0036:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Newtonsoft.Json.Utilities.MiscellaneousUtils::ValueEquals(System.Object,System.Object)
extern "C"  bool MiscellaneousUtils_ValueEquals_m2333263074 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MiscellaneousUtils_ValueEquals_m2333263074_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Decimal_t724701077  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___objA0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject * L_1 = ___objB1;
		if (L_1)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)1;
	}

IL_0008:
	{
		RuntimeObject * L_2 = ___objA0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject * L_3 = ___objB1;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		RuntimeObject * L_4 = ___objA0;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject * L_5 = ___objB1;
		if (!L_5)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		RuntimeObject * L_6 = ___objA0;
		NullCheck(L_6);
		Type_t * L_7 = Object_GetType_m191970594(L_6, /*hidden argument*/NULL);
		RuntimeObject * L_8 = ___objB1;
		NullCheck(L_8);
		Type_t * L_9 = Object_GetType_m191970594(L_8, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_7) == ((RuntimeObject*)(Type_t *)L_9)))
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject * L_10 = ___objA0;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2984810590_il2cpp_TypeInfo_var);
		bool L_11 = ConvertUtils_IsInteger_m3596203515(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject * L_12 = ___objB1;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2984810590_il2cpp_TypeInfo_var);
		bool L_13 = ConvertUtils_IsInteger_m3596203515(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject * L_14 = ___objA0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_15 = CultureInfo_get_CurrentCulture_m711066087(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		Decimal_t724701077  L_16 = Convert_ToDecimal_m349440953(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		RuntimeObject * L_17 = ___objB1;
		CultureInfo_t3500843524 * L_18 = CultureInfo_get_CurrentCulture_m711066087(NULL /*static, unused*/, /*hidden argument*/NULL);
		Decimal_t724701077  L_19 = Convert_ToDecimal_m349440953(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		bool L_20 = Decimal_Equals_m1115043331((&V_0), L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0055:
	{
		RuntimeObject * L_21 = ___objA0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_21, Double_t4078015681_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_22 = ___objA0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_22, Single_t2076509932_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject * L_23 = ___objA0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_23, Decimal_t724701077_il2cpp_TypeInfo_var)))
		{
			goto IL_00a1;
		}
	}

IL_006d:
	{
		RuntimeObject * L_24 = ___objB1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_24, Double_t4078015681_il2cpp_TypeInfo_var)))
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject * L_25 = ___objB1;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Single_t2076509932_il2cpp_TypeInfo_var)))
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject * L_26 = ___objB1;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_26, Decimal_t724701077_il2cpp_TypeInfo_var)))
		{
			goto IL_00a1;
		}
	}

IL_0085:
	{
		RuntimeObject * L_27 = ___objA0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_28 = CultureInfo_get_CurrentCulture_m711066087(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2607082565_il2cpp_TypeInfo_var);
		double L_29 = Convert_ToDouble_m574888941(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		RuntimeObject * L_30 = ___objB1;
		CultureInfo_t3500843524 * L_31 = CultureInfo_get_CurrentCulture_m711066087(NULL /*static, unused*/, /*hidden argument*/NULL);
		double L_32 = Convert_ToDouble_m574888941(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		bool L_33 = MathUtils_ApproxEquals_m3302882273(NULL /*static, unused*/, L_29, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_00a1:
	{
		return (bool)0;
	}

IL_00a3:
	{
		RuntimeObject * L_34 = ___objA0;
		RuntimeObject * L_35 = ___objB1;
		NullCheck(L_34);
		bool L_36 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_34, L_35);
		return L_36;
	}
}
// System.ArgumentOutOfRangeException Newtonsoft.Json.Utilities.MiscellaneousUtils::CreateArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C"  ArgumentOutOfRangeException_t279959794 * MiscellaneousUtils_CreateArgumentOutOfRangeException_m4097621156 (RuntimeObject * __this /* static, unused */, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MiscellaneousUtils_CreateArgumentOutOfRangeException_m4097621156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___message2;
		String_t* L_1 = Environment_get_NewLine_m266316410(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_2 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject * L_3 = ___actualValue1;
		String_t* L_4 = StringUtils_FormatWith_m2157778407(NULL /*static, unused*/, _stringLiteral857846564, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m612901809(NULL /*static, unused*/, L_0, L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = ___paramName0;
		String_t* L_7 = V_0;
		ArgumentOutOfRangeException_t279959794 * L_8 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m4234257711(L_8, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::ToString(System.Object)
extern "C"  String_t* MiscellaneousUtils_ToString_m803301885 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MiscellaneousUtils_ToString_m803301885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteral634808489;
	}

IL_0009:
	{
		RuntimeObject * L_1 = ___value0;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}

IL_0018:
	{
		RuntimeObject * L_4 = ___value0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m612901809(NULL /*static, unused*/, _stringLiteral372029312, L_5, _stringLiteral372029312, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 Newtonsoft.Json.Utilities.MiscellaneousUtils::ByteArrayCompare(System.Byte[],System.Byte[])
extern "C"  int32_t MiscellaneousUtils_ByteArrayCompare_m3864060926 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___a10, ByteU5BU5D_t3397334013* ___a21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_t3397334013* L_0 = ___a10;
		NullCheck(L_0);
		V_1 = (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))));
		ByteU5BU5D_t3397334013* L_1 = ___a21;
		NullCheck(L_1);
		int32_t L_2 = Int32_CompareTo_m3808534558((&V_1), (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_0014:
	{
		V_2 = 0;
		goto IL_0031;
	}

IL_0018:
	{
		ByteU5BU5D_t3397334013* L_5 = ___a10;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		ByteU5BU5D_t3397334013* L_7 = ___a21;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = Byte_CompareTo_m1850579028(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		int32_t L_12 = V_3;
		if (!L_12)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_13 = V_3;
		return L_13;
	}

IL_002d:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_15 = V_2;
		ByteU5BU5D_t3397334013* L_16 = ___a10;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		return 0;
	}
}
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::GetPrefix(System.String)
extern "C"  String_t* MiscellaneousUtils_GetPrefix_m2504171761 (RuntimeObject * __this /* static, unused */, String_t* ___qualifiedName0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___qualifiedName0;
		MiscellaneousUtils_GetQualifiedNameParts_m1789388425(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::GetLocalName(System.String)
extern "C"  String_t* MiscellaneousUtils_GetLocalName_m808451887 (RuntimeObject * __this /* static, unused */, String_t* ___qualifiedName0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___qualifiedName0;
		MiscellaneousUtils_GetQualifiedNameParts_m1789388425(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_1 = V_1;
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Utilities.MiscellaneousUtils::GetQualifiedNameParts(System.String,System.String&,System.String&)
extern "C"  void MiscellaneousUtils_GetQualifiedNameParts_m1789388425 (RuntimeObject * __this /* static, unused */, String_t* ___qualifiedName0, String_t** ___prefix1, String_t** ___localName2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___qualifiedName0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2358239236(L_0, ((int32_t)58), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ___qualifiedName0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m1606060069(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1))) == ((uint32_t)L_6))))
		{
			goto IL_0022;
		}
	}

IL_001b:
	{
		String_t** L_7 = ___prefix1;
		*((RuntimeObject **)(L_7)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_7), (RuntimeObject *)NULL);
		String_t** L_8 = ___localName2;
		String_t* L_9 = ___qualifiedName0;
		*((RuntimeObject **)(L_8)) = (RuntimeObject *)L_9;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_8), (RuntimeObject *)L_9);
		return;
	}

IL_0022:
	{
		String_t** L_10 = ___prefix1;
		String_t* L_11 = ___qualifiedName0;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		String_t* L_13 = String_Substring_m12482732(L_11, 0, L_12, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_10)) = (RuntimeObject *)L_13;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_10), (RuntimeObject *)L_13);
		String_t** L_14 = ___localName2;
		String_t* L_15 = ___qualifiedName0;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m2032624251(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_14)) = (RuntimeObject *)L_17;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_14), (RuntimeObject *)L_17);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::FormatValueForPrint(System.Object)
extern "C"  String_t* MiscellaneousUtils_FormatValueForPrint_m210569177 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MiscellaneousUtils_FormatValueForPrint_m210569177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteral634808489;
	}

IL_0009:
	{
		RuntimeObject * L_1 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m2000667605(NULL /*static, unused*/, _stringLiteral372029312, L_2, _stringLiteral372029312, /*hidden argument*/NULL);
		return L_3;
	}

IL_0022:
	{
		RuntimeObject * L_4 = ___value0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::.cctor()
extern "C"  void PropertyNameTable__cctor_m2906877120 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable__cctor_m2906877120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Environment_get_TickCount_m3538062563(NULL /*static, unused*/, /*hidden argument*/NULL);
		((PropertyNameTable_t1902004952_StaticFields*)il2cpp_codegen_static_fields_for(PropertyNameTable_t1902004952_il2cpp_TypeInfo_var))->set_HashCodeRandomizer_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::.ctor()
extern "C"  void PropertyNameTable__ctor_m3468246443 (PropertyNameTable_t1902004952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable__ctor_m3468246443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set__mask_3(((int32_t)31));
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get__mask_3();
		__this->set__entries_2(((EntryU5BU5D_t749043653*)SZArrayNew(EntryU5BU5D_t749043653_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)))));
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::Get(System.Char[],System.Int32,System.Int32)
extern "C"  String_t* PropertyNameTable_Get_m3701298949 (PropertyNameTable_t1902004952 * __this, CharU5BU5D_t1328083999* ___key0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable_Get_m3701298949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Entry_t1762676876 * V_3 = NULL;
	{
		int32_t L_0 = ___length2;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_0009:
	{
		int32_t L_2 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(PropertyNameTable_t1902004952_il2cpp_TypeInfo_var);
		int32_t L_3 = ((PropertyNameTable_t1902004952_StaticFields*)il2cpp_codegen_static_fields_for(PropertyNameTable_t1902004952_il2cpp_TypeInfo_var))->get_HashCodeRandomizer_0();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3));
		int32_t L_4 = V_0;
		int32_t L_5 = V_0;
		CharU5BU5D_t1328083999* L_6 = ___key0;
		int32_t L_7 = ___start1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint16_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5<<(int32_t)7))^(int32_t)L_9))));
		int32_t L_10 = ___start1;
		int32_t L_11 = ___length2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		int32_t L_12 = ___start1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		goto IL_0033;
	}

IL_0025:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		CharU5BU5D_t1328083999* L_15 = ___key0;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint16_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14<<(int32_t)7))^(int32_t)L_18))));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_22 = V_0;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)((int32_t)((int32_t)L_23>>(int32_t)((int32_t)17)))));
		int32_t L_24 = V_0;
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)((int32_t)((int32_t)L_25>>(int32_t)((int32_t)11)))));
		int32_t L_26 = V_0;
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)((int32_t)L_27>>(int32_t)5))));
		EntryU5BU5D_t749043653* L_28 = __this->get__entries_2();
		int32_t L_29 = V_0;
		int32_t L_30 = __this->get__mask_3();
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)((int32_t)L_29&(int32_t)L_30));
		Entry_t1762676876 * L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = L_32;
		goto IL_0084;
	}

IL_005d:
	{
		Entry_t1762676876 * L_33 = V_3;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_HashCode_1();
		int32_t L_35 = V_0;
		if ((!(((uint32_t)L_34) == ((uint32_t)L_35))))
		{
			goto IL_007d;
		}
	}
	{
		Entry_t1762676876 * L_36 = V_3;
		NullCheck(L_36);
		String_t* L_37 = L_36->get_Value_0();
		CharU5BU5D_t1328083999* L_38 = ___key0;
		int32_t L_39 = ___start1;
		int32_t L_40 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(PropertyNameTable_t1902004952_il2cpp_TypeInfo_var);
		bool L_41 = PropertyNameTable_TextEquals_m1464055630(NULL /*static, unused*/, L_37, L_38, L_39, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_007d;
		}
	}
	{
		Entry_t1762676876 * L_42 = V_3;
		NullCheck(L_42);
		String_t* L_43 = L_42->get_Value_0();
		return L_43;
	}

IL_007d:
	{
		Entry_t1762676876 * L_44 = V_3;
		NullCheck(L_44);
		Entry_t1762676876 * L_45 = L_44->get_Next_2();
		V_3 = L_45;
	}

IL_0084:
	{
		Entry_t1762676876 * L_46 = V_3;
		if (L_46)
		{
			goto IL_005d;
		}
	}
	{
		return (String_t*)NULL;
	}
}
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::Add(System.String)
extern "C"  String_t* PropertyNameTable_Add_m1214517805 (PropertyNameTable_t1902004952 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable_Add_m1214517805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Entry_t1762676876 * V_3 = NULL;
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral3021628599, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___key0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1606060069(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_5;
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PropertyNameTable_t1902004952_il2cpp_TypeInfo_var);
		int32_t L_7 = ((PropertyNameTable_t1902004952_StaticFields*)il2cpp_codegen_static_fields_for(PropertyNameTable_t1902004952_il2cpp_TypeInfo_var))->get_HashCodeRandomizer_0();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7));
		V_2 = 0;
		goto IL_003c;
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_1;
		String_t* L_10 = ___key0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Il2CppChar L_12 = String_get_Chars_m4230566705(L_10, L_11, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9<<(int32_t)7))^(int32_t)L_12))));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_14 = V_2;
		String_t* L_15 = ___key0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m1606060069(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)((int32_t)L_18>>(int32_t)((int32_t)17)))));
		int32_t L_19 = V_1;
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)((int32_t)((int32_t)L_20>>(int32_t)((int32_t)11)))));
		int32_t L_21 = V_1;
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)((int32_t)((int32_t)L_22>>(int32_t)5))));
		EntryU5BU5D_t749043653* L_23 = __this->get__entries_2();
		int32_t L_24 = V_1;
		int32_t L_25 = __this->get__mask_3();
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)((int32_t)L_24&(int32_t)L_25));
		Entry_t1762676876 * L_27 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_3 = L_27;
		goto IL_0090;
	}

IL_006b:
	{
		Entry_t1762676876 * L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_HashCode_1();
		int32_t L_30 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0089;
		}
	}
	{
		Entry_t1762676876 * L_31 = V_3;
		NullCheck(L_31);
		String_t* L_32 = L_31->get_Value_0();
		String_t* L_33 = ___key0;
		NullCheck(L_32);
		bool L_34 = String_Equals_m2633592423(L_32, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0089;
		}
	}
	{
		Entry_t1762676876 * L_35 = V_3;
		NullCheck(L_35);
		String_t* L_36 = L_35->get_Value_0();
		return L_36;
	}

IL_0089:
	{
		Entry_t1762676876 * L_37 = V_3;
		NullCheck(L_37);
		Entry_t1762676876 * L_38 = L_37->get_Next_2();
		V_3 = L_38;
	}

IL_0090:
	{
		Entry_t1762676876 * L_39 = V_3;
		if (L_39)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_40 = ___key0;
		int32_t L_41 = V_1;
		String_t* L_42 = PropertyNameTable_AddEntry_m74796914(__this, L_40, L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::AddEntry(System.String,System.Int32)
extern "C"  String_t* PropertyNameTable_AddEntry_m74796914 (PropertyNameTable_t1902004952 * __this, String_t* ___str0, int32_t ___hashCode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable_AddEntry_m74796914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Entry_t1762676876 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___hashCode1;
		int32_t L_1 = __this->get__mask_3();
		V_0 = ((int32_t)((int32_t)L_0&(int32_t)L_1));
		String_t* L_2 = ___str0;
		int32_t L_3 = ___hashCode1;
		EntryU5BU5D_t749043653* L_4 = __this->get__entries_2();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Entry_t1762676876 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Entry_t1762676876 * L_8 = (Entry_t1762676876 *)il2cpp_codegen_object_new(Entry_t1762676876_il2cpp_TypeInfo_var);
		Entry__ctor_m4130845181(L_8, L_2, L_3, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		EntryU5BU5D_t749043653* L_9 = __this->get__entries_2();
		int32_t L_10 = V_0;
		Entry_t1762676876 * L_11 = V_1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Entry_t1762676876 *)L_11);
		int32_t L_12 = __this->get__count_1();
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->set__count_1(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		int32_t L_14 = V_2;
		int32_t L_15 = __this->get__mask_3();
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0041;
		}
	}
	{
		PropertyNameTable_Grow_m3332910318(__this, /*hidden argument*/NULL);
	}

IL_0041:
	{
		Entry_t1762676876 * L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17 = L_16->get_Value_0();
		return L_17;
	}
}
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::Grow()
extern "C"  void PropertyNameTable_Grow_m3332910318 (PropertyNameTable_t1902004952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyNameTable_Grow_m3332910318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EntryU5BU5D_t749043653* V_0 = NULL;
	int32_t V_1 = 0;
	EntryU5BU5D_t749043653* V_2 = NULL;
	int32_t V_3 = 0;
	Entry_t1762676876 * V_4 = NULL;
	Entry_t1762676876 * V_5 = NULL;
	int32_t V_6 = 0;
	{
		EntryU5BU5D_t749043653* L_0 = __this->get__entries_2();
		V_0 = L_0;
		int32_t L_1 = __this->get__mask_3();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)), (int32_t)1));
		int32_t L_2 = V_1;
		V_2 = ((EntryU5BU5D_t749043653*)SZArrayNew(EntryU5BU5D_t749043653_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))));
		V_3 = 0;
		goto IL_0057;
	}

IL_001f:
	{
		EntryU5BU5D_t749043653* L_3 = V_0;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Entry_t1762676876 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_5 = L_6;
		goto IL_004f;
	}

IL_0026:
	{
		Entry_t1762676876 * L_7 = V_5;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_HashCode_1();
		int32_t L_9 = V_1;
		V_6 = ((int32_t)((int32_t)L_8&(int32_t)L_9));
		Entry_t1762676876 * L_10 = V_5;
		NullCheck(L_10);
		Entry_t1762676876 * L_11 = L_10->get_Next_2();
		V_4 = L_11;
		Entry_t1762676876 * L_12 = V_5;
		EntryU5BU5D_t749043653* L_13 = V_2;
		int32_t L_14 = V_6;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Entry_t1762676876 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		L_12->set_Next_2(L_16);
		EntryU5BU5D_t749043653* L_17 = V_2;
		int32_t L_18 = V_6;
		Entry_t1762676876 * L_19 = V_5;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Entry_t1762676876 *)L_19);
		Entry_t1762676876 * L_20 = V_4;
		V_5 = L_20;
	}

IL_004f:
	{
		Entry_t1762676876 * L_21 = V_5;
		if (L_21)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_23 = V_3;
		EntryU5BU5D_t749043653* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		EntryU5BU5D_t749043653* L_25 = V_2;
		__this->set__entries_2(L_25);
		int32_t L_26 = V_1;
		__this->set__mask_3(L_26);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.PropertyNameTable::TextEquals(System.String,System.Char[],System.Int32,System.Int32)
extern "C"  bool PropertyNameTable_TextEquals_m1464055630 (RuntimeObject * __this /* static, unused */, String_t* ___str10, CharU5BU5D_t1328083999* ___str21, int32_t ___str2Start2, int32_t ___str2Length3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str10;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1606060069(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___str2Length3;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		V_0 = 0;
		goto IL_0023;
	}

IL_000f:
	{
		String_t* L_3 = ___str10;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m4230566705(L_3, L_4, /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_6 = ___str21;
		int32_t L_7 = ___str2Start2;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
		uint16_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((((int32_t)L_5) == ((int32_t)L_10)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0023:
	{
		int32_t L_12 = V_0;
		String_t* L_13 = ___str10;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m1606060069(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable/Entry::.ctor(System.String,System.Int32,Newtonsoft.Json.Utilities.PropertyNameTable/Entry)
extern "C"  void Entry__ctor_m4130845181 (Entry_t1762676876 * __this, String_t* ___value0, int32_t ___hashCode1, Entry_t1762676876 * ___next2, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set_Value_0(L_0);
		int32_t L_1 = ___hashCode1;
		__this->set_HashCode_1(L_1);
		Entry_t1762676876 * L_2 = ___next2;
		__this->set_Next_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionDelegateFactory::.ctor()
extern "C"  void ReflectionDelegateFactory__ctor_m3256007077 (ReflectionDelegateFactory_t2294713146 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type Newtonsoft.Json.Utilities.ReflectionMember::get_MemberType()
extern "C"  Type_t * ReflectionMember_get_MemberType_m614458395 (ReflectionMember_t4222298801 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CMemberTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_MemberType(System.Type)
extern "C"  void ReflectionMember_set_MemberType_m2920115996 (ReflectionMember_t4222298801 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CMemberTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionMember::get_Getter()
extern "C"  Func_2_t2825504181 * ReflectionMember_get_Getter_m3691765536 (ReflectionMember_t4222298801 * __this, const RuntimeMethod* method)
{
	{
		Func_2_t2825504181 * L_0 = __this->get_U3CGetterU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_Getter(System.Func`2<System.Object,System.Object>)
extern "C"  void ReflectionMember_set_Getter_m649122439 (ReflectionMember_t4222298801 * __this, Func_2_t2825504181 * ___value0, const RuntimeMethod* method)
{
	{
		Func_2_t2825504181 * L_0 = ___value0;
		__this->set_U3CGetterU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::set_Setter(System.Action`2<System.Object,System.Object>)
extern "C"  void ReflectionMember_set_Setter_m35574259 (ReflectionMember_t4222298801 * __this, Action_2_t2572051853 * ___value0, const RuntimeMethod* method)
{
	{
		Action_2_t2572051853 * L_0 = ___value0;
		__this->set_U3CSetterU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionMember::.ctor()
extern "C"  void ReflectionMember__ctor_m3088613086 (ReflectionMember_t4222298801 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject::get_Creator()
extern "C"  ObjectConstructor_1_t1997612730 * ReflectionObject_get_Creator_m3558535968 (ReflectionObject_t1424089768 * __this, const RuntimeMethod* method)
{
	{
		ObjectConstructor_1_t1997612730 * L_0 = __this->get_U3CCreatorU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Creator(Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>)
extern "C"  void ReflectionObject_set_Creator_m3388855541 (ReflectionObject_t1424089768 * __this, ObjectConstructor_1_t1997612730 * ___value0, const RuntimeMethod* method)
{
	{
		ObjectConstructor_1_t1997612730 * L_0 = ___value0;
		__this->set_U3CCreatorU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> Newtonsoft.Json.Utilities.ReflectionObject::get_Members()
extern "C"  RuntimeObject* ReflectionObject_get_Members_m2127406134 (ReflectionObject_t1424089768 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CMembersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Members(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>)
extern "C"  void ReflectionObject_set_Members_m4034020977 (ReflectionObject_t1424089768 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CMembersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::.ctor()
extern "C"  void ReflectionObject__ctor_m2209907547 (ReflectionObject_t1424089768 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionObject__ctor_m2209907547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		Dictionary_2_t1842110767 * L_0 = (Dictionary_2_t1842110767 *)il2cpp_codegen_object_new(Dictionary_2_t1842110767_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2447020707(L_0, /*hidden argument*/Dictionary_2__ctor_m2447020707_RuntimeMethod_var);
		ReflectionObject_set_Members_m4034020977(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject::GetValue(System.Object,System.String)
extern "C"  RuntimeObject * ReflectionObject_GetValue_m3746447183 (ReflectionObject_t1424089768 * __this, RuntimeObject * ___target0, String_t* ___member1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionObject_GetValue_m3746447183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ReflectionObject_get_Members_m2127406134(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___member1;
		NullCheck(L_0);
		ReflectionMember_t4222298801 * L_2 = InterfaceFuncInvoker1< ReflectionMember_t4222298801 *, String_t* >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>::get_Item(!0) */, IDictionary_2_t4136161484_il2cpp_TypeInfo_var, L_0, L_1);
		NullCheck(L_2);
		Func_2_t2825504181 * L_3 = ReflectionMember_get_Getter_m3691765536(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		NullCheck(L_3);
		RuntimeObject * L_5 = Func_2_Invoke_m3790049603(L_3, L_4, /*hidden argument*/Func_2_Invoke_m3790049603_RuntimeMethod_var);
		return L_5;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionObject::GetType(System.String)
extern "C"  Type_t * ReflectionObject_GetType_m1626363475 (ReflectionObject_t1424089768 * __this, String_t* ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionObject_GetType_m1626363475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ReflectionObject_get_Members_m2127406134(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___member0;
		NullCheck(L_0);
		ReflectionMember_t4222298801 * L_2 = InterfaceFuncInvoker1< ReflectionMember_t4222298801 *, String_t* >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>::get_Item(!0) */, IDictionary_2_t4136161484_il2cpp_TypeInfo_var, L_0, L_1);
		NullCheck(L_2);
		Type_t * L_3 = ReflectionMember_get_MemberType_m614458395(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Utilities.ReflectionObject::Create(System.Type,System.String[])
extern "C"  ReflectionObject_t1424089768 * ReflectionObject_Create_m2359509532 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, StringU5BU5D_t1642385972* ___memberNames1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___t0;
		StringU5BU5D_t1642385972* L_1 = ___memberNames1;
		ReflectionObject_t1424089768 * L_2 = ReflectionObject_Create_m152623496(NULL /*static, unused*/, L_0, (MethodBase_t *)NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Utilities.ReflectionObject::Create(System.Type,System.Reflection.MethodBase,System.String[])
extern "C"  ReflectionObject_t1424089768 * ReflectionObject_Create_m152623496 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, MethodBase_t * ___creator1, StringU5BU5D_t1642385972* ___memberNames2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionObject_Create_m152623496_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ReflectionObject_t1424089768 * V_0 = NULL;
	ReflectionDelegateFactory_t2294713146 * V_1 = NULL;
	U3CU3Ec__DisplayClass13_0_t1856937010 * V_2 = NULL;
	StringU5BU5D_t1642385972* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	MemberInfo_t * V_6 = NULL;
	ReflectionMember_t4222298801 * V_7 = NULL;
	int32_t V_8 = 0;
	MethodInfo_t * V_9 = NULL;
	ParameterInfoU5BU5D_t2275869610* V_10 = NULL;
	U3CU3Ec__DisplayClass13_1_t290853069 * V_11 = NULL;
	U3CU3Ec__DisplayClass13_2_t694137596 * V_12 = NULL;
	MemberInfoU5BU5D_t4238939941* G_B7_0 = NULL;
	MemberInfoU5BU5D_t4238939941* G_B6_0 = NULL;
	{
		ReflectionObject_t1424089768 * L_0 = (ReflectionObject_t1424089768 *)il2cpp_codegen_object_new(ReflectionObject_t1424089768_il2cpp_TypeInfo_var);
		ReflectionObject__ctor_m2209907547(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonTypeReflector_t1473969596_il2cpp_TypeInfo_var);
		ReflectionDelegateFactory_t2294713146 * L_1 = JsonTypeReflector_get_ReflectionDelegateFactory_m2391908748(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		MethodBase_t * L_2 = ___creator1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ReflectionObject_t1424089768 * L_3 = V_0;
		ReflectionDelegateFactory_t2294713146 * L_4 = V_1;
		MethodBase_t * L_5 = ___creator1;
		NullCheck(L_4);
		ObjectConstructor_1_t1997612730 * L_6 = VirtFuncInvoker1< ObjectConstructor_1_t1997612730 *, MethodBase_t * >::Invoke(5 /* Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase) */, L_4, L_5);
		NullCheck(L_3);
		ReflectionObject_set_Creator_m3388855541(L_3, L_6, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_001e:
	{
		Type_t * L_7 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_8 = ReflectionUtils_HasDefaultConstructor_m1906518778(NULL /*static, unused*/, L_7, (bool)0, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		U3CU3Ec__DisplayClass13_0_t1856937010 * L_9 = (U3CU3Ec__DisplayClass13_0_t1856937010 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t1856937010_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_0__ctor_m3282333788(L_9, /*hidden argument*/NULL);
		V_2 = L_9;
		U3CU3Ec__DisplayClass13_0_t1856937010 * L_10 = V_2;
		ReflectionDelegateFactory_t2294713146 * L_11 = V_1;
		Type_t * L_12 = ___t0;
		NullCheck(L_11);
		Func_1_t348874681 * L_13 = GenericVirtFuncInvoker1< Func_1_t348874681 *, Type_t * >::Invoke(ReflectionDelegateFactory_CreateDefaultConstructor_TisRuntimeObject_m88399626_RuntimeMethod_var, L_11, L_12);
		NullCheck(L_10);
		L_10->set_ctor_0(L_13);
		ReflectionObject_t1424089768 * L_14 = V_0;
		U3CU3Ec__DisplayClass13_0_t1856937010 * L_15 = V_2;
		intptr_t L_16 = (intptr_t)U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m1912005429_RuntimeMethod_var;
		ObjectConstructor_1_t1997612730 * L_17 = (ObjectConstructor_1_t1997612730 *)il2cpp_codegen_object_new(ObjectConstructor_1_t1997612730_il2cpp_TypeInfo_var);
		ObjectConstructor_1__ctor_m2300859629(L_17, L_15, L_16, /*hidden argument*/ObjectConstructor_1__ctor_m2300859629_RuntimeMethod_var);
		NullCheck(L_14);
		ReflectionObject_set_Creator_m3388855541(L_14, L_17, /*hidden argument*/NULL);
	}

IL_004c:
	{
		StringU5BU5D_t1642385972* L_18 = ___memberNames2;
		V_3 = L_18;
		V_4 = 0;
		goto IL_020e;
	}

IL_0056:
	{
		StringU5BU5D_t1642385972* L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		Type_t * L_23 = ___t0;
		String_t* L_24 = V_5;
		NullCheck(L_23);
		MemberInfoU5BU5D_t4238939941* L_25 = VirtFuncInvoker2< MemberInfoU5BU5D_t4238939941*, String_t*, int32_t >::Invoke(52 /* System.Reflection.MemberInfo[] System.Type::GetMember(System.String,System.Reflection.BindingFlags) */, L_23, L_24, ((int32_t)20));
		MemberInfoU5BU5D_t4238939941* L_26 = L_25;
		NullCheck(L_26);
		G_B6_0 = L_26;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length))))) == ((int32_t)1)))
		{
			G_B7_0 = L_26;
			goto IL_0083;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_27 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_28 = V_5;
		String_t* L_29 = StringUtils_FormatWith_m2157778407(NULL /*static, unused*/, _stringLiteral3766775005, L_27, L_28, /*hidden argument*/NULL);
		ArgumentException_t3259014390 * L_30 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_30, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30);
	}

IL_0083:
	{
		MemberInfo_t * L_31 = Enumerable_Single_TisMemberInfo_t_m43632213(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B7_0, /*hidden argument*/Enumerable_Single_TisMemberInfo_t_m43632213_RuntimeMethod_var);
		V_6 = L_31;
		ReflectionMember_t4222298801 * L_32 = (ReflectionMember_t4222298801 *)il2cpp_codegen_object_new(ReflectionMember_t4222298801_il2cpp_TypeInfo_var);
		ReflectionMember__ctor_m3088613086(L_32, /*hidden argument*/NULL);
		V_7 = L_32;
		MemberInfo_t * L_33 = V_6;
		int32_t L_34 = TypeExtensions_MemberType_m2192645245(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		int32_t L_35 = V_8;
		if ((((int32_t)L_35) == ((int32_t)4)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_36 = V_8;
		if ((((int32_t)L_36) == ((int32_t)8)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_37 = V_8;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0190;
		}
	}

IL_00ad:
	{
		MemberInfo_t * L_38 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_39 = ReflectionUtils_CanReadMemberValue_m1471951163(NULL /*static, unused*/, L_38, (bool)0, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00c6;
		}
	}
	{
		ReflectionMember_t4222298801 * L_40 = V_7;
		ReflectionDelegateFactory_t2294713146 * L_41 = V_1;
		MemberInfo_t * L_42 = V_6;
		NullCheck(L_41);
		Func_2_t2825504181 * L_43 = ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m208935903(L_41, L_42, /*hidden argument*/ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m208935903_RuntimeMethod_var);
		NullCheck(L_40);
		ReflectionMember_set_Getter_m649122439(L_40, L_43, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		MemberInfo_t * L_44 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_45 = ReflectionUtils_CanSetMemberValue_m1350063670(NULL /*static, unused*/, L_44, (bool)0, (bool)0, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01b8;
		}
	}
	{
		ReflectionMember_t4222298801 * L_46 = V_7;
		ReflectionDelegateFactory_t2294713146 * L_47 = V_1;
		MemberInfo_t * L_48 = V_6;
		NullCheck(L_47);
		Action_2_t2572051853 * L_49 = ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2736460123(L_47, L_48, /*hidden argument*/ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2736460123_RuntimeMethod_var);
		NullCheck(L_46);
		ReflectionMember_set_Setter_m35574259(L_46, L_49, /*hidden argument*/NULL);
		goto IL_01b8;
	}

IL_00e8:
	{
		MemberInfo_t * L_50 = V_6;
		V_9 = ((MethodInfo_t *)CastclassClass((RuntimeObject*)L_50, MethodInfo_t_il2cpp_TypeInfo_var));
		MethodInfo_t * L_51 = V_9;
		NullCheck(L_51);
		bool L_52 = MethodBase_get_IsPublic_m479656180(L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01b8;
		}
	}
	{
		MethodInfo_t * L_53 = V_9;
		NullCheck(L_53);
		ParameterInfoU5BU5D_t2275869610* L_54 = VirtFuncInvoker0< ParameterInfoU5BU5D_t2275869610* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_53);
		V_10 = L_54;
		ParameterInfoU5BU5D_t2275869610* L_55 = V_10;
		NullCheck(L_55);
		if ((((RuntimeArray *)L_55)->max_length))
		{
			goto IL_014a;
		}
	}
	{
		MethodInfo_t * L_56 = V_9;
		NullCheck(L_56);
		Type_t * L_57 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_56);
		RuntimeTypeHandle_t2330101084  L_58 = { reinterpret_cast<intptr_t> (Void_t1841601450_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_57) == ((RuntimeObject*)(Type_t *)L_59)))
		{
			goto IL_014a;
		}
	}
	{
		U3CU3Ec__DisplayClass13_1_t290853069 * L_60 = (U3CU3Ec__DisplayClass13_1_t290853069 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_1_t290853069_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_1__ctor_m796488321(L_60, /*hidden argument*/NULL);
		V_11 = L_60;
		U3CU3Ec__DisplayClass13_1_t290853069 * L_61 = V_11;
		ReflectionDelegateFactory_t2294713146 * L_62 = V_1;
		MethodInfo_t * L_63 = V_9;
		NullCheck(L_62);
		MethodCall_2_t1283576322 * L_64 = GenericVirtFuncInvoker1< MethodCall_2_t1283576322 *, MethodBase_t * >::Invoke(ReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_m1597556207_RuntimeMethod_var, L_62, L_63);
		NullCheck(L_61);
		L_61->set_call_0(L_64);
		ReflectionMember_t4222298801 * L_65 = V_7;
		U3CU3Ec__DisplayClass13_1_t290853069 * L_66 = V_11;
		intptr_t L_67 = (intptr_t)U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_m3250173803_RuntimeMethod_var;
		Func_2_t2825504181 * L_68 = (Func_2_t2825504181 *)il2cpp_codegen_object_new(Func_2_t2825504181_il2cpp_TypeInfo_var);
		Func_2__ctor_m1741456965(L_68, L_66, L_67, /*hidden argument*/Func_2__ctor_m1741456965_RuntimeMethod_var);
		NullCheck(L_65);
		ReflectionMember_set_Getter_m649122439(L_65, L_68, /*hidden argument*/NULL);
		goto IL_01b8;
	}

IL_014a:
	{
		ParameterInfoU5BU5D_t2275869610* L_69 = V_10;
		NullCheck(L_69);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_69)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_01b8;
		}
	}
	{
		MethodInfo_t * L_70 = V_9;
		NullCheck(L_70);
		Type_t * L_71 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_70);
		RuntimeTypeHandle_t2330101084  L_72 = { reinterpret_cast<intptr_t> (Void_t1841601450_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_73 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_71) == ((RuntimeObject*)(Type_t *)L_73))))
		{
			goto IL_01b8;
		}
	}
	{
		U3CU3Ec__DisplayClass13_2_t694137596 * L_74 = (U3CU3Ec__DisplayClass13_2_t694137596 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_2_t694137596_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass13_2__ctor_m1027159206(L_74, /*hidden argument*/NULL);
		V_12 = L_74;
		U3CU3Ec__DisplayClass13_2_t694137596 * L_75 = V_12;
		ReflectionDelegateFactory_t2294713146 * L_76 = V_1;
		MethodInfo_t * L_77 = V_9;
		NullCheck(L_76);
		MethodCall_2_t1283576322 * L_78 = GenericVirtFuncInvoker1< MethodCall_2_t1283576322 *, MethodBase_t * >::Invoke(ReflectionDelegateFactory_CreateMethodCall_TisRuntimeObject_m1597556207_RuntimeMethod_var, L_76, L_77);
		NullCheck(L_75);
		L_75->set_call_0(L_78);
		ReflectionMember_t4222298801 * L_79 = V_7;
		U3CU3Ec__DisplayClass13_2_t694137596 * L_80 = V_12;
		intptr_t L_81 = (intptr_t)U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m989037858_RuntimeMethod_var;
		Action_2_t2572051853 * L_82 = (Action_2_t2572051853 *)il2cpp_codegen_object_new(Action_2_t2572051853_il2cpp_TypeInfo_var);
		Action_2__ctor_m290579545(L_82, L_80, L_81, /*hidden argument*/Action_2__ctor_m290579545_RuntimeMethod_var);
		NullCheck(L_79);
		ReflectionMember_set_Setter_m35574259(L_79, L_82, /*hidden argument*/NULL);
		goto IL_01b8;
	}

IL_0190:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_83 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		MemberInfo_t * L_84 = V_6;
		int32_t L_85 = TypeExtensions_MemberType_m2192645245(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
		int32_t L_86 = L_85;
		RuntimeObject * L_87 = Box(MemberTypes_t3343038963_il2cpp_TypeInfo_var, &L_86);
		MemberInfo_t * L_88 = V_6;
		NullCheck(L_88);
		String_t* L_89 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_88);
		String_t* L_90 = StringUtils_FormatWith_m3608957081(NULL /*static, unused*/, _stringLiteral535313421, L_83, L_87, L_89, /*hidden argument*/NULL);
		ArgumentException_t3259014390 * L_91 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_91, L_90, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_91);
	}

IL_01b8:
	{
		MemberInfo_t * L_92 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_93 = ReflectionUtils_CanReadMemberValue_m1471951163(NULL /*static, unused*/, L_92, (bool)0, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_01d1;
		}
	}
	{
		ReflectionMember_t4222298801 * L_94 = V_7;
		ReflectionDelegateFactory_t2294713146 * L_95 = V_1;
		MemberInfo_t * L_96 = V_6;
		NullCheck(L_95);
		Func_2_t2825504181 * L_97 = ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m208935903(L_95, L_96, /*hidden argument*/ReflectionDelegateFactory_CreateGet_TisRuntimeObject_m208935903_RuntimeMethod_var);
		NullCheck(L_94);
		ReflectionMember_set_Getter_m649122439(L_94, L_97, /*hidden argument*/NULL);
	}

IL_01d1:
	{
		MemberInfo_t * L_98 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_99 = ReflectionUtils_CanSetMemberValue_m1350063670(NULL /*static, unused*/, L_98, (bool)0, (bool)0, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_01eb;
		}
	}
	{
		ReflectionMember_t4222298801 * L_100 = V_7;
		ReflectionDelegateFactory_t2294713146 * L_101 = V_1;
		MemberInfo_t * L_102 = V_6;
		NullCheck(L_101);
		Action_2_t2572051853 * L_103 = ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2736460123(L_101, L_102, /*hidden argument*/ReflectionDelegateFactory_CreateSet_TisRuntimeObject_m2736460123_RuntimeMethod_var);
		NullCheck(L_100);
		ReflectionMember_set_Setter_m35574259(L_100, L_103, /*hidden argument*/NULL);
	}

IL_01eb:
	{
		ReflectionMember_t4222298801 * L_104 = V_7;
		MemberInfo_t * L_105 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		Type_t * L_106 = ReflectionUtils_GetMemberUnderlyingType_m1551178430(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		NullCheck(L_104);
		ReflectionMember_set_MemberType_m2920115996(L_104, L_106, /*hidden argument*/NULL);
		ReflectionObject_t1424089768 * L_107 = V_0;
		NullCheck(L_107);
		RuntimeObject* L_108 = ReflectionObject_get_Members_m2127406134(L_107, /*hidden argument*/NULL);
		String_t* L_109 = V_5;
		ReflectionMember_t4222298801 * L_110 = V_7;
		NullCheck(L_108);
		InterfaceActionInvoker2< String_t*, ReflectionMember_t4222298801 * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>::set_Item(!0,!1) */, IDictionary_2_t4136161484_il2cpp_TypeInfo_var, L_108, L_109, L_110);
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1));
	}

IL_020e:
	{
		int32_t L_112 = V_4;
		StringU5BU5D_t1642385972* L_113 = V_3;
		NullCheck(L_113);
		if ((((int32_t)L_112) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_113)->max_length)))))))
		{
			goto IL_0056;
		}
	}
	{
		ReflectionObject_t1424089768 * L_114 = V_0;
		return L_114;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_0__ctor_m3282333788 (U3CU3Ec__DisplayClass13_0_t1856937010 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::<Create>b__0(System.Object[])
extern "C"  RuntimeObject * U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m1912005429 (U3CU3Ec__DisplayClass13_0_t1856937010 * __this, ObjectU5BU5D_t3614634134* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m1912005429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t348874681 * L_0 = __this->get_ctor_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = Func_1_Invoke_m3495195018(L_0, /*hidden argument*/Func_1_Invoke_m3495195018_RuntimeMethod_var);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_1__ctor_m796488321 (U3CU3Ec__DisplayClass13_1_t290853069 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::<Create>b__1(System.Object)
extern "C"  RuntimeObject * U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_m3250173803 (U3CU3Ec__DisplayClass13_1_t290853069 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_m3250173803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t1283576322 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		NullCheck(L_0);
		RuntimeObject * L_2 = MethodCall_2_Invoke_m3330949966(L_0, L_1, ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/MethodCall_2_Invoke_m3330949966_RuntimeMethod_var);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::.ctor()
extern "C"  void U3CU3Ec__DisplayClass13_2__ctor_m1027159206 (U3CU3Ec__DisplayClass13_2_t694137596 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::<Create>b__2(System.Object,System.Object)
extern "C"  void U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m989037858 (U3CU3Ec__DisplayClass13_2_t694137596 * __this, RuntimeObject * ___target0, RuntimeObject * ___arg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m989037858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t1283576322 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_t3614634134* L_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject * L_3 = ___arg1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		MethodCall_2_Invoke_m3330949966(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_m3330949966_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::.cctor()
extern "C"  void ReflectionUtils__cctor_m1662492392 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils__cctor_m1662492392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1664964607* L_0 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->get_EmptyTypes_3();
		((ReflectionUtils_t3884221258_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var))->set_EmptyTypes_0(L_0);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsVirtual_m2993796589 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsVirtual_m2993796589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral3463778309, /*hidden argument*/NULL);
		PropertyInfo_t * L_1 = ___propertyInfo0;
		NullCheck(L_1);
		MethodInfo_t * L_2 = PropertyInfo_GetGetMethod_m1759237908(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		MethodInfo_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		MethodInfo_t * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = MethodBase_get_IsVirtual_m1107721718(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		return (bool)1;
	}

IL_001f:
	{
		PropertyInfo_t * L_6 = ___propertyInfo0;
		NullCheck(L_6);
		MethodInfo_t * L_7 = PropertyInfo_GetSetMethod_m2842076792(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		MethodInfo_t * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = MethodBase_get_IsVirtual_m1107721718(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		return (bool)1;
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetBaseDefinition_m1178929304 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetBaseDefinition_m1178929304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		PropertyInfo_t * L_0 = ___propertyInfo0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral3463778309, /*hidden argument*/NULL);
		PropertyInfo_t * L_1 = ___propertyInfo0;
		NullCheck(L_1);
		MethodInfo_t * L_2 = PropertyInfo_GetGetMethod_m1759237908(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		MethodInfo_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		MethodInfo_t * L_4 = V_0;
		NullCheck(L_4);
		MethodInfo_t * L_5 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(31 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_4);
		return L_5;
	}

IL_001c:
	{
		PropertyInfo_t * L_6 = ___propertyInfo0;
		NullCheck(L_6);
		MethodInfo_t * L_7 = PropertyInfo_GetSetMethod_m2842076792(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		MethodInfo_t * L_8 = V_0;
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_9);
		MethodInfo_t * L_10 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(31 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_9);
		return L_10;
	}

IL_002d:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsPublic(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsPublic_m3591214589 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___property0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___property0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = PropertyInfo_GetGetMethod_m1759237908(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		PropertyInfo_t * L_2 = ___property0;
		NullCheck(L_2);
		MethodInfo_t * L_3 = PropertyInfo_GetGetMethod_m1759237908(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = MethodBase_get_IsPublic_m479656180(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		PropertyInfo_t * L_5 = ___property0;
		NullCheck(L_5);
		MethodInfo_t * L_6 = PropertyInfo_GetSetMethod_m2842076792(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		PropertyInfo_t * L_7 = ___property0;
		NullCheck(L_7);
		MethodInfo_t * L_8 = PropertyInfo_GetSetMethod_m2842076792(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = MethodBase_get_IsPublic_m479656180(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		return (bool)1;
	}

IL_002e:
	{
		return (bool)0;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetObjectType(System.Object)
extern "C"  Type_t * ReflectionUtils_GetObjectType_m4194608096 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___v0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___v0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___v0;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m191970594(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::GetTypeName(System.Type,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.SerializationBinder)
extern "C"  String_t* ReflectionUtils_GetTypeName_m4058960906 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, int32_t ___assemblyFormat1, SerializationBinder_t3985864818 * ___binder2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetTypeName_m4058960906_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		V_0 = L_1;
		int32_t L_2 = ___assemblyFormat1;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_3 = ___assemblyFormat1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_0019;
	}

IL_0010:
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		String_t* L_5 = ReflectionUtils_RemoveAssemblyDetails_m1897087320(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0017:
	{
		String_t* L_6 = V_0;
		return L_6;
	}

IL_0019:
	{
		ArgumentOutOfRangeException_t279959794 * L_7 = (ArgumentOutOfRangeException_t279959794 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t279959794_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m15523695(L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}
}
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::RemoveAssemblyDetails(System.String)
extern "C"  String_t* ReflectionUtils_RemoveAssemblyDetails_m1897087320 (RuntimeObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_RemoveAssemblyDetails_m1897087320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = (bool)0;
		V_2 = (bool)0;
		V_3 = 0;
		goto IL_006d;
	}

IL_000e:
	{
		String_t* L_1 = ___fullyQualifiedTypeName0;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m4230566705(L_1, L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		Il2CppChar L_4 = V_4;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)44))))
		{
			goto IL_0049;
		}
	}
	{
		Il2CppChar L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_002b;
		}
	}
	{
		Il2CppChar L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_005d;
	}

IL_002b:
	{
		V_1 = (bool)0;
		V_2 = (bool)0;
		StringBuilder_t * L_7 = V_0;
		Il2CppChar L_8 = V_4;
		NullCheck(L_7);
		StringBuilder_Append_m3618697540(L_7, L_8, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_003a:
	{
		V_1 = (bool)0;
		V_2 = (bool)0;
		StringBuilder_t * L_9 = V_0;
		Il2CppChar L_10 = V_4;
		NullCheck(L_9);
		StringBuilder_Append_m3618697540(L_9, L_10, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_0049:
	{
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0059;
		}
	}
	{
		V_1 = (bool)1;
		StringBuilder_t * L_12 = V_0;
		Il2CppChar L_13 = V_4;
		NullCheck(L_12);
		StringBuilder_Append_m3618697540(L_12, L_13, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_0059:
	{
		V_2 = (bool)1;
		goto IL_0069;
	}

IL_005d:
	{
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0069;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		Il2CppChar L_16 = V_4;
		NullCheck(L_15);
		StringBuilder_Append_m3618697540(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0069:
	{
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_18 = V_3;
		String_t* L_19 = ___fullyQualifiedTypeName0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m1606060069(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_000e;
		}
	}
	{
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		return L_22;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::HasDefaultConstructor(System.Type,System.Boolean)
extern "C"  bool ReflectionUtils_HasDefaultConstructor_m1906518778 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_HasDefaultConstructor_m1906518778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral372029386, /*hidden argument*/NULL);
		Type_t * L_1 = ___t0;
		bool L_2 = TypeExtensions_IsValueType_m2298155509(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		Type_t * L_3 = ___t0;
		bool L_4 = ___nonPublic1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		ConstructorInfo_t2851816542 * L_5 = ReflectionUtils_GetDefaultConstructor_m358330343(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(ConstructorInfo_t2851816542 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type)
extern "C"  ConstructorInfo_t2851816542 * ReflectionUtils_GetDefaultConstructor_m1503256486 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetDefaultConstructor_m1503256486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		ConstructorInfo_t2851816542 * L_1 = ReflectionUtils_GetDefaultConstructor_m358330343(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type,System.Boolean)
extern "C"  ConstructorInfo_t2851816542 * ReflectionUtils_GetDefaultConstructor_m358330343 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetDefaultConstructor_m358330343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Func_2_t2343678841 * G_B4_0 = NULL;
	ConstructorInfoU5BU5D_t1996683371* G_B4_1 = NULL;
	Func_2_t2343678841 * G_B3_0 = NULL;
	ConstructorInfoU5BU5D_t1996683371* G_B3_1 = NULL;
	{
		V_0 = ((int32_t)20);
		bool L_0 = ___nonPublic1;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1|(int32_t)((int32_t)32)));
	}

IL_000b:
	{
		Type_t * L_2 = ___t0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		ConstructorInfoU5BU5D_t1996683371* L_4 = VirtFuncInvoker1< ConstructorInfoU5BU5D_t1996683371*, int32_t >::Invoke(83 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags) */, L_2, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var);
		Func_2_t2343678841 * L_5 = ((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->get_U3CU3E9__10_0_1();
		Func_2_t2343678841 * L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var);
		U3CU3Ec_t2709377751 * L_7 = ((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_8 = (intptr_t)U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_m945974850_RuntimeMethod_var;
		Func_2_t2343678841 * L_9 = (Func_2_t2343678841 *)il2cpp_codegen_object_new(Func_2_t2343678841_il2cpp_TypeInfo_var);
		Func_2__ctor_m3361537276(L_9, L_7, L_8, /*hidden argument*/Func_2__ctor_m3361537276_RuntimeMethod_var);
		Func_2_t2343678841 * L_10 = L_9;
		((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->set_U3CU3E9__10_0_1(L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_0031:
	{
		ConstructorInfo_t2851816542 * L_11 = Enumerable_SingleOrDefault_TisConstructorInfo_t2851816542_m2433521341(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B4_1, G_B4_0, /*hidden argument*/Enumerable_SingleOrDefault_TisConstructorInfo_t2851816542_m2433521341_RuntimeMethod_var);
		return L_11;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullable(System.Type)
extern "C"  bool ReflectionUtils_IsNullable_m5141129 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsNullable_m5141129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral372029386, /*hidden argument*/NULL);
		Type_t * L_1 = ___t0;
		bool L_2 = TypeExtensions_IsValueType_m2298155509(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_3 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_4 = ReflectionUtils_IsNullableType_m1952073521(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
extern "C"  bool ReflectionUtils_IsNullableType_m1952073521 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsNullableType_m1952073521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral372029386, /*hidden argument*/NULL);
		Type_t * L_1 = ___t0;
		bool L_2 = TypeExtensions_IsGenericType_m2573949791(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		Type_t * L_3 = ___t0;
		NullCheck(L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(89 /* System.Type System.Type::GetGenericTypeDefinition() */, L_3);
		RuntimeTypeHandle_t2330101084  L_5 = { reinterpret_cast<intptr_t> (Nullable_1_t1398937014_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_6))? 1 : 0);
	}

IL_0026:
	{
		return (bool)0;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::EnsureNotNullableType(System.Type)
extern "C"  Type_t * ReflectionUtils_EnsureNotNullableType_m749063498 (RuntimeObject * __this /* static, unused */, Type_t * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_EnsureNotNullableType_m749063498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_1 = ReflectionUtils_IsNullableType_m1952073521(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		Type_t * L_2 = ___t0;
		return L_2;
	}

IL_000a:
	{
		Type_t * L_3 = ___t0;
		Type_t * L_4 = Nullable_GetUnderlyingType_m4057508352(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_IsGenericDefinition_m1064064347 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		bool L_1 = TypeExtensions_IsGenericType_m2573949791(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		Type_t * L_2 = ___type0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(89 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		Type_t * L_4 = ___genericInterfaceDefinition1;
		return (bool)((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4))? 1 : 0);
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m3714033717 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_ImplementsGenericDefinition_m3714033717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		Type_t * L_1 = ___genericInterfaceDefinition1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_2 = ReflectionUtils_ImplementsGenericDefinition_m1592756732(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m1592756732 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_ImplementsGenericDefinition_m1592756732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t1664964607* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	Type_t * V_4 = NULL;
	{
		Type_t * L_0 = ___type0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral1421151742, /*hidden argument*/NULL);
		Type_t * L_1 = ___genericInterfaceDefinition1;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_1, _stringLiteral1466766781, /*hidden argument*/NULL);
		Type_t * L_2 = ___genericInterfaceDefinition1;
		bool L_3 = TypeExtensions_IsInterface_m4027938127(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Type_t * L_4 = ___genericInterfaceDefinition1;
		bool L_5 = TypeExtensions_IsGenericTypeDefinition_m1841056122(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_6 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_7 = ___genericInterfaceDefinition1;
		String_t* L_8 = StringUtils_FormatWith_m2157778407(NULL /*static, unused*/, _stringLiteral490790171, L_6, L_7, /*hidden argument*/NULL);
		ArgumentNullException_t628810857 * L_9 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_003c:
	{
		Type_t * L_10 = ___type0;
		bool L_11 = TypeExtensions_IsInterface_m4027938127(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_12 = ___type0;
		bool L_13 = TypeExtensions_IsGenericType_m2573949791(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		Type_t * L_14 = ___type0;
		NullCheck(L_14);
		Type_t * L_15 = VirtFuncInvoker0< Type_t * >::Invoke(89 /* System.Type System.Type::GetGenericTypeDefinition() */, L_14);
		V_0 = L_15;
		Type_t * L_16 = ___genericInterfaceDefinition1;
		Type_t * L_17 = V_0;
		if ((!(((RuntimeObject*)(Type_t *)L_16) == ((RuntimeObject*)(Type_t *)L_17))))
		{
			goto IL_005c;
		}
	}
	{
		Type_t ** L_18 = ___implementingType2;
		Type_t * L_19 = ___type0;
		*((RuntimeObject **)(L_18)) = (RuntimeObject *)L_19;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_18), (RuntimeObject *)L_19);
		return (bool)1;
	}

IL_005c:
	{
		Type_t * L_20 = ___type0;
		NullCheck(L_20);
		TypeU5BU5D_t1664964607* L_21 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(41 /* System.Type[] System.Type::GetInterfaces() */, L_20);
		V_1 = L_21;
		V_2 = 0;
		goto IL_0089;
	}

IL_0067:
	{
		TypeU5BU5D_t1664964607* L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Type_t * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_3 = L_25;
		Type_t * L_26 = V_3;
		bool L_27 = TypeExtensions_IsGenericType_m2573949791(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0085;
		}
	}
	{
		Type_t * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = VirtFuncInvoker0< Type_t * >::Invoke(89 /* System.Type System.Type::GetGenericTypeDefinition() */, L_28);
		V_4 = L_29;
		Type_t * L_30 = ___genericInterfaceDefinition1;
		Type_t * L_31 = V_4;
		if ((!(((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_31))))
		{
			goto IL_0085;
		}
	}
	{
		Type_t ** L_32 = ___implementingType2;
		Type_t * L_33 = V_3;
		*((RuntimeObject **)(L_32)) = (RuntimeObject *)L_33;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_32), (RuntimeObject *)L_33);
		return (bool)1;
	}

IL_0085:
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_35 = V_2;
		TypeU5BU5D_t1664964607* L_36 = V_1;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))))))
		{
			goto IL_0067;
		}
	}
	{
		Type_t ** L_37 = ___implementingType2;
		*((RuntimeObject **)(L_37)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_37), (RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m1236997279 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericClassDefinition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_InheritsGenericDefinition_m1236997279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		Type_t * L_1 = ___genericClassDefinition1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_2 = ReflectionUtils_InheritsGenericDefinition_m122302930(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m122302930 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_InheritsGenericDefinition_m122302930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral1421151742, /*hidden argument*/NULL);
		Type_t * L_1 = ___genericClassDefinition1;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_1, _stringLiteral1580024496, /*hidden argument*/NULL);
		Type_t * L_2 = ___genericClassDefinition1;
		bool L_3 = TypeExtensions_IsClass_m1190811054(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Type_t * L_4 = ___genericClassDefinition1;
		bool L_5 = TypeExtensions_IsGenericTypeDefinition_m1841056122(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003c;
		}
	}

IL_0026:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_6 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_7 = ___genericClassDefinition1;
		String_t* L_8 = StringUtils_FormatWith_m2157778407(NULL /*static, unused*/, _stringLiteral4294391246, L_6, L_7, /*hidden argument*/NULL);
		ArgumentNullException_t628810857 * L_9 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_003c:
	{
		Type_t * L_10 = ___type0;
		Type_t * L_11 = ___genericClassDefinition1;
		Type_t ** L_12 = ___implementingType2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_13 = ReflectionUtils_InheritsGenericDefinitionInternal_m1388222941(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinitionInternal(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinitionInternal_m1388222941 (RuntimeObject * __this /* static, unused */, Type_t * ___currentType0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_InheritsGenericDefinitionInternal_m1388222941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___currentType0;
		bool L_1 = TypeExtensions_IsGenericType_m2573949791(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_2 = ___currentType0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(89 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		V_0 = L_3;
		Type_t * L_4 = ___genericClassDefinition1;
		Type_t * L_5 = V_0;
		if ((!(((RuntimeObject*)(Type_t *)L_4) == ((RuntimeObject*)(Type_t *)L_5))))
		{
			goto IL_0018;
		}
	}
	{
		Type_t ** L_6 = ___implementingType2;
		Type_t * L_7 = ___currentType0;
		*((RuntimeObject **)(L_6)) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_6), (RuntimeObject *)L_7);
		return (bool)1;
	}

IL_0018:
	{
		Type_t * L_8 = ___currentType0;
		Type_t * L_9 = TypeExtensions_BaseType_m3858355017(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0025;
		}
	}
	{
		Type_t ** L_10 = ___implementingType2;
		*((RuntimeObject **)(L_10)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_10), (RuntimeObject *)NULL);
		return (bool)0;
	}

IL_0025:
	{
		Type_t * L_11 = ___currentType0;
		Type_t * L_12 = TypeExtensions_BaseType_m3858355017(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Type_t * L_13 = ___genericClassDefinition1;
		Type_t ** L_14 = ___implementingType2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_15 = ReflectionUtils_InheritsGenericDefinitionInternal_m1388222941(NULL /*static, unused*/, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetCollectionItemType(System.Type)
extern "C"  Type_t * ReflectionUtils_GetCollectionItemType_m2131404479 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetCollectionItemType_m2131404479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral1421151742, /*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		NullCheck(L_1);
		bool L_2 = Type_get_IsArray_m811277129(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_3 = ___type0;
		NullCheck(L_3);
		Type_t * L_4 = VirtFuncInvoker0< Type_t * >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_3);
		return L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type0;
		RuntimeTypeHandle_t2330101084  L_6 = { reinterpret_cast<intptr_t> (IEnumerable_1_t4048664256_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_8 = ReflectionUtils_ImplementsGenericDefinition_m1592756732(NULL /*static, unused*/, L_5, L_7, (&V_0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		Type_t * L_9 = V_0;
		bool L_10 = TypeExtensions_IsGenericTypeDefinition_m1841056122(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_11 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_12 = ___type0;
		String_t* L_13 = StringUtils_FormatWith_m2157778407(NULL /*static, unused*/, _stringLiteral4132000988, L_11, L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m485833136(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14);
	}

IL_004c:
	{
		Type_t * L_15 = V_0;
		NullCheck(L_15);
		TypeU5BU5D_t1664964607* L_16 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(86 /* System.Type[] System.Type::GetGenericArguments() */, L_15);
		NullCheck(L_16);
		int32_t L_17 = 0;
		Type_t * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return L_18;
	}

IL_0055:
	{
		RuntimeTypeHandle_t2330101084  L_19 = { reinterpret_cast<intptr_t> (IEnumerable_t2911409499_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Type_t * L_21 = ___type0;
		NullCheck(L_20);
		bool L_22 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_20, L_21);
		if (!L_22)
		{
			goto IL_0069;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0069:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_23 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_24 = ___type0;
		String_t* L_25 = StringUtils_FormatWith_m2157778407(NULL /*static, unused*/, _stringLiteral4132000988, L_23, L_24, /*hidden argument*/NULL);
		Exception_t * L_26 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m485833136(L_26, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26);
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetDictionaryKeyValueTypes(System.Type,System.Type&,System.Type&)
extern "C"  void ReflectionUtils_GetDictionaryKeyValueTypes_m3575338623 (RuntimeObject * __this /* static, unused */, Type_t * ___dictionaryType0, Type_t ** ___keyType1, Type_t ** ___valueType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetDictionaryKeyValueTypes_m3575338623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t1664964607* V_1 = NULL;
	{
		Type_t * L_0 = ___dictionaryType0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral1776474642, /*hidden argument*/NULL);
		Type_t * L_1 = ___dictionaryType0;
		RuntimeTypeHandle_t2330101084  L_2 = { reinterpret_cast<intptr_t> (IDictionary_2_t3502329323_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_4 = ReflectionUtils_ImplementsGenericDefinition_m1592756732(NULL /*static, unused*/, L_1, L_3, (&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		Type_t * L_5 = V_0;
		bool L_6 = TypeExtensions_IsGenericTypeDefinition_m1841056122(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_7 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_8 = ___dictionaryType0;
		String_t* L_9 = StringUtils_FormatWith_m2157778407(NULL /*static, unused*/, _stringLiteral3113829764, L_7, L_8, /*hidden argument*/NULL);
		Exception_t * L_10 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m485833136(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_003d:
	{
		Type_t * L_11 = V_0;
		NullCheck(L_11);
		TypeU5BU5D_t1664964607* L_12 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(86 /* System.Type[] System.Type::GetGenericArguments() */, L_11);
		V_1 = L_12;
		Type_t ** L_13 = ___keyType1;
		TypeU5BU5D_t1664964607* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = 0;
		Type_t * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		*((RuntimeObject **)(L_13)) = (RuntimeObject *)L_16;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_13), (RuntimeObject *)L_16);
		Type_t ** L_17 = ___valueType2;
		TypeU5BU5D_t1664964607* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = 1;
		Type_t * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		*((RuntimeObject **)(L_17)) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_17), (RuntimeObject *)L_20);
		return;
	}

IL_004f:
	{
		RuntimeTypeHandle_t2330101084  L_21 = { reinterpret_cast<intptr_t> (IDictionary_t596158605_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m432505302(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		Type_t * L_23 = ___dictionaryType0;
		NullCheck(L_22);
		bool L_24 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_22, L_23);
		if (!L_24)
		{
			goto IL_0068;
		}
	}
	{
		Type_t ** L_25 = ___keyType1;
		*((RuntimeObject **)(L_25)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_25), (RuntimeObject *)NULL);
		Type_t ** L_26 = ___valueType2;
		*((RuntimeObject **)(L_26)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_26), (RuntimeObject *)NULL);
		return;
	}

IL_0068:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_27 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_28 = ___dictionaryType0;
		String_t* L_29 = StringUtils_FormatWith_m2157778407(NULL /*static, unused*/, _stringLiteral3113829764, L_27, L_28, /*hidden argument*/NULL);
		Exception_t * L_30 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m485833136(L_30, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30);
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
extern "C"  Type_t * ReflectionUtils_GetMemberUnderlyingType_m1551178430 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetMemberUnderlyingType_m1551178430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		MemberInfo_t * L_0 = ___member0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral3499143408, /*hidden argument*/NULL);
		MemberInfo_t * L_1 = ___member0;
		int32_t L_2 = TypeExtensions_MemberType_m2192645245(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)4)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_002b;
		}
	}
	{
		goto IL_005b;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)8)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_005b;
	}

IL_002b:
	{
		MemberInfo_t * L_8 = ___member0;
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_8, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_9 = VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_8, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_9;
	}

IL_0037:
	{
		MemberInfo_t * L_10 = ___member0;
		NullCheck(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_10, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_10, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_11;
	}

IL_0043:
	{
		MemberInfo_t * L_12 = ___member0;
		NullCheck(((EventInfo_t *)CastclassClass((RuntimeObject*)L_12, EventInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_13 = EventInfo_get_EventHandlerType_m2787680849(((EventInfo_t *)CastclassClass((RuntimeObject*)L_12, EventInfo_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_13;
	}

IL_004f:
	{
		MemberInfo_t * L_14 = ___member0;
		NullCheck(((MethodInfo_t *)CastclassClass((RuntimeObject*)L_14, MethodInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_15 = VirtFuncInvoker0< Type_t * >::Invoke(32 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, ((MethodInfo_t *)CastclassClass((RuntimeObject*)L_14, MethodInfo_t_il2cpp_TypeInfo_var)));
		return L_15;
	}

IL_005b:
	{
		ArgumentException_t3259014390 * L_16 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m544251339(L_16, _stringLiteral1780712526, _stringLiteral3499143408, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16);
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.MemberInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m2510495915 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsIndexedProperty_m2510495915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	{
		MemberInfo_t * L_0 = ___member0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral3499143408, /*hidden argument*/NULL);
		MemberInfo_t * L_1 = ___member0;
		V_0 = ((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_1, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		PropertyInfo_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_4 = ReflectionUtils_IsIndexedProperty_m1359866644(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m1359866644 (RuntimeObject * __this /* static, unused */, PropertyInfo_t * ___property0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsIndexedProperty_m1359866644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___property0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral3937253415, /*hidden argument*/NULL);
		PropertyInfo_t * L_1 = ___property0;
		NullCheck(L_1);
		ParameterInfoU5BU5D_t2275869610* L_2 = VirtFuncInvoker0< ParameterInfoU5BU5D_t2275869610* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_1);
		NullCheck(L_2);
		return (bool)((!(((uint32_t)(((RuntimeArray *)L_2)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberValue(System.Reflection.MemberInfo,System.Object)
extern "C"  RuntimeObject * ReflectionUtils_GetMemberValue_m1108820103 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetMemberValue_m1108820103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	TargetParameterCountException_t1554451430 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		MemberInfo_t * L_0 = ___member0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral3499143408, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___target1;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_1, _stringLiteral1081251833, /*hidden argument*/NULL);
		MemberInfo_t * L_2 = ___member0;
		int32_t L_3 = TypeExtensions_MemberType_m2192645245(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0063;
	}

IL_0028:
	{
		MemberInfo_t * L_6 = ___member0;
		RuntimeObject * L_7 = ___target1;
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_6, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_8 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(18 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_6, FieldInfo_t_il2cpp_TypeInfo_var)), L_7);
		return L_8;
	}

IL_0035:
	{
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		MemberInfo_t * L_9 = ___member0;
		RuntimeObject * L_10 = ___target1;
		NullCheck(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_9, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_11 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3614634134* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_9, PropertyInfo_t_il2cpp_TypeInfo_var)), L_10, (ObjectU5BU5D_t3614634134*)(ObjectU5BU5D_t3614634134*)NULL);
		V_1 = L_11;
		goto IL_0088;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TargetParameterCountException_t1554451430_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0046;
		throw e;
	}

CATCH_0046:
	{ // begin catch(System.Reflection.TargetParameterCountException)
		V_2 = ((TargetParameterCountException_t1554451430 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_12 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		MemberInfo_t * L_13 = ___member0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		String_t* L_15 = StringUtils_FormatWith_m2157778407(NULL /*static, unused*/, _stringLiteral2325924878, L_12, L_14, /*hidden argument*/NULL);
		TargetParameterCountException_t1554451430 * L_16 = V_2;
		ArgumentException_t3259014390 * L_17 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3553968249(L_17, L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	} // end catch (depth: 1)

IL_0063:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_18 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		CultureInfo_t3500843524 * L_19 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		MemberInfo_t * L_20 = ___member0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_20);
		String_t* L_22 = StringUtils_FormatWith_m3608957081(NULL /*static, unused*/, _stringLiteral1277201470, L_18, L_19, L_21, /*hidden argument*/NULL);
		ArgumentException_t3259014390 * L_23 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m544251339(L_23, L_22, _stringLiteral3499143408, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23);
	}

IL_0088:
	{
		RuntimeObject * L_24 = V_1;
		return L_24;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SetMemberValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C"  void ReflectionUtils_SetMemberValue_m3134817442 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_SetMemberValue_m3134817442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		MemberInfo_t * L_0 = ___member0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral3499143408, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___target1;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_1, _stringLiteral1081251833, /*hidden argument*/NULL);
		MemberInfo_t * L_2 = ___member0;
		int32_t L_3 = TypeExtensions_MemberType_m2192645245(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0045;
	}

IL_0028:
	{
		MemberInfo_t * L_6 = ___member0;
		RuntimeObject * L_7 = ___target1;
		RuntimeObject * L_8 = ___value2;
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_6, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m2504255891(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_6, FieldInfo_t_il2cpp_TypeInfo_var)), L_7, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0036:
	{
		MemberInfo_t * L_9 = ___member0;
		RuntimeObject * L_10 = ___target1;
		RuntimeObject * L_11 = ___value2;
		NullCheck(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_9, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3614634134* >::Invoke(27 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_9, PropertyInfo_t_il2cpp_TypeInfo_var)), L_10, L_11, (ObjectU5BU5D_t3614634134*)(ObjectU5BU5D_t3614634134*)NULL);
		return;
	}

IL_0045:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_12 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		MemberInfo_t * L_13 = ___member0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		String_t* L_15 = StringUtils_FormatWith_m2157778407(NULL /*static, unused*/, _stringLiteral383472217, L_12, L_14, /*hidden argument*/NULL);
		ArgumentException_t3259014390 * L_16 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m544251339(L_16, L_15, _stringLiteral3499143408, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16);
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
extern "C"  bool ReflectionUtils_CanReadMemberValue_m1471951163 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_CanReadMemberValue_m1471951163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		MemberInfo_t * L_0 = ___member0;
		int32_t L_1 = TypeExtensions_MemberType_m2192645245(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_004b;
	}

IL_0012:
	{
		MemberInfo_t * L_4 = ___member0;
		V_1 = ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var));
		bool L_5 = ___nonPublic1;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		FieldInfo_t * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = FieldInfo_get_IsPublic_m618896610(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		MemberInfo_t * L_8 = ___member0;
		V_2 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_8, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_9);
		if (L_10)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_003b:
	{
		bool L_11 = ___nonPublic1;
		if (!L_11)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)1;
	}

IL_0040:
	{
		PropertyInfo_t * L_12 = V_2;
		bool L_13 = ___nonPublic1;
		NullCheck(L_12);
		MethodInfo_t * L_14 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_12, L_13);
		return (bool)((!(((RuntimeObject*)(MethodInfo_t *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_004b:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanSetMemberValue(System.Reflection.MemberInfo,System.Boolean,System.Boolean)
extern "C"  bool ReflectionUtils_CanSetMemberValue_m1350063670 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, bool ___canSetReadOnly2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_CanSetMemberValue_m1350063670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldInfo_t * V_1 = NULL;
	PropertyInfo_t * V_2 = NULL;
	{
		MemberInfo_t * L_0 = ___member0;
		int32_t L_1 = TypeExtensions_MemberType_m2192645245(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0062;
	}

IL_0012:
	{
		MemberInfo_t * L_4 = ___member0;
		V_1 = ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = FieldInfo_get_IsLiteral_m267898096(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		FieldInfo_t * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = FieldInfo_get_IsInitOnly_m3059790683(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		bool L_9 = ___canSetReadOnly2;
		if (L_9)
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		bool L_10 = ___nonPublic1;
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)1;
	}

IL_0035:
	{
		FieldInfo_t * L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = FieldInfo_get_IsPublic_m618896610(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003f;
		}
	}
	{
		return (bool)1;
	}

IL_003f:
	{
		return (bool)0;
	}

IL_0041:
	{
		MemberInfo_t * L_13 = ___member0;
		V_2 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_13, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_14 = V_2;
		NullCheck(L_14);
		bool L_15 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_14);
		if (L_15)
		{
			goto IL_0052;
		}
	}
	{
		return (bool)0;
	}

IL_0052:
	{
		bool L_16 = ___nonPublic1;
		if (!L_16)
		{
			goto IL_0057;
		}
	}
	{
		return (bool)1;
	}

IL_0057:
	{
		PropertyInfo_t * L_17 = V_2;
		bool L_18 = ___nonPublic1;
		NullCheck(L_17);
		MethodInfo_t * L_19 = VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(24 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_17, L_18);
		return (bool)((!(((RuntimeObject*)(MethodInfo_t *)L_19) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_0062:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.List`1<System.Reflection.MemberInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFieldsAndProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  List_1_t3412218392 * ReflectionUtils_GetFieldsAndProperties_m2968660430 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, int32_t ___bindingAttr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetFieldsAndProperties_m2968660430_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3412218392 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	MemberInfo_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Func_2_t2789580926 * G_B2_0 = NULL;
	List_1_t3412218392 * G_B2_1 = NULL;
	Func_2_t2789580926 * G_B1_0 = NULL;
	List_1_t3412218392 * G_B1_1 = NULL;
	{
		List_1_t3412218392 * L_0 = (List_1_t3412218392 *)il2cpp_codegen_object_new(List_1_t3412218392_il2cpp_TypeInfo_var);
		List_1__ctor_m3205487968(L_0, /*hidden argument*/List_1__ctor_m3205487968_RuntimeMethod_var);
		List_1_t3412218392 * L_1 = L_0;
		Type_t * L_2 = ___type0;
		int32_t L_3 = ___bindingAttr1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ReflectionUtils_GetFields_m135069139(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		CollectionUtils_AddRange_TisMemberInfo_t_m2248164560(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m2248164560_RuntimeMethod_var);
		List_1_t3412218392 * L_5 = L_1;
		Type_t * L_6 = ___type0;
		int32_t L_7 = ___bindingAttr1;
		RuntimeObject* L_8 = ReflectionUtils_GetProperties_m3440088748(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		CollectionUtils_AddRange_TisMemberInfo_t_m2248164560(NULL /*static, unused*/, L_5, L_8, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m2248164560_RuntimeMethod_var);
		List_1_t3412218392 * L_9 = L_5;
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_m237274392(L_9, /*hidden argument*/List_1_get_Count_m237274392_RuntimeMethod_var);
		List_1_t3412218392 * L_11 = (List_1_t3412218392 *)il2cpp_codegen_object_new(List_1_t3412218392_il2cpp_TypeInfo_var);
		List_1__ctor_m3086459639(L_11, L_10, /*hidden argument*/List_1__ctor_m3086459639_RuntimeMethod_var);
		V_0 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var);
		Func_2_t2789580926 * L_12 = ((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->get_U3CU3E9__29_0_2();
		Func_2_t2789580926 * L_13 = L_12;
		G_B1_0 = L_13;
		G_B1_1 = L_9;
		if (L_13)
		{
			G_B2_0 = L_13;
			G_B2_1 = L_9;
			goto IL_004a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var);
		U3CU3Ec_t2709377751 * L_14 = ((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_15 = (intptr_t)U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__29_0_m1903479559_RuntimeMethod_var;
		Func_2_t2789580926 * L_16 = (Func_2_t2789580926 *)il2cpp_codegen_object_new(Func_2_t2789580926_il2cpp_TypeInfo_var);
		Func_2__ctor_m4199532843(L_16, L_14, L_15, /*hidden argument*/Func_2__ctor_m4199532843_RuntimeMethod_var);
		Func_2_t2789580926 * L_17 = L_16;
		((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->set_U3CU3E9__29_0_2(L_17);
		G_B2_0 = L_17;
		G_B2_1 = G_B1_1;
	}

IL_004a:
	{
		RuntimeObject* L_18 = Enumerable_GroupBy_TisMemberInfo_t_TisString_t_m3771386506(NULL /*static, unused*/, G_B2_1, G_B2_0, /*hidden argument*/Enumerable_GroupBy_TisMemberInfo_t_TisString_t_m3771386506_RuntimeMethod_var);
		NullCheck(L_18);
		RuntimeObject* L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Linq.IGrouping`2<System.String,System.Reflection.MemberInfo>>::GetEnumerator() */, IEnumerable_1_t580464209_il2cpp_TypeInfo_var, L_18);
		V_1 = L_19;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f2;
		}

IL_005a:
		{
			RuntimeObject* L_20 = V_1;
			NullCheck(L_20);
			RuntimeObject* L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<System.String,System.Reflection.MemberInfo>>::get_Current() */, IEnumerator_1_t2058828287_il2cpp_TypeInfo_var, L_20);
			RuntimeObject* L_22 = L_21;
			int32_t L_23 = Enumerable_Count_TisMemberInfo_t_m555947649(NULL /*static, unused*/, L_22, /*hidden argument*/Enumerable_Count_TisMemberInfo_t_m555947649_RuntimeMethod_var);
			V_2 = L_23;
			List_1_t3412218392 * L_24 = Enumerable_ToList_TisMemberInfo_t_m4029470052(NULL /*static, unused*/, L_22, /*hidden argument*/Enumerable_ToList_TisMemberInfo_t_m4029470052_RuntimeMethod_var);
			V_3 = (RuntimeObject*)L_24;
			int32_t L_25 = V_2;
			if ((!(((uint32_t)L_25) == ((uint32_t)1))))
			{
				goto IL_007f;
			}
		}

IL_0071:
		{
			List_1_t3412218392 * L_26 = V_0;
			RuntimeObject* L_27 = V_3;
			MemberInfo_t * L_28 = Enumerable_First_TisMemberInfo_t_m1182807881(NULL /*static, unused*/, L_27, /*hidden argument*/Enumerable_First_TisMemberInfo_t_m1182807881_RuntimeMethod_var);
			NullCheck(L_26);
			List_1_Add_m1517359828(L_26, L_28, /*hidden argument*/List_1_Add_m1517359828_RuntimeMethod_var);
			goto IL_00f2;
		}

IL_007f:
		{
			List_1_t3412218392 * L_29 = (List_1_t3412218392 *)il2cpp_codegen_object_new(List_1_t3412218392_il2cpp_TypeInfo_var);
			List_1__ctor_m3205487968(L_29, /*hidden argument*/List_1__ctor_m3205487968_RuntimeMethod_var);
			V_4 = (RuntimeObject*)L_29;
			RuntimeObject* L_30 = V_3;
			NullCheck(L_30);
			RuntimeObject* L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, IEnumerable_1_t40257009_il2cpp_TypeInfo_var, L_30);
			V_5 = L_31;
		}

IL_008e:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00d3;
			}

IL_0090:
			{
				RuntimeObject* L_32 = V_5;
				NullCheck(L_32);
				MemberInfo_t * L_33 = InterfaceFuncInvoker0< MemberInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, IEnumerator_1_t1518621087_il2cpp_TypeInfo_var, L_32);
				V_6 = L_33;
				RuntimeObject* L_34 = V_4;
				NullCheck(L_34);
				int32_t L_35 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::get_Count() */, ICollection_1_t700205269_il2cpp_TypeInfo_var, L_34);
				if (L_35)
				{
					goto IL_00ad;
				}
			}

IL_00a2:
			{
				RuntimeObject* L_36 = V_4;
				MemberInfo_t * L_37 = V_6;
				NullCheck(L_36);
				InterfaceActionInvoker1< MemberInfo_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Add(!0) */, ICollection_1_t700205269_il2cpp_TypeInfo_var, L_36, L_37);
				goto IL_00d3;
			}

IL_00ad:
			{
				MemberInfo_t * L_38 = V_6;
				int32_t L_39 = ___bindingAttr1;
				IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
				bool L_40 = ReflectionUtils_IsOverridenGenericMember_m1359556380(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
				if (!L_40)
				{
					goto IL_00ca;
				}
			}

IL_00b7:
			{
				MemberInfo_t * L_41 = V_6;
				NullCheck(L_41);
				String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_41);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				bool L_43 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_42, _stringLiteral3168546709, /*hidden argument*/NULL);
				if (!L_43)
				{
					goto IL_00d3;
				}
			}

IL_00ca:
			{
				RuntimeObject* L_44 = V_4;
				MemberInfo_t * L_45 = V_6;
				NullCheck(L_44);
				InterfaceActionInvoker1< MemberInfo_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberInfo>::Add(!0) */, ICollection_1_t700205269_il2cpp_TypeInfo_var, L_44, L_45);
			}

IL_00d3:
			{
				RuntimeObject* L_46 = V_5;
				NullCheck(L_46);
				bool L_47 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_46);
				if (L_47)
				{
					goto IL_0090;
				}
			}

IL_00dc:
			{
				IL2CPP_LEAVE(0xEA, FINALLY_00de);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00de;
		}

FINALLY_00de:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_48 = V_5;
				if (!L_48)
				{
					goto IL_00e9;
				}
			}

IL_00e2:
			{
				RuntimeObject* L_49 = V_5;
				NullCheck(L_49);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_49);
			}

IL_00e9:
			{
				IL2CPP_END_FINALLY(222)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(222)
		{
			IL2CPP_JUMP_TBL(0xEA, IL_00ea)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_00ea:
		{
			List_1_t3412218392 * L_50 = V_0;
			RuntimeObject* L_51 = V_4;
			NullCheck(L_50);
			List_1_AddRange_m2644622842(L_50, L_51, /*hidden argument*/List_1_AddRange_m2644622842_RuntimeMethod_var);
		}

IL_00f2:
		{
			RuntimeObject* L_52 = V_1;
			NullCheck(L_52);
			bool L_53 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_52);
			if (L_53)
			{
				goto IL_005a;
			}
		}

IL_00fd:
		{
			IL2CPP_LEAVE(0x109, FINALLY_00ff);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ff;
	}

FINALLY_00ff:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_54 = V_1;
			if (!L_54)
			{
				goto IL_0108;
			}
		}

IL_0102:
		{
			RuntimeObject* L_55 = V_1;
			NullCheck(L_55);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_55);
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(255)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(255)
	{
		IL2CPP_JUMP_TBL(0x109, IL_0109)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0109:
	{
		List_1_t3412218392 * L_56 = V_0;
		return L_56;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsOverridenGenericMember(System.Reflection.MemberInfo,System.Reflection.BindingFlags)
extern "C"  bool ReflectionUtils_IsOverridenGenericMember_m1359556380 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, int32_t ___bindingAttr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_IsOverridenGenericMember_m1359556380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfo_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	MemberInfoU5BU5D_t4238939941* V_3 = NULL;
	{
		MemberInfo_t * L_0 = ___memberInfo0;
		int32_t L_1 = TypeExtensions_MemberType_m2192645245(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)16))))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		MemberInfo_t * L_2 = ___memberInfo0;
		V_0 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_2, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_4 = ReflectionUtils_IsVirtual_m2993796589(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		return (bool)0;
	}

IL_001d:
	{
		PropertyInfo_t * L_5 = V_0;
		NullCheck(L_5);
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		V_1 = L_6;
		Type_t * L_7 = V_1;
		bool L_8 = TypeExtensions_IsGenericType_m2573949791(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_002e:
	{
		Type_t * L_9 = V_1;
		NullCheck(L_9);
		Type_t * L_10 = VirtFuncInvoker0< Type_t * >::Invoke(89 /* System.Type System.Type::GetGenericTypeDefinition() */, L_9);
		V_2 = L_10;
		Type_t * L_11 = V_2;
		if (L_11)
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_003a:
	{
		Type_t * L_12 = V_2;
		PropertyInfo_t * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		int32_t L_15 = ___bindingAttr1;
		NullCheck(L_12);
		MemberInfoU5BU5D_t4238939941* L_16 = VirtFuncInvoker2< MemberInfoU5BU5D_t4238939941*, String_t*, int32_t >::Invoke(52 /* System.Reflection.MemberInfo[] System.Type::GetMember(System.String,System.Reflection.BindingFlags) */, L_12, L_14, L_15);
		V_3 = L_16;
		MemberInfoU5BU5D_t4238939941* L_17 = V_3;
		NullCheck(L_17);
		if ((((RuntimeArray *)L_17)->max_length))
		{
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_004e:
	{
		MemberInfoU5BU5D_t4238939941* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = 0;
		MemberInfo_t * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		Type_t * L_21 = ReflectionUtils_GetMemberUnderlyingType_m1551178430(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_22 = VirtFuncInvoker0< bool >::Invoke(92 /* System.Boolean System.Type::get_IsGenericParameter() */, L_21);
		if (L_22)
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_005f:
	{
		return (bool)1;
	}
}
// System.Attribute[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes(System.Object,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* ReflectionUtils_GetAttributes_m3650815366 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___attributeProvider0, Type_t * ___attributeType1, bool ___inherit2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetAttributes_m3650815366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t * V_2 = NULL;
	AttributeU5BU5D_t4255796347* V_3 = NULL;
	Assembly_t * V_4 = NULL;
	MemberInfo_t * V_5 = NULL;
	Module_t4282841206 * V_6 = NULL;
	ParameterInfo_t2249040075 * V_7 = NULL;
	ObjectU5BU5D_t3614634134* G_B4_0 = NULL;
	ObjectU5BU5D_t3614634134* G_B27_0 = NULL;
	{
		RuntimeObject * L_0 = ___attributeProvider0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral2841435673, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___attributeProvider0;
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		if (!((Type_t *)IsInstClass((RuntimeObject*)L_2, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		V_2 = ((Type_t *)CastclassClass((RuntimeObject*)L_3, Type_t_il2cpp_TypeInfo_var));
		Type_t * L_4 = ___attributeType1;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		Type_t * L_5 = V_2;
		bool L_6 = ___inherit2;
		NullCheck(L_5);
		ObjectU5BU5D_t3614634134* L_7 = VirtFuncInvoker1< ObjectU5BU5D_t3614634134*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_5, L_6);
		G_B4_0 = L_7;
		goto IL_0030;
	}

IL_0028:
	{
		Type_t * L_8 = V_2;
		Type_t * L_9 = ___attributeType1;
		bool L_10 = ___inherit2;
		NullCheck(L_8);
		ObjectU5BU5D_t3614634134* L_11 = VirtFuncInvoker2< ObjectU5BU5D_t3614634134*, Type_t *, bool >::Invoke(14 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_8, L_9, L_10);
		G_B4_0 = L_11;
	}

IL_0030:
	{
		RuntimeObject* L_12 = Enumerable_Cast_TisAttribute_t542643598_m1897090966(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B4_0, /*hidden argument*/Enumerable_Cast_TisAttribute_t542643598_m1897090966_RuntimeMethod_var);
		AttributeU5BU5D_t4255796347* L_13 = Enumerable_ToArray_TisAttribute_t542643598_m3383875288(NULL /*static, unused*/, L_12, /*hidden argument*/Enumerable_ToArray_TisAttribute_t542643598_m3383875288_RuntimeMethod_var);
		V_3 = L_13;
		bool L_14 = ___inherit2;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_15 = V_2;
		NullCheck(L_15);
		Type_t * L_16 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_15);
		if (!L_16)
		{
			goto IL_005f;
		}
	}
	{
		AttributeU5BU5D_t4255796347* L_17 = V_3;
		Type_t * L_18 = V_2;
		NullCheck(L_18);
		Type_t * L_19 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_18);
		Type_t * L_20 = ___attributeType1;
		bool L_21 = ___inherit2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		AttributeU5BU5D_t4255796347* L_22 = ReflectionUtils_GetAttributes_m3650815366(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		RuntimeObject* L_23 = Enumerable_Union_TisAttribute_t542643598_m2698737871(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_17, (RuntimeObject*)(RuntimeObject*)L_22, /*hidden argument*/Enumerable_Union_TisAttribute_t542643598_m2698737871_RuntimeMethod_var);
		AttributeU5BU5D_t4255796347* L_24 = Enumerable_ToArray_TisAttribute_t542643598_m3383875288(NULL /*static, unused*/, L_23, /*hidden argument*/Enumerable_ToArray_TisAttribute_t542643598_m3383875288_RuntimeMethod_var);
		V_3 = L_24;
	}

IL_005f:
	{
		AttributeU5BU5D_t4255796347* L_25 = V_3;
		return L_25;
	}

IL_0061:
	{
		RuntimeObject * L_26 = V_0;
		if (!((Assembly_t *)IsInstClass((RuntimeObject*)L_26, Assembly_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject * L_27 = V_0;
		V_4 = ((Assembly_t *)CastclassClass((RuntimeObject*)L_27, Assembly_t_il2cpp_TypeInfo_var));
		Type_t * L_28 = ___attributeType1;
		if (L_28)
		{
			goto IL_007c;
		}
	}
	{
		Assembly_t * L_29 = V_4;
		AttributeU5BU5D_t4255796347* L_30 = Attribute_GetCustomAttributes_m3452110163(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_007c:
	{
		Assembly_t * L_31 = V_4;
		Type_t * L_32 = ___attributeType1;
		AttributeU5BU5D_t4255796347* L_33 = Attribute_GetCustomAttributes_m1027548962(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		return L_33;
	}

IL_0085:
	{
		RuntimeObject * L_34 = V_0;
		if (!((MemberInfo_t *)IsInstClass((RuntimeObject*)L_34, MemberInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00ab;
		}
	}
	{
		RuntimeObject * L_35 = V_0;
		V_5 = ((MemberInfo_t *)CastclassClass((RuntimeObject*)L_35, MemberInfo_t_il2cpp_TypeInfo_var));
		Type_t * L_36 = ___attributeType1;
		if (L_36)
		{
			goto IL_00a1;
		}
	}
	{
		MemberInfo_t * L_37 = V_5;
		bool L_38 = ___inherit2;
		AttributeU5BU5D_t4255796347* L_39 = Attribute_GetCustomAttributes_m4082301034(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		return L_39;
	}

IL_00a1:
	{
		MemberInfo_t * L_40 = V_5;
		Type_t * L_41 = ___attributeType1;
		bool L_42 = ___inherit2;
		AttributeU5BU5D_t4255796347* L_43 = Attribute_GetCustomAttributes_m2468178975(NULL /*static, unused*/, L_40, L_41, L_42, /*hidden argument*/NULL);
		return L_43;
	}

IL_00ab:
	{
		RuntimeObject * L_44 = V_0;
		if (!((Module_t4282841206 *)IsInstClass((RuntimeObject*)L_44, Module_t4282841206_il2cpp_TypeInfo_var)))
		{
			goto IL_00d1;
		}
	}
	{
		RuntimeObject * L_45 = V_0;
		V_6 = ((Module_t4282841206 *)CastclassClass((RuntimeObject*)L_45, Module_t4282841206_il2cpp_TypeInfo_var));
		Type_t * L_46 = ___attributeType1;
		if (L_46)
		{
			goto IL_00c7;
		}
	}
	{
		Module_t4282841206 * L_47 = V_6;
		bool L_48 = ___inherit2;
		AttributeU5BU5D_t4255796347* L_49 = Attribute_GetCustomAttributes_m2740621604(NULL /*static, unused*/, L_47, L_48, /*hidden argument*/NULL);
		return L_49;
	}

IL_00c7:
	{
		Module_t4282841206 * L_50 = V_6;
		Type_t * L_51 = ___attributeType1;
		bool L_52 = ___inherit2;
		AttributeU5BU5D_t4255796347* L_53 = Attribute_GetCustomAttributes_m3847944167(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
		return L_53;
	}

IL_00d1:
	{
		RuntimeObject * L_54 = V_0;
		if (!((ParameterInfo_t2249040075 *)IsInstClass((RuntimeObject*)L_54, ParameterInfo_t2249040075_il2cpp_TypeInfo_var)))
		{
			goto IL_00f7;
		}
	}
	{
		RuntimeObject * L_55 = V_0;
		V_7 = ((ParameterInfo_t2249040075 *)CastclassClass((RuntimeObject*)L_55, ParameterInfo_t2249040075_il2cpp_TypeInfo_var));
		Type_t * L_56 = ___attributeType1;
		if (L_56)
		{
			goto IL_00ed;
		}
	}
	{
		ParameterInfo_t2249040075 * L_57 = V_7;
		bool L_58 = ___inherit2;
		AttributeU5BU5D_t4255796347* L_59 = Attribute_GetCustomAttributes_m1246435837(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/NULL);
		return L_59;
	}

IL_00ed:
	{
		ParameterInfo_t2249040075 * L_60 = V_7;
		Type_t * L_61 = ___attributeType1;
		bool L_62 = ___inherit2;
		AttributeU5BU5D_t4255796347* L_63 = Attribute_GetCustomAttributes_m1900696014(NULL /*static, unused*/, L_60, L_61, L_62, /*hidden argument*/NULL);
		return L_63;
	}

IL_00f7:
	{
		RuntimeObject * L_64 = ___attributeProvider0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_64, ICustomAttributeProvider_t502202687_il2cpp_TypeInfo_var));
		Type_t * L_65 = ___attributeType1;
		if (L_65)
		{
			goto IL_010a;
		}
	}
	{
		RuntimeObject* L_66 = V_1;
		bool L_67 = ___inherit2;
		NullCheck(L_66);
		ObjectU5BU5D_t3614634134* L_68 = InterfaceFuncInvoker1< ObjectU5BU5D_t3614634134*, bool >::Invoke(0 /* System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Boolean) */, ICustomAttributeProvider_t502202687_il2cpp_TypeInfo_var, L_66, L_67);
		G_B27_0 = L_68;
		goto IL_0112;
	}

IL_010a:
	{
		RuntimeObject* L_69 = V_1;
		Type_t * L_70 = ___attributeType1;
		bool L_71 = ___inherit2;
		NullCheck(L_69);
		ObjectU5BU5D_t3614634134* L_72 = InterfaceFuncInvoker2< ObjectU5BU5D_t3614634134*, Type_t *, bool >::Invoke(1 /* System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Type,System.Boolean) */, ICustomAttributeProvider_t502202687_il2cpp_TypeInfo_var, L_69, L_70, L_71);
		G_B27_0 = L_72;
	}

IL_0112:
	{
		return ((AttributeU5BU5D_t4255796347*)Castclass((RuntimeObject*)G_B27_0, AttributeU5BU5D_t4255796347_il2cpp_TypeInfo_var));
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SplitFullyQualifiedTypeName(System.String,System.String&,System.String&)
extern "C"  void ReflectionUtils_SplitFullyQualifiedTypeName_m3895103026 (RuntimeObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, String_t** ___typeName1, String_t** ___assemblyName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_SplitFullyQualifiedTypeName_m3895103026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t334943763  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___fullyQualifiedTypeName0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		Nullable_1_t334943763  L_1 = ReflectionUtils_GetAssemblyDelimiterIndex_m4281428473(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m3680291262((&V_0), /*hidden argument*/Nullable_1_get_HasValue_m3680291262_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		String_t** L_3 = ___typeName1;
		String_t* L_4 = ___fullyQualifiedTypeName0;
		int32_t L_5 = Nullable_1_GetValueOrDefault_m3091235761((&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m3091235761_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_6 = String_Substring_m12482732(L_4, 0, L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = String_Trim_m2668767713(L_6, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_3)) = (RuntimeObject *)L_7;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_3), (RuntimeObject *)L_7);
		String_t** L_8 = ___assemblyName2;
		String_t* L_9 = ___fullyQualifiedTypeName0;
		int32_t L_10 = Nullable_1_GetValueOrDefault_m3091235761((&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m3091235761_RuntimeMethod_var);
		String_t* L_11 = ___fullyQualifiedTypeName0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m1606060069(L_11, /*hidden argument*/NULL);
		int32_t L_13 = Nullable_1_GetValueOrDefault_m3091235761((&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m3091235761_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_14 = String_Substring_m12482732(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)), (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = String_Trim_m2668767713(L_14, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_8)) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_8), (RuntimeObject *)L_15);
		return;
	}

IL_004c:
	{
		String_t** L_16 = ___typeName1;
		String_t* L_17 = ___fullyQualifiedTypeName0;
		*((RuntimeObject **)(L_16)) = (RuntimeObject *)L_17;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_16), (RuntimeObject *)L_17);
		String_t** L_18 = ___assemblyName2;
		*((RuntimeObject **)(L_18)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_18), (RuntimeObject *)NULL);
		return;
	}
}
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.ReflectionUtils::GetAssemblyDelimiterIndex(System.String)
extern "C"  Nullable_1_t334943763  ReflectionUtils_GetAssemblyDelimiterIndex_m4281428473 (RuntimeObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetAssemblyDelimiterIndex_m4281428473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Nullable_1_t334943763  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0039;
	}

IL_0006:
	{
		String_t* L_0 = ___fullyQualifiedTypeName0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m4230566705(L_0, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		Il2CppChar L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)44))))
		{
			goto IL_002b;
		}
	}
	{
		Il2CppChar L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)91))))
		{
			goto IL_001f;
		}
	}
	{
		Il2CppChar L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)93))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0035;
	}

IL_001f:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		goto IL_0035;
	}

IL_0025:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
		goto IL_0035;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_9 = V_1;
		Nullable_1_t334943763  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Nullable_1__ctor_m2305320521((&L_10), L_9, /*hidden argument*/Nullable_1__ctor_m2305320521_RuntimeMethod_var);
		return L_10;
	}

IL_0035:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_1;
		String_t* L_13 = ___fullyQualifiedTypeName0;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m1606060069(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0006;
		}
	}
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t334943763 ));
		Nullable_1_t334943763  L_15 = V_3;
		return L_15;
	}
}
// System.Reflection.MemberInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberInfoFromType(System.Type,System.Reflection.MemberInfo)
extern "C"  MemberInfo_t * ReflectionUtils_GetMemberInfoFromType_m2104111271 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, MemberInfo_t * ___memberInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetMemberInfoFromType_m2104111271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PropertyInfo_t * V_1 = NULL;
	TypeU5BU5D_t1664964607* V_2 = NULL;
	Func_2_t101093588 * G_B3_0 = NULL;
	ParameterInfoU5BU5D_t2275869610* G_B3_1 = NULL;
	Func_2_t101093588 * G_B2_0 = NULL;
	ParameterInfoU5BU5D_t2275869610* G_B2_1 = NULL;
	{
		MemberInfo_t * L_0 = ___memberInfo1;
		int32_t L_1 = TypeExtensions_MemberType_m2192645245(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_005b;
		}
	}
	{
		MemberInfo_t * L_3 = ___memberInfo1;
		V_1 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_3, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_4 = V_1;
		NullCheck(L_4);
		ParameterInfoU5BU5D_t2275869610* L_5 = VirtFuncInvoker0< ParameterInfoU5BU5D_t2275869610* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var);
		Func_2_t101093588 * L_6 = ((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->get_U3CU3E9__37_0_3();
		Func_2_t101093588 * L_7 = L_6;
		G_B2_0 = L_7;
		G_B2_1 = L_5;
		if (L_7)
		{
			G_B3_0 = L_7;
			G_B3_1 = L_5;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var);
		U3CU3Ec_t2709377751 * L_8 = ((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_9 = (intptr_t)U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__37_0_m2053928095_RuntimeMethod_var;
		Func_2_t101093588 * L_10 = (Func_2_t101093588 *)il2cpp_codegen_object_new(Func_2_t101093588_il2cpp_TypeInfo_var);
		Func_2__ctor_m2371337323(L_10, L_8, L_9, /*hidden argument*/Func_2__ctor_m2371337323_RuntimeMethod_var);
		Func_2_t101093588 * L_11 = L_10;
		((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->set_U3CU3E9__37_0_3(L_11);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_1;
	}

IL_0038:
	{
		RuntimeObject* L_12 = Enumerable_Select_TisParameterInfo_t2249040075_TisType_t_m3128050479(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B3_1, G_B3_0, /*hidden argument*/Enumerable_Select_TisParameterInfo_t2249040075_TisType_t_m3128050479_RuntimeMethod_var);
		TypeU5BU5D_t1664964607* L_13 = Enumerable_ToArray_TisType_t_m1174505748(NULL /*static, unused*/, L_12, /*hidden argument*/Enumerable_ToArray_TisType_t_m1174505748_RuntimeMethod_var);
		V_2 = L_13;
		Type_t * L_14 = ___targetType0;
		PropertyInfo_t * L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		PropertyInfo_t * L_17 = V_1;
		NullCheck(L_17);
		Type_t * L_18 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_17);
		TypeU5BU5D_t1664964607* L_19 = V_2;
		NullCheck(L_14);
		PropertyInfo_t * L_20 = Type_GetProperty_m2172000670(L_14, L_16, ((int32_t)60), (Binder_t3404612058 *)NULL, L_18, L_19, (ParameterModifierU5BU5D_t963192633*)(ParameterModifierU5BU5D_t963192633*)NULL, /*hidden argument*/NULL);
		return L_20;
	}

IL_005b:
	{
		Type_t * L_21 = ___targetType0;
		MemberInfo_t * L_22 = ___memberInfo1;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_22);
		MemberInfo_t * L_24 = ___memberInfo1;
		int32_t L_25 = TypeExtensions_MemberType_m2192645245(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		MemberInfoU5BU5D_t4238939941* L_26 = VirtFuncInvoker3< MemberInfoU5BU5D_t4238939941*, String_t*, int32_t, int32_t >::Invoke(53 /* System.Reflection.MemberInfo[] System.Type::GetMember(System.String,System.Reflection.MemberTypes,System.Reflection.BindingFlags) */, L_21, L_23, L_25, ((int32_t)60));
		MemberInfo_t * L_27 = Enumerable_SingleOrDefault_TisMemberInfo_t_m2811579155(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_26, /*hidden argument*/Enumerable_SingleOrDefault_TisMemberInfo_t_m2811579155_RuntimeMethod_var);
		return L_27;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFields(System.Type,System.Reflection.BindingFlags)
extern "C"  RuntimeObject* ReflectionUtils_GetFields_m135069139 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetFields_m135069139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___targetType0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral3040989817, /*hidden argument*/NULL);
		Type_t * L_1 = ___targetType0;
		int32_t L_2 = ___bindingAttr1;
		NullCheck(L_1);
		FieldInfoU5BU5D_t125053523* L_3 = VirtFuncInvoker1< FieldInfoU5BU5D_t125053523*, int32_t >::Invoke(51 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_1, L_2);
		List_1_t3412218392 * L_4 = (List_1_t3412218392 *)il2cpp_codegen_object_new(List_1_t3412218392_il2cpp_TypeInfo_var);
		List_1__ctor_m3378486404(L_4, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_m3378486404_RuntimeMethod_var);
		List_1_t3412218392 * L_5 = L_4;
		Type_t * L_6 = ___targetType0;
		int32_t L_7 = ___bindingAttr1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		ReflectionUtils_GetChildPrivateFields_m3741033601(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
		RuntimeObject* L_8 = Enumerable_Cast_TisFieldInfo_t_m2287377147(NULL /*static, unused*/, L_5, /*hidden argument*/Enumerable_Cast_TisFieldInfo_t_m2287377147_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateFields(System.Collections.Generic.IList`1<System.Reflection.MemberInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateFields_m3741033601 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initialFields0, Type_t * ___targetType1, int32_t ___bindingAttr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetChildPrivateFields_m3741033601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	Func_2_t472048993 * G_B4_0 = NULL;
	FieldInfoU5BU5D_t125053523* G_B4_1 = NULL;
	Func_2_t472048993 * G_B3_0 = NULL;
	FieldInfoU5BU5D_t125053523* G_B3_1 = NULL;
	{
		int32_t L_0 = ___bindingAttr2;
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)32))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_1 = ___bindingAttr2;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		int32_t L_2 = ReflectionUtils_RemoveFlag_m902828796(NULL /*static, unused*/, L_1, ((int32_t)16), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0049;
	}

IL_0011:
	{
		Type_t * L_3 = ___targetType1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		FieldInfoU5BU5D_t125053523* L_5 = VirtFuncInvoker1< FieldInfoU5BU5D_t125053523*, int32_t >::Invoke(51 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_3, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var);
		Func_2_t472048993 * L_6 = ((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->get_U3CU3E9__39_0_4();
		Func_2_t472048993 * L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var);
		U3CU3Ec_t2709377751 * L_8 = ((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		intptr_t L_9 = (intptr_t)U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__39_0_m388363336_RuntimeMethod_var;
		Func_2_t472048993 * L_10 = (Func_2_t472048993 *)il2cpp_codegen_object_new(Func_2_t472048993_il2cpp_TypeInfo_var);
		Func_2__ctor_m660135348(L_10, L_8, L_9, /*hidden argument*/Func_2__ctor_m660135348_RuntimeMethod_var);
		Func_2_t472048993 * L_11 = L_10;
		((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->set_U3CU3E9__39_0_4(L_11);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_0037:
	{
		RuntimeObject* L_12 = Enumerable_Where_TisFieldInfo_t_m1401957933(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)G_B4_1, G_B4_0, /*hidden argument*/Enumerable_Where_TisFieldInfo_t_m1401957933_RuntimeMethod_var);
		RuntimeObject* L_13 = Enumerable_Cast_TisMemberInfo_t_m69675683(NULL /*static, unused*/, L_12, /*hidden argument*/Enumerable_Cast_TisMemberInfo_t_m69675683_RuntimeMethod_var);
		V_1 = L_13;
		RuntimeObject* L_14 = ___initialFields0;
		RuntimeObject* L_15 = V_1;
		CollectionUtils_AddRange_TisMemberInfo_t_m1995032504(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m1995032504_RuntimeMethod_var);
	}

IL_0049:
	{
		Type_t * L_16 = ___targetType1;
		Type_t * L_17 = TypeExtensions_BaseType_m3858355017(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		Type_t * L_18 = L_17;
		___targetType1 = L_18;
		if (L_18)
		{
			goto IL_0011;
		}
	}

IL_0054:
	{
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  RuntimeObject* ReflectionUtils_GetProperties_m3440088748 (RuntimeObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetProperties_m3440088748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1622850197 * V_0 = NULL;
	TypeU5BU5D_t1664964607* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t * V_3 = NULL;
	int32_t V_4 = 0;
	PropertyInfo_t * V_5 = NULL;
	PropertyInfo_t * V_6 = NULL;
	{
		Type_t * L_0 = ___targetType0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral3040989817, /*hidden argument*/NULL);
		Type_t * L_1 = ___targetType0;
		int32_t L_2 = ___bindingAttr1;
		NullCheck(L_1);
		PropertyInfoU5BU5D_t1736152084* L_3 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1736152084*, int32_t >::Invoke(62 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_1, L_2);
		List_1_t1622850197 * L_4 = (List_1_t1622850197 *)il2cpp_codegen_object_new(List_1_t1622850197_il2cpp_TypeInfo_var);
		List_1__ctor_m2150122279(L_4, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1__ctor_m2150122279_RuntimeMethod_var);
		V_0 = L_4;
		Type_t * L_5 = ___targetType0;
		bool L_6 = TypeExtensions_IsInterface_m4027938127(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		Type_t * L_7 = ___targetType0;
		NullCheck(L_7);
		TypeU5BU5D_t1664964607* L_8 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(41 /* System.Type[] System.Type::GetInterfaces() */, L_7);
		V_1 = L_8;
		V_2 = 0;
		goto IL_0040;
	}

IL_002b:
	{
		TypeU5BU5D_t1664964607* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Type_t * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = L_12;
		List_1_t1622850197 * L_13 = V_0;
		Type_t * L_14 = V_3;
		int32_t L_15 = ___bindingAttr1;
		NullCheck(L_14);
		PropertyInfoU5BU5D_t1736152084* L_16 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1736152084*, int32_t >::Invoke(62 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_14, L_15);
		NullCheck(L_13);
		List_1_AddRange_m151432689(L_13, (RuntimeObject*)(RuntimeObject*)L_16, /*hidden argument*/List_1_AddRange_m151432689_RuntimeMethod_var);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_18 = V_2;
		TypeU5BU5D_t1664964607* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_002b;
		}
	}

IL_0046:
	{
		List_1_t1622850197 * L_20 = V_0;
		Type_t * L_21 = ___targetType0;
		int32_t L_22 = ___bindingAttr1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		ReflectionUtils_GetChildPrivateProperties_m3750821150(NULL /*static, unused*/, L_20, L_21, L_22, /*hidden argument*/NULL);
		V_4 = 0;
		goto IL_008c;
	}

IL_0053:
	{
		List_1_t1622850197 * L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		PropertyInfo_t * L_25 = List_1_get_Item_m2416941178(L_23, L_24, /*hidden argument*/List_1_get_Item_m2416941178_RuntimeMethod_var);
		V_5 = L_25;
		PropertyInfo_t * L_26 = V_5;
		NullCheck(L_26);
		Type_t * L_27 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_26);
		Type_t * L_28 = ___targetType0;
		if ((((RuntimeObject*)(Type_t *)L_27) == ((RuntimeObject*)(Type_t *)L_28)))
		{
			goto IL_0086;
		}
	}
	{
		PropertyInfo_t * L_29 = V_5;
		NullCheck(L_29);
		Type_t * L_30 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_29);
		PropertyInfo_t * L_31 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		MemberInfo_t * L_32 = ReflectionUtils_GetMemberInfoFromType_m2104111271(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		V_6 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_32, PropertyInfo_t_il2cpp_TypeInfo_var));
		List_1_t1622850197 * L_33 = V_0;
		int32_t L_34 = V_4;
		PropertyInfo_t * L_35 = V_6;
		NullCheck(L_33);
		List_1_set_Item_m2454789161(L_33, L_34, L_35, /*hidden argument*/List_1_set_Item_m2454789161_RuntimeMethod_var);
	}

IL_0086:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_37 = V_4;
		List_1_t1622850197 * L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = List_1_get_Count_m3589308349(L_38, /*hidden argument*/List_1_get_Count_m3589308349_RuntimeMethod_var);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0053;
		}
	}
	{
		List_1_t1622850197 * L_40 = V_0;
		return L_40;
	}
}
// System.Reflection.BindingFlags Newtonsoft.Json.Utilities.ReflectionUtils::RemoveFlag(System.Reflection.BindingFlags,System.Reflection.BindingFlags)
extern "C"  int32_t ReflectionUtils_RemoveFlag_m902828796 (RuntimeObject * __this /* static, unused */, int32_t ___bindingAttr0, int32_t ___flag1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___bindingAttr0;
		int32_t L_1 = ___flag1;
		int32_t L_2 = ___flag1;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_3 = ___bindingAttr0;
		return L_3;
	}

IL_0008:
	{
		int32_t L_4 = ___bindingAttr0;
		int32_t L_5 = ___flag1;
		return (int32_t)(((int32_t)((int32_t)L_4^(int32_t)L_5)));
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateProperties(System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateProperties_m3750821150 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___initialProperties0, Type_t * ___targetType1, int32_t ___bindingAttr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetChildPrivateProperties_m3750821150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfoU5BU5D_t1736152084* V_0 = NULL;
	int32_t V_1 = 0;
	PropertyInfo_t * V_2 = NULL;
	U3CU3Ec__DisplayClass42_0_t3402508478 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		goto IL_00d6;
	}

IL_0005:
	{
		Type_t * L_0 = ___targetType1;
		int32_t L_1 = ___bindingAttr2;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t1736152084* L_2 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1736152084*, int32_t >::Invoke(62 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, L_1);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00cd;
	}

IL_0014:
	{
		PropertyInfoU5BU5D_t1736152084* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		PropertyInfo_t * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		U3CU3Ec__DisplayClass42_0_t3402508478 * L_7 = (U3CU3Ec__DisplayClass42_0_t3402508478 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass42_0_t3402508478_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass42_0__ctor_m3229611402(L_7, /*hidden argument*/NULL);
		V_3 = L_7;
		U3CU3Ec__DisplayClass42_0_t3402508478 * L_8 = V_3;
		PropertyInfo_t * L_9 = V_2;
		NullCheck(L_8);
		L_8->set_subTypeProperty_0(L_9);
		U3CU3Ec__DisplayClass42_0_t3402508478 * L_10 = V_3;
		NullCheck(L_10);
		PropertyInfo_t * L_11 = L_10->get_subTypeProperty_0();
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_12 = ReflectionUtils_IsPublic_m3591214589(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0078;
		}
	}
	{
		RuntimeObject* L_13 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t3402508478 * L_14 = V_3;
		intptr_t L_15 = (intptr_t)U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m586375033_RuntimeMethod_var;
		Func_2_t2083147554 * L_16 = (Func_2_t2083147554 *)il2cpp_codegen_object_new(Func_2_t2083147554_il2cpp_TypeInfo_var);
		Func_2__ctor_m2334976461(L_16, L_14, L_15, /*hidden argument*/Func_2__ctor_m2334976461_RuntimeMethod_var);
		int32_t L_17 = CollectionUtils_IndexOf_TisPropertyInfo_t_m514453009(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/CollectionUtils_IndexOf_TisPropertyInfo_t_m514453009_RuntimeMethod_var);
		V_4 = L_17;
		int32_t L_18 = V_4;
		if ((!(((uint32_t)L_18) == ((uint32_t)(-1)))))
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_19 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t3402508478 * L_20 = V_3;
		NullCheck(L_20);
		PropertyInfo_t * L_21 = L_20->get_subTypeProperty_0();
		NullCheck(L_19);
		InterfaceActionInvoker1< PropertyInfo_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Add(!0) */, ICollection_1_t3205804370_il2cpp_TypeInfo_var, L_19, L_21);
		goto IL_00c9;
	}

IL_0059:
	{
		RuntimeObject* L_22 = ___initialProperties0;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		PropertyInfo_t * L_24 = InterfaceFuncInvoker1< PropertyInfo_t *, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::get_Item(System.Int32) */, IList_1_t2794669666_il2cpp_TypeInfo_var, L_22, L_23);
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_25 = ReflectionUtils_IsPublic_m3591214589(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeObject* L_26 = ___initialProperties0;
		int32_t L_27 = V_4;
		U3CU3Ec__DisplayClass42_0_t3402508478 * L_28 = V_3;
		NullCheck(L_28);
		PropertyInfo_t * L_29 = L_28->get_subTypeProperty_0();
		NullCheck(L_26);
		InterfaceActionInvoker2< int32_t, PropertyInfo_t * >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::set_Item(System.Int32,!0) */, IList_1_t2794669666_il2cpp_TypeInfo_var, L_26, L_27, L_29);
		goto IL_00c9;
	}

IL_0078:
	{
		U3CU3Ec__DisplayClass42_0_t3402508478 * L_30 = V_3;
		NullCheck(L_30);
		PropertyInfo_t * L_31 = L_30->get_subTypeProperty_0();
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_32 = ReflectionUtils_IsVirtual_m2993796589(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00a8;
		}
	}
	{
		RuntimeObject* L_33 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t3402508478 * L_34 = V_3;
		intptr_t L_35 = (intptr_t)U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m48371578_RuntimeMethod_var;
		Func_2_t2083147554 * L_36 = (Func_2_t2083147554 *)il2cpp_codegen_object_new(Func_2_t2083147554_il2cpp_TypeInfo_var);
		Func_2__ctor_m2334976461(L_36, L_34, L_35, /*hidden argument*/Func_2__ctor_m2334976461_RuntimeMethod_var);
		int32_t L_37 = CollectionUtils_IndexOf_TisPropertyInfo_t_m514453009(NULL /*static, unused*/, L_33, L_36, /*hidden argument*/CollectionUtils_IndexOf_TisPropertyInfo_t_m514453009_RuntimeMethod_var);
		if ((!(((uint32_t)L_37) == ((uint32_t)(-1)))))
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeObject* L_38 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t3402508478 * L_39 = V_3;
		NullCheck(L_39);
		PropertyInfo_t * L_40 = L_39->get_subTypeProperty_0();
		NullCheck(L_38);
		InterfaceActionInvoker1< PropertyInfo_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Add(!0) */, ICollection_1_t3205804370_il2cpp_TypeInfo_var, L_38, L_40);
		goto IL_00c9;
	}

IL_00a8:
	{
		RuntimeObject* L_41 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t3402508478 * L_42 = V_3;
		intptr_t L_43 = (intptr_t)U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m3165810171_RuntimeMethod_var;
		Func_2_t2083147554 * L_44 = (Func_2_t2083147554 *)il2cpp_codegen_object_new(Func_2_t2083147554_il2cpp_TypeInfo_var);
		Func_2__ctor_m2334976461(L_44, L_42, L_43, /*hidden argument*/Func_2__ctor_m2334976461_RuntimeMethod_var);
		int32_t L_45 = CollectionUtils_IndexOf_TisPropertyInfo_t_m514453009(NULL /*static, unused*/, L_41, L_44, /*hidden argument*/CollectionUtils_IndexOf_TisPropertyInfo_t_m514453009_RuntimeMethod_var);
		if ((!(((uint32_t)L_45) == ((uint32_t)(-1)))))
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeObject* L_46 = ___initialProperties0;
		U3CU3Ec__DisplayClass42_0_t3402508478 * L_47 = V_3;
		NullCheck(L_47);
		PropertyInfo_t * L_48 = L_47->get_subTypeProperty_0();
		NullCheck(L_46);
		InterfaceActionInvoker1< PropertyInfo_t * >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Add(!0) */, ICollection_1_t3205804370_il2cpp_TypeInfo_var, L_46, L_48);
	}

IL_00c9:
	{
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00cd:
	{
		int32_t L_50 = V_1;
		PropertyInfoU5BU5D_t1736152084* L_51 = V_0;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_51)->max_length)))))))
		{
			goto IL_0014;
		}
	}

IL_00d6:
	{
		Type_t * L_52 = ___targetType1;
		Type_t * L_53 = TypeExtensions_BaseType_m3858355017(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		Type_t * L_54 = L_53;
		___targetType1 = L_54;
		if (L_54)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultValue(System.Type)
extern "C"  RuntimeObject * ReflectionUtils_GetDefaultValue_m3102513161 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionUtils_GetDefaultValue_m3102513161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DateTime_t693205669  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Guid_t  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DateTimeOffset_t1362988906  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Type_t * L_0 = ___type0;
		bool L_1 = TypeExtensions_IsValueType_m2298155509(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return NULL;
	}

IL_000a:
	{
		Type_t * L_2 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t2984810590_il2cpp_TypeInfo_var);
		int32_t L_3 = ConvertUtils_GetTypeCode_m1177375997(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)2)))
		{
			case 0:
			{
				goto IL_009e;
			}
			case 1:
			{
				goto IL_00ff;
			}
			case 2:
			{
				goto IL_0097;
			}
			case 3:
			{
				goto IL_00ff;
			}
			case 4:
			{
				goto IL_009e;
			}
			case 5:
			{
				goto IL_00ff;
			}
			case 6:
			{
				goto IL_009e;
			}
			case 7:
			{
				goto IL_00ff;
			}
			case 8:
			{
				goto IL_009e;
			}
			case 9:
			{
				goto IL_00ff;
			}
			case 10:
			{
				goto IL_009e;
			}
			case 11:
			{
				goto IL_00ff;
			}
			case 12:
			{
				goto IL_009e;
			}
			case 13:
			{
				goto IL_00ff;
			}
			case 14:
			{
				goto IL_009e;
			}
			case 15:
			{
				goto IL_00ff;
			}
			case 16:
			{
				goto IL_00a5;
			}
			case 17:
			{
				goto IL_00ff;
			}
			case 18:
			{
				goto IL_00a5;
			}
			case 19:
			{
				goto IL_00ff;
			}
			case 20:
			{
				goto IL_00ad;
			}
			case 21:
			{
				goto IL_00ff;
			}
			case 22:
			{
				goto IL_00b8;
			}
			case 23:
			{
				goto IL_00ff;
			}
			case 24:
			{
				goto IL_00d2;
			}
			case 25:
			{
				goto IL_00ff;
			}
			case 26:
			{
				goto IL_00f0;
			}
			case 27:
			{
				goto IL_00ff;
			}
			case 28:
			{
				goto IL_00c7;
			}
			case 29:
			{
				goto IL_00ff;
			}
			case 30:
			{
				goto IL_00e1;
			}
		}
	}
	{
		goto IL_00ff;
	}

IL_0097:
	{
		bool L_5 = ((bool)0);
		RuntimeObject * L_6 = Box(Boolean_t3825574718_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_009e:
	{
		int32_t L_7 = 0;
		RuntimeObject * L_8 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_00a5:
	{
		int64_t L_9 = (((int64_t)((int64_t)0)));
		RuntimeObject * L_10 = Box(Int64_t909078037_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_00ad:
	{
		float L_11 = (0.0f);
		RuntimeObject * L_12 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}

IL_00b8:
	{
		double L_13 = (0.0);
		RuntimeObject * L_14 = Box(Double_t4078015681_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}

IL_00c7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t724701077_il2cpp_TypeInfo_var);
		Decimal_t724701077  L_15 = ((Decimal_t724701077_StaticFields*)il2cpp_codegen_static_fields_for(Decimal_t724701077_il2cpp_TypeInfo_var))->get_Zero_4();
		Decimal_t724701077  L_16 = L_15;
		RuntimeObject * L_17 = Box(Decimal_t724701077_il2cpp_TypeInfo_var, &L_16);
		return L_17;
	}

IL_00d2:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(DateTime_t693205669 ));
		DateTime_t693205669  L_18 = V_1;
		DateTime_t693205669  L_19 = L_18;
		RuntimeObject * L_20 = Box(DateTime_t693205669_il2cpp_TypeInfo_var, &L_19);
		return L_20;
	}

IL_00e1:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Guid_t ));
		Guid_t  L_21 = V_2;
		Guid_t  L_22 = L_21;
		RuntimeObject * L_23 = Box(Guid_t_il2cpp_TypeInfo_var, &L_22);
		return L_23;
	}

IL_00f0:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(DateTimeOffset_t1362988906 ));
		DateTimeOffset_t1362988906  L_24 = V_3;
		DateTimeOffset_t1362988906  L_25 = L_24;
		RuntimeObject * L_26 = Box(DateTimeOffset_t1362988906_il2cpp_TypeInfo_var, &L_25);
		return L_26;
	}

IL_00ff:
	{
		Type_t * L_27 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_28 = ReflectionUtils_IsNullable_m5141129(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0109;
		}
	}
	{
		return NULL;
	}

IL_0109:
	{
		Type_t * L_29 = ___type0;
		RuntimeObject * L_30 = Activator_CreateInstance_m383294261(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		return L_30;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.cctor()
extern "C"  void U3CU3Ec__cctor_m2911900720 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m2911900720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2709377751 * L_0 = (U3CU3Ec_t2709377751 *)il2cpp_codegen_object_new(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1513865691(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2709377751_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2709377751_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
extern "C"  void U3CU3Ec__ctor_m1513865691 (U3CU3Ec_t2709377751 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetDefaultConstructor>b__10_0(System.Reflection.ConstructorInfo)
extern "C"  bool U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_m945974850 (U3CU3Ec_t2709377751 * __this, ConstructorInfo_t2851816542 * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_m945974850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t2851816542 * L_0 = ___c0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t2275869610* L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_t2275869610* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		bool L_2 = Enumerable_Any_TisParameterInfo_t2249040075_m1422437387(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_Any_TisParameterInfo_t2249040075_m1422437387_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetFieldsAndProperties>b__29_0(System.Reflection.MemberInfo)
extern "C"  String_t* U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__29_0_m1903479559 (U3CU3Ec_t2709377751 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetMemberInfoFromType>b__37_0(System.Reflection.ParameterInfo)
extern "C"  Type_t * U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__37_0_m2053928095 (U3CU3Ec_t2709377751 * __this, ParameterInfo_t2249040075 * ___p0, const RuntimeMethod* method)
{
	{
		ParameterInfo_t2249040075 * L_0 = ___p0;
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetChildPrivateFields>b__39_0(System.Reflection.FieldInfo)
extern "C"  bool U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__39_0_m388363336 (U3CU3Ec_t2709377751 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		NullCheck(L_0);
		bool L_1 = FieldInfo_get_IsPrivate_m1850902972(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass42_0__ctor_m3229611402 (U3CU3Ec__DisplayClass42_0_t3402508478 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__0(System.Reflection.PropertyInfo)
extern "C"  bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m586375033 (U3CU3Ec__DisplayClass42_0_t3402508478 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m586375033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__1(System.Reflection.PropertyInfo)
extern "C"  bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m48371578 (U3CU3Ec__DisplayClass42_0_t3402508478 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m48371578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		NullCheck(L_5);
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		PropertyInfo_t * L_7 = __this->get_subTypeProperty_0();
		NullCheck(L_7);
		Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		return (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
	}

IL_002c:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__2(System.Reflection.PropertyInfo)
extern "C"  bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m3165810171 (U3CU3Ec__DisplayClass42_0_t3402508478 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m3165810171_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		bool L_6 = ReflectionUtils_IsVirtual_m2993796589(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_7 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		MethodInfo_t * L_8 = ReflectionUtils_GetBaseDefinition_m1178929304(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_9 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3884221258_il2cpp_TypeInfo_var);
		MethodInfo_t * L_10 = ReflectionUtils_GetBaseDefinition_m1178929304(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_10);
		PropertyInfo_t * L_12 = __this->get_subTypeProperty_0();
		MethodInfo_t * L_13 = ReflectionUtils_GetBaseDefinition_m1178929304(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Type_t * L_14 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_13);
		NullCheck(L_11);
		bool L_15 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_11, L_14);
		return L_15;
	}

IL_0049:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0::.ctor()
extern "C"  void U3CU3Ec__DisplayClass43_0__ctor_m3344848427 (U3CU3Ec__DisplayClass43_0_t3402508447 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringBuffer
extern "C" void StringBuffer_t2484172789_marshal_pinvoke(const StringBuffer_t2484172789& unmarshaled, StringBuffer_t2484172789_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__buffer_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__buffer_Length = (unmarshaled.get__buffer_0())->max_length;
		marshaled.____buffer_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__buffer_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__buffer_Length); i++)
		{
			(marshaled.____buffer_0)[i] = static_cast<uint8_t>((unmarshaled.get__buffer_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____buffer_0 = NULL;
	}
	marshaled.____position_1 = unmarshaled.get__position_1();
}
extern "C" void StringBuffer_t2484172789_marshal_pinvoke_back(const StringBuffer_t2484172789_marshaled_pinvoke& marshaled, StringBuffer_t2484172789& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringBuffer_t2484172789_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____buffer_0 != NULL)
	{
		if (unmarshaled.get__buffer_0() == NULL)
		{
			unmarshaled.set__buffer_0(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__buffer_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__buffer_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____buffer_0)[i]));
		}
	}
	int32_t unmarshaled__position_temp_1 = 0;
	unmarshaled__position_temp_1 = marshaled.____position_1;
	unmarshaled.set__position_1(unmarshaled__position_temp_1);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringBuffer
extern "C" void StringBuffer_t2484172789_marshal_pinvoke_cleanup(StringBuffer_t2484172789_marshaled_pinvoke& marshaled)
{
	if (marshaled.____buffer_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____buffer_0);
		marshaled.____buffer_0 = NULL;
	}
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringBuffer
extern "C" void StringBuffer_t2484172789_marshal_com(const StringBuffer_t2484172789& unmarshaled, StringBuffer_t2484172789_marshaled_com& marshaled)
{
	if (unmarshaled.get__buffer_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__buffer_Length = (unmarshaled.get__buffer_0())->max_length;
		marshaled.____buffer_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__buffer_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__buffer_Length); i++)
		{
			(marshaled.____buffer_0)[i] = static_cast<uint8_t>((unmarshaled.get__buffer_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____buffer_0 = NULL;
	}
	marshaled.____position_1 = unmarshaled.get__position_1();
}
extern "C" void StringBuffer_t2484172789_marshal_com_back(const StringBuffer_t2484172789_marshaled_com& marshaled, StringBuffer_t2484172789& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringBuffer_t2484172789_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____buffer_0 != NULL)
	{
		if (unmarshaled.get__buffer_0() == NULL)
		{
			unmarshaled.set__buffer_0(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__buffer_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__buffer_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____buffer_0)[i]));
		}
	}
	int32_t unmarshaled__position_temp_1 = 0;
	unmarshaled__position_temp_1 = marshaled.____position_1;
	unmarshaled.set__position_1(unmarshaled__position_temp_1);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringBuffer
extern "C" void StringBuffer_t2484172789_marshal_com_cleanup(StringBuffer_t2484172789_marshaled_com& marshaled)
{
	if (marshaled.____buffer_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____buffer_0);
		marshaled.____buffer_0 = NULL;
	}
}
// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::get_Position()
extern "C"  int32_t StringBuffer_get_Position_m2165238534 (StringBuffer_t2484172789 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__position_1();
		return L_0;
	}
}
extern "C"  int32_t StringBuffer_get_Position_m2165238534_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	return StringBuffer_get_Position_m2165238534(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::set_Position(System.Int32)
extern "C"  void StringBuffer_set_Position_m164325637 (StringBuffer_t2484172789 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__position_1(L_0);
		return;
	}
}
extern "C"  void StringBuffer_set_Position_m164325637_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	StringBuffer_set_Position_m164325637(_thisAdjusted, ___value0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.StringBuffer::get_IsEmpty()
extern "C"  bool StringBuffer_get_IsEmpty_m2064517116 (StringBuffer_t2484172789 * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t1328083999* L_0 = __this->get__buffer_0();
		return (bool)((((RuntimeObject*)(CharU5BU5D_t1328083999*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
extern "C"  bool StringBuffer_get_IsEmpty_m2064517116_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	return StringBuffer_get_IsEmpty_m2064517116(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer__ctor_m55458746 (StringBuffer_t2484172789 * __this, RuntimeObject* ___bufferPool0, int32_t ___initalSize1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___bufferPool0;
		int32_t L_1 = ___initalSize1;
		CharU5BU5D_t1328083999* L_2 = BufferUtils_RentBuffer_m567587815(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		StringBuffer__ctor_m1128116153(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void StringBuffer__ctor_m55458746_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, int32_t ___initalSize1, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	StringBuffer__ctor_m55458746(_thisAdjusted, ___bufferPool0, ___initalSize1, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(System.Char[])
extern "C"  void StringBuffer__ctor_m1128116153 (StringBuffer_t2484172789 * __this, CharU5BU5D_t1328083999* ___buffer0, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t1328083999* L_0 = ___buffer0;
		__this->set__buffer_0(L_0);
		__this->set__position_1(0);
		return;
	}
}
extern "C"  void StringBuffer__ctor_m1128116153_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t1328083999* ___buffer0, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	StringBuffer__ctor_m1128116153(_thisAdjusted, ___buffer0, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char)
extern "C"  void StringBuffer_Append_m1538974178 (StringBuffer_t2484172789 * __this, RuntimeObject* ___bufferPool0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get__position_1();
		CharU5BU5D_t1328083999* L_1 = __this->get__buffer_0();
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_2 = ___bufferPool0;
		StringBuffer_EnsureSize_m2788268905(__this, L_2, 1, /*hidden argument*/NULL);
	}

IL_0018:
	{
		CharU5BU5D_t1328083999* L_3 = __this->get__buffer_0();
		int32_t L_4 = __this->get__position_1();
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		int32_t L_6 = V_0;
		Il2CppChar L_7 = ___value1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Il2CppChar)L_7);
		return;
	}
}
extern "C"  void StringBuffer_Append_m1538974178_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	StringBuffer_Append_m1538974178(_thisAdjusted, ___bufferPool0, ___value1, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[],System.Int32,System.Int32)
extern "C"  void StringBuffer_Append_m1382521736 (StringBuffer_t2484172789 * __this, RuntimeObject* ___bufferPool0, CharU5BU5D_t1328083999* ___buffer1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__position_1();
		int32_t L_1 = ___count3;
		CharU5BU5D_t1328083999* L_2 = __this->get__buffer_0();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_3 = ___bufferPool0;
		int32_t L_4 = ___count3;
		StringBuffer_EnsureSize_m2788268905(__this, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		CharU5BU5D_t1328083999* L_5 = ___buffer1;
		int32_t L_6 = ___startIndex2;
		CharU5BU5D_t1328083999* L_7 = __this->get__buffer_0();
		int32_t L_8 = __this->get__position_1();
		int32_t L_9 = ___count3;
		Array_Copy_m3808317496(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_5, L_6, (RuntimeArray *)(RuntimeArray *)L_7, L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = __this->get__position_1();
		int32_t L_11 = ___count3;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)));
		return;
	}
}
extern "C"  void StringBuffer_Append_m1382521736_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, CharU5BU5D_t1328083999* ___buffer1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	StringBuffer_Append_m1382521736(_thisAdjusted, ___bufferPool0, ___buffer1, ___startIndex2, ___count3, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Clear(Newtonsoft.Json.IArrayPool`1<System.Char>)
extern "C"  void StringBuffer_Clear_m2728963920 (StringBuffer_t2484172789 * __this, RuntimeObject* ___bufferPool0, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t1328083999* L_0 = __this->get__buffer_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = ___bufferPool0;
		CharU5BU5D_t1328083999* L_2 = __this->get__buffer_0();
		BufferUtils_ReturnBuffer_m2353484450(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		__this->set__buffer_0((CharU5BU5D_t1328083999*)NULL);
	}

IL_001b:
	{
		__this->set__position_1(0);
		return;
	}
}
extern "C"  void StringBuffer_Clear_m2728963920_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	StringBuffer_Clear_m2728963920(_thisAdjusted, ___bufferPool0, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::EnsureSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer_EnsureSize_m2788268905 (StringBuffer_t2484172789 * __this, RuntimeObject* ___bufferPool0, int32_t ___appendLength1, const RuntimeMethod* method)
{
	CharU5BU5D_t1328083999* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___bufferPool0;
		int32_t L_1 = __this->get__position_1();
		int32_t L_2 = ___appendLength1;
		CharU5BU5D_t1328083999* L_3 = BufferUtils_RentBuffer_m567587815(NULL /*static, unused*/, L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_3;
		CharU5BU5D_t1328083999* L_4 = __this->get__buffer_0();
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		CharU5BU5D_t1328083999* L_5 = __this->get__buffer_0();
		CharU5BU5D_t1328083999* L_6 = V_0;
		int32_t L_7 = __this->get__position_1();
		Array_Copy_m2363740072(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_5, (RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		RuntimeObject* L_8 = ___bufferPool0;
		CharU5BU5D_t1328083999* L_9 = __this->get__buffer_0();
		BufferUtils_ReturnBuffer_m2353484450(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
	}

IL_0037:
	{
		CharU5BU5D_t1328083999* L_10 = V_0;
		__this->set__buffer_0(L_10);
		return;
	}
}
extern "C"  void StringBuffer_EnsureSize_m2788268905_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, int32_t ___appendLength1, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	StringBuffer_EnsureSize_m2788268905(_thisAdjusted, ___bufferPool0, ___appendLength1, method);
}
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString()
extern "C"  String_t* StringBuffer_ToString_m1070456547 (StringBuffer_t2484172789 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__position_1();
		String_t* L_1 = StringBuffer_ToString_m3486543647(__this, 0, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* StringBuffer_ToString_m1070456547_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	return StringBuffer_ToString_m1070456547(_thisAdjusted, method);
}
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString(System.Int32,System.Int32)
extern "C"  String_t* StringBuffer_ToString_m3486543647 (StringBuffer_t2484172789 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t1328083999* L_0 = __this->get__buffer_0();
		int32_t L_1 = ___start0;
		int32_t L_2 = ___length1;
		String_t* L_3 = String_CreateString_m2448464375(NULL, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* StringBuffer_ToString_m3486543647_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	return StringBuffer_ToString_m3486543647(_thisAdjusted, ___start0, ___length1, method);
}
// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::get_InternalBuffer()
extern "C"  CharU5BU5D_t1328083999* StringBuffer_get_InternalBuffer_m339238344 (StringBuffer_t2484172789 * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t1328083999* L_0 = __this->get__buffer_0();
		return L_0;
	}
}
extern "C"  CharU5BU5D_t1328083999* StringBuffer_get_InternalBuffer_m339238344_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringBuffer_t2484172789 * _thisAdjusted = reinterpret_cast<StringBuffer_t2484172789 *>(__this + 1);
	return StringBuffer_get_InternalBuffer_m339238344(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringReference
extern "C" void StringReference_t1873850304_marshal_pinvoke(const StringReference_t1873850304& unmarshaled, StringReference_t1873850304_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__chars_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__chars_Length = (unmarshaled.get__chars_0())->max_length;
		marshaled.____chars_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__chars_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__chars_Length); i++)
		{
			(marshaled.____chars_0)[i] = static_cast<uint8_t>((unmarshaled.get__chars_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____chars_0 = NULL;
	}
	marshaled.____startIndex_1 = unmarshaled.get__startIndex_1();
	marshaled.____length_2 = unmarshaled.get__length_2();
}
extern "C" void StringReference_t1873850304_marshal_pinvoke_back(const StringReference_t1873850304_marshaled_pinvoke& marshaled, StringReference_t1873850304& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringReference_t1873850304_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____chars_0 != NULL)
	{
		if (unmarshaled.get__chars_0() == NULL)
		{
			unmarshaled.set__chars_0(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__chars_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__chars_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____chars_0)[i]));
		}
	}
	int32_t unmarshaled__startIndex_temp_1 = 0;
	unmarshaled__startIndex_temp_1 = marshaled.____startIndex_1;
	unmarshaled.set__startIndex_1(unmarshaled__startIndex_temp_1);
	int32_t unmarshaled__length_temp_2 = 0;
	unmarshaled__length_temp_2 = marshaled.____length_2;
	unmarshaled.set__length_2(unmarshaled__length_temp_2);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringReference
extern "C" void StringReference_t1873850304_marshal_pinvoke_cleanup(StringReference_t1873850304_marshaled_pinvoke& marshaled)
{
	if (marshaled.____chars_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____chars_0);
		marshaled.____chars_0 = NULL;
	}
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringReference
extern "C" void StringReference_t1873850304_marshal_com(const StringReference_t1873850304& unmarshaled, StringReference_t1873850304_marshaled_com& marshaled)
{
	if (unmarshaled.get__chars_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__chars_Length = (unmarshaled.get__chars_0())->max_length;
		marshaled.____chars_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__chars_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__chars_Length); i++)
		{
			(marshaled.____chars_0)[i] = static_cast<uint8_t>((unmarshaled.get__chars_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____chars_0 = NULL;
	}
	marshaled.____startIndex_1 = unmarshaled.get__startIndex_1();
	marshaled.____length_2 = unmarshaled.get__length_2();
}
extern "C" void StringReference_t1873850304_marshal_com_back(const StringReference_t1873850304_marshaled_com& marshaled, StringReference_t1873850304& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringReference_t1873850304_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____chars_0 != NULL)
	{
		if (unmarshaled.get__chars_0() == NULL)
		{
			unmarshaled.set__chars_0(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__chars_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__chars_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____chars_0)[i]));
		}
	}
	int32_t unmarshaled__startIndex_temp_1 = 0;
	unmarshaled__startIndex_temp_1 = marshaled.____startIndex_1;
	unmarshaled.set__startIndex_1(unmarshaled__startIndex_temp_1);
	int32_t unmarshaled__length_temp_2 = 0;
	unmarshaled__length_temp_2 = marshaled.____length_2;
	unmarshaled.set__length_2(unmarshaled__length_temp_2);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringReference
extern "C" void StringReference_t1873850304_marshal_com_cleanup(StringReference_t1873850304_marshaled_com& marshaled)
{
	if (marshaled.____chars_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____chars_0);
		marshaled.____chars_0 = NULL;
	}
}
// System.Char Newtonsoft.Json.Utilities.StringReference::get_Item(System.Int32)
extern "C"  Il2CppChar StringReference_get_Item_m395816280 (StringReference_t1873850304 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t1328083999* L_0 = __this->get__chars_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
extern "C"  Il2CppChar StringReference_get_Item_m395816280_AdjustorThunk (RuntimeObject * __this, int32_t ___i0, const RuntimeMethod* method)
{
	StringReference_t1873850304 * _thisAdjusted = reinterpret_cast<StringReference_t1873850304 *>(__this + 1);
	return StringReference_get_Item_m395816280(_thisAdjusted, ___i0, method);
}
// System.Char[] Newtonsoft.Json.Utilities.StringReference::get_Chars()
extern "C"  CharU5BU5D_t1328083999* StringReference_get_Chars_m1908699287 (StringReference_t1873850304 * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t1328083999* L_0 = __this->get__chars_0();
		return L_0;
	}
}
extern "C"  CharU5BU5D_t1328083999* StringReference_get_Chars_m1908699287_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringReference_t1873850304 * _thisAdjusted = reinterpret_cast<StringReference_t1873850304 *>(__this + 1);
	return StringReference_get_Chars_m1908699287(_thisAdjusted, method);
}
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_StartIndex()
extern "C"  int32_t StringReference_get_StartIndex_m1490521704 (StringReference_t1873850304 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__startIndex_1();
		return L_0;
	}
}
extern "C"  int32_t StringReference_get_StartIndex_m1490521704_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringReference_t1873850304 * _thisAdjusted = reinterpret_cast<StringReference_t1873850304 *>(__this + 1);
	return StringReference_get_StartIndex_m1490521704(_thisAdjusted, method);
}
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_Length()
extern "C"  int32_t StringReference_get_Length_m976735280 (StringReference_t1873850304 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__length_2();
		return L_0;
	}
}
extern "C"  int32_t StringReference_get_Length_m976735280_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringReference_t1873850304 * _thisAdjusted = reinterpret_cast<StringReference_t1873850304 *>(__this + 1);
	return StringReference_get_Length_m976735280(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.StringReference::.ctor(System.Char[],System.Int32,System.Int32)
extern "C"  void StringReference__ctor_m814259320 (StringReference_t1873850304 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t1328083999* L_0 = ___chars0;
		__this->set__chars_0(L_0);
		int32_t L_1 = ___startIndex1;
		__this->set__startIndex_1(L_1);
		int32_t L_2 = ___length2;
		__this->set__length_2(L_2);
		return;
	}
}
extern "C"  void StringReference__ctor_m814259320_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	StringReference_t1873850304 * _thisAdjusted = reinterpret_cast<StringReference_t1873850304 *>(__this + 1);
	StringReference__ctor_m814259320(_thisAdjusted, ___chars0, ___startIndex1, ___length2, method);
}
// System.String Newtonsoft.Json.Utilities.StringReference::ToString()
extern "C"  String_t* StringReference_ToString_m2319348590 (StringReference_t1873850304 * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t1328083999* L_0 = __this->get__chars_0();
		int32_t L_1 = __this->get__startIndex_1();
		int32_t L_2 = __this->get__length_2();
		String_t* L_3 = String_CreateString_m2448464375(NULL, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  String_t* StringReference_ToString_m2319348590_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	StringReference_t1873850304 * _thisAdjusted = reinterpret_cast<StringReference_t1873850304 *>(__this + 1);
	return StringReference_ToString_m2319348590(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Newtonsoft.Json.Utilities.StringReferenceExtensions::IndexOf(Newtonsoft.Json.Utilities.StringReference,System.Char,System.Int32,System.Int32)
extern "C"  int32_t StringReferenceExtensions_IndexOf_m2363345508 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___s0, Il2CppChar ___c1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringReferenceExtensions_IndexOf_m2363345508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t1328083999* L_0 = StringReference_get_Chars_m1908699287((&___s0), /*hidden argument*/NULL);
		Il2CppChar L_1 = ___c1;
		int32_t L_2 = StringReference_get_StartIndex_m1490521704((&___s0), /*hidden argument*/NULL);
		int32_t L_3 = ___startIndex2;
		int32_t L_4 = ___length3;
		int32_t L_5 = Array_IndexOf_TisChar_t3454481338_m409358040(NULL /*static, unused*/, L_0, L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), L_4, /*hidden argument*/Array_IndexOf_TisChar_t3454481338_m409358040_RuntimeMethod_var);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		return (-1);
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = StringReference_get_StartIndex_m1490521704((&___s0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringReferenceExtensions::StartsWith(Newtonsoft.Json.Utilities.StringReference,System.String)
extern "C"  bool StringReferenceExtensions_StartsWith_m2119043723 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___s0, String_t* ___text1, const RuntimeMethod* method)
{
	CharU5BU5D_t1328083999* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___text1;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1606060069(L_0, /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m976735280((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		CharU5BU5D_t1328083999* L_3 = StringReference_get_Chars_m1908699287((&___s0), /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0037;
	}

IL_001d:
	{
		String_t* L_4 = ___text1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m4230566705(L_4, L_5, /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = StringReference_get_StartIndex_m1490521704((&___s0), /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		uint16_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_6) == ((int32_t)L_11)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0033:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_13 = V_1;
		String_t* L_14 = ___text1;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1606060069(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringReferenceExtensions::EndsWith(Newtonsoft.Json.Utilities.StringReference,System.String)
extern "C"  bool StringReferenceExtensions_EndsWith_m2892765720 (RuntimeObject * __this /* static, unused */, StringReference_t1873850304  ___s0, String_t* ___text1, const RuntimeMethod* method)
{
	CharU5BU5D_t1328083999* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___text1;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1606060069(L_0, /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m976735280((&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		CharU5BU5D_t1328083999* L_3 = StringReference_get_Chars_m1908699287((&___s0), /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = StringReference_get_StartIndex_m1490521704((&___s0), /*hidden argument*/NULL);
		int32_t L_5 = StringReference_get_Length_m976735280((&___s0), /*hidden argument*/NULL);
		String_t* L_6 = ___text1;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m1606060069(L_6, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)), (int32_t)L_7));
		V_2 = 0;
		goto IL_0048;
	}

IL_0034:
	{
		String_t* L_8 = ___text1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		Il2CppChar L_10 = String_get_Chars_m4230566705(L_8, L_9, /*hidden argument*/NULL);
		CharU5BU5D_t1328083999* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		uint16_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((((int32_t)L_10) == ((int32_t)L_15)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0044:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		String_t* L_18 = ___text1;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m1606060069(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m2157778407 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m2157778407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_t3614634134* L_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject * L_3 = ___arg02;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		String_t* L_4 = StringUtils_FormatWith_m282568793(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m3608957081 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m3608957081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_t3614634134* L_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject * L_3 = ___arg02;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3614634134* L_4 = L_2;
		RuntimeObject * L_5 = ___arg13;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		String_t* L_6 = StringUtils_FormatWith_m282568793(NULL /*static, unused*/, L_0, L_1, L_4, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m4026350631 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m4026350631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_t3614634134* L_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeObject * L_3 = ___arg02;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3614634134* L_4 = L_2;
		RuntimeObject * L_5 = ___arg13;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3614634134* L_6 = L_4;
		RuntimeObject * L_7 = ___arg24;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		String_t* L_8 = StringUtils_FormatWith_m282568793(NULL /*static, unused*/, L_0, L_1, L_6, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m1809383129 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, RuntimeObject * ___arg35, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m1809383129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_t3614634134* L_2 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		RuntimeObject * L_3 = ___arg02;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3614634134* L_4 = L_2;
		RuntimeObject * L_5 = ___arg13;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3614634134* L_6 = L_4;
		RuntimeObject * L_7 = ___arg24;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3614634134* L_8 = L_6;
		RuntimeObject * L_9 = ___arg35;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		String_t* L_10 = StringUtils_FormatWith_m282568793(NULL /*static, unused*/, L_0, L_1, L_8, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
extern "C"  String_t* StringUtils_FormatWith_m282568793 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject* ___provider1, ObjectU5BU5D_t3614634134* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m282568793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		ValidationUtils_ArgumentNotNull_m1113617486(NULL /*static, unused*/, L_0, _stringLiteral1334200623, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2 = ___format0;
		ObjectU5BU5D_t3614634134* L_3 = ___args2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m876527052(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.IO.StringWriter Newtonsoft.Json.Utilities.StringUtils::CreateStringWriter(System.Int32)
extern "C"  StringWriter_t4139609088 * StringUtils_CreateStringWriter_m3259887542 (RuntimeObject * __this /* static, unused */, int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_CreateStringWriter_m3259887542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m536337337(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_2 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringWriter_t4139609088 * L_3 = (StringWriter_t4139609088 *)il2cpp_codegen_object_new(StringWriter_t4139609088_il2cpp_TypeInfo_var);
		StringWriter__ctor_m2262370389(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.StringUtils::GetLength(System.String)
extern "C"  Nullable_1_t334943763  StringUtils_GetLength_m572879386 (RuntimeObject * __this /* static, unused */, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_GetLength_m572879386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t334943763  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t334943763 ));
		Nullable_1_t334943763  L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m1606060069(L_2, /*hidden argument*/NULL);
		Nullable_1_t334943763  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Nullable_1__ctor_m2305320521((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m2305320521_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void Newtonsoft.Json.Utilities.StringUtils::ToCharAsUnicode(System.Char,System.Char[])
extern "C"  void StringUtils_ToCharAsUnicode_m3430462003 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, CharU5BU5D_t1328083999* ___buffer1, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t1328083999* L_0 = ___buffer1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t1328083999* L_1 = ___buffer1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)117));
		CharU5BU5D_t1328083999* L_2 = ___buffer1;
		Il2CppChar L_3 = ___c0;
		Il2CppChar L_4 = MathUtils_IntToHex_m2884723570(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)L_4);
		CharU5BU5D_t1328083999* L_5 = ___buffer1;
		Il2CppChar L_6 = ___c0;
		Il2CppChar L_7 = MathUtils_IntToHex_m2884723570(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_6>>(int32_t)8))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppChar)L_7);
		CharU5BU5D_t1328083999* L_8 = ___buffer1;
		Il2CppChar L_9 = ___c0;
		Il2CppChar L_10 = MathUtils_IntToHex_m2884723570(NULL /*static, unused*/, ((int32_t)((int32_t)((int32_t)((int32_t)L_9>>(int32_t)4))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppChar)L_10);
		CharU5BU5D_t1328083999* L_11 = ___buffer1;
		Il2CppChar L_12 = ___c0;
		Il2CppChar L_13 = MathUtils_IntToHex_m2884723570(NULL /*static, unused*/, ((int32_t)((int32_t)L_12&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppChar)L_13);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::ToCamelCase(System.String)
extern "C"  String_t* StringUtils_ToCamelCase_m3781735605 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_ToCamelCase_m3781735605_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t1328083999* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		String_t* L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		Il2CppChar L_3 = String_get_Chars_m4230566705(L_2, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsUpper_m4083577610(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		String_t* L_5 = ___s0;
		return L_5;
	}

IL_0018:
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		CharU5BU5D_t1328083999* L_7 = String_ToCharArray_m870309954(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 0;
		goto IL_0062;
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		CharU5BU5D_t1328083999* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint16_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_13 = Char_IsUpper_m4083577610(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		int32_t L_14 = V_1;
		CharU5BU5D_t1328083999* L_15 = V_0;
		NullCheck(L_15);
		V_2 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length))))))? 1 : 0);
		int32_t L_16 = V_1;
		bool L_17 = V_2;
		if (!((int32_t)((int32_t)((((int32_t)L_16) > ((int32_t)0))? 1 : 0)&(int32_t)L_17)))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t1328083999* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		uint16_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_22 = Char_IsUpper_m4083577610(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0068;
		}
	}

IL_004e:
	{
		CharU5BU5D_t1328083999* L_23 = V_0;
		int32_t L_24 = V_1;
		CharU5BU5D_t1328083999* L_25 = V_0;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint16_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3500843524_il2cpp_TypeInfo_var);
		CultureInfo_t3500843524 * L_29 = CultureInfo_get_InvariantCulture_m398972276(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		Il2CppChar L_30 = Char_ToLower_m3456131102(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (Il2CppChar)L_30);
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_32 = V_1;
		CharU5BU5D_t1328083999* L_33 = V_0;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))))))
		{
			goto IL_0023;
		}
	}

IL_0068:
	{
		CharU5BU5D_t1328083999* L_34 = V_0;
		String_t* L_35 = String_CreateString_m3818307083(NULL, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsHighSurrogate(System.Char)
extern "C"  bool StringUtils_IsHighSurrogate_m1835143636 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_IsHighSurrogate_m1835143636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsHighSurrogate_m361050852(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsLowSurrogate(System.Char)
extern "C"  bool StringUtils_IsLowSurrogate_m613166546 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_IsLowSurrogate_m613166546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3454481338_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsLowSurrogate_m534472094(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::StartsWith(System.String,System.Char)
extern "C"  bool StringUtils_StartsWith_m2273632519 (RuntimeObject * __this /* static, unused */, String_t* ___source0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1606060069(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = ___source0;
		NullCheck(L_2);
		Il2CppChar L_3 = String_get_Chars_m4230566705(L_2, 0, /*hidden argument*/NULL);
		Il2CppChar L_4 = ___value1;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::EndsWith(System.String,System.Char)
extern "C"  bool StringUtils_EndsWith_m2859705380 (RuntimeObject * __this /* static, unused */, String_t* ___source0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m1606060069(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___source0;
		String_t* L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1606060069(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Il2CppChar L_5 = String_get_Chars_m4230566705(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		Il2CppChar L_6 = ___value1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
	}

IL_001b:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Reflection.MemberTypes Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
extern "C"  int32_t TypeExtensions_MemberType_m2192645245 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___memberInfo0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ContainsGenericParameters(System.Type)
extern "C"  bool TypeExtensions_ContainsGenericParameters_m673199492 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(87 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsInterface(System.Type)
extern "C"  bool TypeExtensions_IsInterface_m4027938127 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsInterface_m3583817465(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
extern "C"  bool TypeExtensions_IsGenericType_m2573949791 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(90 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericTypeDefinition(System.Type)
extern "C"  bool TypeExtensions_IsGenericTypeDefinition_m1841056122 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(88 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Utilities.TypeExtensions::BaseType(System.Type)
extern "C"  Type_t * TypeExtensions_BaseType_m3858355017 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsEnum(System.Type)
extern "C"  bool TypeExtensions_IsEnum_m3232841617 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsEnum_m313908919(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsClass(System.Type)
extern "C"  bool TypeExtensions_IsClass_m1190811054 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsClass_m2968663946(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsSealed(System.Type)
extern "C"  bool TypeExtensions_IsSealed_m1812217042 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsSealed_m2380985836(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsAbstract(System.Type)
extern "C"  bool TypeExtensions_IsAbstract_m3133236508 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsAbstract_m2532060002(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsValueType(System.Type)
extern "C"  bool TypeExtensions_IsValueType_m2298155509 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsValueType_m1733572463(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String,System.Type&)
extern "C"  bool TypeExtensions_AssignableToTypeName_m2010856624 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, Type_t ** ___match2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeExtensions_AssignableToTypeName_m2010856624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t1664964607* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___type0;
		V_0 = L_0;
		goto IL_001f;
	}

IL_0004:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_1);
		String_t* L_3 = ___fullTypeName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_Equals_m2950069882(NULL /*static, unused*/, L_2, L_3, 4, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		Type_t ** L_5 = ___match2;
		Type_t * L_6 = V_0;
		*((RuntimeObject **)(L_5)) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_5), (RuntimeObject *)L_6);
		return (bool)1;
	}

IL_0018:
	{
		Type_t * L_7 = V_0;
		Type_t * L_8 = TypeExtensions_BaseType_m3858355017(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_001f:
	{
		Type_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0004;
		}
	}
	{
		Type_t * L_10 = ___type0;
		NullCheck(L_10);
		TypeU5BU5D_t1664964607* L_11 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(41 /* System.Type[] System.Type::GetInterfaces() */, L_10);
		V_1 = L_11;
		V_2 = 0;
		goto IL_0047;
	}

IL_002d:
	{
		TypeU5BU5D_t1664964607* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Type_t * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		String_t* L_17 = ___fullTypeName1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_Equals_m2950069882(NULL /*static, unused*/, L_16, L_17, 4, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0043;
		}
	}
	{
		Type_t ** L_19 = ___match2;
		Type_t * L_20 = ___type0;
		*((RuntimeObject **)(L_19)) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_19), (RuntimeObject *)L_20);
		return (bool)1;
	}

IL_0043:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_22 = V_2;
		TypeU5BU5D_t1664964607* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_002d;
		}
	}
	{
		Type_t ** L_24 = ___match2;
		*((RuntimeObject **)(L_24)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_24), (RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String)
extern "C"  bool TypeExtensions_AssignableToTypeName_m494314593 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		String_t* L_1 = ___fullTypeName1;
		bool L_2 = TypeExtensions_AssignableToTypeName_m2010856624(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ImplementInterface(System.Type,System.Type)
extern "C"  bool TypeExtensions_ImplementInterface_m257112361 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___interfaceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeExtensions_ImplementInterface_m257112361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type0;
		V_0 = L_0;
		goto IL_0048;
	}

IL_0004:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		TypeU5BU5D_t1664964607* L_2 = VirtFuncInvoker0< TypeU5BU5D_t1664964607* >::Invoke(41 /* System.Type[] System.Type::GetInterfaces() */, L_1);
		NullCheck((RuntimeObject*)(RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_t1595930271_il2cpp_TypeInfo_var, (RuntimeObject*)(RuntimeObject*)L_2);
		V_1 = L_3;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_0012:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			Type_t * L_5 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t3074294349_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			Type_t * L_6 = V_2;
			Type_t * L_7 = ___interfaceType1;
			if ((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_7)))
			{
				goto IL_0029;
			}
		}

IL_001d:
		{
			Type_t * L_8 = V_2;
			if (!L_8)
			{
				goto IL_002d;
			}
		}

IL_0020:
		{
			Type_t * L_9 = V_2;
			Type_t * L_10 = ___interfaceType1;
			bool L_11 = TypeExtensions_ImplementInterface_m257112361(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_002d;
			}
		}

IL_0029:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x4D, FINALLY_0037);
		}

IL_002d:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0012;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_0040;
			}
		}

IL_003a:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_15);
		}

IL_0040:
		{
			IL2CPP_END_FINALLY(55)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0041:
	{
		Type_t * L_16 = V_0;
		Type_t * L_17 = TypeExtensions_BaseType_m3858355017(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_0048:
	{
		Type_t * L_18 = V_0;
		if (L_18)
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}

IL_004d:
	{
		bool L_19 = V_3;
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type Newtonsoft.Json.Utilities.TypeInformation::get_Type()
extern "C"  Type_t * TypeInformation_get_Type_m3658892422 (TypeInformation_t1531269270 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::set_Type(System.Type)
extern "C"  void TypeInformation_set_Type_m3453746963 (TypeInformation_t1531269270 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.TypeInformation::get_TypeCode()
extern "C"  int32_t TypeInformation_get_TypeCode_m271329085 (TypeInformation_t1531269270 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::set_TypeCode(Newtonsoft.Json.Utilities.PrimitiveTypeCode)
extern "C"  void TypeInformation_set_TypeCode_m1991033306 (TypeInformation_t1531269270 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::.ctor()
extern "C"  void TypeInformation__ctor_m1581870969 (TypeInformation_t1531269270 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
extern "C"  void ValidationUtils_ArgumentNotNull_m1113617486 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, String_t* ___parameterName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValidationUtils_ArgumentNotNull_m1113617486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___parameterName1;
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_000a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.AddingNewEventArgs::.ctor()
extern "C"  void AddingNewEventArgs__ctor_m2034202601 (AddingNewEventArgs_t3938289828 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.AddingNewEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void AddingNewEventHandler__ctor_m3695915550 (AddingNewEventHandler_t1821432365 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.ComponentModel.AddingNewEventHandler::Invoke(System.Object,System.ComponentModel.AddingNewEventArgs)
extern "C"  void AddingNewEventHandler_Invoke_m2006288771 (AddingNewEventHandler_t1821432365 * __this, RuntimeObject * ___sender0, AddingNewEventArgs_t3938289828 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AddingNewEventHandler_Invoke_m2006288771((AddingNewEventHandler_t1821432365 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, AddingNewEventArgs_t3938289828 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, AddingNewEventArgs_t3938289828 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, RuntimeObject *, AddingNewEventArgs_t3938289828 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, AddingNewEventArgs_t3938289828 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
		}
	}
}
// System.IAsyncResult System.ComponentModel.AddingNewEventHandler::BeginInvoke(System.Object,System.ComponentModel.AddingNewEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* AddingNewEventHandler_BeginInvoke_m2989057618 (AddingNewEventHandler_t1821432365 * __this, RuntimeObject * ___sender0, AddingNewEventArgs_t3938289828 * ___e1, AsyncCallback_t163412349 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.ComponentModel.AddingNewEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void AddingNewEventHandler_EndInvoke_m3891407536 (AddingNewEventHandler_t1821432365 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.NotifyCollectionChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void NotifyCollectionChangedEventHandler__ctor_m70569412 (NotifyCollectionChangedEventHandler_t1130012643 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.ComponentModel.NotifyCollectionChangedEventHandler::Invoke(System.Object,System.ComponentModel.NotifyCollectionChangedEventArgs)
extern "C"  void NotifyCollectionChangedEventHandler_Invoke_m1188434563 (NotifyCollectionChangedEventHandler_t1130012643 * __this, RuntimeObject * ___sender0, NotifyCollectionChangedEventArgs_t2376617142 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		NotifyCollectionChangedEventHandler_Invoke_m1188434563((NotifyCollectionChangedEventHandler_t1130012643 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, NotifyCollectionChangedEventArgs_t2376617142 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, NotifyCollectionChangedEventArgs_t2376617142 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, RuntimeObject *, NotifyCollectionChangedEventArgs_t2376617142 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, NotifyCollectionChangedEventArgs_t2376617142 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
		}
	}
}
// System.IAsyncResult System.ComponentModel.NotifyCollectionChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.NotifyCollectionChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* NotifyCollectionChangedEventHandler_BeginInvoke_m2023999430 (NotifyCollectionChangedEventHandler_t1130012643 * __this, RuntimeObject * ___sender0, NotifyCollectionChangedEventArgs_t2376617142 * ___e1, AsyncCallback_t163412349 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.ComponentModel.NotifyCollectionChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void NotifyCollectionChangedEventHandler_EndInvoke_m2453396102 (NotifyCollectionChangedEventHandler_t1130012643 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.PropertyChangingEventArgs::.ctor(System.String)
extern "C"  void PropertyChangingEventArgs__ctor_m4035205386 (PropertyChangingEventArgs_t2525320927 * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyChangingEventArgs__ctor_m4035205386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3289624707_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3696060910(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___propertyName0;
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.ComponentModel.PropertyChangingEventArgs::set_PropertyName(System.String) */, __this, L_0);
		return;
	}
}
// System.Void System.ComponentModel.PropertyChangingEventArgs::set_PropertyName(System.String)
extern "C"  void PropertyChangingEventArgs_set_PropertyName_m3092644735 (PropertyChangingEventArgs_t2525320927 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPropertyNameU3Ek__BackingField_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.PropertyChangingEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void PropertyChangingEventHandler__ctor_m3141153683 (PropertyChangingEventHandler_t626922954 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.ComponentModel.PropertyChangingEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangingEventArgs)
extern "C"  void PropertyChangingEventHandler_Invoke_m3923434999 (PropertyChangingEventHandler_t626922954 * __this, RuntimeObject * ___sender0, PropertyChangingEventArgs_t2525320927 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		PropertyChangingEventHandler_Invoke_m3923434999((PropertyChangingEventHandler_t626922954 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, PropertyChangingEventArgs_t2525320927 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, PropertyChangingEventArgs_t2525320927 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			typedef void (*FunctionPointerType) (void*, RuntimeObject *, PropertyChangingEventArgs_t2525320927 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
		}
		else
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, PropertyChangingEventArgs_t2525320927 *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
		}
	}
}
// System.IAsyncResult System.ComponentModel.PropertyChangingEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangingEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* PropertyChangingEventHandler_BeginInvoke_m640687180 (PropertyChangingEventHandler_t626922954 * __this, RuntimeObject * ___sender0, PropertyChangingEventArgs_t2525320927 * ___e1, AsyncCallback_t163412349 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.ComponentModel.PropertyChangingEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void PropertyChangingEventHandler_EndInvoke_m4280072909 (PropertyChangingEventHandler_t626922954 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
