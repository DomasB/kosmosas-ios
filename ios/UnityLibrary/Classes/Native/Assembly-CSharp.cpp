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

// <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>
struct U3CU3Ef__AnonymousType0_4_t6AD706F84E39BA82CD246ACA839166C93733D2BF;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>
struct Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t9DF74D741578F090EC2B64A9F94C72146C743F50;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,FlutterUnityIntegration.UnityMessage>
struct KeyCollection_tFD6EAC9EDDDF1958529FD48BCCD422AEB0BA5A75;
// System.Lazy`1<FlutterUnityIntegration.UnityMessageManager>
struct Lazy_1_tB3A9C5B279DF20AA275DE4D4A76AC26805F2A92F;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>
struct SingletonMonoBehaviour_1_t719DA018B858B099F440F864D5F27D9170057E38;
// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>
struct SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,FlutterUnityIntegration.UnityMessage>
struct ValueCollection_t5BC6A29EC29D78DE7FB31C4B38F17CE799B98B59;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,FlutterUnityIntegration.UnityMessage>[]
struct EntryU5BU5D_tE9880B380E7A23701B9B2F0F7FC3340EB150C0B2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// FlutterComunicator
struct FlutterComunicator_tB05365E9D93370BDC94411631B7D49171A55E4A2;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4;
// Newtonsoft.Json.Linq.JObject
struct JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39;
// Newtonsoft.Json.Linq.JToken
struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// FlutterUnityIntegration.MessageHandler
struct MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// FlutterUnityIntegration.NativeAPI
struct NativeAPI_tAFA6EBEC64FFF6CB2F1F977521E8F1784302AA8F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// Rotate
struct Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789;
// Rotation
struct Rotation_t494A089B49580F1EC9172DD688C6EC94B1E4EEEE;
// SceneLoader
struct SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// FlutterUnityIntegration.UnityMessage
struct UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C;
// FlutterUnityIntegration.UnityMessageManager
struct UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// VideoLoader
struct VideoLoader_t0DD118854EEE4AE30BD78692DD24635B664CCADB;
// VideoManager
struct VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// FlutterUnityIntegration.UnityMessageManager/MessageDelegate
struct MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358;
// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2D7BBE69848ACE22B59D39BEC7ADC4F842AED11D;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208;
IL2CPP_EXTERN_C String_t* _stringLiteral5B7D9A990938B2018187DFD0AC17A9784E029FD5;
IL2CPP_EXTERN_C String_t* _stringLiteral60D5801B3DE1545126B373152DA0C17EB568D85F;
IL2CPP_EXTERN_C String_t* _stringLiteral63A7BC5625BD73B4EFFB4EB777EA75B79C73E722;
IL2CPP_EXTERN_C String_t* _stringLiteral7822DC3F47B87491C99A8723A4A41B27E9B9D6EE;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9D27829CAE2E3F203B547B0861A45BDAE1B6D3EB;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA8045E997F6A30602D5147099A2B221E2F630869;
IL2CPP_EXTERN_C String_t* _stringLiteralAD4B4CE32116FB11272FE7EB247DB7BB846C5CFF;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD945C749A458FF6A175D75E12A5F6D40E433D7;
IL2CPP_EXTERN_C String_t* _stringLiteralC7482193E8D01B80483F5F3F840A549FBF0FCB33;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_m075280F90036F444581BA51157B81ABE3A52E606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF73624630EBCFCE429DC999836F6360B9A142CB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m24776CFA371F3A05691D95132D833F174517B9F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m632CD22F4BF480DAF6AF3E112E969C3E62F823D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4724441A8E3BEF3DD6E5EDA6C33642B2C477D597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_m89732301EDD9F6D05DC1B2E62135CB5A001D7DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_getData_TisRuntimeObject_mBCF55C4D072035F0B1806C275E8687801155A8EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1__ctor_m8E6FFD25C2D9B504DA04632E9F7C677A2DB6B976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_OnSceneLoaded_mBF688E62EE4D0F09D2214DBBF04CB8FBE8BA9005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VideoLoader_EndReached_m42BF30AD79CE7D2A1FB5C4EE022F804CD3D70E6C_RuntimeMethod_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5  : public RuntimeObject
{
public:
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * ___U3CdataU3Ei__Field_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CidU3Ei__Field_0)); }
	inline int32_t get_U3CidU3Ei__Field_0() const { return ___U3CidU3Ei__Field_0; }
	inline int32_t* get_address_of_U3CidU3Ei__Field_0() { return &___U3CidU3Ei__Field_0; }
	inline void set_U3CidU3Ei__Field_0(int32_t value)
	{
		___U3CidU3Ei__Field_0 = value;
	}

	inline static int32_t get_offset_of_U3CseqU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CseqU3Ei__Field_1)); }
	inline String_t* get_U3CseqU3Ei__Field_1() const { return ___U3CseqU3Ei__Field_1; }
	inline String_t** get_address_of_U3CseqU3Ei__Field_1() { return &___U3CseqU3Ei__Field_1; }
	inline void set_U3CseqU3Ei__Field_1(String_t* value)
	{
		___U3CseqU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CseqU3Ei__Field_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ei__Field_2() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CnameU3Ei__Field_2)); }
	inline String_t* get_U3CnameU3Ei__Field_2() const { return ___U3CnameU3Ei__Field_2; }
	inline String_t** get_address_of_U3CnameU3Ei__Field_2() { return &___U3CnameU3Ei__Field_2; }
	inline void set_U3CnameU3Ei__Field_2(String_t* value)
	{
		___U3CnameU3Ei__Field_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ei__Field_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ei__Field_3() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5, ___U3CdataU3Ei__Field_3)); }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * get_U3CdataU3Ei__Field_3() const { return ___U3CdataU3Ei__Field_3; }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 ** get_address_of_U3CdataU3Ei__Field_3() { return &___U3CdataU3Ei__Field_3; }
	inline void set_U3CdataU3Ei__Field_3(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * value)
	{
		___U3CdataU3Ei__Field_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ei__Field_3), (void*)value);
	}
};


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6  : public RuntimeObject
{
public:
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	RuntimeObject * ___U3CdataU3Ei__Field_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ei__Field_0() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CidU3Ei__Field_0)); }
	inline int32_t get_U3CidU3Ei__Field_0() const { return ___U3CidU3Ei__Field_0; }
	inline int32_t* get_address_of_U3CidU3Ei__Field_0() { return &___U3CidU3Ei__Field_0; }
	inline void set_U3CidU3Ei__Field_0(int32_t value)
	{
		___U3CidU3Ei__Field_0 = value;
	}

	inline static int32_t get_offset_of_U3CseqU3Ei__Field_1() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CseqU3Ei__Field_1)); }
	inline String_t* get_U3CseqU3Ei__Field_1() const { return ___U3CseqU3Ei__Field_1; }
	inline String_t** get_address_of_U3CseqU3Ei__Field_1() { return &___U3CseqU3Ei__Field_1; }
	inline void set_U3CseqU3Ei__Field_1(String_t* value)
	{
		___U3CseqU3Ei__Field_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CseqU3Ei__Field_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ei__Field_2() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CnameU3Ei__Field_2)); }
	inline String_t* get_U3CnameU3Ei__Field_2() const { return ___U3CnameU3Ei__Field_2; }
	inline String_t** get_address_of_U3CnameU3Ei__Field_2() { return &___U3CnameU3Ei__Field_2; }
	inline void set_U3CnameU3Ei__Field_2(String_t* value)
	{
		___U3CnameU3Ei__Field_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ei__Field_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3Ei__Field_3() { return static_cast<int32_t>(offsetof(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6, ___U3CdataU3Ei__Field_3)); }
	inline RuntimeObject * get_U3CdataU3Ei__Field_3() const { return ___U3CdataU3Ei__Field_3; }
	inline RuntimeObject ** get_address_of_U3CdataU3Ei__Field_3() { return &___U3CdataU3Ei__Field_3; }
	inline void set_U3CdataU3Ei__Field_3(RuntimeObject * value)
	{
		___U3CdataU3Ei__Field_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdataU3Ei__Field_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>
struct Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE9880B380E7A23701B9B2F0F7FC3340EB150C0B2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tFD6EAC9EDDDF1958529FD48BCCD422AEB0BA5A75 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5BC6A29EC29D78DE7FB31C4B38F17CE799B98B59 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2, ___entries_1)); }
	inline EntryU5BU5D_tE9880B380E7A23701B9B2F0F7FC3340EB150C0B2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE9880B380E7A23701B9B2F0F7FC3340EB150C0B2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE9880B380E7A23701B9B2F0F7FC3340EB150C0B2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2, ___keys_7)); }
	inline KeyCollection_tFD6EAC9EDDDF1958529FD48BCCD422AEB0BA5A75 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tFD6EAC9EDDDF1958529FD48BCCD422AEB0BA5A75 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tFD6EAC9EDDDF1958529FD48BCCD422AEB0BA5A75 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2, ___values_8)); }
	inline ValueCollection_t5BC6A29EC29D78DE7FB31C4B38F17CE799B98B59 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5BC6A29EC29D78DE7FB31C4B38F17CE799B98B59 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5BC6A29EC29D78DE7FB31C4B38F17CE799B98B59 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Newtonsoft.Json.Linq.JToken
struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____parent_1)); }
	inline JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * get__parent_1() const { return ____parent_1; }
	inline JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____previous_2)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get__previous_2() const { return ____previous_2; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____next_3)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get__next_3() const { return ____next_3; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};


// FlutterUnityIntegration.MessageHandler
struct MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33  : public RuntimeObject
{
public:
	// System.Int32 FlutterUnityIntegration.MessageHandler::id
	int32_t ___id_0;
	// System.String FlutterUnityIntegration.MessageHandler::seq
	String_t* ___seq_1;
	// System.String FlutterUnityIntegration.MessageHandler::name
	String_t* ___name_2;
	// Newtonsoft.Json.Linq.JToken FlutterUnityIntegration.MessageHandler::data
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___data_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_seq_1() { return static_cast<int32_t>(offsetof(MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33, ___seq_1)); }
	inline String_t* get_seq_1() const { return ___seq_1; }
	inline String_t** get_address_of_seq_1() { return &___seq_1; }
	inline void set_seq_1(String_t* value)
	{
		___seq_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seq_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33, ___data_3)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get_data_3() const { return ___data_3; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}
};


// FlutterUnityIntegration.NativeAPI
struct NativeAPI_tAFA6EBEC64FFF6CB2F1F977521E8F1784302AA8F  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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


// FlutterUnityIntegration.UnityMessage
struct UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C  : public RuntimeObject
{
public:
	// System.String FlutterUnityIntegration.UnityMessage::name
	String_t* ___name_0;
	// Newtonsoft.Json.Linq.JObject FlutterUnityIntegration.UnityMessage::data
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * ___data_1;
	// System.Action`1<System.Object> FlutterUnityIntegration.UnityMessage::callBack
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___callBack_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C, ___data_1)); }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * get_data_1() const { return ___data_1; }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_1), (void*)value);
	}

	inline static int32_t get_offset_of_callBack_2() { return static_cast<int32_t>(offsetof(UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C, ___callBack_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_callBack_2() const { return ___callBack_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_callBack_2() { return &___callBack_2; }
	inline void set_callBack_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___callBack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callBack_2), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
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
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
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
struct IntPtr_t 
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


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4  : public JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_14;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB * ____addingNew_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;

public:
	inline static int32_t get_offset_of__listChanged_14() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____listChanged_14)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_14() const { return ____listChanged_14; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_14() { return &____listChanged_14; }
	inline void set__listChanged_14(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of__addingNew_15() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____addingNew_15)); }
	inline AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB * get__addingNew_15() const { return ____addingNew_15; }
	inline AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB ** get_address_of__addingNew_15() { return &____addingNew_15; }
	inline void set__addingNew_15(AddingNewEventHandler_t2407F1FD420B3D4997C0EFC15336D6BF71738EEB * value)
	{
		____addingNew_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addingNew_15), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}

	inline static int32_t get_offset_of__busy_17() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____busy_17)); }
	inline bool get__busy_17() const { return ____busy_17; }
	inline bool* get_address_of__busy_17() { return &____busy_17; }
	inline void set__busy_17(bool value)
	{
		____busy_17 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
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

// Newtonsoft.Json.Linq.JObject
struct JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34  : public JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * ___PropertyChanging_20;

public:
	inline static int32_t get_offset_of__properties_18() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ____properties_18)); }
	inline JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * get__properties_18() const { return ____properties_18; }
	inline JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 ** get_address_of__properties_18() { return &____properties_18; }
	inline void set__properties_18(JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * value)
	{
		____properties_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_18), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_19() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ___PropertyChanged_19)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_19() const { return ___PropertyChanged_19; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_19() { return &___PropertyChanged_19; }
	inline void set_PropertyChanged_19(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_20() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ___PropertyChanging_20)); }
	inline PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * get_PropertyChanging_20() const { return ___PropertyChanging_20; }
	inline PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B ** get_address_of_PropertyChanging_20() { return &___PropertyChanging_20; }
	inline void set_PropertyChanging_20(PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * value)
	{
		___PropertyChanging_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_20), (void*)value);
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingGroupID_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingGroupID_5)); }
	inline int32_t get_sortingGroupID_5() const { return ___sortingGroupID_5; }
	inline int32_t* get_address_of_sortingGroupID_5() { return &___sortingGroupID_5; }
	inline void set_sortingGroupID_5(int32_t value)
	{
		___sortingGroupID_5 = value;
	}

	inline static int32_t get_offset_of_sortingGroupOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingGroupOrder_6)); }
	inline int32_t get_sortingGroupOrder_6() const { return ___sortingGroupOrder_6; }
	inline int32_t* get_address_of_sortingGroupOrder_6() { return &___sortingGroupOrder_6; }
	inline void set_sortingGroupOrder_6(int32_t value)
	{
		___sortingGroupOrder_6 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_7)); }
	inline int32_t get_sortingLayer_7() const { return ___sortingLayer_7; }
	inline int32_t* get_address_of_sortingLayer_7() { return &___sortingLayer_7; }
	inline void set_sortingLayer_7(int32_t value)
	{
		___sortingLayer_7 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_8)); }
	inline int32_t get_sortingOrder_8() const { return ___sortingOrder_8; }
	inline int32_t* get_address_of_sortingOrder_8() { return &___sortingOrder_8; }
	inline void set_sortingOrder_8(int32_t value)
	{
		___sortingOrder_8 = value;
	}

	inline static int32_t get_offset_of_worldPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_9() const { return ___worldPosition_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_9() { return &___worldPosition_9; }
	inline void set_worldPosition_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_9 = value;
	}

	inline static int32_t get_offset_of_worldNormal_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_10() const { return ___worldNormal_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_10() { return &___worldNormal_10; }
	inline void set_worldNormal_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_10 = value;
	}

	inline static int32_t get_offset_of_screenPosition_11() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_11() const { return ___screenPosition_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_11() { return &___screenPosition_11; }
	inline void set_screenPosition_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_11 = value;
	}

	inline static int32_t get_offset_of_displayIndex_12() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_12)); }
	inline int32_t get_displayIndex_12() const { return ___displayIndex_12; }
	inline int32_t* get_address_of_displayIndex_12() { return &___displayIndex_12; }
	inline void set_displayIndex_12(int32_t value)
	{
		___displayIndex_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_9;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_10;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_9;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_10;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
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

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// FlutterUnityIntegration.UnityMessageManager/MessageDelegate
struct MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358  : public MulticastDelegate_t
{
public:

public:
};


// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};


// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___prepareCompleted_4)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___loopPointReached_5)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___started_6)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_started_6() const { return ___started_6; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameDropped_7)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___errorReceived_8)); }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___seekCompleted_9)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameReady_11)); }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};


// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>
struct SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// FlutterComunicator
struct FlutterComunicator_tB05365E9D93370BDC94411631B7D49171A55E4A2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Rotate
struct Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 Rotate::RotateAmount
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___RotateAmount_4;

public:
	inline static int32_t get_offset_of_RotateAmount_4() { return static_cast<int32_t>(offsetof(Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789, ___RotateAmount_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_RotateAmount_4() const { return ___RotateAmount_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_RotateAmount_4() { return &___RotateAmount_4; }
	inline void set_RotateAmount_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___RotateAmount_4 = value;
	}
};


// Rotation
struct Rotation_t494A089B49580F1EC9172DD688C6EC94B1E4EEEE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Rotation::axis
	float ___axis_4;

public:
	inline static int32_t get_offset_of_axis_4() { return static_cast<int32_t>(offsetof(Rotation_t494A089B49580F1EC9172DD688C6EC94B1E4EEEE, ___axis_4)); }
	inline float get_axis_4() const { return ___axis_4; }
	inline float* get_address_of_axis_4() { return &___axis_4; }
	inline void set_axis_4(float value)
	{
		___axis_4 = value;
	}
};


// SceneLoader
struct SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// VideoLoader
struct VideoLoader_t0DD118854EEE4AE30BD78692DD24635B664CCADB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Video.VideoPlayer VideoLoader::videoPlayer
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___videoPlayer_4;

public:
	inline static int32_t get_offset_of_videoPlayer_4() { return static_cast<int32_t>(offsetof(VideoLoader_t0DD118854EEE4AE30BD78692DD24635B664CCADB, ___videoPlayer_4)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_videoPlayer_4() const { return ___videoPlayer_4; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_videoPlayer_4() { return &___videoPlayer_4; }
	inline void set_videoPlayer_4(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___videoPlayer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoPlayer_4), (void*)value);
	}
};


// VideoManager
struct VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Video.VideoPlayer VideoManager::player
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___player_4;
	// UnityEngine.UI.Image VideoManager::progress
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___progress_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6, ___player_4)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_player_4() const { return ___player_4; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_progress_5() { return static_cast<int32_t>(offsetof(VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6, ___progress_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_progress_5() const { return ___progress_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_progress_5() { return &___progress_5; }
	inline void set_progress_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___progress_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_5), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTargetCache_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTargetCache_11)); }
	inline bool get_m_RaycastTargetCache_11() const { return ___m_RaycastTargetCache_11; }
	inline bool* get_address_of_m_RaycastTargetCache_11() { return &___m_RaycastTargetCache_11; }
	inline void set_m_RaycastTargetCache_11(bool value)
	{
		___m_RaycastTargetCache_11 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_12() const { return ___m_RaycastPadding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_12() { return &___m_RaycastPadding_12; }
	inline void set_m_RaycastPadding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_12 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_13)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_13() const { return ___m_RectTransform_13; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_13() { return &___m_RectTransform_13; }
	inline void set_m_RectTransform_13(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_14)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_14() const { return ___m_CanvasRenderer_14; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_14() { return &___m_CanvasRenderer_14; }
	inline void set_m_CanvasRenderer_14(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_15)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_16)); }
	inline bool get_m_VertsDirty_16() const { return ___m_VertsDirty_16; }
	inline bool* get_address_of_m_VertsDirty_16() { return &___m_VertsDirty_16; }
	inline void set_m_VertsDirty_16(bool value)
	{
		___m_VertsDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_17)); }
	inline bool get_m_MaterialDirty_17() const { return ___m_MaterialDirty_17; }
	inline bool* get_address_of_m_MaterialDirty_17() { return &___m_MaterialDirty_17; }
	inline void set_m_MaterialDirty_17(bool value)
	{
		___m_MaterialDirty_17 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_18() const { return ___m_OnDirtyLayoutCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_18() { return &___m_OnDirtyLayoutCallback_18; }
	inline void set_m_OnDirtyLayoutCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_19() const { return ___m_OnDirtyVertsCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_19() { return &___m_OnDirtyVertsCallback_19; }
	inline void set_m_OnDirtyVertsCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_20)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_20() const { return ___m_OnDirtyMaterialCallback_20; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_20() { return &___m_OnDirtyMaterialCallback_20; }
	inline void set_m_OnDirtyMaterialCallback_20(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_23)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_23() const { return ___m_CachedMesh_23; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_23() { return &___m_CachedMesh_23; }
	inline void set_m_CachedMesh_23(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_24)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_24() const { return ___m_CachedUvs_24; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_24() { return &___m_CachedUvs_24; }
	inline void set_m_CachedUvs_24(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_25)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_25() const { return ___m_ColorTweenRunner_25; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_25() { return &___m_ColorTweenRunner_25; }
	inline void set_m_ColorTweenRunner_25(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_26(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_26 = value;
	}
};


// FlutterUnityIntegration.UnityMessageManager
struct UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0  : public SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E
{
public:
	// FlutterUnityIntegration.UnityMessageManager/MessageDelegate FlutterUnityIntegration.UnityMessageManager::OnMessage
	MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * ___OnMessage_7;
	// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate FlutterUnityIntegration.UnityMessageManager::OnFlutterMessage
	MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * ___OnFlutterMessage_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage> FlutterUnityIntegration.UnityMessageManager::waitCallbackMessageMap
	Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 * ___waitCallbackMessageMap_9;

public:
	inline static int32_t get_offset_of_OnMessage_7() { return static_cast<int32_t>(offsetof(UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0, ___OnMessage_7)); }
	inline MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * get_OnMessage_7() const { return ___OnMessage_7; }
	inline MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 ** get_address_of_OnMessage_7() { return &___OnMessage_7; }
	inline void set_OnMessage_7(MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * value)
	{
		___OnMessage_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnFlutterMessage_8() { return static_cast<int32_t>(offsetof(UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0, ___OnFlutterMessage_8)); }
	inline MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * get_OnFlutterMessage_8() const { return ___OnFlutterMessage_8; }
	inline MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C ** get_address_of_OnFlutterMessage_8() { return &___OnFlutterMessage_8; }
	inline void set_OnFlutterMessage_8(MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * value)
	{
		___OnFlutterMessage_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFlutterMessage_8), (void*)value);
	}

	inline static int32_t get_offset_of_waitCallbackMessageMap_9() { return static_cast<int32_t>(offsetof(UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0, ___waitCallbackMessageMap_9)); }
	inline Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 * get_waitCallbackMessageMap_9() const { return ___waitCallbackMessageMap_9; }
	inline Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 ** get_address_of_waitCallbackMessageMap_9() { return &___waitCallbackMessageMap_9; }
	inline void set_waitCallbackMessageMap_9(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 * value)
	{
		___waitCallbackMessageMap_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitCallbackMessageMap_9), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_36;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_27)); }
	inline bool get_m_ShouldRecalculateStencil_27() const { return ___m_ShouldRecalculateStencil_27; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_27() { return &___m_ShouldRecalculateStencil_27; }
	inline void set_m_ShouldRecalculateStencil_27(bool value)
	{
		___m_ShouldRecalculateStencil_27 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_28() const { return ___m_MaskMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_28() { return &___m_MaskMaterial_28; }
	inline void set_m_MaskMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_29)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_29() const { return ___m_ParentMask_29; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_29() { return &___m_ParentMask_29; }
	inline void set_m_ParentMask_29(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_30)); }
	inline bool get_m_Maskable_30() const { return ___m_Maskable_30; }
	inline bool* get_address_of_m_Maskable_30() { return &___m_Maskable_30; }
	inline void set_m_Maskable_30(bool value)
	{
		___m_Maskable_30 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_31)); }
	inline bool get_m_IsMaskingGraphic_31() const { return ___m_IsMaskingGraphic_31; }
	inline bool* get_address_of_m_IsMaskingGraphic_31() { return &___m_IsMaskingGraphic_31; }
	inline void set_m_IsMaskingGraphic_31(bool value)
	{
		___m_IsMaskingGraphic_31 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_32)); }
	inline bool get_m_IncludeForMasking_32() const { return ___m_IncludeForMasking_32; }
	inline bool* get_address_of_m_IncludeForMasking_32() { return &___m_IncludeForMasking_32; }
	inline void set_m_IncludeForMasking_32(bool value)
	{
		___m_IncludeForMasking_32 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_33)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_33() const { return ___m_OnCullStateChanged_33; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_33() { return &___m_OnCullStateChanged_33; }
	inline void set_m_OnCullStateChanged_33(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_34)); }
	inline bool get_m_ShouldRecalculate_34() const { return ___m_ShouldRecalculate_34; }
	inline bool* get_address_of_m_ShouldRecalculate_34() { return &___m_ShouldRecalculate_34; }
	inline void set_m_ShouldRecalculate_34(bool value)
	{
		___m_ShouldRecalculate_34 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_35)); }
	inline int32_t get_m_StencilValue_35() const { return ___m_StencilValue_35; }
	inline int32_t* get_address_of_m_StencilValue_35() { return &___m_StencilValue_35; }
	inline void set_m_StencilValue_35(int32_t value)
	{
		___m_StencilValue_35 = value;
	}

	inline static int32_t get_offset_of_m_Corners_36() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_36)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_36() const { return ___m_Corners_36; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_36() { return &___m_Corners_36; }
	inline void set_m_Corners_36(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_36), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;

public:
	inline static int32_t get_offset_of_m_Sprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_38() const { return ___m_Sprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_38() { return &___m_Sprite_38; }
	inline void set_m_Sprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_39)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_39() const { return ___m_OverrideSprite_39; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_39() { return &___m_OverrideSprite_39; }
	inline void set_m_OverrideSprite_39(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_40)); }
	inline int32_t get_m_Type_40() const { return ___m_Type_40; }
	inline int32_t* get_address_of_m_Type_40() { return &___m_Type_40; }
	inline void set_m_Type_40(int32_t value)
	{
		___m_Type_40 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_41)); }
	inline bool get_m_PreserveAspect_41() const { return ___m_PreserveAspect_41; }
	inline bool* get_address_of_m_PreserveAspect_41() { return &___m_PreserveAspect_41; }
	inline void set_m_PreserveAspect_41(bool value)
	{
		___m_PreserveAspect_41 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_42)); }
	inline bool get_m_FillCenter_42() const { return ___m_FillCenter_42; }
	inline bool* get_address_of_m_FillCenter_42() { return &___m_FillCenter_42; }
	inline void set_m_FillCenter_42(bool value)
	{
		___m_FillCenter_42 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_43)); }
	inline int32_t get_m_FillMethod_43() const { return ___m_FillMethod_43; }
	inline int32_t* get_address_of_m_FillMethod_43() { return &___m_FillMethod_43; }
	inline void set_m_FillMethod_43(int32_t value)
	{
		___m_FillMethod_43 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_44)); }
	inline float get_m_FillAmount_44() const { return ___m_FillAmount_44; }
	inline float* get_address_of_m_FillAmount_44() { return &___m_FillAmount_44; }
	inline void set_m_FillAmount_44(float value)
	{
		___m_FillAmount_44 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_45)); }
	inline bool get_m_FillClockwise_45() const { return ___m_FillClockwise_45; }
	inline bool* get_address_of_m_FillClockwise_45() { return &___m_FillClockwise_45; }
	inline void set_m_FillClockwise_45(bool value)
	{
		___m_FillClockwise_45 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_46)); }
	inline int32_t get_m_FillOrigin_46() const { return ___m_FillOrigin_46; }
	inline int32_t* get_address_of_m_FillOrigin_46() { return &___m_FillOrigin_46; }
	inline void set_m_FillOrigin_46(int32_t value)
	{
		___m_FillOrigin_46 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_47)); }
	inline float get_m_AlphaHitTestMinimumThreshold_47() const { return ___m_AlphaHitTestMinimumThreshold_47; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_47() { return &___m_AlphaHitTestMinimumThreshold_47; }
	inline void set_m_AlphaHitTestMinimumThreshold_47(float value)
	{
		___m_AlphaHitTestMinimumThreshold_47 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_48)); }
	inline bool get_m_Tracked_48() const { return ___m_Tracked_48; }
	inline bool* get_address_of_m_Tracked_48() { return &___m_Tracked_48; }
	inline void set_m_Tracked_48(bool value)
	{
		___m_Tracked_48 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_49)); }
	inline bool get_m_UseSpriteMesh_49() const { return ___m_UseSpriteMesh_49; }
	inline bool* get_address_of_m_UseSpriteMesh_49() { return &___m_UseSpriteMesh_49; }
	inline void set_m_UseSpriteMesh_49(bool value)
	{
		___m_UseSpriteMesh_49 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_50)); }
	inline float get_m_PixelsPerUnitMultiplier_50() const { return ___m_PixelsPerUnitMultiplier_50; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_50() { return &___m_PixelsPerUnitMultiplier_50; }
	inline void set_m_PixelsPerUnitMultiplier_50(float value)
	{
		___m_PixelsPerUnitMultiplier_50 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_51)); }
	inline float get_m_CachedReferencePixelsPerUnit_51() const { return ___m_CachedReferencePixelsPerUnit_51; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_51() { return &___m_CachedReferencePixelsPerUnit_51; }
	inline void set_m_CachedReferencePixelsPerUnit_51(float value)
	{
		___m_CachedReferencePixelsPerUnit_51 = value;
	}
};


// <Module>


// <Module>


// System.Object


// System.Object


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>


// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>


// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>


// System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>


// UnityEngine.EventSystems.AbstractEventData


// UnityEngine.EventSystems.AbstractEventData

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};


// System.Globalization.CultureInfo


// Newtonsoft.Json.Linq.JToken

struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 * ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_t0E5DB261B004137A3EE94DB97E554351FC500AA0 * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JToken


// FlutterUnityIntegration.MessageHandler


// FlutterUnityIntegration.MessageHandler


// FlutterUnityIntegration.NativeAPI


// FlutterUnityIntegration.NativeAPI


// System.String

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


// System.String


// FlutterUnityIntegration.UnityMessage


// FlutterUnityIntegration.UnityMessage


// System.ValueType


// System.ValueType


// UnityEngine.EventSystems.BaseEventData


// UnityEngine.EventSystems.BaseEventData


// System.Boolean

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


// System.Boolean


// UnityEngine.Color


// UnityEngine.Color


// System.Enum

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


// System.Enum


// System.Int32


// System.Int32


// System.Int64


// System.Int64


// System.IntPtr

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


// System.IntPtr


// Newtonsoft.Json.Linq.JContainer


// Newtonsoft.Json.Linq.JContainer


// UnityEngine.Rect


// UnityEngine.Rect


// UnityEngine.SceneManagement.Scene


// UnityEngine.SceneManagement.Scene


// System.Single


// System.Single


// System.UInt64


// System.UInt64


// UnityEngine.Vector2

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2


// UnityEngine.Vector3

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3


// UnityEngine.Vector4

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.Vector4


// System.Void


// System.Void


// System.Delegate


// System.Delegate


// Newtonsoft.Json.Linq.JObject


// Newtonsoft.Json.Linq.JObject


// UnityEngine.SceneManagement.LoadSceneMode


// UnityEngine.SceneManagement.LoadSceneMode


// System.Globalization.NumberStyles


// System.Globalization.NumberStyles


// UnityEngine.Object

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


// UnityEngine.Object


// UnityEngine.Ray


// UnityEngine.Ray


// UnityEngine.RaycastHit


// UnityEngine.RaycastHit


// UnityEngine.EventSystems.RaycastResult


// UnityEngine.EventSystems.RaycastResult


// UnityEngine.TouchPhase


// UnityEngine.TouchPhase


// UnityEngine.TouchType


// UnityEngine.TouchType


// UnityEngine.UI.Image/FillMethod


// UnityEngine.UI.Image/FillMethod


// UnityEngine.UI.Image/Type


// UnityEngine.UI.Image/Type


// UnityEngine.EventSystems.PointerEventData/InputButton


// UnityEngine.EventSystems.PointerEventData/InputButton


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// System.MulticastDelegate


// System.MulticastDelegate


// System.Globalization.NumberFormatInfo

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.Globalization.NumberFormatInfo


// UnityEngine.EventSystems.PointerEventData


// UnityEngine.EventSystems.PointerEventData


// UnityEngine.Texture

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


// UnityEngine.Texture


// UnityEngine.Touch


// UnityEngine.Touch


// System.Action`1<System.Object>


// System.Action`1<System.Object>


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>


// System.AsyncCallback


// System.AsyncCallback


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// UnityEngine.RenderTexture


// UnityEngine.RenderTexture


// UnityEngine.Transform


// UnityEngine.Transform


// FlutterUnityIntegration.UnityMessageManager/MessageDelegate


// FlutterUnityIntegration.UnityMessageManager/MessageDelegate


// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate


// FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate


// UnityEngine.Video.VideoPlayer/EventHandler


// UnityEngine.Video.VideoPlayer/EventHandler


// UnityEngine.Camera

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Camera


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.RectTransform

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.RectTransform


// UnityEngine.Video.VideoPlayer


// UnityEngine.Video.VideoPlayer


// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>

struct SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_StaticFields
{
public:
	// System.Lazy`1<T> FlutterUnityIntegration.SingletonMonoBehaviour`1::LazyInstance
	Lazy_1_tB3A9C5B279DF20AA275DE4D4A76AC26805F2A92F * ___LazyInstance_4;

public:
	inline static int32_t get_offset_of_LazyInstance_4() { return static_cast<int32_t>(offsetof(SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_StaticFields, ___LazyInstance_4)); }
	inline Lazy_1_tB3A9C5B279DF20AA275DE4D4A76AC26805F2A92F * get_LazyInstance_4() const { return ___LazyInstance_4; }
	inline Lazy_1_tB3A9C5B279DF20AA275DE4D4A76AC26805F2A92F ** get_address_of_LazyInstance_4() { return &___LazyInstance_4; }
	inline void set_LazyInstance_4(Lazy_1_tB3A9C5B279DF20AA275DE4D4A76AC26805F2A92F * value)
	{
		___LazyInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LazyInstance_4), (void*)value);
	}
};


// FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>


// FlutterComunicator


// FlutterComunicator


// GameManager


// GameManager


// Rotate


// Rotate


// Rotation


// Rotation


// SceneLoader


// SceneLoader


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.EventSystems.UIBehaviour


// VideoLoader


// VideoLoader


// VideoManager


// VideoManager


// UnityEngine.UI.Graphic

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_22;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_21)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_21() const { return ___s_Mesh_21; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_21() { return &___s_Mesh_21; }
	inline void set_s_Mesh_21(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_22)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_22() const { return ___s_VertexHelper_22; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_22() { return &___s_VertexHelper_22; }
	inline void set_s_VertexHelper_22(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_22), (void*)value);
	}
};


// UnityEngine.UI.Graphic


// FlutterUnityIntegration.UnityMessageManager

struct UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_StaticFields
{
public:
	// System.Int32 FlutterUnityIntegration.UnityMessageManager::ID
	int32_t ___ID_6;

public:
	inline static int32_t get_offset_of_ID_6() { return static_cast<int32_t>(offsetof(UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_StaticFields, ___ID_6)); }
	inline int32_t get_ID_6() const { return ___ID_6; }
	inline int32_t* get_address_of_ID_6() { return &___ID_6; }
	inline void set_ID_6(int32_t value)
	{
		___ID_6 = value;
	}
};


// FlutterUnityIntegration.UnityMessageManager


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.Image

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_37)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_37() const { return ___s_ETC1DefaultUI_37; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_37() { return &___s_ETC1DefaultUI_37; }
	inline void set_s_ETC1DefaultUI_37(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_52() const { return ___s_VertScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_52() { return &___s_VertScratch_52; }
	inline void set_s_VertScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_53)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_53() const { return ___s_UVScratch_53; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_53() { return &___s_UVScratch_53; }
	inline void set_s_UVScratch_53(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_54() const { return ___s_Xy_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_54() { return &___s_Xy_54; }
	inline void set_s_Xy_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_54), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_55)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_55() const { return ___s_Uv_55; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_55() { return &___s_Uv_55; }
	inline void set_s_Uv_55(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_56)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_56() const { return ___m_TrackedTexturelessImages_56; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_56() { return &___m_TrackedTexturelessImages_56; }
	inline void set_m_TrackedTexturelessImages_56(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_56), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_57() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_57)); }
	inline bool get_s_Initialized_57() const { return ___s_Initialized_57; }
	inline bool* get_address_of_s_Initialized_57() { return &___s_Initialized_57; }
	inline void set_s_Initialized_57(bool value)
	{
		___s_Initialized_57 = value;
	}
};


// UnityEngine.UI.Image

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_m614062F255FD4C4AAB1B1671C7305AAFFC3D8995_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared (U3CU3Ef__AnonymousType0_4_t6AD706F84E39BA82CD246ACA839166C93733D2BF * __this, int32_t ___id0, RuntimeObject * ___seq1, RuntimeObject * ___name2, RuntimeObject * ___data3, const RuntimeMethod* method);
// T FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SingletonMonoBehaviour_1_get_Instance_m1A158FF034F5359F77388097B53894C47BBBFD95_gshared (const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared (UnityAction_2_t808E43EBC9AA89CEA5830BD187EC213182A02B50 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// T FlutterUnityIntegration.MessageHandler::getData<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MessageHandler_getData_TisRuntimeObject_mBCF55C4D072035F0B1806C275E8687801155A8EE_gshared (MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.SingletonMonoBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1__ctor_m5323FD74B99B628DB196F5B105FC86CA05A5A304_gshared (SingletonMonoBehaviour_1_t719DA018B858B099F440F864D5F27D9170057E38 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<FlutterUnityIntegration.UnityMessageManager>()
inline UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * Component_GetComponent_TisUnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_m075280F90036F444581BA51157B81ABE3A52E606 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_mCF83F5A72536ED6AEE688338609175F14BEE2ECA (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<FlutterUnityIntegration.UnityMessageManager>()
inline UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * GameObject_AddComponent_TisUnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_m89732301EDD9F6D05DC1B2E62135CB5A001D7DD8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013 (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Unload_mB43B4C8E75D00AE86683217680B4995C98259345 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267 (const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * JObject_Parse_mF299554CB71CD959B629CA0D082CE4FDC1308B5D (String_t* ___json0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0 (JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178_gshared)(___value0, method);
}
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_m614062F255FD4C4AAB1B1671C7305AAFFC3D8995_gshared)(___value0, method);
}
// System.Void FlutterUnityIntegration.MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m3A9630E11F9A7557A331BBBD0031D8738C876412 (MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___data3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, RuntimeObject * ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 *, int32_t, String_t*, String_t*, RuntimeObject *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * JObject_FromObject_m22BC3B5C870DDF5B83A095AA3C5A6AC09234C646 (RuntimeObject * ___o0, const RuntimeMethod* method);
// T FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>::get_Instance()
inline UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF (const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * (*) (const RuntimeMethod*))SingletonMonoBehaviour_1_get_Instance_m1A158FF034F5359F77388097B53894C47BBBFD95_gshared)(method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.NativeAPI::OnUnitySceneLoaded(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnitySceneLoaded_mAC0DE9B6447D85EE9CB3C020D55929E5EE6F684E (String_t* ___name0, int32_t ___buildIndex1, bool ___isLoaded2, bool ___IsValid3, const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.NativeAPI::OnUnityMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnityMessage_m3B3A79DDD217FC08730DF6A8573D3B791A7E9098 (String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m7C74CAE219D0DD4E0F41598BBC5869056575E62E (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_m4E3DB1CD03E916476426AB3F78B26F21690EE26B (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m4BD6E5347507B86D0D50C5834607BB23D3DBD82A (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m565DDA076AD6E8E57D4F3F698A760D7B5ACBF505 (const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205 (const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m280DEDAE92F4F3F5628ECDBD578650047962288B (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_mA6722B0932DA770D5C34C9E28D0E40220F099D50 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis0, float ___angle1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m308CC974940BEFA16AFA26DA0B82DB83E35632DC (int32_t ___sceneBuildIndex0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.UnityMessageManager::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_ShowHostMainWindow_m26F39C734CD7637E5CAC2DB0EBA034F7A3807A70 (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.UnityMessageManager::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_UnloadMainWindow_mF55EA9676017765661D93C4EA0C321B279A72E20 (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.UnityMessageManager::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_QuitUnityWindow_m5D8F4C318F36B37EB9BAB56CC1850D4C8F35963B (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m50E7B823E46CB327D49A2D55A761F57472037634_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m9633E3233FDB0C233A780E1D0E4FE80B54F6F307 (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * ___value0, const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m462E90E1A45A55B6B74AB65025209AB3D2B820BD (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_mD3286C848742A07E4114901E1F21DE689EF4ECD1 (const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_m4061CA0CA9C881C68C886637AAE8635FBBCCC83C (const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m75307D6C7A4739FF3A40FC903EEB113E73399EE9 (const RuntimeMethod* method);
// System.Void FlutterUnityIntegration.NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m4AF2579929562334C915646E9359899D1973F292 (String_t* ___message0, const RuntimeMethod* method);
// System.Int32 FlutterUnityIntegration.UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mFB32994A0DE5D36876E489F2605665A895A531B2 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::Add(!0,!1)
inline void Dictionary_2_Add_mF73624630EBCFCE429DC999836F6360B9A142CB2 (Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 * __this, int32_t ___key0, UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 *, int32_t, UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F (U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 *, int32_t, String_t*, String_t*, JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 *, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_mA42D0E885207E71D6D8CE9CC4A204CF6FDCA8565_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_mB8A275206E2D4267D2862C1F631AC91B442F1CAE (MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// FlutterUnityIntegration.MessageHandler FlutterUnityIntegration.MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * MessageHandler_Deserialize_m775F16345102A4444CBE3C251EB5C5152BA669C5 (String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m632CD22F4BF480DAF6AF3E112E969C3E62F823D9 (Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 * __this, int32_t ___key0, UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 *, int32_t, UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::Remove(!0)
inline bool Dictionary_2_Remove_m24776CFA371F3A05691D95132D833F174517B9F4 (Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// T FlutterUnityIntegration.MessageHandler::getData<System.Object>()
inline RuntimeObject * MessageHandler_getData_TisRuntimeObject_mBCF55C4D072035F0B1806C275E8687801155A8EE (MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 *, const RuntimeMethod*))MessageHandler_getData_TisRuntimeObject_mBCF55C4D072035F0B1806C275E8687801155A8EE_gshared)(__this, method);
}
// System.Void System.Action`1<System.Object>::Invoke(!0)
inline void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744 (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC *, RuntimeObject *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::Invoke(FlutterUnityIntegration.MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mF09B15BA0A43169E00AE11A59EBFDD32A274B42D (MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * __this, MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * ___handler0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,FlutterUnityIntegration.UnityMessage>::.ctor()
inline void Dictionary_2__ctor_m4724441A8E3BEF3DD6E5EDA6C33642B2C477D597 (Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void FlutterUnityIntegration.SingletonMonoBehaviour`1<FlutterUnityIntegration.UnityMessageManager>::.ctor()
inline void SingletonMonoBehaviour_1__ctor_m8E6FFD25C2D9B504DA04632E9F7C677A2DB6B976 (SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E * __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E *, const RuntimeMethod*))SingletonMonoBehaviour_1__ctor_m5323FD74B99B628DB196F5B105FC86CA05A5A304_gshared)(__this, method);
}
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mBA7560B393A50853AE3C28C096A03849B8627A4A (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_mA1A6722C36644D8F49E5A5008B68352561E03400 (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::add_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_loopPointReached_m01BBFFE55835498DFF2A1C8CEF3292B4780E4964 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_frame(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_frame_mC94AD83B85EF441B374D71F332F51D2CA8BDE42A (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, int64_t ___value0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Video.VideoPlayer::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * VideoPlayer_get_targetTexture_mBF23A9FD8FBD6989708C0244AE1105D789C51417 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_m533506E903688E798921C0D35F1B082522D88986 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, const RuntimeMethod* method);
// System.UInt64 UnityEngine.Video.VideoPlayer::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.Void VideoManager::TrySkip(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_TrySkip_m27FB9C87705335950BB274D390775D1551ABA356 (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m3C56E006591714917B01C30AA186C5316334E2B8 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___localPoint3, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m1A0AE609371BB464712207341F5AA46C756BA7C2 (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method);
// System.Void VideoManager::SkipToPercent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_SkipToPercent_mEFFFC675F8DF88F5B74628923BCD4B444D2E0A6F (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, float ___pct0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m9A4568E69F3C3DDD2F83AF8FC0D594E39C9B479A (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL OnUnityMessage(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL OnUnitySceneLoaded(char*, int32_t, int32_t, int32_t);
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
// System.Void FlutterComunicator::SendDetectedMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlutterComunicator_SendDetectedMessage_mD3B4BC37001D30D8AAC5ABBB42DD8D8585F43B87 (FlutterComunicator_tB05365E9D93370BDC94411631B7D49171A55E4A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_m075280F90036F444581BA51157B81ABE3A52E606_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var manager = GetComponent<UnityMessageManager>();
		UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * L_0;
		L_0 = Component_GetComponent_TisUnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_m075280F90036F444581BA51157B81ABE3A52E606(__this, /*hidden argument*/Component_GetComponent_TisUnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_m075280F90036F444581BA51157B81ABE3A52E606_RuntimeMethod_var);
		// manager.SendMessageToFlutter(gameObject.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityMessageManager_SendMessageToFlutter_mCF83F5A72536ED6AEE688338609175F14BEE2ECA(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterComunicator::Show3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlutterComunicator_Show3D_mFE98E01A443D9D6782A911DDCD27BEE33211EAC6 (FlutterComunicator_tB05365E9D93370BDC94411631B7D49171A55E4A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D7BBE69848ACE22B59D39BEC7ADC4F842AED11D);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	{
		// var object3D = gameObject.transform.Find("3D");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_1, _stringLiteral2D7BBE69848ACE22B59D39BEC7ADC4F842AED11D, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (object3D != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// object3D.gameObject.SetActive(true);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void FlutterComunicator::ShowVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlutterComunicator_ShowVideo_mD4878E83A578A7A546695B2E1D93C21962BC3AD0 (FlutterComunicator_tB05365E9D93370BDC94411631B7D49171A55E4A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD4B4CE32116FB11272FE7EB247DB7BB846C5CFF);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	{
		// var objectVideo = gameObject.transform.Find("Video");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_1, _stringLiteralAD4B4CE32116FB11272FE7EB247DB7BB846C5CFF, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (objectVideo != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// objectVideo.gameObject.SetActive(true);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void FlutterComunicator::Scan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlutterComunicator_Scan_m53DA98189D1EBBDC0095F059B204D8AE4912DA89 (FlutterComunicator_tB05365E9D93370BDC94411631B7D49171A55E4A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D7BBE69848ACE22B59D39BEC7ADC4F842AED11D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD4B4CE32116FB11272FE7EB247DB7BB846C5CFF);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	{
		// var object3D = gameObject.transform.Find("3D");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_1, _stringLiteral2D7BBE69848ACE22B59D39BEC7ADC4F842AED11D, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (object3D != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// object3D.gameObject.SetActive(false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = V_0;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// var objectVideo = gameObject.transform.Find("Video");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_8, _stringLiteralAD4B4CE32116FB11272FE7EB247DB7BB846C5CFF, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (objectVideo != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		// objectVideo.gameObject.SetActive(false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_1;
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void FlutterComunicator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlutterComunicator__ctor_mEA3277354475F73C706C89420F92F9E7E7C3372C (FlutterComunicator_tB05365E9D93370BDC94411631B7D49171A55E4A2 * __this, const RuntimeMethod* method)
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_m89732301EDD9F6D05DC1B2E62135CB5A001D7DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.AddComponent<UnityMessageManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * L_1;
		L_1 = GameObject_AddComponent_TisUnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_m89732301EDD9F6D05DC1B2E62135CB5A001D7DD8(L_0, /*hidden argument*/GameObject_AddComponent_TisUnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_m89732301EDD9F6D05DC1B2E62135CB5A001D7DD8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void GameManager::HandleWebFnCall(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleWebFnCall_m98C17B59E27800A88EDDBB6E8B0CCA6EB1AF0094 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, String_t* ___action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D5801B3DE1545126B373152DA0C17EB568D85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63A7BC5625BD73B4EFFB4EB777EA75B79C73E722);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8045E997F6A30602D5147099A2B221E2F630869);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7482193E8D01B80483F5F3F840A549FBF0FCB33);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___action0;
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_1 = ___action0;
		bool L_2;
		L_2 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_1, _stringLiteral63A7BC5625BD73B4EFFB4EB777EA75B79C73E722, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_3 = ___action0;
		bool L_4;
		L_4 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_3, _stringLiteral60D5801B3DE1545126B373152DA0C17EB568D85F, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_5 = ___action0;
		bool L_6;
		L_6 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_5, _stringLiteralC7482193E8D01B80483F5F3F840A549FBF0FCB33, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_7 = ___action0;
		bool L_8;
		L_8 = String_op_Equality_m50B3548E4AC232558190B0052877B290AA1D436A(L_7, _stringLiteralA8045E997F6A30602D5147099A2B221E2F630869, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0054;
		}
	}
	{
		return;
	}

IL_0038:
	{
		// Time.timeScale = 0;
		Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013((0.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0043:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m7970134AA05A399001D2D3844EB16D60C5275013((1.0f), /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004e:
	{
		// Application.Unload();
		Application_Unload_mB43B4C8E75D00AE86683217680B4995C98259345(/*hidden argument*/NULL);
		// break;
		return;
	}

IL_0054:
	{
		// Application.Quit();
		Application_Quit_m10E44C187C0E5807F9C955A176885FAA95829267(/*hidden argument*/NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
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
// FlutterUnityIntegration.MessageHandler FlutterUnityIntegration.MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * MessageHandler_Deserialize_m775F16345102A4444CBE3C251EB5C5152BA669C5 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * V_0 = NULL;
	{
		// var m = JObject.Parse(message);
		String_t* L_0 = ___message0;
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_1;
		L_1 = JObject_Parse_mF299554CB71CD959B629CA0D082CE4FDC1308B5D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var handler = new MessageHandler(
		//     m.GetValue("id").Value<int>(),
		//     m.GetValue("seq").Value<string>(),
		//     m.GetValue("name").Value<string>(),
		//     m.GetValue("data")
		// );
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_2 = V_0;
		NullCheck(L_2);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_3;
		L_3 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_2, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178(L_3, /*hidden argument*/Extensions_Value_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m8E8CC352B3A5B6A91B07E82564C7D6E59A9D8178_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_5 = V_0;
		NullCheck(L_5);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_6;
		L_6 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_5, _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002(L_6, /*hidden argument*/Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_8 = V_0;
		NullCheck(L_8);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_9;
		L_9 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_8, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002(L_9, /*hidden argument*/Extensions_Value_TisString_t_m5BC2A8CA688226BE26D685C5EA7BB57EC2975002_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_11 = V_0;
		NullCheck(L_11);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_12;
		L_12 = JObject_GetValue_mCC9DA25500AF2DDE4A6A3F0D8DF9BCC9D53612E0(L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, /*hidden argument*/NULL);
		MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * L_13 = (MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 *)il2cpp_codegen_object_new(MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33_il2cpp_TypeInfo_var);
		MessageHandler__ctor_m3A9630E11F9A7557A331BBBD0031D8738C876412(L_13, L_4, L_7, L_10, L_12, /*hidden argument*/NULL);
		// return handler;
		return L_13;
	}
}
// System.Void FlutterUnityIntegration.MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m3A9630E11F9A7557A331BBBD0031D8738C876412 (MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___data3, const RuntimeMethod* method)
{
	{
		// public MessageHandler(int id, string seq, string name, JToken data)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->set_id_0(L_0);
		// this.seq = seq;
		String_t* L_1 = ___seq1;
		__this->set_seq_1(L_1);
		// this.name = name;
		String_t* L_2 = ___name2;
		__this->set_name_2(L_2);
		// this.data = data;
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_3 = ___data3;
		__this->set_data_3(L_3);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.MessageHandler::send(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_send_mD24635279A16215ADED5336B6CFCD9829D5B5313 (MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * __this, RuntimeObject * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * V_0 = NULL;
	{
		// var o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = "end",
		//     name = name,
		//     data = data
		// });
		int32_t L_0 = __this->get_id_0();
		String_t* L_1 = __this->get_name_2();
		RuntimeObject * L_2 = ___data0;
		U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 * L_3 = (U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6 *)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_tBCC04185AED1C1C2CFAD99475825F0A10CB5F9F6_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD(L_3, L_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_1, L_2, /*hidden argument*/U3CU3Ef__AnonymousType0_4__ctor_m3C493629DA20D23984AAEB32CBBAEEB67F0017BD_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_4;
		L_4 = JObject_FromObject_m22BC3B5C870DDF5B83A095AA3C5A6AC09234C646(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// UnityMessageManager.Instance.SendMessageToFlutter(UnityMessageManager.MessagePrefix + o.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * L_5;
		L_5 = SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityMessageManager_SendMessageToFlutter_mCF83F5A72536ED6AEE688338609175F14BEE2ECA(L_5, L_8, /*hidden argument*/NULL);
		// }
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
// System.Void FlutterUnityIntegration.NativeAPI::OnUnityMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnityMessage_m3B3A79DDD217FC08730DF6A8573D3B791A7E9098 (String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(OnUnityMessage)(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void FlutterUnityIntegration.NativeAPI::OnUnitySceneLoaded(System.String,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnUnitySceneLoaded_mAC0DE9B6447D85EE9CB3C020D55929E5EE6F684E (String_t* ___name0, int32_t ___buildIndex1, bool ___isLoaded2, bool ___IsValid3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t);

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(OnUnitySceneLoaded)(____name0_marshaled, ___buildIndex1, static_cast<int32_t>(___isLoaded2), static_cast<int32_t>(___IsValid3));

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void FlutterUnityIntegration.NativeAPI::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_OnSceneLoaded_m462E90E1A45A55B6B74AB65025209AB3D2B820BD (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// OnUnitySceneLoaded(scene.name, scene.buildIndex, scene.isLoaded, scene.IsValid());
		String_t* L_0;
		L_0 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = Scene_get_isLoaded_m040A3D274F4FAD21BC95C6154FEA557ADE5C8E93((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		bool L_3;
		L_3 = Scene_IsValid_mC8AE24868A5020050F6A544ECAF5465C2CFB7CED((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&___scene0), /*hidden argument*/NULL);
		NativeAPI_OnUnitySceneLoaded_mAC0DE9B6447D85EE9CB3C020D55929E5EE6F684E(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_SendMessageToFlutter_m4AF2579929562334C915646E9359899D1973F292 (String_t* ___message0, const RuntimeMethod* method)
{
	{
		// OnUnityMessage(message);
		String_t* L_0 = ___message0;
		NativeAPI_OnUnityMessage_m3B3A79DDD217FC08730DF6A8573D3B791A7E9098(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_ShowHostMainWindow_mD3286C848742A07E4114901E1F21DE689EF4ECD1 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_UnloadMainWindow_m4061CA0CA9C881C68C886637AAE8635FBBCCC83C (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI_QuitUnityWindow_m75307D6C7A4739FF3A40FC903EEB113E73399EE9 (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.NativeAPI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeAPI__ctor_m688FF53877161B158D2304F7320B46D87A7069C7 (NativeAPI_tAFA6EBEC64FFF6CB2F1F977521E8F1784302AA8F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Rotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Start_m260F3DA22D8BEE3571FB61596065ECC238B60968 (Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789 * __this, const RuntimeMethod* method)
{
	{
		// RotateAmount = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_RotateAmount_4(L_0);
		// }
		return;
	}
}
// System.Void Rotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Update_m66D07F3686A017A63E869D8294C08E68F4A2FBAB (Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D27829CAE2E3F203B547B0861A45BDAE1B6D3EB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// gameObject.transform.Rotate(RotateAmount * Time.deltaTime * 120);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_RotateAmount_4();
		float L_3;
		L_3 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_4, (120.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_1, L_5, /*hidden argument*/NULL);
		// for (int i = 0; i < Input.touchCount; ++i)
		V_0 = 0;
		goto IL_0093;
	}

IL_002e:
	{
		// if (Input.GetTouch(i).phase.Equals(TouchPhase.Began))
		int32_t L_6 = V_0;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_7;
		L_7 = Input_GetTouch_m7C74CAE219D0DD4E0F41598BBC5869056575E62E(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8;
		L_8 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_8;
		int32_t L_9 = 0;
		RuntimeObject * L_10 = Box(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A_il2cpp_TypeInfo_var, &L_9);
		RuntimeObject * L_11 = Box(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_11, L_10);
		V_2 = *(int32_t*)UnBox(L_11);
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		// var hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_3), sizeof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 ));
		// Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(i).position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13;
		L_13 = Camera_get_main_m4E3DB1CD03E916476426AB3F78B26F21690EE26B(/*hidden argument*/NULL);
		int32_t L_14 = V_0;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_15;
		L_15 = Input_GetTouch_m7C74CAE219D0DD4E0F41598BBC5869056575E62E(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_18;
		L_18 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_13, L_17, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_19;
		L_19 = Physics_Raycast_m4BD6E5347507B86D0D50C5834607BB23D3DBD82A(L_18, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_3), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_008f;
		}
	}
	{
		// UnityMessageManager.Instance.SendMessageToFlutter("The cube feels touched.");
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * L_20;
		L_20 = SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		NullCheck(L_20);
		UnityMessageManager_SendMessageToFlutter_mCF83F5A72536ED6AEE688338609175F14BEE2ECA(L_20, _stringLiteral9D27829CAE2E3F203B547B0861A45BDAE1B6D3EB, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// for (int i = 0; i < Input.touchCount; ++i)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0093:
	{
		// for (int i = 0; i < Input.touchCount; ++i)
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = Input_get_touchCount_m565DDA076AD6E8E57D4F3F698A760D7B5ACBF505(/*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Rotate::SetRotationSpeed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_SetRotationSpeed_mA92B2C9E054CCDD441C9F3BB6A5D3ECBE1639CEA (Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float value = float.Parse(message , CultureInfo.InvariantCulture.NumberFormat);
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1;
		L_1 = CultureInfo_get_InvariantCulture_m27F344B7A1A5F9CAA493D82A5406DAC005C30205(/*hidden argument*/NULL);
		NullCheck(L_1);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_2;
		L_2 = VirtFuncInvoker0< NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_1);
		float L_3;
		L_3 = Single_Parse_m280DEDAE92F4F3F5628ECDBD578650047962288B(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// RotateAmount = new Vector3(value, value, value);
		float L_4 = V_0;
		float L_5 = V_0;
		float L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->set_RotateAmount_4(L_7);
		// }
		return;
	}
}
// System.Void Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_mAB2884DA9234D7A6485C5662D97205C92CA9B9C4 (Rotate_tC69B3ABBABA1DB1DFD96A92633DF3743CBB57789 * __this, const RuntimeMethod* method)
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
// System.Void Rotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotation_Update_m9234709059E25785C44ACA1F2AE0E8D143DD6409 (Rotation_t494A089B49580F1EC9172DD688C6EC94B1E4EEEE * __this, const RuntimeMethod* method)
{
	{
		// transform.Rotate(Vector3.forward * Time.deltaTime, axis);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_forward_mA6722B0932DA770D5C34C9E28D0E40220F099D50(/*hidden argument*/NULL);
		float L_2;
		L_2 = Time_get_deltaTime_mF558623BBB4EE65C8810243B05ED204A9E8D6FD1(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_axis_4();
		NullCheck(L_0);
		Transform_Rotate_m2AA745C4A796363462642A13251E8971D5C7F4DC(L_0, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotation__ctor_mE37308CA0B03685698CC3A3EFD8EF606585B6297 (Rotation_t494A089B49580F1EC9172DD688C6EC94B1E4EEEE * __this, const RuntimeMethod* method)
{
	{
		// public float axis = 1f; // Axis of rotation (x, y, or z)
		__this->set_axis_4((1.0f));
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
// System.Void SceneLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Start_m0C1135363F132F29168A105548C5C06AF2B7D682 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Update_m699D11504401E3060B887E522518E26ED63CD5D0 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadScene_mE757D2B5CE716ECE35E1E4451259987245A13EC7 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD945C749A458FF6A175D75E12A5F6D40E433D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("scene = " + idx);
		String_t* L_0;
		L_0 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___idx0), /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralBDD945C749A458FF6A175D75E12A5F6D40E433D7, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(idx, LoadSceneMode.Single);
		int32_t L_2 = ___idx0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m308CC974940BEFA16AFA26DA0B82DB83E35632DC(L_2, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::MessengerFlutter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_MessengerFlutter_m5803D25DA08C244F8A2C094062F827A56E55BCA8 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7822DC3F47B87491C99A8723A4A41B27E9B9D6EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityMessageManager.Instance.SendMessageToFlutter("Hey man");
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * L_0;
		L_0 = SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		NullCheck(L_0);
		UnityMessageManager_SendMessageToFlutter_mCF83F5A72536ED6AEE688338609175F14BEE2ECA(L_0, _stringLiteral7822DC3F47B87491C99A8723A4A41B27E9B9D6EE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::SwitchNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_SwitchNative_m8861D99A317F7B344B2447CBBB0CCCE272E2B8AF (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityMessageManager.Instance.ShowHostMainWindow();
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * L_0;
		L_0 = SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		NullCheck(L_0);
		UnityMessageManager_ShowHostMainWindow_m26F39C734CD7637E5CAC2DB0EBA034F7A3807A70(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::UnloadNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_UnloadNative_m0BF99E75C5FEEB4E18E7D6954380D1D0D0E95C35 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityMessageManager.Instance.UnloadMainWindow();
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * L_0;
		L_0 = SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		NullCheck(L_0);
		UnityMessageManager_UnloadMainWindow_mF55EA9676017765661D93C4EA0C321B279A72E20(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::QuitNative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_QuitNative_m13044D9E04AD06EE3423806A9A3615D33E4A88B6 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityMessageManager.Instance.QuitUnityWindow();
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * L_0;
		L_0 = SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		NullCheck(L_0);
		UnityMessageManager_QuitUnityWindow_m5D8F4C318F36B37EB9BAB56CC1850D4C8F35963B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m8708D080848349110CEA260D8779F30BD5823912 (SceneLoader_t3266812523B184D5AEDF27CA310452129C676B0D * __this, const RuntimeMethod* method)
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
// System.Void FlutterUnityIntegration.UnityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessage__ctor_m040EF90042CCB8DE7EF13B5C0BBF9E1608E32297 (UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 FlutterUnityIntegration.UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mFB32994A0DE5D36876E489F2605665A895A531B2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ID = ID + 1;
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_il2cpp_TypeInfo_var))->get_ID_6();
		((UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_il2cpp_TypeInfo_var))->set_ID_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// return ID;
		int32_t L_1 = ((UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_il2cpp_TypeInfo_var))->get_ID_6();
		return L_1;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::add_OnMessage(FlutterUnityIntegration.UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnMessage_mD0C1813FB69354BD335D784E0181098C2957504A (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * V_0 = NULL;
	MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * V_1 = NULL;
	MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * V_2 = NULL;
	{
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_0 = __this->get_OnMessage_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_2 = V_1;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 *)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358_il2cpp_TypeInfo_var));
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 ** L_5 = __this->get_address_of_OnMessage_7();
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_6 = V_2;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_7 = V_1;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 *>((MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_9 = V_0;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 *)L_9) == ((RuntimeObject*)(MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::remove_OnMessage(FlutterUnityIntegration.UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnMessage_m6052C92B5853BC4F34F06FAC97A6D292C5AAC3FD (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * V_0 = NULL;
	MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * V_1 = NULL;
	MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * V_2 = NULL;
	{
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_0 = __this->get_OnMessage_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_2 = V_1;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 *)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358_il2cpp_TypeInfo_var));
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 ** L_5 = __this->get_address_of_OnMessage_7();
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_6 = V_2;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_7 = V_1;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 *>((MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_9 = V_0;
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 *)L_9) == ((RuntimeObject*)(MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::add_OnFlutterMessage(FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnFlutterMessage_m27C6E81C04DF49AD959B993EA019A9F63F93CDA0 (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * V_0 = NULL;
	MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * V_1 = NULL;
	MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * V_2 = NULL;
	{
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_0 = __this->get_OnFlutterMessage_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_2 = V_1;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_mD9F4B83868AFAD9BF9F7DC4E3974B8C881092B31(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C *)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C ** L_5 = __this->get_address_of_OnFlutterMessage_8();
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_6 = V_2;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_7 = V_1;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C *>((MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_9 = V_0;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C *)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::remove_OnFlutterMessage(FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnFlutterMessage_mBF9F90A0E0621D41631E626BC2C3511C83BFE2B0 (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * V_0 = NULL;
	MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * V_1 = NULL;
	MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * V_2 = NULL;
	{
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_0 = __this->get_OnFlutterMessage_8();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_2 = V_1;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_mD84132DA8A72A81B1CDC5620B52E0E043D7FF0BF(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C *)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C ** L_5 = __this->get_address_of_OnFlutterMessage_8();
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_6 = V_2;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_7 = V_1;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C *>((MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_9 = V_0;
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C *)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_Start_m3089AD8E187A2086405F5C67940400CFF8AF936D (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_OnSceneLoaded_mBF688E62EE4D0F09D2214DBBF04CB8FBE8BA9005_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 * L_0 = (UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906 *)il2cpp_codegen_object_new(UnityAction_2_tDEF0DD47461C853F98CD2FF3CEC4F5EE13A19906_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0(L_0, __this, (intptr_t)((intptr_t)UnityMessageManager_OnSceneLoaded_mBF688E62EE4D0F09D2214DBBF04CB8FBE8BA9005_RuntimeMethod_var), /*hidden argument*/UnityAction_2__ctor_mE0417B33CF845A6B9324E67D296ADEA562B91DE0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m9633E3233FDB0C233A780E1D0E4FE80B54F6F307(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_OnSceneLoaded_mBF688E62EE4D0F09D2214DBBF04CB8FBE8BA9005 (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		// NativeAPI.OnSceneLoaded(scene, mode);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0 = ___scene0;
		int32_t L_1 = ___mode1;
		NativeAPI_OnSceneLoaded_m462E90E1A45A55B6B74AB65025209AB3D2B820BD(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::ShowHostMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_ShowHostMainWindow_m26F39C734CD7637E5CAC2DB0EBA034F7A3807A70 (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.ShowHostMainWindow();
		NativeAPI_ShowHostMainWindow_mD3286C848742A07E4114901E1F21DE689EF4ECD1(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::UnloadMainWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_UnloadMainWindow_mF55EA9676017765661D93C4EA0C321B279A72E20 (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.UnloadMainWindow();
		NativeAPI_UnloadMainWindow_m4061CA0CA9C881C68C886637AAE8635FBBCCC83C(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::QuitUnityWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_QuitUnityWindow_m5D8F4C318F36B37EB9BAB56CC1850D4C8F35963B (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, const RuntimeMethod* method)
{
	{
		// NativeAPI.QuitUnityWindow();
		NativeAPI_QuitUnityWindow_m75307D6C7A4739FF3A40FC903EEB113E73399EE9(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_mCF83F5A72536ED6AEE688338609175F14BEE2ECA (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// NativeAPI.SendMessageToFlutter(message);
		String_t* L_0 = ___message0;
		NativeAPI_SendMessageToFlutter_m4AF2579929562334C915646E9359899D1973F292(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::SendMessageToFlutter(FlutterUnityIntegration.UnityMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m5A535308E99D929E41ED90112B9F2B72025590C1 (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF73624630EBCFCE429DC999836F6360B9A142CB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * V_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	{
		// var id = generateId();
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnityMessageManager_generateId_mFB32994A0DE5D36876E489F2605665A895A531B2(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (message.callBack != null)
		UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C * L_1 = ___message0;
		NullCheck(L_1);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_2 = L_1->get_callBack_2();
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// waitCallbackMessageMap.Add(id, message);
		Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 * L_3 = __this->get_waitCallbackMessageMap_9();
		int32_t L_4 = V_0;
		UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C * L_5 = ___message0;
		NullCheck(L_3);
		Dictionary_2_Add_mF73624630EBCFCE429DC999836F6360B9A142CB2(L_3, L_4, L_5, /*hidden argument*/Dictionary_2_Add_mF73624630EBCFCE429DC999836F6360B9A142CB2_RuntimeMethod_var);
	}

IL_001b:
	{
		// var o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = message.callBack != null ? "start" : "",
		//     name = message.name,
		//     data = message.data
		// });
		int32_t L_6 = V_0;
		UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C * L_7 = ___message0;
		NullCheck(L_7);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_8 = L_7->get_callBack_2();
		G_B3_0 = L_6;
		if (L_8)
		{
			G_B4_0 = L_6;
			goto IL_002b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B3_0;
		goto IL_0030;
	}

IL_002b:
	{
		G_B5_0 = _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
		G_B5_1 = G_B4_0;
	}

IL_0030:
	{
		UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C * L_9 = ___message0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_name_0();
		UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C * L_11 = ___message0;
		NullCheck(L_11);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_12 = L_11->get_data_1();
		U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 * L_13 = (U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5 *)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_tDE5000E5AA6D2F551A599D76967B42844AC60EE5_il2cpp_TypeInfo_var);
		U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F(L_13, G_B5_1, G_B5_0, L_10, L_12, /*hidden argument*/U3CU3Ef__AnonymousType0_4__ctor_mFFC0CC0C01AE7B3F6573354A43AFF96C09074D0F_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_14;
		L_14 = JObject_FromObject_m22BC3B5C870DDF5B83A095AA3C5A6AC09234C646(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// UnityMessageManager.Instance.SendMessageToFlutter(MessagePrefix + o.ToString());
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * L_15;
		L_15 = SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF(/*hidden argument*/SingletonMonoBehaviour_1_get_Instance_mAEAE833A8EDD84846D4E8926EF1E61750882EDDF_RuntimeMethod_var);
		JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m10758B01687A2181C8727AD9FD9CCF5325C61C2A(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		UnityMessageManager_SendMessageToFlutter_mCF83F5A72536ED6AEE688338609175F14BEE2ECA(L_15, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onMessage_mDC5DB7FD7ECC9A58D33C5B8D52626A662D5A24D7 (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * G_B2_0 = NULL;
	MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * G_B1_0 = NULL;
	{
		// OnMessage?.Invoke(message);
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_0 = __this->get_OnMessage_7();
		MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___message0;
		NullCheck(G_B2_0);
		MessageDelegate_Invoke_mB8A275206E2D4267D2862C1F631AC91B442F1CAE(G_B2_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::onFlutterMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onFlutterMessage_m111A4C22B47C0236BDA50908363434C58C488C81 (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m24776CFA371F3A05691D95132D833F174517B9F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m632CD22F4BF480DAF6AF3E112E969C3E62F823D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_getData_TisRuntimeObject_mBCF55C4D072035F0B1806C275E8687801155A8EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * V_0 = NULL;
	UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C * V_1 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B8_0 = NULL;
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * G_B7_0 = NULL;
	MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * G_B11_0 = NULL;
	MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * G_B10_0 = NULL;
	{
		// if (message.StartsWith(MessagePrefix))
		String_t* L_0 = ___message0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_0, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// message = message.Replace(MessagePrefix, "");
		String_t* L_2 = ___message0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_2, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		___message0 = L_3;
		// }
		goto IL_0022;
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// var handler = MessageHandler.Deserialize(message);
		String_t* L_4 = ___message0;
		MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * L_5;
		L_5 = MessageHandler_Deserialize_m775F16345102A4444CBE3C251EB5C5152BA669C5(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if ("end".Equals(handler.seq))
		MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_seq_1();
		NullCheck(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		bool L_8;
		L_8 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007a;
		}
	}
	{
		// if (!waitCallbackMessageMap.TryGetValue(handler.id, out var m)) return;
		Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 * L_9 = __this->get_waitCallbackMessageMap_9();
		MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_id_0();
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_m632CD22F4BF480DAF6AF3E112E969C3E62F823D9(L_9, L_11, (UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m632CD22F4BF480DAF6AF3E112E969C3E62F823D9_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0051;
		}
	}
	{
		// if (!waitCallbackMessageMap.TryGetValue(handler.id, out var m)) return;
		return;
	}

IL_0051:
	{
		// waitCallbackMessageMap.Remove(handler.id);
		Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 * L_13 = __this->get_waitCallbackMessageMap_9();
		MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_id_0();
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_Remove_m24776CFA371F3A05691D95132D833F174517B9F4(L_13, L_15, /*hidden argument*/Dictionary_2_Remove_m24776CFA371F3A05691D95132D833F174517B9F4_RuntimeMethod_var);
		// m.callBack?.Invoke(handler.getData<object>()); // todo
		UnityMessage_t93B1E4479DD040DCA35EA73172BBFE2867F4451C * L_17 = V_1;
		NullCheck(L_17);
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_18 = L_17->get_callBack_2();
		Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * L_19 = L_18;
		G_B7_0 = L_19;
		if (L_19)
		{
			G_B8_0 = L_19;
			goto IL_006e;
		}
	}
	{
		return;
	}

IL_006e:
	{
		MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject * L_21;
		L_21 = MessageHandler_getData_TisRuntimeObject_mBCF55C4D072035F0B1806C275E8687801155A8EE(L_20, /*hidden argument*/MessageHandler_getData_TisRuntimeObject_mBCF55C4D072035F0B1806C275E8687801155A8EE_RuntimeMethod_var);
		NullCheck(G_B8_0);
		Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744(G_B8_0, L_21, /*hidden argument*/Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_RuntimeMethod_var);
		// return;
		return;
	}

IL_007a:
	{
		// OnFlutterMessage?.Invoke(handler);
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_22 = __this->get_OnFlutterMessage_8();
		MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * L_23 = L_22;
		G_B10_0 = L_23;
		if (L_23)
		{
			G_B11_0 = L_23;
			goto IL_0085;
		}
	}
	{
		return;
	}

IL_0085:
	{
		MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * L_24 = V_0;
		NullCheck(G_B11_0);
		MessageHandlerDelegate_Invoke_mF09B15BA0A43169E00AE11A59EBFDD32A274B42D(G_B11_0, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__ctor_m95BE29D6F8CC4535FDBBED2FF140FC893F0D638F (UnityMessageManager_t28A3776C9030A853A7A13EE12BB690E9760F88A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4724441A8E3BEF3DD6E5EDA6C33642B2C477D597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1__ctor_m8E6FFD25C2D9B504DA04632E9F7C677A2DB6B976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<int, UnityMessage> waitCallbackMessageMap = new Dictionary<int, UnityMessage>();
		Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 * L_0 = (Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2 *)il2cpp_codegen_object_new(Dictionary_2_tC0B6E878CB2ACB2EC17C784FB4A388E05851E6A2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4724441A8E3BEF3DD6E5EDA6C33642B2C477D597(L_0, /*hidden argument*/Dictionary_2__ctor_m4724441A8E3BEF3DD6E5EDA6C33642B2C477D597_RuntimeMethod_var);
		__this->set_waitCallbackMessageMap_9(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SingletonMonoBehaviour_1_t1C2487A558EA1601071B7C80E66E45A92DD05F0E_il2cpp_TypeInfo_var);
		SingletonMonoBehaviour_1__ctor_m8E6FFD25C2D9B504DA04632E9F7C677A2DB6B976(__this, /*hidden argument*/SingletonMonoBehaviour_1__ctor_m8E6FFD25C2D9B504DA04632E9F7C677A2DB6B976_RuntimeMethod_var);
		return;
	}
}
// System.Void FlutterUnityIntegration.UnityMessageManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__cctor_m81CEC79F7E3988C081D5207ABAE49B37C3F589CC (const RuntimeMethod* method)
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
// System.Void VideoLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoLoader_Start_m060037882576D5E2AC66391E27266900A4640B85 (VideoLoader_t0DD118854EEE4AE30BD78692DD24635B664CCADB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoLoader_EndReached_m42BF30AD79CE7D2A1FB5C4EE022F804CD3D70E6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B7D9A990938B2018187DFD0AC17A9784E029FD5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string videoUrl = Application.streamingAssetsPath + "/Video/" + gameObject.transform.parent.parent.parent.name + ".mp4";
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mBA7560B393A50853AE3C28C096A03849B8627A4A(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m5D784E6CEEBE99ED8749AA4B9491D926273FD749(L_0, _stringLiteral5B7D9A990938B2018187DFD0AC17A9784E029FD5, L_6, _stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208, /*hidden argument*/NULL);
		V_0 = L_7;
		// videoPlayer.loopPointReached += EndReached;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_8 = __this->get_videoPlayer_4();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_9 = (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)il2cpp_codegen_object_new(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		EventHandler__ctor_mA1A6722C36644D8F49E5A5008B68352561E03400(L_9, __this, (intptr_t)((intptr_t)VideoLoader_EndReached_m42BF30AD79CE7D2A1FB5C4EE022F804CD3D70E6C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		VideoPlayer_add_loopPointReached_m01BBFFE55835498DFF2A1C8CEF3292B4780E4964(L_8, L_9, /*hidden argument*/NULL);
		// videoPlayer.url = videoUrl;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_10 = __this->get_videoPlayer_4();
		String_t* L_11 = V_0;
		NullCheck(L_10);
		VideoPlayer_set_url_m9C9942D6C54D50F6255A2AA1646D9F40E551BF13(L_10, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VideoLoader::EndReached(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoLoader_EndReached_m42BF30AD79CE7D2A1FB5C4EE022F804CD3D70E6C (VideoLoader_t0DD118854EEE4AE30BD78692DD24635B664CCADB * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___vp0, const RuntimeMethod* method)
{
	{
		// videoPlayer.frame = 0;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_videoPlayer_4();
		NullCheck(L_0);
		VideoPlayer_set_frame_mC94AD83B85EF441B374D71F332F51D2CA8BDE42A(L_0, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VideoLoader::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoLoader_OnDisable_mB15B4A787AF6C4D16445621DF0892260EDC92E36 (VideoLoader_t0DD118854EEE4AE30BD78692DD24635B664CCADB * __this, const RuntimeMethod* method)
{
	{
		// videoPlayer.frame = 0;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_videoPlayer_4();
		NullCheck(L_0);
		VideoPlayer_set_frame_mC94AD83B85EF441B374D71F332F51D2CA8BDE42A(L_0, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		// videoPlayer.targetTexture.Release();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_1 = __this->get_videoPlayer_4();
		NullCheck(L_1);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2;
		L_2 = VideoPlayer_get_targetTexture_mBF23A9FD8FBD6989708C0244AE1105D789C51417(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RenderTexture_Release_m533506E903688E798921C0D35F1B082522D88986(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VideoLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoLoader__ctor_m7C4419CAE2EA926FCC7C4A037B25F59A7A1779BF (VideoLoader_t0DD118854EEE4AE30BD78692DD24635B664CCADB * __this, const RuntimeMethod* method)
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
// System.Void VideoManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_Update_mC77BE392A373A8B43F66BAAA0A51A943CB04AF14 (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, const RuntimeMethod* method)
{
	{
		// if (player.frameCount > 0)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_player_4();
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044(L_0, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_1) > ((uint64_t)((int64_t)((int64_t)0))))))
		{
			goto IL_0034;
		}
	}
	{
		// progress.fillAmount = (float)player.frame / (float)player.frameCount;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_progress_5();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = __this->get_player_4();
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VideoPlayer_get_frame_m86205149C0DB9B9A42C1177F846950B495E6882E(L_3, /*hidden argument*/NULL);
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_5 = __this->get_player_4();
		NullCheck(L_5);
		uint64_t L_6;
		L_6 = VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044(L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_2, ((float)((float)((float)((float)L_4))/(float)((float)((float)((double)((uint64_t)L_6)))))), /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void VideoManager::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_OnDrag_mAD2327D7C79BF3B2ADE5BF454A14E0A51559F8BD (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// TrySkip(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		VideoManager_TrySkip_m27FB9C87705335950BB274D390775D1551ABA356(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VideoManager::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_OnPointerDown_m61A2F8379C9D310E1B110CDF91937681928F029B (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// TrySkip(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		VideoManager_TrySkip_m27FB9C87705335950BB274D390775D1551ABA356(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VideoManager::SkipToPercent(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_SkipToPercent_mEFFFC675F8DF88F5B74628923BCD4B444D2E0A6F (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, float ___pct0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var frame = player.frameCount * pct;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_player_4();
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = VideoPlayer_get_frameCount_mE7B49C44E393A2EC65424C29F2D6563A130D9044(L_0, /*hidden argument*/NULL);
		float L_2 = ___pct0;
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)((float)((double)((uint64_t)L_1)))), (float)L_2));
		// player.frame = (long)frame;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_3 = __this->get_player_4();
		float L_4 = V_0;
		NullCheck(L_3);
		VideoPlayer_set_frame_mC94AD83B85EF441B374D71F332F51D2CA8BDE42A(L_3, il2cpp_codegen_cast_double_to_int<int64_t>(L_4), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VideoManager::TrySkip(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_TrySkip_m27FB9C87705335950BB274D390775D1551ABA356 (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(
		//     progress.rectTransform, eventData.position, null, out localPoint))
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_progress_5();
		NullCheck(L_0);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1;
		L_1 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_0, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m3C56E006591714917B01C30AA186C5316334E2B8(L_1, L_3, (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)NULL, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		// float pct = Mathf.InverseLerp(progress.rectTransform.rect.xMin, progress.rectTransform.rect.xMax, localPoint.x);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_progress_5();
		NullCheck(L_5);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6;
		L_6 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		L_7 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8;
		L_8 = Rect_get_xMin_m02EA330BE4C4A07A3F18F50F257832E9E3C2B873((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_progress_5();
		NullCheck(L_9);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10;
		L_10 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_11;
		L_11 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12;
		L_12 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		float L_14 = L_13.get_x_0();
		float L_15;
		L_15 = Mathf_InverseLerp_m1A0AE609371BB464712207341F5AA46C756BA7C2(L_8, L_12, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		// SkipToPercent(pct);
		float L_16 = V_1;
		VideoManager_SkipToPercent_mEFFFC675F8DF88F5B74628923BCD4B444D2E0A6F(__this, L_16, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void VideoManager::VideoPlayerPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_VideoPlayerPause_mF32FE3E02B8727E303FC6D74FA38CF74D821211F (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(player != null)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_player_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// player.Pause();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_2 = __this->get_player_4();
		NullCheck(L_2);
		VideoPlayer_Pause_m9A4568E69F3C3DDD2F83AF8FC0D594E39C9B479A(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void VideoManager::VideoPlayerPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager_VideoPlayerPlay_mECE8671D63A269471E2961E9075008D6856A2CBE (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(player != null)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_player_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mDCB4E958808E725D0612CCABF340B284085F03D6(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// player.Play();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_2 = __this->get_player_4();
		NullCheck(L_2);
		VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void VideoManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoManager__ctor_mB5D382779E7296662E64C9945FEC6BEA0B30E749 (VideoManager_t78DCC51EC0616E3D835F3E5E300741AD93820ED6 * __this, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 (MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_mE9AF2205B599FAF00446A302CE0EF5D7E8E6C07D (MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_mB8A275206E2D4267D2862C1F631AC91B442F1CAE (MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * __this, String_t* ___message0, const RuntimeMethod* method)
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
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult FlutterUnityIntegration.UnityMessageManager/MessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDelegate_BeginInvoke_m4EF8A0809DE1A605B5D39DEC2D1885E20D8189AB (MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_EndInvoke_m41809781801F581A1AAF1618147944F512B3CC10 (MessageDelegate_t630AA5734FDD6F716FFB65409A81E794E7BD7358 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate__ctor_mFBABE05F923A28B364C4922D42AAF96C11927E10 (MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::Invoke(FlutterUnityIntegration.MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mF09B15BA0A43169E00AE11A59EBFDD32A274B42D (MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * __this, MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * ___handler0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___handler0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handler0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handler0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
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
						GenericInterfaceActionInvoker1< MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * >::Invoke(targetMethod, targetThis, ___handler0);
					else
						GenericVirtActionInvoker1< MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * >::Invoke(targetMethod, targetThis, ___handler0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handler0);
					else
						VirtActionInvoker1< MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handler0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handler0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handler0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::BeginInvoke(FlutterUnityIntegration.MessageHandler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandlerDelegate_BeginInvoke_m9046325D29D4F1F10AF4CB0FCE621A3985B11486 (MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * __this, MessageHandler_tFE461EF130B37B9828E73DE94687298FE13D8A33 * ___handler0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handler0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void FlutterUnityIntegration.UnityMessageManager/MessageHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_EndInvoke_m17B6765DCC1218EB0083F7A201EBF2A8DE3532BF (MessageHandlerDelegate_t144ED72808A29305D207DF381CE3C6F3A410AF2C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m06DD6079C6317F9A4D889EE4D22C4AED1E438E3B_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_mC91C21911FDB26792369C645DAABBC43B3DE9932_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
