#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// System.Exception
struct Exception_t;
// System.IO.FileNotFoundException
struct FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NativeGalleryNamespace.NGMediaReceiveCallbackiOS
struct NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F;
// NativeGalleryNamespace.NGMediaSaveCallbackiOS
struct NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// NativeGallery/MediaPickCallback
struct MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617;
// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C;
// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0365E1814018F9007D2AF7114C462B24D8928C59;
IL2CPP_EXTERN_C String_t* _stringLiteral0A79B0229EB4F27A4505CE75160E9133E944F111;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D;
IL2CPP_EXTERN_C String_t* _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2;
IL2CPP_EXTERN_C String_t* _stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7;
IL2CPP_EXTERN_C String_t* _stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF;
IL2CPP_EXTERN_C String_t* _stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7;
IL2CPP_EXTERN_C String_t* _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D;
IL2CPP_EXTERN_C String_t* _stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91;
IL2CPP_EXTERN_C String_t* _stringLiteral7E90946BC7628636C60D094F905E96CD1360A930;
IL2CPP_EXTERN_C String_t* _stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF;
IL2CPP_EXTERN_C String_t* _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
IL2CPP_EXTERN_C String_t* _stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08;
IL2CPP_EXTERN_C String_t* _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF;
IL2CPP_EXTERN_C String_t* _stringLiteralD4E22C84D059FC69AA54802023A8B68B6F4F4C7E;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_m151B90B03B03504D4B02092D30A27A84C5AF6E27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_mD5487268B0D3BA7C1B82E55D1F900B46CFA60AD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetImageProperties_mA64E8E11D9E791545D15A523024C0C2376547304_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_GetVideoProperties_m091E45231186EB0CB51F80494D5122C29F128973_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveImageToGallery_mD6D45685707A63EF228664AE0C5D02FA7C595D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t411BACD4FC2847752D77E1C49F873858F0F59B15 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NativeGallery
struct  NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF  : public RuntimeObject
{
public:

public:
};

struct NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields
{
public:
	// System.String NativeGallery::m_temporaryImagePath
	String_t* ___m_temporaryImagePath_0;
	// System.String NativeGallery::m_selectedMediaPath
	String_t* ___m_selectedMediaPath_1;

public:
	inline static int32_t get_offset_of_m_temporaryImagePath_0() { return static_cast<int32_t>(offsetof(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields, ___m_temporaryImagePath_0)); }
	inline String_t* get_m_temporaryImagePath_0() const { return ___m_temporaryImagePath_0; }
	inline String_t** get_address_of_m_temporaryImagePath_0() { return &___m_temporaryImagePath_0; }
	inline void set_m_temporaryImagePath_0(String_t* value)
	{
		___m_temporaryImagePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_temporaryImagePath_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_selectedMediaPath_1() { return static_cast<int32_t>(offsetof(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields, ___m_selectedMediaPath_1)); }
	inline String_t* get_m_selectedMediaPath_1() const { return ___m_selectedMediaPath_1; }
	inline String_t** get_address_of_m_selectedMediaPath_1() { return &___m_selectedMediaPath_1; }
	inline void set_m_selectedMediaPath_1(String_t* value)
	{
		___m_selectedMediaPath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_selectedMediaPath_1), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


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


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// NativeGallery/VideoProperties
struct  VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31 
{
public:
	// System.Int32 NativeGallery/VideoProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/VideoProperties::height
	int32_t ___height_1;
	// System.Int64 NativeGallery/VideoProperties::duration
	int64_t ___duration_2;
	// System.Single NativeGallery/VideoProperties::rotation
	float ___rotation_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31, ___duration_2)); }
	inline int64_t get_duration_2() const { return ___duration_2; }
	inline int64_t* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(int64_t value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31, ___rotation_3)); }
	inline float get_rotation_3() const { return ___rotation_3; }
	inline float* get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(float value)
	{
		___rotation_3 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAttributes
struct  FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.StringComparison
struct  StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/ImageOrientation
struct  ImageOrientation_t6472ECEC7C1FE106D8F35C475FE0F855AC65D9EB 
{
public:
	// System.Int32 NativeGallery/ImageOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageOrientation_t6472ECEC7C1FE106D8F35C475FE0F855AC65D9EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/MediaType
struct  MediaType_t491ED19A465C78FA6115DE4738481316110FA0EE 
{
public:
	// System.Int32 NativeGallery/MediaType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaType_t491ED19A465C78FA6115DE4738481316110FA0EE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/Permission
struct  Permission_t45AE01CA9353CE8BBBD7E64489942D119598714B 
{
public:
	// System.Int32 NativeGallery/Permission::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Permission_t45AE01CA9353CE8BBBD7E64489942D119598714B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NativeGallery/PermissionType
struct  PermissionType_t96A1BC6A1D8C6C060121660FDFD10B08A2A7467D 
{
public:
	// System.Int32 NativeGallery/PermissionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PermissionType_t96A1BC6A1D8C6C060121660FDFD10B08A2A7467D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.MonoIOStat
struct  MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.UnityException
struct  UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// NativeGallery/ImageProperties
struct  ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2 
{
public:
	// System.Int32 NativeGallery/ImageProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/ImageProperties::height
	int32_t ___height_1;
	// System.String NativeGallery/ImageProperties::mimeType
	String_t* ___mimeType_2;
	// NativeGallery/ImageOrientation NativeGallery/ImageProperties::orientation
	int32_t ___orientation_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_mimeType_2() { return static_cast<int32_t>(offsetof(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2, ___mimeType_2)); }
	inline String_t* get_mimeType_2() const { return ___mimeType_2; }
	inline String_t** get_address_of_mimeType_2() { return &___mimeType_2; }
	inline void set_mimeType_2(String_t* value)
	{
		___mimeType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mimeType_2), (void*)value);
	}

	inline static int32_t get_offset_of_orientation_3() { return static_cast<int32_t>(offsetof(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2, ___orientation_3)); }
	inline int32_t get_orientation_3() const { return ___orientation_3; }
	inline int32_t* get_address_of_orientation_3() { return &___orientation_3; }
	inline void set_orientation_3(int32_t value)
	{
		___orientation_3 = value;
	}
};

// Native definition for P/Invoke marshalling of NativeGallery/ImageProperties
struct ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	char* ___mimeType_2;
	int32_t ___orientation_3;
};
// Native definition for COM marshalling of NativeGallery/ImageProperties
struct ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	Il2CppChar* ___mimeType_2;
	int32_t ___orientation_3;
};

// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// UnityEngine.RenderTexture
struct  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// NativeGallery/MediaPickCallback
struct  MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617  : public MulticastDelegate_t
{
public:

public:
};


// NativeGallery/MediaPickMultipleCallback
struct  MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C  : public MulticastDelegate_t
{
public:

public:
};


// NativeGallery/MediaSaveCallback
struct  MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// System.IO.FileNotFoundException
struct  FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8  : public IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA
{
public:
	// System.String System.IO.FileNotFoundException::_fileName
	String_t* ____fileName_18;
	// System.String System.IO.FileNotFoundException::_fusionLog
	String_t* ____fusionLog_19;

public:
	inline static int32_t get_offset_of__fileName_18() { return static_cast<int32_t>(offsetof(FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8, ____fileName_18)); }
	inline String_t* get__fileName_18() const { return ____fileName_18; }
	inline String_t** get_address_of__fileName_18() { return &____fileName_18; }
	inline void set__fileName_18(String_t* value)
	{
		____fileName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_18), (void*)value);
	}

	inline static int32_t get_offset_of__fusionLog_19() { return static_cast<int32_t>(offsetof(FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8, ____fusionLog_19)); }
	inline String_t* get__fusionLog_19() const { return ____fusionLog_19; }
	inline String_t** get_address_of__fusionLog_19() { return &____fusionLog_19; }
	inline void set__fusionLog_19(String_t* value)
	{
		____fusionLog_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fusionLog_19), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// NativeGalleryNamespace.NGMediaReceiveCallbackiOS
struct  NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// NativeGallery/MediaPickCallback NativeGalleryNamespace.NGMediaReceiveCallbackiOS::callback
	MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback_5;
	// NativeGallery/MediaPickMultipleCallback NativeGalleryNamespace.NGMediaReceiveCallbackiOS::callbackMultiple
	MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callbackMultiple_6;
	// System.Single NativeGalleryNamespace.NGMediaReceiveCallbackiOS::nextBusyCheckTime
	float ___nextBusyCheckTime_7;

public:
	inline static int32_t get_offset_of_callback_5() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F, ___callback_5)); }
	inline MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * get_callback_5() const { return ___callback_5; }
	inline MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 ** get_address_of_callback_5() { return &___callback_5; }
	inline void set_callback_5(MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * value)
	{
		___callback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_5), (void*)value);
	}

	inline static int32_t get_offset_of_callbackMultiple_6() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F, ___callbackMultiple_6)); }
	inline MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * get_callbackMultiple_6() const { return ___callbackMultiple_6; }
	inline MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C ** get_address_of_callbackMultiple_6() { return &___callbackMultiple_6; }
	inline void set_callbackMultiple_6(MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * value)
	{
		___callbackMultiple_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMultiple_6), (void*)value);
	}

	inline static int32_t get_offset_of_nextBusyCheckTime_7() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F, ___nextBusyCheckTime_7)); }
	inline float get_nextBusyCheckTime_7() const { return ___nextBusyCheckTime_7; }
	inline float* get_address_of_nextBusyCheckTime_7() { return &___nextBusyCheckTime_7; }
	inline void set_nextBusyCheckTime_7(float value)
	{
		___nextBusyCheckTime_7 = value;
	}
};

struct NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields
{
public:
	// NativeGalleryNamespace.NGMediaReceiveCallbackiOS NativeGalleryNamespace.NGMediaReceiveCallbackiOS::instance
	NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * ___instance_4;
	// System.Boolean NativeGalleryNamespace.NGMediaReceiveCallbackiOS::<IsBusy>k__BackingField
	bool ___U3CIsBusyU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields, ___instance_4)); }
	inline NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * get_instance_4() const { return ___instance_4; }
	inline NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsBusyU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields, ___U3CIsBusyU3Ek__BackingField_8)); }
	inline bool get_U3CIsBusyU3Ek__BackingField_8() const { return ___U3CIsBusyU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsBusyU3Ek__BackingField_8() { return &___U3CIsBusyU3Ek__BackingField_8; }
	inline void set_U3CIsBusyU3Ek__BackingField_8(bool value)
	{
		___U3CIsBusyU3Ek__BackingField_8 = value;
	}
};


// NativeGalleryNamespace.NGMediaSaveCallbackiOS
struct  NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// NativeGallery/MediaSaveCallback NativeGalleryNamespace.NGMediaSaveCallbackiOS::callback
	MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback_5;

public:
	inline static int32_t get_offset_of_callback_5() { return static_cast<int32_t>(offsetof(NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D, ___callback_5)); }
	inline MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * get_callback_5() const { return ___callback_5; }
	inline MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E ** get_address_of_callback_5() { return &___callback_5; }
	inline void set_callback_5(MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * value)
	{
		___callback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_5), (void*)value);
	}
};

struct NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_StaticFields
{
public:
	// NativeGalleryNamespace.NGMediaSaveCallbackiOS NativeGalleryNamespace.NGMediaSaveCallbackiOS::instance
	NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_StaticFields, ___instance_4)); }
	inline NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * get_instance_4() const { return ___instance_4; }
	inline NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Boolean NativeGalleryNamespace.NGMediaReceiveCallbackiOS::get_IsBusy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NGMediaReceiveCallbackiOS_get_IsBusy_m091AFD5DEAB7725B736EEE337FDB7E4BE9C90569_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGMediaReceiveCallbackiOS>()
inline NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_m151B90B03B03504D4B02092D30A27A84C5AF6E27 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B (const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::set_IsBusy(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_set_IsBusy_m1E67EEDE1C95E28A1E38E32EE6A4C60EC8285599_inline (bool ___value0, const RuntimeMethod* method);
// System.Int32 NativeGalleryNamespace.NGMediaReceiveCallbackiOS::_NativeGallery_IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGMediaReceiveCallbackiOS__NativeGallery_IsMediaPickerBusy_mC709E285C1AAD4787061619969C05C8515D02CF2 (const RuntimeMethod* method);
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m38FFA5C31A6D37294017FD9DCC18E85CBC605C57 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_mB18BC813FE91A071CEC50F59C5DEEA2C878D2B27 (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackiOS::SplitPaths(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* NGMediaReceiveCallbackiOS_SplitPaths_m99C28286E40405F2CE4208A3D912EB0DFECEB081 (NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * __this, String_t* ___paths0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<NativeGalleryNamespace.NGMediaSaveCallbackiOS>()
inline NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_mD5487268B0D3BA7C1B82E55D1F900B46CFA60AD0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_m37F11710C6E9EC74CEE2A568E63456183301819D (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.Int32 NativeGallery::_NativeGallery_CheckPermission(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CheckPermission_mC136AF77BD52BB675B8C8D323D9687243F3A2898 (int32_t ___readPermission0, int32_t ___permissionFreeMode1, const RuntimeMethod* method);
// System.Int32 NativeGallery::_NativeGallery_RequestPermission(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_RequestPermission_mC334E442AA1A35B24D0EBFDC74AD3051B0A0E995 (int32_t ___readPermission0, int32_t ___permissionFreeMode1, const RuntimeMethod* method);
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m7DD23A63CA69F3FF6EA197C81364670C9BD68E52 (const RuntimeMethod* method);
// System.Void NativeGallery::_NativeGallery_ShowLimitedLibraryPicker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ShowLimitedLibraryPicker_mEE99180F351E75CFC9C89AA07B007318AAF15D86 (const RuntimeMethod* method);
// System.Int32 NativeGallery::_NativeGallery_CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanOpenSettings_mDB22B99B36E38C5294BC4A8B9CEE2067EEAEEFA3 (const RuntimeMethod* method);
// System.Void NativeGallery::_NativeGallery_OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_OpenSettings_m78E54E48E6F4D9B98463794A0C823054DA90232C (const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback4, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback4, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytes_m12087DF107267998266042A9FCDD8173502AF78D (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Int32 NativeGallery::_NativeGallery_CanPickMultipleMedia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanPickMultipleMedia_mB8AF46ECF18017683C89A0FA4C8FB6865B367EED (const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method);
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD (String_t* ___path0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F (String_t* __this, const RuntimeMethod* method);
// System.Int32 NativeGallery::_NativeGallery_GetMediaTypeFromExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_GetMediaTypeFromExtension_m766F6F4A3C6D08CAE2DE82C8538B8EC750CCF966 (String_t* ___extension0, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_m73544312CF7A43D68FC542E4867ED2145FD4366D (int32_t ___permissionType0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m21B84D36CB93E48BEE308648FD808AA8D873E3C9 (String_t* ___filename0, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m8AE158027AD276257E639FC977472E5C7DDF60C2 (String_t* ___path0, String_t* ___album1, int32_t ___mediaType2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5 (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m1CB9B28EA63AA6D9E36B50AABABE81CA8C22C794 (String_t* ___sourceFileName0, String_t* ___destFileName1, bool ___overwrite2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A (String_t* ___path0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::Initialize(NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_Initialize_mBCAE96FABD3852843F090CA1578CA1C938B892D7 (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback0, const RuntimeMethod* method);
// System.Void NativeGallery::_NativeGallery_ImageWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ImageWriteToAlbum_mBB2503FF03B135394885253C26A2640206B4F8D0 (String_t* ___path0, String_t* ___album1, int32_t ___permissionFreeMode2, const RuntimeMethod* method);
// System.Void NativeGallery::_NativeGallery_VideoWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_VideoWriteToAlbum_mC60E9996C10377FECC5F9AD5CFFFFD499B6BE419 (String_t* ___path0, String_t* ___album1, int32_t ___permissionFreeMode2, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2 (String_t* ___path0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::Initialize(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_Initialize_m82FAC5C23274D289077DB3235AE0B4EAE620D2FE (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callbackMultiple1, const RuntimeMethod* method);
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_m300C4C908DED803C7A82AA3E5F1B53779D410F67 (const RuntimeMethod* method);
// System.Void NativeGallery::_NativeGallery_PickMedia(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_PickMedia_mBA9AE58BC3EEA7E6218B8C3F1295E933829CB0C2 (String_t* ___mediaSavePath0, int32_t ___mediaType1, int32_t ___permissionFreeMode2, int32_t ___selectionLimit3, const RuntimeMethod* method);
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m85ECEBA1BA38DFD71D6E50E8D87708ABBF69D556 (const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, int32_t ___quality1, const RuntimeMethod* method);
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytesFromCopy_m3839EE6CDE867B40A71E898FEF4E96ED9784DE0D (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7 (const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m83460E7B5610A6D85DD3CCA71CC5D4523390D660 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40 (const RuntimeMethod* method);
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m30EAF69E13E76FE18D8BDBAA84F30250540D45E2 (const RuntimeMethod* method);
// System.String NativeGallery::_NativeGallery_LoadImageAtPath(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_LoadImageAtPath_mCFAD7DA699B05F1F727CDECF57C066B3398B3A91 (String_t* ___path0, String_t* ___temporaryFilePath1, int32_t ___maxSize2, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method);
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829 (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m1E5C9BF6206ED40B23CDB28341B8A64E05C43683 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___tex0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, bool ___markNonReadable2, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77 (String_t* ___path0, const RuntimeMethod* method);
// System.String NativeGallery::_NativeGallery_GetVideoThumbnail(System.String,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoThumbnail_m14924E8B2FD80B1F5CA2386E9E0B25884F003B6C (String_t* ___path0, String_t* ___thumbnailSavePath1, int32_t ___maxSize2, double ___captureTimeInSeconds3, const RuntimeMethod* method);
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method);
// System.String NativeGallery::_NativeGallery_GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetImageProperties_mE5100FC4812C007ACC249BD47A72BB46960188F7 (String_t* ___path0, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m63B2BA893E12255BBD0D8364D8DFA70F4BE0B031 (ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2 * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method);
// System.String NativeGallery::_NativeGallery_GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoProperties_m9971381F9ADBE96B2FA29319DA8306C1A439D53D (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373 (String_t* ___s0, float* ___result1, const RuntimeMethod* method);
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m99DEF6303739A1066E891A8C78E0623AEEE25616 (VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31 * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_IsMediaPickerBusy();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_CheckPermission(int32_t, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_RequestPermission(int32_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_ShowLimitedLibraryPicker();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_CanOpenSettings();
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_OpenSettings();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_CanPickMultipleMedia();
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _NativeGallery_GetMediaTypeFromExtension(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_ImageWriteToAlbum(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_VideoWriteToAlbum(char*, char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL _NativeGallery_PickMedia(char*, int32_t, int32_t, int32_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_GetImageProperties(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_GetVideoProperties(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_GetVideoThumbnail(char*, char*, int32_t, double);
IL2CPP_EXTERN_C char* DEFAULT_CALL _NativeGallery_LoadImageAtPath(char*, char*, int32_t);
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
// System.Boolean NativeGalleryNamespace.NGMediaReceiveCallbackiOS::get_IsBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NGMediaReceiveCallbackiOS_get_IsBusy_m091AFD5DEAB7725B736EEE337FDB7E4BE9C90569 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ((NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var))->get_U3CIsBusyU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::set_IsBusy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_set_IsBusy_m1E67EEDE1C95E28A1E38E32EE6A4C60EC8285599 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ___value0;
		((NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var))->set_U3CIsBusyU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 NativeGalleryNamespace.NGMediaReceiveCallbackiOS::_NativeGallery_IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGMediaReceiveCallbackiOS__NativeGallery_IsMediaPickerBusy_mC709E285C1AAD4787061619969C05C8515D02CF2 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_IsMediaPickerBusy)();

	return returnValue;
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::Initialize(NativeGallery/MediaPickCallback,NativeGallery/MediaPickMultipleCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_Initialize_m82FAC5C23274D289077DB3235AE0B4EAE620D2FE (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callbackMultiple1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_m151B90B03B03504D4B02092D30A27A84C5AF6E27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E90946BC7628636C60D094F905E96CD1360A930);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( IsBusy )
		bool L_0;
		L_0 = NGMediaReceiveCallbackiOS_get_IsBusy_m091AFD5DEAB7725B736EEE337FDB7E4BE9C90569_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// if( instance == null )
		NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * L_1 = ((NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// instance = new GameObject( "NGMediaReceiveCallbackiOS" ).AddComponent<NGMediaReceiveCallbackiOS>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_3, _stringLiteral7E90946BC7628636C60D094F905E96CD1360A930, /*hidden argument*/NULL);
		NullCheck(L_3);
		NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * L_4;
		L_4 = GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_m151B90B03B03504D4B02092D30A27A84C5AF6E27(L_3, /*hidden argument*/GameObject_AddComponent_TisNGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_m151B90B03B03504D4B02092D30A27A84C5AF6E27_RuntimeMethod_var);
		((NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var))->set_instance_4(L_4);
		// DontDestroyOnLoad( instance.gameObject );
		NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * L_5 = ((NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// instance.callback = callback;
		NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * L_7 = ((NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var))->get_instance_4();
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_8 = ___callback0;
		NullCheck(L_7);
		L_7->set_callback_5(L_8);
		// instance.callbackMultiple = callbackMultiple;
		NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * L_9 = ((NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var))->get_instance_4();
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_10 = ___callbackMultiple1;
		NullCheck(L_9);
		L_9->set_callbackMultiple_6(L_10);
		// instance.nextBusyCheckTime = Time.realtimeSinceStartup + 1f;
		NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * L_11 = ((NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var))->get_instance_4();
		float L_12;
		L_12 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_nextBusyCheckTime_7(((float)il2cpp_codegen_add((float)L_12, (float)(1.0f))));
		// IsBusy = true;
		NGMediaReceiveCallbackiOS_set_IsBusy_m1E67EEDE1C95E28A1E38E32EE6A4C60EC8285599_inline((bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_Update_m1D6A379DA28441219C7E43EC02C8B147CB165C80 (NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * __this, const RuntimeMethod* method)
{
	MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * V_0 = NULL;
	MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * V_1 = NULL;
	{
		// if( IsBusy )
		bool L_0;
		L_0 = NGMediaReceiveCallbackiOS_get_IsBusy_m091AFD5DEAB7725B736EEE337FDB7E4BE9C90569_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		// if( Time.realtimeSinceStartup >= nextBusyCheckTime )
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		float L_2 = __this->get_nextBusyCheckTime_7();
		if ((!(((float)L_1) >= ((float)L_2))))
		{
			goto IL_0062;
		}
	}
	{
		// nextBusyCheckTime = Time.realtimeSinceStartup + 1f;
		float L_3;
		L_3 = Time_get_realtimeSinceStartup_m5228CC1C1E57213D4148E965499072EA70D8C02B(/*hidden argument*/NULL);
		__this->set_nextBusyCheckTime_7(((float)il2cpp_codegen_add((float)L_3, (float)(1.0f))));
		// if( _NativeGallery_IsMediaPickerBusy() == 0 )
		int32_t L_4;
		L_4 = NGMediaReceiveCallbackiOS__NativeGallery_IsMediaPickerBusy_mC709E285C1AAD4787061619969C05C8515D02CF2(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		// IsBusy = false;
		NGMediaReceiveCallbackiOS_set_IsBusy_m1E67EEDE1C95E28A1E38E32EE6A4C60EC8285599_inline((bool)0, /*hidden argument*/NULL);
		// NativeGallery.MediaPickCallback _callback = callback;
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_5 = __this->get_callback_5();
		V_0 = L_5;
		// callback = null;
		__this->set_callback_5((MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 *)NULL);
		// NativeGallery.MediaPickMultipleCallback _callbackMultiple = callbackMultiple;
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_6 = __this->get_callbackMultiple_6();
		V_1 = L_6;
		// callbackMultiple = null;
		__this->set_callbackMultiple_6((MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C *)NULL);
		// if( _callback != null )
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// _callback( null );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_8 = V_0;
		NullCheck(L_8);
		MediaPickCallback_Invoke_m38FFA5C31A6D37294017FD9DCC18E85CBC605C57(L_8, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// if( _callbackMultiple != null )
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_9 = V_1;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// _callbackMultiple( null );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_10 = V_1;
		NullCheck(L_10);
		MediaPickMultipleCallback_Invoke_mB18BC813FE91A071CEC50F59C5DEEA2C878D2B27(L_10, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::OnMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_OnMediaReceived_m9AADBF55D5593F6A5D805533DCF4E12B549D8664 (NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * __this, String_t* ___path0, const RuntimeMethod* method)
{
	MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * V_0 = NULL;
	{
		// IsBusy = false;
		NGMediaReceiveCallbackiOS_set_IsBusy_m1E67EEDE1C95E28A1E38E32EE6A4C60EC8285599_inline((bool)0, /*hidden argument*/NULL);
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// path = null;
		___path0 = (String_t*)NULL;
	}

IL_0011:
	{
		// NativeGallery.MediaPickCallback _callback = callback;
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_2 = __this->get_callback_5();
		V_0 = L_2;
		// callback = null;
		__this->set_callback_5((MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 *)NULL);
		// if( _callback != null )
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// _callback( path );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_4 = V_0;
		String_t* L_5 = ___path0;
		NullCheck(L_4);
		MediaPickCallback_Invoke_m38FFA5C31A6D37294017FD9DCC18E85CBC605C57(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::OnMultipleMediaReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_OnMultipleMediaReceived_m23B5E55F1352335FB1150617EAD8880A758AA271 (NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * __this, String_t* ___paths0, const RuntimeMethod* method)
{
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * V_1 = NULL;
	{
		// IsBusy = false;
		NGMediaReceiveCallbackiOS_set_IsBusy_m1E67EEDE1C95E28A1E38E32EE6A4C60EC8285599_inline((bool)0, /*hidden argument*/NULL);
		// string[] _paths = SplitPaths( paths );
		String_t* L_0 = ___paths0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1;
		L_1 = NGMediaReceiveCallbackiOS_SplitPaths_m99C28286E40405F2CE4208A3D912EB0DFECEB081(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if( _paths != null && _paths.Length == 0 )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = V_0;
		NullCheck(L_3);
		if ((((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0017;
		}
	}
	{
		// _paths = null;
		V_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL;
	}

IL_0017:
	{
		// NativeGallery.MediaPickMultipleCallback _callbackMultiple = callbackMultiple;
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_4 = __this->get_callbackMultiple_6();
		V_1 = L_4;
		// callbackMultiple = null;
		__this->set_callbackMultiple_6((MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C *)NULL);
		// if( _callbackMultiple != null )
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// _callbackMultiple( _paths );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_6 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = V_0;
		NullCheck(L_6);
		MediaPickMultipleCallback_Invoke_mB18BC813FE91A071CEC50F59C5DEEA2C878D2B27(L_6, L_7, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackiOS::SplitPaths(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* NGMediaReceiveCallbackiOS_SplitPaths_m99C28286E40405F2CE4208A3D912EB0DFECEB081 (NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * __this, String_t* ___paths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// string[] result = null;
		V_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL;
		// if( !string.IsNullOrEmpty( paths ) )
		String_t* L_0 = ___paths0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0087;
		}
	}
	{
		// string[] pathsSplit = paths.Split( '>' );
		String_t* L_2 = ___paths0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5;
		L_5 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// int validPathCount = 0;
		V_2 = 0;
		// for( int i = 0; i < pathsSplit.Length; i++ )
		V_3 = 0;
		goto IL_0034;
	}

IL_0022:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_1;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10;
		L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0030;
		}
	}
	{
		// validPathCount++;
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0030:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0034:
	{
		// for( int i = 0; i < pathsSplit.Length; i++ )
		int32_t L_13 = V_3;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		// if( validPathCount == 0 )
		int32_t L_15 = V_2;
		if (L_15)
		{
			goto IL_0046;
		}
	}
	{
		// pathsSplit = new string[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)0);
		V_1 = L_16;
		goto IL_0085;
	}

IL_0046:
	{
		// else if( validPathCount != pathsSplit.Length )
		int32_t L_17 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0085;
		}
	}
	{
		// string[] validPaths = new string[validPathCount];
		int32_t L_19 = V_2;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_4 = L_20;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_5 = 0;
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		V_6 = 0;
		goto IL_007b;
	}

IL_005c:
	{
		// if( !string.IsNullOrEmpty( pathsSplit[i] ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = V_1;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		bool L_25;
		L_25 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0075;
		}
	}
	{
		// validPaths[j++] = pathsSplit[i];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = V_4;
		int32_t L_27 = V_6;
		int32_t L_28 = L_27;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_32);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (String_t*)L_32);
	}

IL_0075:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_007b:
	{
		// for( int i = 0, j = 0; i < pathsSplit.Length; i++ )
		int32_t L_34 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = V_1;
		NullCheck(L_35);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		// pathsSplit = validPaths;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = V_4;
		V_1 = L_36;
	}

IL_0085:
	{
		// result = pathsSplit;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = V_1;
		V_0 = L_37;
	}

IL_0087:
	{
		// return result;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = V_0;
		return L_38;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS__ctor_m235215DC6019DD3CD0EBA0F08291AF7408C87FDA (NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::Initialize(NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_Initialize_mBCAE96FABD3852843F090CA1578CA1C938B892D7 (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_mD5487268B0D3BA7C1B82E55D1F900B46CFA60AD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A79B0229EB4F27A4505CE75160E9133E944F111);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( instance == null )
		NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * L_0 = ((NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// instance = new GameObject( "NGMediaSaveCallbackiOS" ).AddComponent<NGMediaSaveCallbackiOS>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_2, _stringLiteral0A79B0229EB4F27A4505CE75160E9133E944F111, /*hidden argument*/NULL);
		NullCheck(L_2);
		NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * L_3;
		L_3 = GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_mD5487268B0D3BA7C1B82E55D1F900B46CFA60AD0(L_2, /*hidden argument*/GameObject_AddComponent_TisNGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_mD5487268B0D3BA7C1B82E55D1F900B46CFA60AD0_RuntimeMethod_var);
		((NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_il2cpp_TypeInfo_var))->set_instance_4(L_3);
		// DontDestroyOnLoad( instance.gameObject );
		NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * L_4 = ((NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_5, /*hidden argument*/NULL);
		// }
		goto IL_004f;
	}

IL_0032:
	{
		// else if( instance.callback != null )
		NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * L_6 = ((NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_6);
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_7 = L_6->get_callback_5();
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// instance.callback( false, null );
		NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * L_8 = ((NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_8);
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_9 = L_8->get_callback_5();
		NullCheck(L_9);
		MediaSaveCallback_Invoke_m37F11710C6E9EC74CEE2A568E63456183301819D(L_9, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// instance.callback = callback;
		NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * L_10 = ((NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D_il2cpp_TypeInfo_var))->get_instance_4();
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_11 = ___callback0;
		NullCheck(L_10);
		L_10->set_callback_5(L_11);
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::OnMediaSaveCompleted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_OnMediaSaveCompleted_mB4DBD12F81085D601C43840375EA11E65199D9BD (NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * __this, String_t* ___message0, const RuntimeMethod* method)
{
	MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * V_0 = NULL;
	{
		// NativeGallery.MediaSaveCallback _callback = callback;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_0 = __this->get_callback_5();
		V_0 = L_0;
		// callback = null;
		__this->set_callback_5((MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E *)NULL);
		// if( _callback != null )
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _callback( true, null );
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_2 = V_0;
		NullCheck(L_2);
		MediaSaveCallback_Invoke_m37F11710C6E9EC74CEE2A568E63456183301819D(L_2, (bool)1, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::OnMediaSaveFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS_OnMediaSaveFailed_m15C90353498DF648CAADE5B54EB82978670C12BD (NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * __this, String_t* ___error0, const RuntimeMethod* method)
{
	MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * V_0 = NULL;
	{
		// NativeGallery.MediaSaveCallback _callback = callback;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_0 = __this->get_callback_5();
		V_0 = L_0;
		// callback = null;
		__this->set_callback_5((MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E *)NULL);
		// if( _callback != null )
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _callback( false, null );
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_2 = V_0;
		NullCheck(L_2);
		MediaSaveCallback_Invoke_m37F11710C6E9EC74CEE2A568E63456183301819D(L_2, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaSaveCallbackiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGMediaSaveCallbackiOS__ctor_mFA83C851433CD0A41A9C11B02D0B05A46E4AE14F (NGMediaSaveCallbackiOS_t9E735CBB82171C633501BEB68AD4092742C8886D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 NativeGallery::_NativeGallery_CheckPermission(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CheckPermission_mC136AF77BD52BB675B8C8D323D9687243F3A2898 (int32_t ___readPermission0, int32_t ___permissionFreeMode1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_CheckPermission)(___readPermission0, ___permissionFreeMode1);

	return returnValue;
}
// System.Int32 NativeGallery::_NativeGallery_RequestPermission(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_RequestPermission_mC334E442AA1A35B24D0EBFDC74AD3051B0A0E995 (int32_t ___readPermission0, int32_t ___permissionFreeMode1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_RequestPermission)(___readPermission0, ___permissionFreeMode1);

	return returnValue;
}
// System.Void NativeGallery::_NativeGallery_ShowLimitedLibraryPicker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ShowLimitedLibraryPicker_mEE99180F351E75CFC9C89AA07B007318AAF15D86 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_ShowLimitedLibraryPicker)();

}
// System.Int32 NativeGallery::_NativeGallery_CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanOpenSettings_mDB22B99B36E38C5294BC4A8B9CEE2067EEAEEFA3 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_CanOpenSettings)();

	return returnValue;
}
// System.Void NativeGallery::_NativeGallery_OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_OpenSettings_m78E54E48E6F4D9B98463794A0C823054DA90232C (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_OpenSettings)();

}
// System.Int32 NativeGallery::_NativeGallery_CanPickMultipleMedia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_CanPickMultipleMedia_mB8AF46ECF18017683C89A0FA4C8FB6865B367EED (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_CanPickMultipleMedia)();

	return returnValue;
}
// System.Int32 NativeGallery::_NativeGallery_GetMediaTypeFromExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery__NativeGallery_GetMediaTypeFromExtension_m766F6F4A3C6D08CAE2DE82C8538B8EC750CCF966 (String_t* ___extension0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___extension0' to native representation
	char* ____extension0_marshaled = NULL;
	____extension0_marshaled = il2cpp_codegen_marshal_string(___extension0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetMediaTypeFromExtension)(____extension0_marshaled);

	// Marshaling cleanup of parameter '___extension0' native representation
	il2cpp_codegen_marshal_free(____extension0_marshaled);
	____extension0_marshaled = NULL;

	return returnValue;
}
// System.Void NativeGallery::_NativeGallery_ImageWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_ImageWriteToAlbum_mBB2503FF03B135394885253C26A2640206B4F8D0 (String_t* ___path0, String_t* ___album1, int32_t ___permissionFreeMode2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Marshaling of parameter '___album1' to native representation
	char* ____album1_marshaled = NULL;
	____album1_marshaled = il2cpp_codegen_marshal_string(___album1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_ImageWriteToAlbum)(____path0_marshaled, ____album1_marshaled, ___permissionFreeMode2);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	// Marshaling cleanup of parameter '___album1' native representation
	il2cpp_codegen_marshal_free(____album1_marshaled);
	____album1_marshaled = NULL;

}
// System.Void NativeGallery::_NativeGallery_VideoWriteToAlbum(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_VideoWriteToAlbum_mC60E9996C10377FECC5F9AD5CFFFFD499B6BE419 (String_t* ___path0, String_t* ___album1, int32_t ___permissionFreeMode2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Marshaling of parameter '___album1' to native representation
	char* ____album1_marshaled = NULL;
	____album1_marshaled = il2cpp_codegen_marshal_string(___album1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_VideoWriteToAlbum)(____path0_marshaled, ____album1_marshaled, ___permissionFreeMode2);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	// Marshaling cleanup of parameter '___album1' native representation
	il2cpp_codegen_marshal_free(____album1_marshaled);
	____album1_marshaled = NULL;

}
// System.Void NativeGallery::_NativeGallery_PickMedia(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__NativeGallery_PickMedia_mBA9AE58BC3EEA7E6218B8C3F1295E933829CB0C2 (String_t* ___mediaSavePath0, int32_t ___mediaType1, int32_t ___permissionFreeMode2, int32_t ___selectionLimit3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t);

	// Marshaling of parameter '___mediaSavePath0' to native representation
	char* ____mediaSavePath0_marshaled = NULL;
	____mediaSavePath0_marshaled = il2cpp_codegen_marshal_string(___mediaSavePath0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_NativeGallery_PickMedia)(____mediaSavePath0_marshaled, ___mediaType1, ___permissionFreeMode2, ___selectionLimit3);

	// Marshaling cleanup of parameter '___mediaSavePath0' native representation
	il2cpp_codegen_marshal_free(____mediaSavePath0_marshaled);
	____mediaSavePath0_marshaled = NULL;

}
// System.String NativeGallery::_NativeGallery_GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetImageProperties_mE5100FC4812C007ACC249BD47A72BB46960188F7 (String_t* ___path0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetImageProperties)(____path0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::_NativeGallery_GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoProperties_m9971381F9ADBE96B2FA29319DA8306C1A439D53D (String_t* ___path0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetVideoProperties)(____path0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::_NativeGallery_GetVideoThumbnail(System.String,System.String,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_GetVideoThumbnail_m14924E8B2FD80B1F5CA2386E9E0B25884F003B6C (String_t* ___path0, String_t* ___thumbnailSavePath1, int32_t ___maxSize2, double ___captureTimeInSeconds3, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t, double);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Marshaling of parameter '___thumbnailSavePath1' to native representation
	char* ____thumbnailSavePath1_marshaled = NULL;
	____thumbnailSavePath1_marshaled = il2cpp_codegen_marshal_string(___thumbnailSavePath1);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_GetVideoThumbnail)(____path0_marshaled, ____thumbnailSavePath1_marshaled, ___maxSize2, ___captureTimeInSeconds3);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	// Marshaling cleanup of parameter '___thumbnailSavePath1' native representation
	il2cpp_codegen_marshal_free(____thumbnailSavePath1_marshaled);
	____thumbnailSavePath1_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::_NativeGallery_LoadImageAtPath(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery__NativeGallery_LoadImageAtPath_mCFAD7DA699B05F1F727CDECF57C066B3398B3A91 (String_t* ___path0, String_t* ___temporaryFilePath1, int32_t ___maxSize2, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Marshaling of parameter '___temporaryFilePath1' to native representation
	char* ____temporaryFilePath1_marshaled = NULL;
	____temporaryFilePath1_marshaled = il2cpp_codegen_marshal_string(___temporaryFilePath1);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_NativeGallery_LoadImageAtPath)(____path0_marshaled, ____temporaryFilePath1_marshaled, ___maxSize2);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	// Marshaling cleanup of parameter '___temporaryFilePath1' native representation
	il2cpp_codegen_marshal_free(____temporaryFilePath1_marshaled);
	____temporaryFilePath1_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeGallery::get_TemporaryImagePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m30EAF69E13E76FE18D8BDBAA84F30250540D45E2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_temporaryImagePath == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_temporaryImagePath_0();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_temporaryImagePath = Path.Combine( Application.temporaryCachePath, "tmpImg" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, _stringLiteral1256BD059A8D156C0578EF505C83E5862F0EFCD2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->set_m_temporaryImagePath_0(L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_4;
		L_4 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// return m_temporaryImagePath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_5 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_temporaryImagePath_0();
		return L_5;
	}
}
// System.String NativeGallery::get_SelectedMediaPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_get_SelectedMediaPath_m300C4C908DED803C7A82AA3E5F1B53779D410F67 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( m_selectedMediaPath == null )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_selectedMediaPath_1();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// m_selectedMediaPath = Path.Combine( Application.temporaryCachePath, "pickedMedia" );
		String_t* L_1;
		L_1 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_1, _stringLiteralAF0174D5142A8DAD18DDD4423E7AFDBBC3687A8B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->set_m_selectedMediaPath_1(L_2);
		// Directory.CreateDirectory( Application.temporaryCachePath );
		String_t* L_3;
		L_3 = Application_get_temporaryCachePath_mB0F2F6D4D8FD2E082F7E0831A90FC6F1D18C23DF(/*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_4;
		L_4 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_3, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// return m_selectedMediaPath;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_5 = ((NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var))->get_m_selectedMediaPath_1();
		return L_5;
	}
}
// NativeGallery/Permission NativeGallery::CheckPermission(NativeGallery/PermissionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_CheckPermission_m41047472AA4E1BE7FA7DFC13C4053421E00FF741 (int32_t ___permissionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// int result = _NativeGallery_CheckPermission( permissionType == PermissionType.Read ? 1 : 0, PermissionFreeMode ? 1 : 0 );
		int32_t L_0 = ___permissionType0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = NativeGallery__NativeGallery_CheckPermission_mC136AF77BD52BB675B8C8D323D9687243F3A2898(G_B3_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		// return result == 3 ? Permission.Granted : (Permission) result;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		return (int32_t)(L_3);
	}

IL_0014:
	{
		return (int32_t)(1);
	}
}
// NativeGallery/Permission NativeGallery::RequestPermission(NativeGallery/PermissionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_m73544312CF7A43D68FC542E4867ED2145FD4366D (int32_t ___permissionType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// int result = _NativeGallery_RequestPermission( permissionType == PermissionType.Read ? 1 : 0, PermissionFreeMode ? 1 : 0 );
		int32_t L_0 = ___permissionType0;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = 1;
	}

IL_0007:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = NativeGallery__NativeGallery_RequestPermission_mC334E442AA1A35B24D0EBFDC74AD3051B0A0E995(G_B3_0, 1, /*hidden argument*/NULL);
		V_0 = L_1;
		// return result == 3 ? Permission.Granted : (Permission) result;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		return (int32_t)(L_3);
	}

IL_0014:
	{
		return (int32_t)(1);
	}
}
// System.Void NativeGallery::TryExtendLimitedAccessPermission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_TryExtendLimitedAccessPermission_m2B35E817A7884F7D57E7F1F28713164295EA5A51 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( IsMediaPickerBusy() )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NativeGallery_IsMediaPickerBusy_m7DD23A63CA69F3FF6EA197C81364670C9BD68E52(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// _NativeGallery_ShowLimitedLibraryPicker();
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		NativeGallery__NativeGallery_ShowLimitedLibraryPicker_mEE99180F351E75CFC9C89AA07B007318AAF15D86(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean NativeGallery::CanOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanOpenSettings_mAC8B0F0946D6992BA20D78C16A3E673968793154 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _NativeGallery_CanOpenSettings() == 1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = NativeGallery__NativeGallery_CanOpenSettings_mDB22B99B36E38C5294BC4A8B9CEE2067EEAEEFA3(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void NativeGallery::OpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_OpenSettings_mDCBB2E95AEF5253A5D78C9BEBC94DE37E7BEB0DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _NativeGallery_OpenSettings();
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		NativeGallery__NativeGallery_OpenSettings_m78E54E48E6F4D9B98463794A0C823054DA90232C(/*hidden argument*/NULL);
		// }
		return;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m6BF7ABFFAC8A0ED113561E944FB2E7A5EE02F58A (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Image, callback );
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_0, L_1, L_2, 1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_mB747E9517058062310766BD916203633DD44B622 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Image, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50(L_0, L_1, L_2, 1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(UnityEngine.Texture2D,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_mD6D45685707A63EF228664AE0C5D02FA7C595D5F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___image0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( image == null )
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'image' is null!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15332598528DB5F9A0B9473BE7DCE0BB1F8DCAA7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveImageToGallery_mD6D45685707A63EF228664AE0C5D02FA7C595D5F_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if( filename.EndsWith( ".jpeg", StringComparison.OrdinalIgnoreCase ) || filename.EndsWith( ".jpg", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_3 = ___filename2;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864(L_3, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, 5, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_5 = ___filename2;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864(L_5, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, 5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0041;
		}
	}

IL_0030:
	{
		// return SaveToGallery( GetTextureBytes( image, true ), album, filename, MediaType.Image, callback );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = NativeGallery_GetTextureBytes_m12087DF107267998266042A9FCDD8173502AF78D(L_7, (bool)1, /*hidden argument*/NULL);
		String_t* L_9 = ___album1;
		String_t* L_10 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_11 = ___callback3;
		int32_t L_12;
		L_12 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_8, L_9, L_10, 1, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0041:
	{
		// else if( filename.EndsWith( ".png", StringComparison.OrdinalIgnoreCase ) )
		String_t* L_13 = ___filename2;
		NullCheck(L_13);
		bool L_14;
		L_14 = String_EndsWith_mB6E4F554EB12AF5BB822050E738AB867AF5C9864(L_13, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, 5, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename, MediaType.Image, callback );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = NativeGallery_GetTextureBytes_m12087DF107267998266042A9FCDD8173502AF78D(L_15, (bool)0, /*hidden argument*/NULL);
		String_t* L_17 = ___album1;
		String_t* L_18 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_19 = ___callback3;
		int32_t L_20;
		L_20 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_16, L_17, L_18, 1, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0060:
	{
		// return SaveToGallery( GetTextureBytes( image, false ), album, filename + ".png", MediaType.Image, callback );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22;
		L_22 = NativeGallery_GetTextureBytes_m12087DF107267998266042A9FCDD8173502AF78D(L_21, (bool)0, /*hidden argument*/NULL);
		String_t* L_23 = ___album1;
		String_t* L_24 = ___filename2;
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_24, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_26 = ___callback3;
		int32_t L_27;
		L_27 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_22, L_23, L_25, 1, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_mA41161C2CCBB11BB0163A06859975A30248D2D94 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Video, callback );
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_0, L_1, L_2, 2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m3660CEB0CCFFE1837188792AAF35E4EFD9979D29 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Video, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50(L_0, L_1, L_2, 2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_mB6D53E3AF8F61E4636F9E7746747475DA5ECCCD2 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( mediaBytes, album, filename, MediaType.Audio, callback );
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D(L_0, L_1, L_2, 4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveAudioToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveAudioToGallery_mF4F5AE4BBA4E6DE2F3911A0D3CE34F34888FB468 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SaveToGallery( existingMediaPath, album, filename, MediaType.Audio, callback );
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filename2;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50(L_0, L_1, L_2, 4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m85ECEBA1BA38DFD71D6E50E8D87708ABBF69D556 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _NativeGallery_CanPickMultipleMedia() == 1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = NativeGallery__NativeGallery_CanPickMultipleMedia_mB8AF46ECF18017683C89A0FA4C8FB6865B367EED(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean NativeGallery::CanSelectMultipleMediaTypesFromGallery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleMediaTypesFromGallery_m3624691D962119F3F38D5B72532C57073969DCA1 (const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// NativeGallery/Permission NativeGallery::GetImageFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImageFromGallery_m41D0B22C57D3345FA65841F1D79C64CACCE3155D (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E(L_0, 1, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideoFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideoFromGallery_mDB8D168EAE73ADEE6CCACC7B4AEB331F0061FBA7 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E(L_0, 2, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudioFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudioFromGallery_mAD92CCC0D9CB6B53AB1723C7CEF5A9AEA729DCA6 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E(L_0, 4, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediaFromGallery_mA4702D4BD6EC28CE465CCA16CCAD883D10647096 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, int32_t ___mediaTypes1, String_t* ___title2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_0 = ___callback0;
		int32_t L_1 = ___mediaTypes1;
		String_t* L_2 = ___title2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetImagesFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImagesFromGallery_m9B862FB4AE0ACB95A1AFE69770924D9871A30128 (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Image, mime, title );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A(L_0, 1, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetVideosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideosFromGallery_m053B9715CFE8B25307E8ABFA094B8773E3373242 (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Video, mime, title );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A(L_0, 2, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetAudiosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetAudiosFromGallery_m7D3C58B28433BF75A5444A297D74628D5476996F (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, MediaType.Audio, mime, title );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A(L_0, 4, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetMixedMediasFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMixedMediasFromGallery_mC910AE3E39146011845E0EF2C66EB949961C28A5 (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, int32_t ___mediaTypes1, String_t* ___title2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetMultipleMediaFromGallery( callback, mediaTypes, "*/*", title );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_0 = ___callback0;
		int32_t L_1 = ___mediaTypes1;
		String_t* L_2 = ___title2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A(L_0, L_1, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean NativeGallery::IsMediaPickerBusy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m7DD23A63CA69F3FF6EA197C81364670C9BD68E52 (const RuntimeMethod* method)
{
	{
		// return NGMediaReceiveCallbackiOS.IsBusy;
		bool L_0;
		L_0 = NGMediaReceiveCallbackiOS_get_IsBusy_m091AFD5DEAB7725B736EEE337FDB7E4BE9C90569_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// NativeGallery/MediaType NativeGallery::GetMediaTypeOfFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaTypeOfFile_mF13B09FC7045496EABC7C8707CC7710D7F9FF984 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( string.IsNullOrEmpty( path ) )
		String_t* L_0 = ___path0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_000a:
	{
		// string extension = Path.GetExtension( path );
		String_t* L_2 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if( string.IsNullOrEmpty( extension ) )
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_001b:
	{
		// if( extension[0] == '.' )
		String_t* L_6 = V_0;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_6, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0039;
		}
	}
	{
		// if( extension.Length == 1 )
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		// return (MediaType) 0;
		return (int32_t)(0);
	}

IL_0031:
	{
		// extension = extension.Substring( 1 );
		String_t* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_10, 1, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0039:
	{
		// return (MediaType) _NativeGallery_GetMediaTypeFromExtension( extension.ToLowerInvariant() );
		String_t* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = NativeGallery__NativeGallery_GetMediaTypeFromExtension_m766F6F4A3C6D08CAE2DE82C8538B8EC750CCF966(L_13, /*hidden argument*/NULL);
		return (int32_t)(L_14);
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___mediaBytes0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B13_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_m73544312CF7A43D68FC542E4867ED2145FD4366D(1, /*hidden argument*/NULL);
		// if( result == Permission.Granted )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B13_0 = L_1;
			goto IL_0075;
		}
	}
	{
		// if( mediaBytes == null || mediaBytes.Length == 0 )
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___mediaBytes0;
		G_B2_0 = G_B1_0;
		if (!L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___mediaBytes0;
		NullCheck(L_3);
		G_B3_0 = G_B2_0;
		if ((((RuntimeArray*)L_3)->max_length))
		{
			G_B4_0 = G_B2_0;
			goto IL_001c;
		}
	}

IL_0011:
	{
		// throw new ArgumentException( "Parameter 'mediaBytes' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7BB4B5568C63748C896DED09B403F2FC4F274E91)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_5 = ___album1;
		G_B5_0 = G_B4_0;
		if (!L_5)
		{
			G_B6_0 = G_B4_0;
			goto IL_0027;
		}
	}
	{
		String_t* L_6 = ___album1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_0032;
		}
	}

IL_0027:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D_RuntimeMethod_var)));
	}

IL_0032:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_9 = ___filename2;
		G_B8_0 = G_B7_0;
		if (!L_9)
		{
			G_B9_0 = G_B7_0;
			goto IL_003d;
		}
	}
	{
		String_t* L_10 = ___filename2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		G_B9_0 = G_B8_0;
		if (L_11)
		{
			G_B10_0 = G_B8_0;
			goto IL_0048;
		}
	}

IL_003d:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_12 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m829B35BC856928FAE25D089CA0A3A3A46888813D_RuntimeMethod_var)));
	}

IL_0048:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_13 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_13, /*hidden argument*/NULL);
		bool L_15;
		L_15 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_14, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
		if (!L_15)
		{
			G_B12_0 = G_B10_0;
			goto IL_005f;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, /*hidden argument*/NULL);
		G_B12_0 = G_B11_0;
	}

IL_005f:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_16 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = NativeGallery_GetTemporarySavePath_m21B84D36CB93E48BEE308648FD808AA8D873E3C9(L_16, /*hidden argument*/NULL);
		// File.WriteAllBytes( path, mediaBytes );
		String_t* L_18 = L_17;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_19 = ___mediaBytes0;
		File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_18, L_19, /*hidden argument*/NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_20 = ___album1;
		int32_t L_21 = ___mediaType3;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_22 = ___callback4;
		NativeGallery_SaveToGalleryInternal_m8AE158027AD276257E639FC977472E5C7DDF60C2(L_18, L_20, L_21, L_22, /*hidden argument*/NULL);
		G_B13_0 = G_B12_0;
	}

IL_0075:
	{
		// return result;
		return G_B13_0;
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50 (String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filename2, int32_t ___mediaType3, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Write );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_m73544312CF7A43D68FC542E4867ED2145FD4366D(1, /*hidden argument*/NULL);
		// if( result == Permission.Granted )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B14_0 = L_1;
			goto IL_009c;
		}
	}
	{
		// if( !File.Exists( existingMediaPath ) )
		String_t* L_2 = ___existingMediaPath0;
		bool L_3;
		L_3 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_2, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0026;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + existingMediaPath );
		String_t* L_4 = ___existingMediaPath0;
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_4, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_6 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50_RuntimeMethod_var)));
	}

IL_0026:
	{
		// if( album == null || album.Length == 0 )
		String_t* L_7 = ___album1;
		G_B4_0 = G_B3_0;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_0031;
		}
	}
	{
		String_t* L_8 = ___album1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_8, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_003c;
		}
	}

IL_0031:
	{
		// throw new ArgumentException( "Parameter 'album' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F8B1D027E92AF30A25606539C4A0E635BF0BBB)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50_RuntimeMethod_var)));
	}

IL_003c:
	{
		// if( filename == null || filename.Length == 0 )
		String_t* L_11 = ___filename2;
		G_B7_0 = G_B6_0;
		if (!L_11)
		{
			G_B8_0 = G_B6_0;
			goto IL_0047;
		}
	}
	{
		String_t* L_12 = ___filename2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_12, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
		if (L_13)
		{
			G_B9_0 = G_B7_0;
			goto IL_0052;
		}
	}

IL_0047:
	{
		// throw new ArgumentException( "Parameter 'filename' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30F7CAA3903ABC311FB9B0881B8937BE76A5526D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_SaveToGallery_m6BA98B925BED06F494F848FB1409F3F383C89A50_RuntimeMethod_var)));
	}

IL_0052:
	{
		// if( string.IsNullOrEmpty( Path.GetExtension( filename ) ) )
		String_t* L_15 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_16, /*hidden argument*/NULL);
		G_B10_0 = G_B9_0;
		if (!L_17)
		{
			G_B13_0 = G_B9_0;
			goto IL_0083;
		}
	}
	{
		// string originalExtension = Path.GetExtension( existingMediaPath );
		String_t* L_18 = ___existingMediaPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// if( string.IsNullOrEmpty( originalExtension ) )
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_20, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
		if (!L_21)
		{
			G_B12_0 = G_B10_0;
			goto IL_007a;
		}
	}
	{
		// Debug.LogWarning( "'filename' doesn't have an extension, this might result in unexpected behaviour!" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral1DA1565418493517EA4A1928E378AD0548A223E7, /*hidden argument*/NULL);
		G_B13_0 = G_B11_0;
		goto IL_0083;
	}

IL_007a:
	{
		// filename += originalExtension;
		String_t* L_22 = ___filename2;
		String_t* L_23 = V_1;
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_22, L_23, /*hidden argument*/NULL);
		___filename2 = L_24;
		G_B13_0 = G_B12_0;
	}

IL_0083:
	{
		// string path = GetTemporarySavePath( filename );
		String_t* L_25 = ___filename2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = NativeGallery_GetTemporarySavePath_m21B84D36CB93E48BEE308648FD808AA8D873E3C9(L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		// File.Copy( existingMediaPath, path, true );
		String_t* L_27 = ___existingMediaPath0;
		String_t* L_28 = V_0;
		File_Copy_m1CB9B28EA63AA6D9E36B50AABABE81CA8C22C794(L_27, L_28, (bool)1, /*hidden argument*/NULL);
		// SaveToGalleryInternal( path, album, mediaType, callback );
		String_t* L_29 = V_0;
		String_t* L_30 = ___album1;
		int32_t L_31 = ___mediaType3;
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_32 = ___callback4;
		NativeGallery_SaveToGalleryInternal_m8AE158027AD276257E639FC977472E5C7DDF60C2(L_29, L_30, L_31, L_32, /*hidden argument*/NULL);
		G_B14_0 = G_B13_0;
	}

IL_009c:
	{
		// return result;
		return G_B14_0;
	}
}
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,NativeGallery/MediaType,NativeGallery/MediaSaveCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m8AE158027AD276257E639FC977472E5C7DDF60C2 (String_t* ___path0, String_t* ___album1, int32_t ___mediaType2, MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0365E1814018F9007D2AF7114C462B24D8928C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4E22C84D059FC69AA54802023A8B68B6F4F4C7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( mediaType == MediaType.Audio )
		int32_t L_0 = ___mediaType2;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogError( "Saving audio files is not supported on iOS" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralD4E22C84D059FC69AA54802023A8B68B6F4F4C7E, /*hidden argument*/NULL);
		// if( callback != null )
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_1 = ___callback3;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback( false, null );
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_2 = ___callback3;
		NullCheck(L_2);
		MediaSaveCallback_Invoke_m37F11710C6E9EC74CEE2A568E63456183301819D(L_2, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// Debug.Log( "Saving to Pictures: " + Path.GetFileName( path ) );
		String_t* L_3 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0365E1814018F9007D2AF7114C462B24D8928C59, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// NGMediaSaveCallbackiOS.Initialize( callback );
		MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * L_6 = ___callback3;
		NGMediaSaveCallbackiOS_Initialize_mBCAE96FABD3852843F090CA1578CA1C938B892D7(L_6, /*hidden argument*/NULL);
		// if( mediaType == MediaType.Image )
		int32_t L_7 = ___mediaType2;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		// _NativeGallery_ImageWriteToAlbum( path, album, PermissionFreeMode ? 1 : 0 );
		String_t* L_8 = ___path0;
		String_t* L_9 = ___album1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		NativeGallery__NativeGallery_ImageWriteToAlbum_mBB2503FF03B135394885253C26A2640206B4F8D0(L_8, L_9, 1, /*hidden argument*/NULL);
		return;
	}

IL_0042:
	{
		// else if( mediaType == MediaType.Video )
		int32_t L_10 = ___mediaType2;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_004e;
		}
	}
	{
		// _NativeGallery_VideoWriteToAlbum( path, album, PermissionFreeMode ? 1 : 0 );
		String_t* L_11 = ___path0;
		String_t* L_12 = ___album1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		NativeGallery__NativeGallery_VideoWriteToAlbum_mC60E9996C10377FECC5F9AD5CFFFFD499B6BE419(L_11, L_12, 1, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.String NativeGallery::GetTemporarySavePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeGallery_GetTemporarySavePath_m21B84D36CB93E48BEE308648FD808AA8D873E3C9 (String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		// string saveDir = Path.Combine( Application.persistentDataPath, "NGallery" );
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, _stringLiteralCFA0E830C16EC57623615165EA8FBC2817BACCCF, /*hidden argument*/NULL);
		V_0 = L_1;
		// Directory.CreateDirectory( saveDir );
		String_t* L_2 = V_0;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_3;
		L_3 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_2, /*hidden argument*/NULL);
		// string path = Path.Combine( saveDir, filename );
		String_t* L_4 = V_0;
		String_t* L_5 = ___filename0;
		String_t* L_6;
		L_6 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if( File.Exists( path ) )
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		// int fileIndex = 0;
		V_2 = 0;
		// string filenameWithoutExtension = Path.GetFileNameWithoutExtension( filename );
		String_t* L_9 = ___filename0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Path_GetFileNameWithoutExtension_m52BA8E84FC8949E8A9F60D024742189907B997D2(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// string extension = Path.GetExtension( filename );
		String_t* L_11 = ___filename0;
		String_t* L_12;
		L_12 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
	}

IL_0038:
	{
		// path = Path.Combine( saveDir, string.Concat( filenameWithoutExtension, ++fileIndex, extension ) );
		String_t* L_13 = V_0;
		String_t* L_14 = V_3;
		int32_t L_15 = V_2;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		V_2 = L_16;
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_17);
		String_t* L_19 = V_4;
		String_t* L_20;
		L_20 = String_Concat_mFCF5F98D38F99DE7C831CBB9A1BAAAB148FC7D57(L_14, L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_21;
		L_21 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_13, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		// } while( File.Exists( path ) );
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_0038;
		}
	}

IL_0059:
	{
		// return path;
		String_t* L_24 = V_1;
		return L_24;
	}
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_m551D000C3884585269B347A4453D1F2E69406F6E (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B4_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_m73544312CF7A43D68FC542E4867ED2145FD4366D(0, /*hidden argument*/NULL);
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B6_0 = L_1;
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NativeGallery_IsMediaPickerBusy_m7DD23A63CA69F3FF6EA197C81364670C9BD68E52(/*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (L_2)
		{
			G_B6_0 = G_B1_0;
			goto IL_0041;
		}
	}
	{
		// if( mediaType == MediaType.Audio )
		int32_t L_3 = ___mediaType1;
		G_B3_0 = G_B2_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			G_B5_0 = G_B2_0;
			goto IL_002a;
		}
	}
	{
		// Debug.LogError( "Picking audio files is not supported on iOS" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08, /*hidden argument*/NULL);
		// if( callback != null ) // Selecting audio files is not supported on iOS
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_4 = ___callback0;
		G_B4_0 = G_B3_0;
		if (!L_4)
		{
			G_B6_0 = G_B3_0;
			goto IL_0041;
		}
	}
	{
		// callback( null );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_5 = ___callback0;
		NullCheck(L_5);
		MediaPickCallback_Invoke_m38FFA5C31A6D37294017FD9DCC18E85CBC605C57(L_5, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return G_B4_0;
	}

IL_002a:
	{
		// NGMediaReceiveCallbackiOS.Initialize( callback, null );
		MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * L_6 = ___callback0;
		NGMediaReceiveCallbackiOS_Initialize_m82FAC5C23274D289077DB3235AE0B4EAE620D2FE(L_6, (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C *)NULL, /*hidden argument*/NULL);
		// _NativeGallery_PickMedia( SelectedMediaPath, (int) ( mediaType & ~MediaType.Audio ), PermissionFreeMode ? 1 : 0, 1 );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = NativeGallery_get_SelectedMediaPath_m300C4C908DED803C7A82AA3E5F1B53779D410F67(/*hidden argument*/NULL);
		int32_t L_8 = ___mediaType1;
		NativeGallery__NativeGallery_PickMedia_mBA9AE58BC3EEA7E6218B8C3F1295E933829CB0C2(L_7, ((int32_t)((int32_t)L_8&(int32_t)((int32_t)-5))), 1, 1, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
	}

IL_0041:
	{
		// return result;
		return G_B6_0;
	}
}
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,NativeGallery/MediaType,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_mAFE629E7EA020895F5543E561EF18FF8D966225A (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * ___callback0, int32_t ___mediaType1, String_t* ___mime2, String_t* ___title3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B9_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// Permission result = RequestPermission( PermissionType.Read );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = NativeGallery_RequestPermission_m73544312CF7A43D68FC542E4867ED2145FD4366D(0, /*hidden argument*/NULL);
		// if( result == Permission.Granted && !IsMediaPickerBusy() )
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			G_B9_0 = L_1;
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NativeGallery_IsMediaPickerBusy_m7DD23A63CA69F3FF6EA197C81364670C9BD68E52(/*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (L_2)
		{
			G_B9_0 = G_B1_0;
			goto IL_0053;
		}
	}
	{
		// if( CanSelectMultipleFilesFromGallery() )
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NativeGallery_CanSelectMultipleFilesFromGallery_m85ECEBA1BA38DFD71D6E50E8D87708ABBF69D556(/*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		if (!L_3)
		{
			G_B7_0 = G_B2_0;
			goto IL_0049;
		}
	}
	{
		// if( mediaType == MediaType.Audio )
		int32_t L_4 = ___mediaType1;
		G_B4_0 = G_B3_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			G_B6_0 = G_B3_0;
			goto IL_0031;
		}
	}
	{
		// Debug.LogError( "Picking audio files is not supported on iOS" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralB04FF65BF5CEF7336F7FBA4624393E214FB7EB08, /*hidden argument*/NULL);
		// if( callback != null ) // Selecting audio files is not supported on iOS
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_5 = ___callback0;
		G_B5_0 = G_B4_0;
		if (!L_5)
		{
			G_B9_0 = G_B4_0;
			goto IL_0053;
		}
	}
	{
		// callback( null );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_6 = ___callback0;
		NullCheck(L_6);
		MediaPickMultipleCallback_Invoke_mB18BC813FE91A071CEC50F59C5DEEA2C878D2B27(L_6, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, /*hidden argument*/NULL);
		// }
		return G_B5_0;
	}

IL_0031:
	{
		// NGMediaReceiveCallbackiOS.Initialize( null, callback );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_7 = ___callback0;
		NGMediaReceiveCallbackiOS_Initialize_m82FAC5C23274D289077DB3235AE0B4EAE620D2FE((MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 *)NULL, L_7, /*hidden argument*/NULL);
		// _NativeGallery_PickMedia( SelectedMediaPath, (int) ( mediaType & ~MediaType.Audio ), PermissionFreeMode ? 1 : 0, 0 );
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = NativeGallery_get_SelectedMediaPath_m300C4C908DED803C7A82AA3E5F1B53779D410F67(/*hidden argument*/NULL);
		int32_t L_9 = ___mediaType1;
		NativeGallery__NativeGallery_PickMedia_mBA9AE58BC3EEA7E6218B8C3F1295E933829CB0C2(L_8, ((int32_t)((int32_t)L_9&(int32_t)((int32_t)-5))), 1, 0, /*hidden argument*/NULL);
		// }
		return G_B6_0;
	}

IL_0049:
	{
		// else if( callback != null )
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_10 = ___callback0;
		G_B8_0 = G_B7_0;
		if (!L_10)
		{
			G_B9_0 = G_B7_0;
			goto IL_0053;
		}
	}
	{
		// callback( null );
		MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * L_11 = ___callback0;
		NullCheck(L_11);
		MediaPickMultipleCallback_Invoke_mB18BC813FE91A071CEC50F59C5DEEA2C878D2B27(L_11, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, /*hidden argument*/NULL);
		G_B9_0 = G_B8_0;
	}

IL_0053:
	{
		// return result;
		return G_B9_0;
	}
}
// System.Byte[] NativeGallery::GetTextureBytes(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytes_m12087DF107267998266042A9FCDD8173502AF78D (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// return isJpeg ? texture.EncodeToJPG( 100 ) : texture.EncodeToPNG();
			bool L_0 = ___isJpeg1;
			if (L_0)
			{
				goto IL_000b;
			}
		}

IL_0003:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1 = ___texture0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
			L_2 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_1, /*hidden argument*/NULL);
			G_B3_0 = L_2;
			goto IL_0013;
		}

IL_000b:
		{
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3 = ___texture0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
			L_4 = ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641(L_3, ((int32_t)100), /*hidden argument*/NULL);
			G_B3_0 = L_4;
		}

IL_0013:
		{
			V_0 = G_B3_0;
			goto IL_002c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0016:
	{ // begin catch(UnityEngine.UnityException)
		// catch( UnityException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_5 = ___texture0;
		bool L_6 = ___isJpeg1;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = NativeGallery_GetTextureBytesFromCopy_m3839EE6CDE867B40A71E898FEF4E96ED9784DE0D(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	} // end catch (depth: 1)

CATCH_0021:
	{ // begin catch(System.ArgumentException)
		// catch( ArgumentException )
		// return GetTextureBytesFromCopy( texture, isJpeg );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_8 = ___texture0;
		bool L_9 = ___isJpeg1;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10;
		L_10 = NativeGallery_GetTextureBytesFromCopy_m3839EE6CDE867B40A71E898FEF4E96ED9784DE0D(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	} // end catch (depth: 1)

IL_002c:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		return L_11;
	}
}
// System.Byte[] NativeGallery::GetTextureBytesFromCopy(UnityEngine.Texture2D,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* NativeGallery_GetTextureBytesFromCopy_m3839EE6CDE867B40A71E898FEF4E96ED9784DE0D (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, bool ___isJpeg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_1 = NULL;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B11_0 = NULL;
	{
		// Debug.LogWarning( "Saving non-readable textures is slower than saving readable textures" );
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral7F7876094B3FA10965A88A7D08B74EA3DC22CAE9, /*hidden argument*/NULL);
		// Texture2D sourceTexReadable = null;
		V_0 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
		// RenderTexture rt = RenderTexture.GetTemporary( texture.width, texture.height );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = ___texture0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = ___texture0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4;
		L_4 = RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8(L_1, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// RenderTexture activeRT = RenderTexture.active;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5;
		L_5 = RenderTexture_get_active_mB73718A56673D36F74B5338B310ED7FDFEB34AB7(/*hidden argument*/NULL);
		V_2 = L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// Graphics.Blit( texture, rt );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_6 = ___texture0;
				RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = V_1;
				IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
				Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_6, L_7, /*hidden argument*/NULL);
				// RenderTexture.active = rt;
				RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = V_1;
				RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_8, /*hidden argument*/NULL);
				// sourceTexReadable = new Texture2D( texture.width, texture.height, isJpeg ? TextureFormat.RGB24 : TextureFormat.RGBA32, false );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = ___texture0;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11 = ___texture0;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
				bool L_13 = ___isJpeg1;
				G_B2_0 = L_12;
				G_B2_1 = L_10;
				if (L_13)
				{
					G_B3_0 = L_12;
					G_B3_1 = L_10;
					goto IL_0043;
				}
			}

IL_0040:
			{
				G_B4_0 = 4;
				G_B4_1 = G_B2_0;
				G_B4_2 = G_B2_1;
				goto IL_0044;
			}

IL_0043:
			{
				G_B4_0 = 3;
				G_B4_1 = G_B3_0;
				G_B4_2 = G_B3_1;
			}

IL_0044:
			{
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
				Texture2D__ctor_mF138386223A07CBD4CE94672757E39D0EF718092(L_14, G_B4_2, G_B4_1, G_B4_0, (bool)0, /*hidden argument*/NULL);
				V_0 = L_14;
				// sourceTexReadable.ReadPixels( new Rect( 0, 0, texture.width, texture.height ), 0, 0, false );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_15 = V_0;
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = ___texture0;
				NullCheck(L_16);
				int32_t L_17;
				L_17 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_16);
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = ___texture0;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
				Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_20;
				memset((&L_20), 0, sizeof(L_20));
				Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_20), (0.0f), (0.0f), ((float)((float)L_17)), ((float)((float)L_19)), /*hidden argument*/NULL);
				NullCheck(L_15);
				Texture2D_ReadPixels_m87ACCC9FDCD8FC8851AE8D3BE56A7C2CAF09C75E(L_15, L_20, 0, 0, (bool)0, /*hidden argument*/NULL);
				// sourceTexReadable.Apply( false, false );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_21 = V_0;
				NullCheck(L_21);
				Texture2D_Apply_m83460E7B5610A6D85DD3CCA71CC5D4523390D660(L_21, (bool)0, (bool)0, /*hidden argument*/NULL);
				// }
				IL2CPP_LEAVE(0x97, FINALLY_008a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_007b;
			}
			throw e;
		}

CATCH_007b:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			// Object.DestroyImmediate( sourceTexReadable );
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_22 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
			Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_22, /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0xBE, FINALLY_008a);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		// RenderTexture.active = activeRT;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_23 = V_2;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_23, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary( rt );
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_24 = V_1;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_24, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x97, IL_0097)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_0097:
	{
	}

IL_0098:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// return isJpeg ? sourceTexReadable.EncodeToJPG( 100 ) : sourceTexReadable.EncodeToPNG();
				bool L_25 = ___isJpeg1;
				if (L_25)
				{
					goto IL_00a3;
				}
			}

IL_009b:
			{
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_26 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27;
				L_27 = ImageConversion_EncodeToPNG_mA598C2969C878ACC5AEA5FDC92C6199EB30D51ED(L_26, /*hidden argument*/NULL);
				G_B11_0 = L_27;
				goto IL_00ab;
			}

IL_00a3:
			{
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_28 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29;
				L_29 = ImageConversion_EncodeToJPG_mE32249F45E643405652057EA8A35112AB4721641(L_28, ((int32_t)100), /*hidden argument*/NULL);
				G_B11_0 = L_29;
			}

IL_00ab:
			{
				V_3 = G_B11_0;
				IL2CPP_LEAVE(0xBE, FINALLY_00b7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ae;
			}
			throw e;
		}

CATCH_00ae:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			// return null;
			V_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0xBE, FINALLY_00b7);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b7;
	}

FINALLY_00b7:
	{ // begin finally (depth: 1)
		// Object.DestroyImmediate( sourceTexReadable );
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_30, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(183)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(183)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
	}

IL_00be:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_31 = V_3;
		return L_31;
	}
}
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29 (String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_3 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	int32_t G_B10_0 = 0;
	{
		// if( string.IsNullOrEmpty( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ArgumentException( "Parameter 'imagePath' is null or empty!" );
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18B82B6B7DC4FE1988BA61A3784D1768F6C925DF)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29_RuntimeMethod_var)));
	}

IL_0013:
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_3 = ___imagePath0;
		bool L_4;
		L_4 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_5 = ___imagePath0;
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_5, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_7 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29_RuntimeMethod_var)));
	}

IL_002c:
	{
		// if( maxSize <= 0 )
		int32_t L_8 = ___maxSize1;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_9;
		L_9 = SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40(/*hidden argument*/NULL);
		___maxSize1 = L_9;
	}

IL_0037:
	{
		// string loadPath = _NativeGallery_LoadImageAtPath( imagePath, TemporaryImagePath, maxSize );
		String_t* L_10 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = NativeGallery_get_TemporaryImagePath_m30EAF69E13E76FE18D8BDBAA84F30250540D45E2(/*hidden argument*/NULL);
		int32_t L_12 = ___maxSize1;
		String_t* L_13;
		L_13 = NativeGallery__NativeGallery_LoadImageAtPath_mCFAD7DA699B05F1F727CDECF57C066B3398B3A91(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_14 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		// TextureFormat format = ( extension == ".jpg" || extension == ".jpeg" ) ? TextureFormat.RGB24 : TextureFormat.RGBA32;
		String_t* L_17 = V_1;
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = V_1;
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_006d;
		}
	}
	{
		G_B10_0 = 4;
		goto IL_006e;
	}

IL_006d:
	{
		G_B10_0 = 3;
	}

IL_006e:
	{
		V_2 = G_B10_0;
		// Texture2D result = new Texture2D( 2, 2, format, generateMipmaps, linearColorSpace );
		int32_t L_21 = V_2;
		bool L_22 = ___generateMipmaps3;
		bool L_23 = ___linearColorSpace4;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_24 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m667452FB4794C77D283037E096FE0DC0AEB311F3(L_24, 2, 2, L_21, L_22, L_23, /*hidden argument*/NULL);
		V_3 = L_24;
	}

IL_007b:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				// if( !result.LoadImage( File.ReadAllBytes( loadPath ), markTextureNonReadable ) )
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_25 = V_3;
				String_t* L_26 = V_0;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27;
				L_27 = File_ReadAllBytes_mFB47FB50E938AE90CC822442D30E896441D95829(L_26, /*hidden argument*/NULL);
				bool L_28 = ___markTextureNonReadable2;
				bool L_29;
				L_29 = ImageConversion_LoadImage_m1E5C9BF6206ED40B23CDB28341B8A64E05C43683(L_25, L_27, L_28, /*hidden argument*/NULL);
				if (L_29)
				{
					goto IL_0095;
				}
			}

IL_008a:
			{
				// Object.DestroyImmediate( result );
				Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_30 = V_3;
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_30, /*hidden argument*/NULL);
				// return null;
				V_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
				IL2CPP_LEAVE(0xBE, FINALLY_00a7);
			}

IL_0095:
			{
				// }
				IL2CPP_LEAVE(0xBC, FINALLY_00a7);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0097;
			}
			throw e;
		}

CATCH_0097:
		{ // begin catch(System.Exception)
			// Debug.LogException( e );
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
			Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
			// Object.DestroyImmediate( result );
			Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_31 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
			Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_31, /*hidden argument*/NULL);
			// return null;
			V_4 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			IL2CPP_LEAVE(0xBE, FINALLY_00a7);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a7;
	}

FINALLY_00a7:
	{ // begin finally (depth: 1)
		{
			// if( loadPath != imagePath )
			String_t* L_32 = V_0;
			String_t* L_33 = ___imagePath0;
			bool L_34;
			L_34 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_32, L_33, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_00bb;
			}
		}

IL_00b0:
		try
		{ // begin try (depth: 2)
			// File.Delete( loadPath );
			String_t* L_35 = V_0;
			File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_35, /*hidden argument*/NULL);
			// }
			goto IL_00bb;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00b8;
			}
			throw e;
		}

CATCH_00b8:
		{ // begin catch(System.Object)
			// catch { }
			// catch { }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00bb;
		} // end catch (depth: 2)

IL_00bb:
		{
			// }
			IL2CPP_END_FINALLY(167)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(167)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xBE, IL_00be)
		IL2CPP_JUMP_TBL(0xBC, IL_00bc)
	}

IL_00bc:
	{
		// return result;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = V_3;
		return L_36;
	}

IL_00be:
	{
		// }
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_37 = V_4;
		return L_37;
	}
}
// UnityEngine.Texture2D NativeGallery::GetVideoThumbnail(System.String,System.Int32,System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * NativeGallery_GetVideoThumbnail_m7D43AB68B2FDF54457B3BDF8C0974967A28E9BC3 (String_t* ___videoPath0, int32_t ___maxSize1, double ___captureTimeInSeconds2, bool ___markTextureNonReadable3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if( maxSize <= 0 )
		int32_t L_0 = ___maxSize1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// maxSize = SystemInfo.maxTextureSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_m92A710AC08A38C8BAF96D95D796C073B1C900D40(/*hidden argument*/NULL);
		___maxSize1 = L_1;
	}

IL_000b:
	{
		// string thumbnailPath = _NativeGallery_GetVideoThumbnail( videoPath, TemporaryImagePath + ".png", maxSize, captureTimeInSeconds );
		String_t* L_2 = ___videoPath0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = NativeGallery_get_TemporaryImagePath_m30EAF69E13E76FE18D8BDBAA84F30250540D45E2(/*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		int32_t L_5 = ___maxSize1;
		double L_6 = ___captureTimeInSeconds2;
		String_t* L_7;
		L_7 = NativeGallery__NativeGallery_GetVideoThumbnail_m14924E8B2FD80B1F5CA2386E9E0B25884F003B6C(L_2, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if( !string.IsNullOrEmpty( thumbnailPath ) )
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0036;
		}
	}
	{
		// return LoadImageAtPath( thumbnailPath, maxSize, markTextureNonReadable );
		String_t* L_10 = V_0;
		int32_t L_11 = ___maxSize1;
		bool L_12 = ___markTextureNonReadable3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13;
		L_13 = NativeGallery_LoadImageAtPath_mB65959F68F7D94264D6548686B8D8210C3D7FA29(L_10, L_11, L_12, (bool)1, (bool)0, /*hidden argument*/NULL);
		return L_13;
	}

IL_0036:
	{
		// return null;
		return (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
	}
}
// NativeGallery/ImageProperties NativeGallery::GetImageProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2  NativeGallery_GetImageProperties_mA64E8E11D9E791545D15A523024C0C2376547304 (String_t* ___imagePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_5 = NULL;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// if( !File.Exists( imagePath ) )
		String_t* L_0 = ___imagePath0;
		bool L_1;
		L_1 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + imagePath );
		String_t* L_2 = ___imagePath0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_4 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetImageProperties_mA64E8E11D9E791545D15A523024C0C2376547304_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = _NativeGallery_GetImageProperties( imagePath );
		String_t* L_5 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = NativeGallery__NativeGallery_GetImageProperties_mE5100FC4812C007ACC249BD47A72BB46960188F7(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// string mimeType = null;
		V_3 = (String_t*)NULL;
		// ImageOrientation orientation = ImageOrientation.Unknown;
		V_4 = (-1);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_011d;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_9 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12;
		L_12 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_9, L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_5;
		if (!L_13)
		{
			goto IL_011d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_5;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))) < ((int32_t)4)))
		{
			goto IL_011d;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = V_5;
		NullCheck(L_15);
		int32_t L_16 = 0;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_18, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_006c;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_006c:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_23, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0080;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_0080:
	{
		// mimeType = properties[2].Trim();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = 2;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28;
		L_28 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		// if( mimeType.Length == 0 )
		String_t* L_29 = V_3;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0107;
		}
	}
	{
		// string extension = Path.GetExtension( imagePath ).ToLowerInvariant();
		String_t* L_31 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_32;
		L_32 = Path_GetExtension_mE7E0D0F94D258D8C20C909A8FE31FCB46129A0FD(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_32, /*hidden argument*/NULL);
		V_7 = L_33;
		// if( extension == ".png" )
		String_t* L_34 = V_7;
		bool L_35;
		L_35 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_34, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00b5;
		}
	}
	{
		// mimeType = "image/png";
		V_3 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_0107;
	}

IL_00b5:
	{
		// else if( extension == ".jpg" || extension == ".jpeg" )
		String_t* L_36 = V_7;
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteral23DF9991B71463C240582D176E347E7E47AEFF5A, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_00d1;
		}
	}
	{
		String_t* L_38 = V_7;
		bool L_39;
		L_39 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_38, _stringLiteral4B9B40AAD718882F5C0B95FE844E4AA92BD49C42, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00d9;
		}
	}

IL_00d1:
	{
		// mimeType = "image/jpeg";
		V_3 = _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		goto IL_0107;
	}

IL_00d9:
	{
		// else if( extension == ".gif" )
		String_t* L_40 = V_7;
		bool L_41;
		L_41 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_40, _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_00ef;
		}
	}
	{
		// mimeType = "image/gif";
		V_3 = _stringLiteralAFF4AA19F30B5DC5A240F413D92917103536F1AD;
		goto IL_0107;
	}

IL_00ef:
	{
		// else if( extension == ".bmp" )
		String_t* L_42 = V_7;
		bool L_43;
		L_43 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_42, _stringLiteral985B72B30ECE05DD4EF5FE142CEE0FB8BF53A98C, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0105;
		}
	}
	{
		// mimeType = "image/bmp";
		V_3 = _stringLiteralCB4507437E3E619ECBAD84410155675EBEB3DB3F;
		goto IL_0107;
	}

IL_0105:
	{
		// mimeType = null;
		V_3 = (String_t*)NULL;
	}

IL_0107:
	{
		// if( int.TryParse( properties[3].Trim(), out orientationInt ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = V_5;
		NullCheck(L_44);
		int32_t L_45 = 3;
		String_t* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		String_t* L_47;
		L_47 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_46, /*hidden argument*/NULL);
		bool L_48;
		L_48 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_47, (int32_t*)(&V_6), /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_011d;
		}
	}
	{
		// orientation = (ImageOrientation) orientationInt;
		int32_t L_49 = V_6;
		V_4 = L_49;
	}

IL_011d:
	{
		// return new ImageProperties( width, height, mimeType, orientation );
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		String_t* L_52 = V_3;
		int32_t L_53 = V_4;
		ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2  L_54;
		memset((&L_54), 0, sizeof(L_54));
		ImageProperties__ctor_m63B2BA893E12255BBD0D8364D8DFA70F4BE0B031((&L_54), L_50, L_51, L_52, L_53, /*hidden argument*/NULL);
		return L_54;
	}
}
// NativeGallery/VideoProperties NativeGallery::GetVideoProperties(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31  NativeGallery_GetVideoProperties_m091E45231186EB0CB51F80494D5122C29F128973 (String_t* ___videoPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_5 = NULL;
	{
		// if( !File.Exists( videoPath ) )
		String_t* L_0 = ___videoPath0;
		bool L_1;
		L_1 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// throw new FileNotFoundException( "File not found at " + videoPath );
		String_t* L_2 = ___videoPath0;
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491B4D9271839F0BD63211437BF7CEE5B2C6ADE9)), L_2, /*hidden argument*/NULL);
		FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 * L_4 = (FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_tD3939F67D0DF6571BFEDB3656CF7A4EB5AC65AC8_il2cpp_TypeInfo_var)));
		FileNotFoundException__ctor_mA3A41003FE6056B7BF44A6577DF4BBB30BFD32D5(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeGallery_GetVideoProperties_m091E45231186EB0CB51F80494D5122C29F128973_RuntimeMethod_var)));
	}

IL_0019:
	{
		// string value = _NativeGallery_GetVideoProperties( videoPath );
		String_t* L_5 = ___videoPath0;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_tAE6DCDE22D415EE57272EC71D9E525061C9754CF_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = NativeGallery__NativeGallery_GetVideoProperties_m9971381F9ADBE96B2FA29319DA8306C1A439D53D(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// int width = 0, height = 0;
		V_1 = 0;
		// int width = 0, height = 0;
		V_2 = 0;
		// long duration = 0L;
		V_3 = ((int64_t)((int64_t)0));
		// float rotation = 0f;
		V_4 = (0.0f);
		// if( !string.IsNullOrEmpty( value ) )
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_00aa;
		}
	}
	{
		// string[] properties = value.Split( '>' );
		String_t* L_9 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12;
		L_12 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_9, L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		// if( properties != null && properties.Length >= 4 )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = V_5;
		if (!L_13)
		{
			goto IL_00aa;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = V_5;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))) < ((int32_t)4)))
		{
			goto IL_00aa;
		}
	}
	{
		// if( !int.TryParse( properties[0].Trim(), out width ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = V_5;
		NullCheck(L_15);
		int32_t L_16 = 0;
		String_t* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_18, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0068;
		}
	}
	{
		// width = 0;
		V_1 = 0;
	}

IL_0068:
	{
		// if( !int.TryParse( properties[1].Trim(), out height ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_23, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_007c;
		}
	}
	{
		// height = 0;
		V_2 = 0;
	}

IL_007c:
	{
		// if( !long.TryParse( properties[2].Trim(), out duration ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = 2;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28;
		L_28 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650(L_28, (int64_t*)(&V_3), /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_0091;
		}
	}
	{
		// duration = 0L;
		V_3 = ((int64_t)((int64_t)0));
	}

IL_0091:
	{
		// if( !float.TryParse( properties[3].Trim(), out rotation ) )
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = V_5;
		NullCheck(L_30);
		int32_t L_31 = 3;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_32, /*hidden argument*/NULL);
		bool L_34;
		L_34 = Single_TryParse_mC2E0086EAB164A81380FD03BDE671C574F52E373(L_33, (float*)(&V_4), /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00aa;
		}
	}
	{
		// rotation = 0f;
		V_4 = (0.0f);
	}

IL_00aa:
	{
		// if( rotation == -90f )
		float L_35 = V_4;
		if ((!(((float)L_35) == ((float)(-90.0f)))))
		{
			goto IL_00ba;
		}
	}
	{
		// rotation = 270f;
		V_4 = (270.0f);
	}

IL_00ba:
	{
		// return new VideoProperties( width, height, duration, rotation );
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		int64_t L_38 = V_3;
		float L_39 = V_4;
		VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31  L_40;
		memset((&L_40), 0, sizeof(L_40));
		VideoProperties__ctor_m99DEF6303739A1066E891A8C78E0623AEEE25616((&L_40), L_36, L_37, L_38, L_39, /*hidden argument*/NULL);
		return L_40;
	}
}
// System.Void NativeGallery::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeGallery__cctor_mA3529E9CA001078587952A9A327EF15E3C0DBD85 (const RuntimeMethod* method)
{
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
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_pinvoke(const ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2& unmarshaled, ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.get_mimeType_2());
	marshaled.___orientation_3 = unmarshaled.get_orientation_3();
}
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_pinvoke_back(const ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_pinvoke& marshaled, ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	unmarshaled.set_mimeType_2(il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2));
	int32_t unmarshaled_orientation_temp_3 = 0;
	unmarshaled_orientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.set_orientation_3(unmarshaled_orientation_temp_3);
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_pinvoke_cleanup(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// Conversion methods for marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_com(const ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2& unmarshaled, ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mimeType_2());
	marshaled.___orientation_3 = unmarshaled.get_orientation_3();
}
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_com_back(const ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_com& marshaled, ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	unmarshaled.set_mimeType_2(il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2));
	int32_t unmarshaled_orientation_temp_3 = 0;
	unmarshaled_orientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.set_orientation_3(unmarshaled_orientation_temp_3);
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
IL2CPP_EXTERN_C void ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshal_com_cleanup(ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageProperties__ctor_m63B2BA893E12255BBD0D8364D8DFA70F4BE0B031 (ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2 * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		// this.mimeType = mimeType;
		String_t* L_2 = ___mimeType2;
		__this->set_mimeType_2(L_2);
		// this.orientation = orientation;
		int32_t L_3 = ___orientation3;
		__this->set_orientation_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ImageProperties__ctor_m63B2BA893E12255BBD0D8364D8DFA70F4BE0B031_AdjustorThunk (RuntimeObject * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2 * _thisAdjusted = reinterpret_cast<ImageProperties_t0980B988DFD173675919BC1BF4894230BA5ABDC2 *>(__this + _offset);
	ImageProperties__ctor_m63B2BA893E12255BBD0D8364D8DFA70F4BE0B031(_thisAdjusted, ___width0, ___height1, ___mimeType2, ___orientation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	il2cppPInvokeFunc(____path0_marshaled);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NativeGallery/MediaPickCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback__ctor_m86BFB0E65A7C6553173CBE1ABD5E1E186F0F3C36 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m38FFA5C31A6D37294017FD9DCC18E85CBC605C57 (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___path0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___path0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___path0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___path0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___path0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___path0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___path0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___path0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___path0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___path0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaPickCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickCallback_BeginInvoke_m001B29739C46A9FC0FF11FEA289846555946551D (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, String_t* ___path0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___path0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeGallery/MediaPickCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickCallback_EndInvoke_m357D8F8272591A9C4ACDE29B61CCC955422E69DA (MediaPickCallback_tD45122EE821122554E85E2533DD2C2D89404D617 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___paths0' to native representation
	char** ____paths0_marshaled = NULL;
	if (___paths0 != NULL)
	{
		il2cpp_array_size_t ____paths0_Length = (___paths0)->max_length;
		____paths0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paths0_Length + 1);
		(____paths0_marshaled)[____paths0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_Length); i++)
		{
			(____paths0_marshaled)[i] = il2cpp_codegen_marshal_string((___paths0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paths0_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____paths0_marshaled);

	// Marshaling cleanup of parameter '___paths0' native representation
	if (____paths0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paths0_marshaled_CleanupLoopCount = (___paths0 != NULL) ? (___paths0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paths0_marshaled)[i]);
			(____paths0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paths0_marshaled);
		____paths0_marshaled = NULL;
	}

}
// System.Void NativeGallery/MediaPickMultipleCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback__ctor_m13001DD08A7C1B755DF8FD3ECB02D1860C446A3A (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_mB18BC813FE91A071CEC50F59C5DEEA2C878D2B27 (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___paths0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___paths0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___paths0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___paths0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___paths0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(targetMethod, targetThis, ___paths0);
					else
						GenericVirtActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(targetMethod, targetThis, ___paths0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___paths0);
					else
						VirtActionInvoker1< StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___paths0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___paths0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaPickMultipleCallback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaPickMultipleCallback_BeginInvoke_m19A130D1CA50B0F975A4661C6EB8B9F08F53724E (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___paths0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___paths0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void NativeGallery/MediaPickMultipleCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_EndInvoke_m6D807095FCD704863F0D5FCC239F0E0505BD09FE (MediaPickMultipleCallback_tB4546E7DA9FB3A6F7F3FE1D37B6123F2F400DC8C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___path1' to native representation
	char* ____path1_marshaled = NULL;
	____path1_marshaled = il2cpp_codegen_marshal_string(___path1);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___success0), ____path1_marshaled);

	// Marshaling cleanup of parameter '___path1' native representation
	il2cpp_codegen_marshal_free(____path1_marshaled);
	____path1_marshaled = NULL;

}
// System.Void NativeGallery/MediaSaveCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback__ctor_mA1AAA2DFE762CB3F438D66355852B886817A7041 (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_m37F11710C6E9EC74CEE2A568E63456183301819D (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, bool ___success0, String_t* ___path1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___success0, ___path1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___path1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< bool, String_t* >::Invoke(targetMethod, targetThis, ___success0, ___path1);
					else
						GenericVirtActionInvoker2< bool, String_t* >::Invoke(targetMethod, targetThis, ___success0, ___path1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___success0, ___path1);
					else
						VirtActionInvoker2< bool, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___success0, ___path1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___path1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaSaveCallback::BeginInvoke(System.Boolean,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaSaveCallback_BeginInvoke_m960CD9C1C066BA0A1D7AABA7F92EA7E2CF55A9C8 (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, bool ___success0, String_t* ___path1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___success0);
	__d_args[1] = ___path1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void NativeGallery/MediaSaveCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaSaveCallback_EndInvoke_m8097D6FA452886D9AF98B1A4FDFCC16D43FAF89E (MediaSaveCallback_t95B5A4B419D4C90EEBAFCCDD3603C0997CC31C9E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoProperties__ctor_m99DEF6303739A1066E891A8C78E0623AEEE25616 (VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31 * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	{
		// this.width = width;
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		// this.height = height;
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		// this.duration = duration;
		int64_t L_2 = ___duration2;
		__this->set_duration_2(L_2);
		// this.rotation = rotation;
		float L_3 = ___rotation3;
		__this->set_rotation_3(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void VideoProperties__ctor_m99DEF6303739A1066E891A8C78E0623AEEE25616_AdjustorThunk (RuntimeObject * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31 * _thisAdjusted = reinterpret_cast<VideoProperties_t46EFDC70D401885E1747EAAB4B03C0013EDB6A31 *>(__this + _offset);
	VideoProperties__ctor_m99DEF6303739A1066E891A8C78E0623AEEE25616(_thisAdjusted, ___width0, ___height1, ___duration2, ___rotation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NGMediaReceiveCallbackiOS_get_IsBusy_m091AFD5DEAB7725B736EEE337FDB7E4BE9C90569_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ((NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var))->get_U3CIsBusyU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackiOS_set_IsBusy_m1E67EEDE1C95E28A1E38E32EE6A4C60EC8285599_inline (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsBusy { get; private set; }
		bool L_0 = ___value0;
		((NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_StaticFields*)il2cpp_codegen_static_fields_for(NGMediaReceiveCallbackiOS_tFF87DFAA92939B3F3709A0F08013D8A496F3B81F_il2cpp_TypeInfo_var))->set_U3CIsBusyU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
