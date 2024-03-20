#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36;
// System.Collections.Generic.Dictionary`2<RsStreamAvailability,System.Boolean>
struct Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188;
// System.Collections.Generic.IEnumerable`1<Intel.RealSense.Device>
struct IEnumerable_1_tCD4D728BA2241D543186DE7559DC319414A56AEB;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<RsStreamAvailability>
struct IEnumerable_1_t85493735975C98701ADF3A9C33EECE2A05957538;
// System.Collections.Generic.IEnumerator`1<Intel.RealSense.Device>
struct IEnumerator_1_t1EAC856094F330115E599E2528EBEA3F51D91D99;
// System.Collections.Generic.IEqualityComparer`1<RsStreamAvailability>
struct IEqualityComparer_1_t0B80E2D470586B4CBC3D5B977EF45919B8C4501C;
// System.Collections.Generic.Dictionary`2/KeyCollection<RsStreamAvailability,System.Boolean>
struct KeyCollection_t6D791AB0245E0CBB57453D9D7FBA41810666517D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Intel.RealSense.Device>
struct List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Int32>
struct UnityEvent_2_t17A7782DB93CB5C65967C3F94403767E1E68E15A;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Single>
struct UnityEvent_2_tE96C8120FC5D3F6C5FF16D401433B6390C0C9789;
// UnityEngine.Events.UnityEvent`2<System.String,System.Int32>
struct UnityEvent_2_t651FD2EEA36CC1971811E5BFEC4A992CB84C3B83;
// UnityEngine.Events.UnityEvent`2<System.String,System.Single>
struct UnityEvent_2_tEF116C3134900FD3CE072A91779B5B09001F855F;
// UnityEngine.Events.UnityEvent`2<System.String,UnityEngine.Texture>
struct UnityEvent_2_tFFD9F120F1C6099F0D99E893CE999FE4A8F49E12;
// System.Collections.Generic.Dictionary`2/ValueCollection<RsStreamAvailability,System.Boolean>
struct ValueCollection_t574C85944BEB70C06C20CAED8369758710DD1618;
// System.Collections.Generic.Dictionary`2/Entry<RsStreamAvailability,System.Boolean>[]
struct EntryU5BU5D_tEB5992477978E282D69FE578C51A2E7976E83B7E;
// Intel.RealSense.CameraInfo[]
struct CameraInfoU5BU5D_t1FE88316E31ADB34FB6107575BD108753BD16CB7;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Intel.RealSense.Device[]
struct DeviceU5BU5D_tE7FD1C3A7A297CDDBE790A805CD649D35242224F;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// RsStreamAvailability[]
struct RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA;
// RsVideoStreamRequest[]
struct RsVideoStreamRequestU5BU5D_t65107F6147C91D00EF9D54A61425B73C73B83FC8;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// BoolInvert
struct BoolInvert_t901587D57445C734BEADE7DC6B879CCDEFD8EE3D;
// BoolToFloat
struct BoolToFloat_t345D922BD9EDEA555CB9FE441B1613B0C544A58C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Intel.RealSense.Config
struct Config_tF156DF44EDE591C8529D7A67C051932F799AF402;
// Intel.RealSense.Context
struct Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5;
// Intel.RealSense.ContextHandle
struct ContextHandle_t2393C4A61C901D0C093F1B896673D23A638C74A6;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Intel.RealSense.Base.Deleter
struct Deleter_t3892BD1B4867BAEF8AC2B27C062C570BAAF7A5AE;
// Intel.RealSense.Base.DeleterHandle
struct DeleterHandle_tCEE4B6EAEF63A8AEB9D0B67470CD1D5055A862FF;
// Intel.RealSense.Device
struct Device_tC79DE088DC369440A01E872788D153A69F210F0E;
// Intel.RealSense.DeviceList
struct DeviceList_t2DDFA9BD6E258074D867A98A4A52287BC92FDD3A;
// ErrorPopup
struct ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// FloatToStringFormat
struct FloatToStringFormat_t81FC5C974860819DC018BEACA8192D83B75CD106;
// FloatTween
struct FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GetMaterialFloat
struct GetMaterialFloat_t2002262B76C01BCB04BDF33C4D017FCC6826694A;
// GetMaterialInt
struct GetMaterialInt_t15EE37C4ABB46561533C96B3F4BA37D7097107E8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// GridMesh
struct GridMesh_tD9E01B1F32E164F3C40206F86AD8C7F7676108FC;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Intel.RealSense.InfoCollection
struct InfoCollection_tB1009E22CC096F5FF880815BC8C53CC7BCE628F8;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MinMaxSlider
struct MinMaxSlider_tDDEDC649AE21F7D300683797501F3298EFCEE3FC;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveAlongZ
struct MoveAlongZ_t9F6BBD58E6B45DC1AE64C7E1B16F67C81CD3BE0B;
// NamedTextureBinding
struct NamedTextureBinding_tA63A07B9386F5C56172077A02C4C86010FC7A16C;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Intel.RealSense.Base.Object
struct Object_tC31E2ABDE7A17D6033572772D42B1999E9033F25;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OrbitCameraControl
struct OrbitCameraControl_tC95FDE2DCE509D37C88BC4AF190EC8D6ABDA8937;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Intel.RealSense.Pipeline
struct Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Intel.RealSense.Base.RefCount
struct RefCount_t4A5A2A2D93602C448DEB636D6287812A73398007;
// RsDeviceListener
struct RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E;
// RsStreamAvailability
struct RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// SceneLoader
struct SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// StringFloatBinding
struct StringFloatBinding_tD8721754A96DC4EDDB14076D005AC48D1E3446CA;
// StringIntBinding
struct StringIntBinding_tD06984046E80F31A764C4D5E32F2312B9AAE0F4F;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Intel.RealSense.frame_callback
struct frame_callback_t681B605237A4394875E8FFE114DEFFF4D2ACAAA6;
// Intel.RealSense.rs2_devices_changed_callback
struct rs2_devices_changed_callback_tDB9D082422E084709C31213615E6D4423181BB0F;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// BoolInvert/BooleanEvent
struct BooleanEvent_tAA35183A277A8AA16B8AEA60067C6DB637199703;
// BoolToFloat/FloatEvent
struct FloatEvent_t9725781C362C6AFF517216BE99CBA691FA08F4B3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Intel.RealSense.Context/OnDevicesChangedDelegate
struct OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD;
// ErrorPopup/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D;
// ErrorPopup/<Popup>d__4
struct U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902;
// FloatToStringFormat/StringEvent
struct StringEvent_tDCCAE45C8E79792F11A9874AFCA8EACC96106ECF;
// FloatTween/<Tween>d__10
struct U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1;
// FloatTween/FloatEvent
struct FloatEvent_tF493ABA1ABCAF529B9A821824DA42C288C68D5CF;
// GetMaterialFloat/FloatEvent
struct FloatEvent_tC9E4D50E43FC1DF485628F8A3A0AF8A7B55F26B5;
// GetMaterialInt/IntEvent
struct IntEvent_t9782CDD4CEB659387763EF4995BD3092CD55C1DF;
// Intel.RealSense.InfoCollection/GetInfoDelegate
struct GetInfoDelegate_tB3B80AE76B2D1962C745294CCEF0752ABBF3D058;
// Intel.RealSense.InfoCollection/SupportsDelegate
struct SupportsDelegate_t3E77B77778E8C6E8A920CA53D436DAD5E9E073B0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NamedTextureBinding/NamedTextureEvent
struct NamedTextureEvent_t31CA632C56B3DF31A5E94CC9322FCC9E1641A327;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// RsDeviceListener/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823;
// RsDeviceListener/<>c__DisplayClass11_1
struct U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B;
// RsDeviceListener/<Start>d__10
struct U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF;
// SceneLoader/<LoadSceneAsync>d__2
struct U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// StringFloatBinding/StringFloatEvent
struct StringFloatEvent_t4DC786DED57FFD47B01AC7850355BFF480C1D27D;
// StringIntBinding/StringIntEvent
struct StringIntEvent_t68B3D2FA35F3B810435D0E6ED3068861F8F83EFE;

IL2CPP_EXTERN_C RuntimeClass* AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1EAC856094F330115E599E2528EBEA3F51D91D99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2ED4F65603F63EC15987515970EAF069474F9329;
IL2CPP_EXTERN_C String_t* _stringLiteral49B3D64E91ABD7B46AE1F8B4824E2A244C1955EB;
IL2CPP_EXTERN_C String_t* _stringLiteral6273382DE574125E7DA53FCA9FC2366032A69BEC;
IL2CPP_EXTERN_C String_t* _stringLiteral7105A2ECE11E7707B1F13082131D29236460667F;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteralD7231B2FC56610FE6683D73F6EF3AE21216F1536;
IL2CPP_EXTERN_C String_t* _stringLiteralEE1496A616E3766EBC25085B50DF7685BC314DB1;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m62268CBF8804891879991DDB12CD4EF4CCA8855F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4EF899F86A60D4D9E3374F08CEF9BF1849EE15AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mB49D9246BC86239B672A9EFA421893E31E003173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisRsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574_m8937529FD416002BFE548E9C0C0DA6AB610CA68A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m67F02E5F22178A5EB8C7DB3E489E920EA799CF1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m95EEDD4CCF925AC9F1F37817D5E08DDA82391298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBD820B9344D8D1C48E15B0DB1938FD15CFEC0D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD20B836045E5A662BBA1DE60B26DC6C51CF02CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m35B7C19DD3050513901406B9A08734C8E5B2E181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6F45AB48EDB8495B728F40325D1A591B2ADD19C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ErrorPopup_OnLogMessageRecevied_mF8EFE81F933806762894B4F19190C995A3DE7B2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6_m1F3FBDC38E1A7549EC69B6E65BFD61FA048A4807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m463EF464D98762C96F20783694A2A43B6641775F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m51D03330E6D1B5A84B5CB612D9F7C1C319A41AC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mC8E4E6A3C3357BB619692DBF03949B6EB0461031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5001FBF008A57564A5E40B31C843EC5E660EE9F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9B6D5307B67A7E9B5A353CC776115A87EF4911E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m55BF2FCB682A665B8BC8DDAED18CE47C6317E265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MinMaxSlider_OnValueChanged_m092DA20E3B9048EB48FB352746DD4250E3834282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisRsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574_m721215ED054E5FA3806409C5AD695054305E123D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RsDeviceListener_Awake_m3BA4CFEDF7D8A275DEBAB860AD66E53875B05C46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RsDeviceListener_OnDevicesChanged_mD9BFBD02042845784BE064DBA33B23B8993C3ED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_Reset_m3031B20306A81052D3F5BA81F02BA988CF313BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPopupU3Ed__4_System_Collections_IEnumerator_Reset_mA90CC0367A145CCEC9C29C6233BE4DAAFD562A24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__10_System_Collections_IEnumerator_Reset_mD85C29888F1103E863CCCAF3D0DE53B2020AB769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTweenU3Ed__10_System_Collections_IEnumerator_Reset_mC7F211709C8347D911189E42431592964AB340FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_1_U3CUpdateU3Eb__0_mD00FCA5887BA8FB2FF65BDC3AB39193573D9BB61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CPopupU3Eb__0_m92C0CB0131173A55C845C3F0AA0F583698D1F436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CPopupU3Eb__1_m0078242D3AC047FDC842A1FBB24C798AFEE19013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_m7EE09CDAA9893FCD6458C70F8D1089AFBE1BDFE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_mA05A3BD621633ACF91D30C742ED7409FAF1D93C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_Invoke_mB5085014CB26F5640A33E386AC3AB0D3D1D1A6C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_m8DC006BCF10C6D1D03AD07AAB45E0B71AB086115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mCB38CC308C414BBCD12E38E1C838630729D2F52A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2__ctor_mEFA16CA89C0D7FDD4C53C16A47C918EDD855A0A9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct RsVideoStreamRequest_t4D138C84CEF0DACA5B20A6E08229FE26BC55E0F1;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t230E9CD472AA938AB63B0B32EB23FB3EB2BB9B37 
{
};

// System.Collections.Generic.Dictionary`2<RsStreamAvailability,System.Boolean>
struct Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEB5992477978E282D69FE578C51A2E7976E83B7E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t6D791AB0245E0CBB57453D9D7FBA41810666517D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t574C85944BEB70C06C20CAED8369758710DD1618* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Intel.RealSense.Device>
struct List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DeviceU5BU5D_tE7FD1C3A7A297CDDBE790A805CD649D35242224F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Intel.RealSense.Context
struct Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5  : public RuntimeObject
{
	// Intel.RealSense.ContextHandle Intel.RealSense.Context::handle
	ContextHandle_t2393C4A61C901D0C093F1B896673D23A638C74A6* ___handle_0;
	// Intel.RealSense.rs2_devices_changed_callback Intel.RealSense.Context::onDevicesChangedCallback
	rs2_devices_changed_callback_tDB9D082422E084709C31213615E6D4423181BB0F* ___onDevicesChangedCallback_2;
	// Intel.RealSense.Context/OnDevicesChangedDelegate Intel.RealSense.Context::OnDevicesChangedEvent
	OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD* ___OnDevicesChangedEvent_3;
	// System.Object Intel.RealSense.Context::deviceChangedEventLock
	RuntimeObject* ___deviceChangedEventLock_4;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Intel.RealSense.Base.Object
struct Object_tC31E2ABDE7A17D6033572772D42B1999E9033F25  : public RuntimeObject
{
	// Intel.RealSense.Base.DeleterHandle Intel.RealSense.Base.Object::m_instance
	DeleterHandle_tCEE4B6EAEF63A8AEB9D0B67470CD1D5055A862FF* ___m_instance_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ErrorPopup/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D  : public RuntimeObject
{
	// UnityEngine.GameObject ErrorPopup/<>c__DisplayClass4_0::go
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go_0;
	// UnityEngine.Events.UnityAction ErrorPopup/<>c__DisplayClass4_0::<>9__1
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___U3CU3E9__1_1;
};

// ErrorPopup/<Popup>d__4
struct U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902  : public RuntimeObject
{
	// System.Int32 ErrorPopup/<Popup>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ErrorPopup/<Popup>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ErrorPopup/<>c__DisplayClass4_0 ErrorPopup/<Popup>d__4::<>8__1
	U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* ___U3CU3E8__1_2;
	// ErrorPopup ErrorPopup/<Popup>d__4::<>4__this
	ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96* ___U3CU3E4__this_3;
	// System.String ErrorPopup/<Popup>d__4::text
	String_t* ___text_4;
};

// FloatTween/<Tween>d__10
struct U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1  : public RuntimeObject
{
	// System.Int32 FloatTween/<Tween>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FloatTween/<Tween>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FloatTween FloatTween/<Tween>d__10::<>4__this
	FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* ___U3CU3E4__this_2;
	// System.Single FloatTween/<Tween>d__10::from
	float ___from_3;
	// System.Single FloatTween/<Tween>d__10::to
	float ___to_4;
	// System.Single FloatTween/<Tween>d__10::<value>5__2
	float ___U3CvalueU3E5__2_5;
};

// RsDeviceListener/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823  : public RuntimeObject
{
	// RsDeviceListener RsDeviceListener/<>c__DisplayClass11_0::<>4__this
	RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* ___U3CU3E4__this_0;
	// System.Collections.Generic.Dictionary`2<RsStreamAvailability,System.Boolean> RsDeviceListener/<>c__DisplayClass11_0::resolvables
	Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188* ___resolvables_1;
	// System.Int32 RsDeviceListener/<>c__DisplayClass11_0::tasks
	int32_t ___tasks_2;
	// System.Threading.AutoResetEvent RsDeviceListener/<>c__DisplayClass11_0::done
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___done_3;
};

// RsDeviceListener/<>c__DisplayClass11_1
struct U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B  : public RuntimeObject
{
	// RsStreamAvailability RsDeviceListener/<>c__DisplayClass11_1::a
	RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* ___a_0;
	// RsDeviceListener/<>c__DisplayClass11_0 RsDeviceListener/<>c__DisplayClass11_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* ___CSU24U3CU3E8__locals1_1;
};

// RsDeviceListener/<Start>d__10
struct U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF  : public RuntimeObject
{
	// System.Int32 RsDeviceListener/<Start>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RsDeviceListener/<Start>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// RsDeviceListener RsDeviceListener/<Start>d__10::<>4__this
	RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* ___U3CU3E4__this_2;
};

// SceneLoader/<LoadSceneAsync>d__2
struct U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00  : public RuntimeObject
{
	// System.Int32 SceneLoader/<LoadSceneAsync>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SceneLoader/<LoadSceneAsync>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String SceneLoader/<LoadSceneAsync>d__2::name
	String_t* ___name_2;
};

// System.Collections.Generic.List`1/Enumerator<Intel.RealSense.Device>
struct Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Device_tC79DE088DC369440A01E872788D153A69F210F0E* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<RsStreamAvailability,System.Boolean>
struct KeyValuePair_2_t21733460BB6B41626D484C1E5067D6CEF3F83BAD 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<System.String,System.Int32>
struct UnityEvent_2_t651FD2EEA36CC1971811E5BFEC4A992CB84C3B83  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<System.String,System.Single>
struct UnityEvent_2_tEF116C3134900FD3CE072A91779B5B09001F855F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<System.String,UnityEngine.Texture>
struct UnityEvent_2_tFFD9F120F1C6099F0D99E893CE999FE4A8F49E12  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Intel.RealSense.Config
struct Config_tF156DF44EDE591C8529D7A67C051932F799AF402  : public Object_tC31E2ABDE7A17D6033572772D42B1999E9033F25
{
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// Intel.RealSense.DeviceList
struct DeviceList_t2DDFA9BD6E258074D867A98A4A52287BC92FDD3A  : public Object_tC31E2ABDE7A17D6033572772D42B1999E9033F25
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Intel.RealSense.Pipeline
struct Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2  : public Object_tC31E2ABDE7A17D6033572772D42B1999E9033F25
{
	// Intel.RealSense.frame_callback Intel.RealSense.Pipeline::m_callback
	frame_callback_t681B605237A4394875E8FFE114DEFFF4D2ACAAA6* ___m_callback_1;
};

// Intel.RealSense.Base.PooledObject
struct PooledObject_t312B511AF678AAA6B48F1F91233BEEAEFB908ACE  : public Object_tC31E2ABDE7A17D6033572772D42B1999E9033F25
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// RsConfiguration
struct RsConfiguration_tDF5345C0545AC1C14AF457ACEA37F8701B631F1D 
{
	// RsConfiguration/Mode RsConfiguration::mode
	int32_t ___mode_0;
	// RsVideoStreamRequest[] RsConfiguration::Profiles
	RsVideoStreamRequestU5BU5D_t65107F6147C91D00EF9D54A61425B73C73B83FC8* ___Profiles_1;
	// System.String RsConfiguration::RequestedSerialNumber
	String_t* ___RequestedSerialNumber_2;
	// System.String RsConfiguration::PlaybackFile
	String_t* ___PlaybackFile_3;
	// System.String RsConfiguration::RecordPath
	String_t* ___RecordPath_4;
};
// Native definition for P/Invoke marshalling of RsConfiguration
struct RsConfiguration_tDF5345C0545AC1C14AF457ACEA37F8701B631F1D_marshaled_pinvoke
{
	int32_t ___mode_0;
	RsVideoStreamRequest_t4D138C84CEF0DACA5B20A6E08229FE26BC55E0F1* ___Profiles_1;
	char* ___RequestedSerialNumber_2;
	char* ___PlaybackFile_3;
	char* ___RecordPath_4;
};
// Native definition for COM marshalling of RsConfiguration
struct RsConfiguration_tDF5345C0545AC1C14AF457ACEA37F8701B631F1D_marshaled_com
{
	int32_t ___mode_0;
	RsVideoStreamRequest_t4D138C84CEF0DACA5B20A6E08229FE26BC55E0F1* ___Profiles_1;
	Il2CppChar* ___RequestedSerialNumber_2;
	Il2CppChar* ___PlaybackFile_3;
	Il2CppChar* ___RecordPath_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<RsStreamAvailability,System.Boolean>
struct Enumerator_t478F8EDB2EB8AFFF9F59512EB47DF060255F6AEE 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t21733460BB6B41626D484C1E5067D6CEF3F83BAD ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Intel.RealSense.InfoCollection
struct InfoCollection_tB1009E22CC096F5FF880815BC8C53CC7BCE628F8  : public RuntimeObject
{
	// Intel.RealSense.InfoCollection/SupportsDelegate Intel.RealSense.InfoCollection::supports
	SupportsDelegate_t3E77B77778E8C6E8A920CA53D436DAD5E9E073B0* ___supports_0;
	// Intel.RealSense.InfoCollection/GetInfoDelegate Intel.RealSense.InfoCollection::get
	GetInfoDelegate_tB3B80AE76B2D1962C745294CCEF0752ABBF3D058* ___get_1;
	// System.IntPtr Intel.RealSense.InfoCollection::handle
	intptr_t ___handle_2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Intel.RealSense.Base.RefCountedPooledObject
struct RefCountedPooledObject_t276BB620FA0F9C900EC4DE68399B2EF5A9EA6F84  : public PooledObject_t312B511AF678AAA6B48F1F91233BEEAEFB908ACE
{
	// Intel.RealSense.Base.RefCount Intel.RealSense.Base.RefCountedPooledObject::refCount
	RefCount_t4A5A2A2D93602C448DEB636D6287812A73398007* ___refCount_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// BoolInvert/BooleanEvent
struct BooleanEvent_tAA35183A277A8AA16B8AEA60067C6DB637199703  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// BoolToFloat/FloatEvent
struct FloatEvent_t9725781C362C6AFF517216BE99CBA691FA08F4B3  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// FloatToStringFormat/StringEvent
struct StringEvent_tDCCAE45C8E79792F11A9874AFCA8EACC96106ECF  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// FloatTween/FloatEvent
struct FloatEvent_tF493ABA1ABCAF529B9A821824DA42C288C68D5CF  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// GetMaterialFloat/FloatEvent
struct FloatEvent_tC9E4D50E43FC1DF485628F8A3A0AF8A7B55F26B5  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// GetMaterialInt/IntEvent
struct IntEvent_t9782CDD4CEB659387763EF4995BD3092CD55C1DF  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// NamedTextureBinding/NamedTextureEvent
struct NamedTextureEvent_t31CA632C56B3DF31A5E94CC9322FCC9E1641A327  : public UnityEvent_2_tFFD9F120F1C6099F0D99E893CE999FE4A8F49E12
{
};

// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// StringFloatBinding/StringFloatEvent
struct StringFloatEvent_t4DC786DED57FFD47B01AC7850355BFF480C1D27D  : public UnityEvent_2_tEF116C3134900FD3CE072A91779B5B09001F855F
{
};

// StringIntBinding/StringIntEvent
struct StringIntEvent_t68B3D2FA35F3B810435D0E6ED3068861F8F83EFE  : public UnityEvent_2_t651FD2EEA36CC1971811E5BFEC4A992CB84C3B83
{
};

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Intel.RealSense.Device
struct Device_tC79DE088DC369440A01E872788D153A69F210F0E  : public RefCountedPooledObject_t276BB620FA0F9C900EC4DE68399B2EF5A9EA6F84
{
	// Intel.RealSense.InfoCollection Intel.RealSense.Device::<Info>k__BackingField
	InfoCollection_tB1009E22CC096F5FF880815BC8C53CC7BCE628F8* ___U3CInfoU3Ek__BackingField_4;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90  : public MulticastDelegate_t
{
};

// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// Intel.RealSense.Context/OnDevicesChangedDelegate
struct OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// BoolInvert
struct BoolInvert_t901587D57445C734BEADE7DC6B879CCDEFD8EE3D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BoolInvert/BooleanEvent BoolInvert::event
	BooleanEvent_tAA35183A277A8AA16B8AEA60067C6DB637199703* ___event_4;
};

// BoolToFloat
struct BoolToFloat_t345D922BD9EDEA555CB9FE441B1613B0C544A58C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BoolToFloat/FloatEvent BoolToFloat::OnValueChange
	FloatEvent_t9725781C362C6AFF517216BE99CBA691FA08F4B3* ___OnValueChange_4;
};

// ErrorPopup
struct ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ErrorPopup::PopupPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PopupPrefab_4;
};

// FloatToStringFormat
struct FloatToStringFormat_t81FC5C974860819DC018BEACA8192D83B75CD106  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String FloatToStringFormat::format
	String_t* ___format_4;
	// FloatToStringFormat/StringEvent FloatToStringFormat::Binding
	StringEvent_tDCCAE45C8E79792F11A9874AFCA8EACC96106ECF* ___Binding_5;
};

// FloatTween
struct FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean FloatTween::RunOnAwake
	bool ___RunOnAwake_4;
	// System.Single FloatTween::StartDelay
	float ___StartDelay_5;
	// System.Single FloatTween::fromValue
	float ___fromValue_6;
	// System.Single FloatTween::toValue
	float ___toValue_7;
	// System.Single FloatTween::Speed
	float ___Speed_8;
	// FloatTween/FloatEvent FloatTween::OnChange
	FloatEvent_tF493ABA1ABCAF529B9A821824DA42C288C68D5CF* ___OnChange_9;
	// UnityEngine.Events.UnityEvent FloatTween::OnComplete
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnComplete_10;
};

// GetMaterialFloat
struct GetMaterialFloat_t2002262B76C01BCB04BDF33C4D017FCC6826694A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material GetMaterialFloat::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_4;
	// System.String GetMaterialFloat::propertyName
	String_t* ___propertyName_5;
	// GetMaterialFloat/FloatEvent GetMaterialFloat::Binding
	FloatEvent_tC9E4D50E43FC1DF485628F8A3A0AF8A7B55F26B5* ___Binding_6;
};

// GetMaterialInt
struct GetMaterialInt_t15EE37C4ABB46561533C96B3F4BA37D7097107E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material GetMaterialInt::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_4;
	// System.String GetMaterialInt::propertyName
	String_t* ___propertyName_5;
	// GetMaterialInt/IntEvent GetMaterialInt::Binding
	IntEvent_t9782CDD4CEB659387763EF4995BD3092CD55C1DF* ___Binding_6;
};

// GridMesh
struct GridMesh_tD9E01B1F32E164F3C40206F86AD8C7F7676108FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GridMesh::Divisions
	int32_t ___Divisions_4;
	// System.Single GridMesh::Size
	float ___Size_5;
	// UnityEngine.Mesh GridMesh::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_6;
};

// MinMaxSlider
struct MinMaxSlider_tDDEDC649AE21F7D300683797501F3298EFCEE3FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider MinMaxSlider::minSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___minSlider_4;
	// UnityEngine.UI.Slider MinMaxSlider::maxSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___maxSlider_5;
	// UnityEngine.RectTransform MinMaxSlider::fillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___fillRect_6;
};

// MoveAlongZ
struct MoveAlongZ_t9F6BBD58E6B45DC1AE64C7E1B16F67C81CD3BE0B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// NamedTextureBinding
struct NamedTextureBinding_tA63A07B9386F5C56172077A02C4C86010FC7A16C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String NamedTextureBinding::textureName
	String_t* ___textureName_4;
	// NamedTextureBinding/NamedTextureEvent NamedTextureBinding::textureBinding
	NamedTextureEvent_t31CA632C56B3DF31A5E94CC9322FCC9E1641A327* ___textureBinding_5;
};

// OrbitCameraControl
struct OrbitCameraControl_tC95FDE2DCE509D37C88BC4AF190EC8D6ABDA8937  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single OrbitCameraControl::_zoomSpeedFactor
	float ____zoomSpeedFactor_4;
	// System.Single OrbitCameraControl::_rotateSpeedFactor
	float ____rotateSpeedFactor_5;
	// System.Single OrbitCameraControl::_moveSpeedFactor
	float ____moveSpeedFactor_6;
	// UnityEngine.Vector3 OrbitCameraControl::_rotateAround
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____rotateAround_7;
	// UnityEngine.Vector3 OrbitCameraControl::prevMousePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___prevMousePosition_8;
	// UnityEngine.Camera OrbitCameraControl::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_9;
	// UnityEngine.Texture2D OrbitCameraControl::OrbitCursor
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___OrbitCursor_10;
	// UnityEngine.Texture2D OrbitCameraControl::PanCursor
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___PanCursor_11;
	// UnityEngine.Texture2D OrbitCameraControl::ZoomCursor
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___ZoomCursor_12;
	// UnityEngine.Vector2 OrbitCameraControl::cursorOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorOffset_13;
};

// RsDeviceListener
struct RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Intel.RealSense.Context RsDeviceListener::ctx
	Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* ___ctx_5;
	// Intel.RealSense.Pipeline RsDeviceListener::pipeline
	Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2* ___pipeline_6;
	// System.Collections.Generic.List`1<Intel.RealSense.Device> RsDeviceListener::m_added
	List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* ___m_added_7;
	// System.Collections.Generic.List`1<Intel.RealSense.Device> RsDeviceListener::m_removed
	List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* ___m_removed_8;
	// System.Threading.AutoResetEvent RsDeviceListener::e
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___e_9;
};

// RsStreamAvailability
struct RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// RsConfiguration RsStreamAvailability::DeviceConfiguration
	RsConfiguration_tDF5345C0545AC1C14AF457ACEA37F8701B631F1D ___DeviceConfiguration_4;
	// UnityEngine.Events.UnityEvent RsStreamAvailability::OnDeviceAvailable
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnDeviceAvailable_5;
	// UnityEngine.Events.UnityEvent RsStreamAvailability::OnDeviceUnAvailable
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnDeviceUnAvailable_6;
};

// SceneLoader
struct SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// StringFloatBinding
struct StringFloatBinding_tD8721754A96DC4EDDB14076D005AC48D1E3446CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String StringFloatBinding::Name
	String_t* ___Name_4;
	// StringFloatBinding/StringFloatEvent StringFloatBinding::Binding
	StringFloatEvent_t4DC786DED57FFD47B01AC7850355BFF480C1D27D* ___Binding_5;
};

// StringIntBinding
struct StringIntBinding_tD06984046E80F31A764C4D5E32F2312B9AAE0F4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String StringIntBinding::propertyName
	String_t* ___propertyName_4;
	// StringIntBinding/StringIntEvent StringIntBinding::Binding
	StringIntEvent_t68B3D2FA35F3B810435D0E6ED3068861F8F83EFE* ___Binding_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<RsStreamAvailability,System.Boolean>

// System.Collections.Generic.Dictionary`2<RsStreamAvailability,System.Boolean>

// System.Collections.Generic.List`1<Intel.RealSense.Device>
struct List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DeviceU5BU5D_tE7FD1C3A7A297CDDBE790A805CD649D35242224F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Intel.RealSense.Device>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>

// Intel.RealSense.Context
struct Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5_StaticFields
{
	// System.Int32 Intel.RealSense.Context::ApiVersion
	int32_t ___ApiVersion_1;
};

// Intel.RealSense.Context

// Intel.RealSense.Base.Object

// Intel.RealSense.Base.Object

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// ErrorPopup/<>c__DisplayClass4_0

// ErrorPopup/<>c__DisplayClass4_0

// ErrorPopup/<Popup>d__4

// ErrorPopup/<Popup>d__4

// FloatTween/<Tween>d__10

// FloatTween/<Tween>d__10

// RsDeviceListener/<>c__DisplayClass11_0

// RsDeviceListener/<>c__DisplayClass11_0

// RsDeviceListener/<>c__DisplayClass11_1

// RsDeviceListener/<>c__DisplayClass11_1

// RsDeviceListener/<Start>d__10

// RsDeviceListener/<Start>d__10

// SceneLoader/<LoadSceneAsync>d__2

// SceneLoader/<LoadSceneAsync>d__2

// System.Collections.Generic.List`1/Enumerator<Intel.RealSense.Device>

// System.Collections.Generic.List`1/Enumerator<Intel.RealSense.Device>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<RsStreamAvailability,System.Boolean>

// System.Collections.Generic.KeyValuePair`2<RsStreamAvailability,System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.Events.UnityEvent`2<System.String,System.Int32>

// UnityEngine.Events.UnityEvent`2<System.String,System.Int32>

// UnityEngine.Events.UnityEvent`2<System.String,System.Single>

// UnityEngine.Events.UnityEvent`2<System.String,System.Single>

// UnityEngine.Events.UnityEvent`2<System.String,UnityEngine.Texture>

// UnityEngine.Events.UnityEvent`2<System.String,UnityEngine.Texture>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Intel.RealSense.Config

// Intel.RealSense.Config

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// Intel.RealSense.DeviceList
struct DeviceList_t2DDFA9BD6E258074D867A98A4A52287BC92FDD3A_StaticFields
{
	// Intel.RealSense.Base.Deleter Intel.RealSense.DeviceList::DeviceDeleter
	Deleter_t3892BD1B4867BAEF8AC2B27C062C570BAAF7A5AE* ___DeviceDeleter_1;
};

// Intel.RealSense.DeviceList

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// Intel.RealSense.Pipeline

// Intel.RealSense.Pipeline

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// RsConfiguration

// RsConfiguration

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>

// System.Collections.Generic.Dictionary`2/Enumerator<RsStreamAvailability,System.Boolean>

// System.Collections.Generic.Dictionary`2/Enumerator<RsStreamAvailability,System.Boolean>

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Intel.RealSense.InfoCollection
struct InfoCollection_tB1009E22CC096F5FF880815BC8C53CC7BCE628F8_StaticFields
{
	// Intel.RealSense.CameraInfo[] Intel.RealSense.InfoCollection::CameraInfoValues
	CameraInfoU5BU5D_t1FE88316E31ADB34FB6107575BD108753BD16CB7* ___CameraInfoValues_3;
};

// Intel.RealSense.InfoCollection

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};

// System.Threading.WaitHandle

// BoolInvert/BooleanEvent

// BoolInvert/BooleanEvent

// BoolToFloat/FloatEvent

// BoolToFloat/FloatEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// FloatToStringFormat/StringEvent

// FloatToStringFormat/StringEvent

// FloatTween/FloatEvent

// FloatTween/FloatEvent

// GetMaterialFloat/FloatEvent

// GetMaterialFloat/FloatEvent

// GetMaterialInt/IntEvent

// GetMaterialInt/IntEvent

// NamedTextureBinding/NamedTextureEvent

// NamedTextureBinding/NamedTextureEvent

// UnityEngine.UI.Slider/SliderEvent

// UnityEngine.UI.Slider/SliderEvent

// StringFloatBinding/StringFloatEvent

// StringFloatBinding/StringFloatEvent

// StringIntBinding/StringIntEvent

// StringIntBinding/StringIntEvent

// UnityEngine.AssetBundle

// UnityEngine.AssetBundle

// UnityEngine.Component

// UnityEngine.Component

// Intel.RealSense.Device
struct Device_tC79DE088DC369440A01E872788D153A69F210F0E_StaticFields
{
	// System.Collections.Hashtable Intel.RealSense.Device::refCountTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___refCountTable_2;
	// System.Object Intel.RealSense.Device::tableLock
	RuntimeObject* ___tableLock_3;
};

// Intel.RealSense.Device

// System.Threading.EventWaitHandle

// System.Threading.EventWaitHandle

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.Events.UnityAction`1<System.Single>

// UnityEngine.Events.UnityAction`1<System.Single>

// System.Threading.AutoResetEvent

// System.Threading.AutoResetEvent

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.MeshFilter

// UnityEngine.MeshFilter

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// System.Threading.WaitCallback

// System.Threading.WaitCallback

// UnityEngine.Application/LogCallback

// UnityEngine.Application/LogCallback

// Intel.RealSense.Context/OnDevicesChangedDelegate

// Intel.RealSense.Context/OnDevicesChangedDelegate

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// BoolInvert

// BoolInvert

// BoolToFloat

// BoolToFloat

// ErrorPopup

// ErrorPopup

// FloatToStringFormat

// FloatToStringFormat

// FloatTween

// FloatTween

// GetMaterialFloat

// GetMaterialFloat

// GetMaterialInt

// GetMaterialInt

// GridMesh

// GridMesh

// MinMaxSlider

// MinMaxSlider

// MoveAlongZ

// MoveAlongZ

// NamedTextureBinding

// NamedTextureBinding

// OrbitCameraControl

// OrbitCameraControl

// RsDeviceListener
struct RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_StaticFields
{
	// RsDeviceListener RsDeviceListener::<Instance>k__BackingField
	RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* ___U3CInstanceU3Ek__BackingField_4;
};

// RsDeviceListener

// RsStreamAvailability

// RsStreamAvailability

// SceneLoader
struct SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB_StaticFields
{
	// System.Boolean SceneLoader::created
	bool ___created_4;
};

// SceneLoader

// StringFloatBinding

// StringFloatBinding

// StringIntBinding

// StringIntBinding

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// RsStreamAvailability[]
struct RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA  : public RuntimeArray
{
	ALIGN_FIELD (8) RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* m_Items[1];

	inline RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___0_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___0_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___0_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___0_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___0_call, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0F33DA8746CDA058229FFBD24348B82A5AB46543_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B Dictionary_2_GetEnumerator_mC7827569955B8266DAC471AC8CBCADC6416AB941_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m47DDE5BF12A9FCE3120292E1B2F352CDDD214EEF_gshared (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 Enumerator_get_Current_m90E0638FF1812FE1DDE8D13CC607F4CD161D12C1_gshared_inline (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0712867110707C27D0A2D46D9735F066C9BA48A2_gshared (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, RuntimeObject* ___0_key, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Single>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_mE2D513B2A046E33896CB9C87F914C497FD81B72C_gshared (UnityEvent_2_tE96C8120FC5D3F6C5FF16D401433B6390C0C9789* __this, RuntimeObject* ___0_arg0, float ___1_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m48F7C02F8FE07D0CF6B8D4765FA245607595488B_gshared (UnityEvent_2_tE96C8120FC5D3F6C5FF16D401433B6390C0C9789* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_Invoke_m6170976760BD14937240FAF3E0A9398A1C01609E_gshared (UnityEvent_2_t17A7782DB93CB5C65967C3F94403767E1E68E15A* __this, RuntimeObject* ___0_arg0, int32_t ___1_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m4B96289ED5CA00C9501E038D258351DA2307E7EA_gshared (UnityEvent_2_t17A7782DB93CB5C65967C3F94403767E1E68E15A* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___0_arg0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, const RuntimeMethod*))UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_gshared)(__this, method);
}
// System.Single System.Convert::ToSingle(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_mDB62EDFD0197B14286A6DEA482361F6FCD101237 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
inline void UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, float ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, float, const RuntimeMethod*))UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_gshared)(__this, ___0_arg0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, const RuntimeMethod*))UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_gshared)(__this, method);
}
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ErrorPopup::Popup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorPopup_Popup_m0EB398E7E17A47486D1D303E768C2E677ABA1FFA (ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void ErrorPopup/<Popup>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPopupU3Ed__4__ctor_mA8A006D8E5049D98AD9D30B4E00E7389E0FC7BB9 (U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<FloatTween>()
inline FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* GameObject_GetComponent_TisFloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6_m1F3FBDC38E1A7549EC69B6E65BFD61FA048A4807 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.Void FloatTween::Tween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_Tween_mC7DEAD813E69F4A41EFF368F1F4EB1911A65EA81 (FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void ErrorPopup/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m9FF5ED559979EAB627B6703CA8E63DA21D225D12 (U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___0_arg0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Collections.IEnumerator FloatTween::Tween(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FloatTween_Tween_mA51E7B85C990841D42071EB65911654F3FB7744C (FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* __this, float ___0_from, float ___1_to, const RuntimeMethod* method) ;
// System.Void FloatTween/<Tween>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenU3Ed__10__ctor_m7E69BC16664DF661E07DD087E338A305F16961B0 (U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
inline void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared)(__this, ___0_arg0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, const RuntimeMethod*))UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor(System.Int32)
inline void List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_gshared)(__this, ___0_capacity, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___0_inVertices, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<System.Int32> System.Linq.Enumerable::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Range_m4FB9BBBA09BEF5177C13506DB385CF4467C15FD8 (int32_t ___0_start, int32_t ___1_count, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Int32>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_gshared)(___0_source, method);
}
// System.Void UnityEngine.Mesh::SetIndices(System.Int32[],UnityEngine.MeshTopology,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_indices, int32_t ___1_topology, int32_t ___2_submesh, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5 (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* ___0_call, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4*, UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*, const RuntimeMethod*))UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_gshared)(__this, ___0_call, method);
}
// System.Void MinMaxSlider::OnValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxSlider_OnValueChanged_m092DA20E3B9048EB48FB352746DD4250E3834282 (MinMaxSlider_tDDEDC649AE21F7D300683797501F3298EFCEE3FC* __this, float ___0_v, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Slider_get_normalizedValue_mC839197322275EF1318B6E49B7573FDB30F74D83 (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.String,UnityEngine.Texture>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_mB5085014CB26F5640A33E386AC3AB0D3D1D1A6C3 (UnityEvent_2_tFFD9F120F1C6099F0D99E893CE999FE4A8F49E12* __this, String_t* ___0_arg0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_arg1, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tFFD9F120F1C6099F0D99E893CE999FE4A8F49E12*, String_t*, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, const RuntimeMethod*))UnityEvent_2_Invoke_m9815C6864ED92A2000D3CCF1086DC1FF31CAB3AC_gshared)(__this, ___0_arg0, ___1_arg1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,UnityEngine.Texture>::.ctor()
inline void UnityEvent_2__ctor_m8DC006BCF10C6D1D03AD07AAB45E0B71AB086115 (UnityEvent_2_tFFD9F120F1C6099F0D99E893CE999FE4A8F49E12* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tFFD9F120F1C6099F0D99E893CE999FE4A8F49E12*, const RuntimeMethod*))UnityEvent_2__ctor_m36CB65F6682CF6EFB69FE2F1939D331599C453E3_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::SetCursor(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.CursorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_SetCursor_m00781B5A9FDF84759E2D8869F08E6120062FCE86 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_hotspot, int32_t ___2_cursorMode, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isFocused_mFEEC52E355AA7AAA6B7250520CA544D80BE77524 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, int32_t ___2_relativeTo, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// RsDeviceListener RsDeviceListener::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* RsDeviceListener_get_Instance_m1D83F2D0B3CD6DA27875EABF4DE81533121E228F_inline (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void RsDeviceListener::set_Instance(RsDeviceListener)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RsDeviceListener_set_Instance_mACF1E9ACE59AB480296766DB6F8F875096CACBCF_inline (RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* ___0_value, const RuntimeMethod* method) ;
// System.Void RsDeviceListener/<Start>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__10__ctor_m040B192C9B6563D379146B8A0B60E0E10D22C65A (U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void RsDeviceListener/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m817C9BBA6942543A7F70621A9C7396FFD5D334A8 (U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<RsStreamAvailability>()
inline RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA* Object_FindObjectsOfType_TisRsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574_m721215ED054E5FA3806409C5AD695054305E123D (const RuntimeMethod* method)
{
	return ((  RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Int32 System.Linq.Enumerable::Count<RsStreamAvailability>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisRsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574_m8937529FD416002BFE548E9C0C0DA6AB610CA68A (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared)(___0_source, method);
}
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_mB7C8CD30C5BE11A2C8DB79B27593CF0C5FE82ADE (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* __this, bool ___0_initialState, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<RsStreamAvailability,System.Boolean>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m4EF899F86A60D4D9E3374F08CEF9BF1849EE15AD (Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m0F33DA8746CDA058229FFBD24348B82A5AB46543_gshared)(__this, ___0_capacity, method);
}
// System.Void RsDeviceListener/<>c__DisplayClass11_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_1__ctor_m929800A05B1E6FE40B56862A26A73A4A20FB64E1 (U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_m24B9C1887DBABE1F408E31475AF15B9B9A08854D (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<RsStreamAvailability,System.Boolean>::GetEnumerator()
inline Enumerator_t478F8EDB2EB8AFFF9F59512EB47DF060255F6AEE Dictionary_2_GetEnumerator_m62268CBF8804891879991DDB12CD4EF4CCA8855F (Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t478F8EDB2EB8AFFF9F59512EB47DF060255F6AEE (*) (Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mC7827569955B8266DAC471AC8CBCADC6416AB941_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<RsStreamAvailability,System.Boolean>::Dispose()
inline void Enumerator_Dispose_m67F02E5F22178A5EB8C7DB3E489E920EA799CF1C (Enumerator_t478F8EDB2EB8AFFF9F59512EB47DF060255F6AEE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t478F8EDB2EB8AFFF9F59512EB47DF060255F6AEE*, const RuntimeMethod*))Enumerator_Dispose_m47DDE5BF12A9FCE3120292E1B2F352CDDD214EEF_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<RsStreamAvailability,System.Boolean>::get_Current()
inline KeyValuePair_2_t21733460BB6B41626D484C1E5067D6CEF3F83BAD Enumerator_get_Current_m6F45AB48EDB8495B728F40325D1A591B2ADD19C4_inline (Enumerator_t478F8EDB2EB8AFFF9F59512EB47DF060255F6AEE* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t21733460BB6B41626D484C1E5067D6CEF3F83BAD (*) (Enumerator_t478F8EDB2EB8AFFF9F59512EB47DF060255F6AEE*, const RuntimeMethod*))Enumerator_get_Current_m90E0638FF1812FE1DDE8D13CC607F4CD161D12C1_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<RsStreamAvailability,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m51D03330E6D1B5A84B5CB612D9F7C1C319A41AC4_inline (KeyValuePair_2_t21733460BB6B41626D484C1E5067D6CEF3F83BAD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t21733460BB6B41626D484C1E5067D6CEF3F83BAD*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<RsStreamAvailability,System.Boolean>::get_Key()
inline RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* KeyValuePair_2_get_Key_m463EF464D98762C96F20783694A2A43B6641775F_inline (KeyValuePair_2_t21733460BB6B41626D484C1E5067D6CEF3F83BAD* __this, const RuntimeMethod* method)
{
	return ((  RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* (*) (KeyValuePair_2_t21733460BB6B41626D484C1E5067D6CEF3F83BAD*, const RuntimeMethod*))KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<RsStreamAvailability,System.Boolean>::MoveNext()
inline bool Enumerator_MoveNext_mD20B836045E5A662BBA1DE60B26DC6C51CF02CA0 (Enumerator_t478F8EDB2EB8AFFF9F59512EB47DF060255F6AEE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t478F8EDB2EB8AFFF9F59512EB47DF060255F6AEE*, const RuntimeMethod*))Enumerator_MoveNext_m0712867110707C27D0A2D46D9735F066C9BA48A2_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<Intel.RealSense.Device> Intel.RealSense.DeviceList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeviceList_GetEnumerator_mF1C600676BDAAA61B53769E6B8536871BCA21177 (DeviceList_t2DDFA9BD6E258074D867A98A4A52287BC92FDD3A* __this, const RuntimeMethod* method) ;
// Intel.RealSense.InfoCollection Intel.RealSense.Device::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InfoCollection_tB1009E22CC096F5FF880815BC8C53CC7BCE628F8* Device_get_Info_m00D6466D210FCEA32987F7C9F59A7F90066B62D9_inline (Device_tC79DE088DC369440A01E872788D153A69F210F0E* __this, const RuntimeMethod* method) ;
// System.String Intel.RealSense.InfoCollection::get_Item(Intel.RealSense.CameraInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InfoCollection_get_Item_m4B597199E8D463605288739DC5CF4D93B8C98D71 (InfoCollection_tB1009E22CC096F5FF880815BC8C53CC7BCE628F8* __this, int32_t ___0_info, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Intel.RealSense.Device>::Clear()
inline void List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_inline (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Intel.RealSense.Device>::GetEnumerator()
inline Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891 List_1_GetEnumerator_m9B6D5307B67A7E9B5A353CC776115A87EF4911E9 (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891 (*) (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Intel.RealSense.Device>::Dispose()
inline void Enumerator_Dispose_m95EEDD4CCF925AC9F1F37817D5E08DDA82391298 (Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Intel.RealSense.Device>::get_Current()
inline Device_tC79DE088DC369440A01E872788D153A69F210F0E* Enumerator_get_Current_m35B7C19DD3050513901406B9A08734C8E5B2E181_inline (Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891* __this, const RuntimeMethod* method)
{
	return ((  Device_tC79DE088DC369440A01E872788D153A69F210F0E* (*) (Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean Intel.RealSense.DeviceList::Contains(Intel.RealSense.Device)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceList_Contains_mC38BF50157E6379197530E190A1B4D6B70BEE8FB (DeviceList_t2DDFA9BD6E258074D867A98A4A52287BC92FDD3A* __this, Device_tC79DE088DC369440A01E872788D153A69F210F0E* ___0_device, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Intel.RealSense.Device>::Add(T)
inline void List_1_Add_m5001FBF008A57564A5E40B31C843EC5E660EE9F6_inline (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* __this, Device_tC79DE088DC369440A01E872788D153A69F210F0E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B*, Device_tC79DE088DC369440A01E872788D153A69F210F0E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Intel.RealSense.Device>::MoveNext()
inline bool Enumerator_MoveNext_mBD820B9344D8D1C48E15B0DB1938FD15CFEC0D99 (Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Intel.RealSense.Device>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mC8E4E6A3C3357BB619692DBF03949B6EB0461031 (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void Intel.RealSense.Base.Object::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Dispose_mF9CEF11582FACFF8209F0A1E82D4020309608293 (Object_tC31E2ABDE7A17D6033572772D42B1999E9033F25* __this, const RuntimeMethod* method) ;
// System.Void Intel.RealSense.Context/OnDevicesChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDevicesChangedDelegate__ctor_m4F10A9F2500370E61126A3811ECAF8DE4C9FFA99 (OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Intel.RealSense.Context::remove_OnDevicesChanged(Intel.RealSense.Context/OnDevicesChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context_remove_OnDevicesChanged_mBC2222D0FD29A52AA5AA085751067843A45018A0 (Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* __this, OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD* ___0_value, const RuntimeMethod* method) ;
// System.Void Intel.RealSense.Context::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context_Dispose_m0D0C45E1AB80FD8B255B9A6B47382724F9F29925 (Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Intel.RealSense.Device>::.ctor()
inline void List_1__ctor_m55BF2FCB682A665B8BC8DDAED18CE47C6317E265 (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Intel.RealSense.Context::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__ctor_m833D3312D73B2D956F3142714C1EB4CB7738A34A (Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* __this, const RuntimeMethod* method) ;
// System.Void Intel.RealSense.Pipeline::.ctor(Intel.RealSense.Context)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pipeline__ctor_m97EC9E399A7C7532907D51F25E3D6E71895DF9E5 (Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2* __this, Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* ___0_ctx, const RuntimeMethod* method) ;
// System.Void Intel.RealSense.Context::add_OnDevicesChanged(Intel.RealSense.Context/OnDevicesChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context_add_OnDevicesChanged_m409A40EEFB06AEA08ABD69A891EE9607AF8F55E3 (Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* __this, OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD* ___0_value, const RuntimeMethod* method) ;
// Intel.RealSense.Config RsConfiguration::ToPipelineConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Config_tF156DF44EDE591C8529D7A67C051932F799AF402* RsConfiguration_ToPipelineConfig_m5268DD8F4126F7F079E75CEB9FFB8990F6138BEB (RsConfiguration_tDF5345C0545AC1C14AF457ACEA37F8701B631F1D* __this, const RuntimeMethod* method) ;
// System.Boolean Intel.RealSense.Config::CanResolve(Intel.RealSense.Pipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Config_CanResolve_m4CF60E49D64C5049945B01E30AFD6979AFC79053 (Config_tF156DF44EDE591C8529D7A67C051932F799AF402* __this, Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2* ___0_pipe, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<RsStreamAvailability,System.Boolean>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mB49D9246BC86239B672A9EFA421893E31E003173 (Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188* __this, RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* ___0_key, bool ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188*, RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574*, bool, const RuntimeMethod*))Dictionary_2_set_Item_mF1A7BA3C1568A00A32A43BCD889038FE080F77BF_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D (int32_t* ___0_location, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* AssetBundle_LoadFromFile_mAFD7B0E8F0A0A88E9BB60180EBA0A99B8B3F2629 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void SceneLoader/<LoadSceneAsync>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2__ctor_m00D4F4607F4A6560CA97C2C6BBCFDF170B15F015 (U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SceneLoader::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneLoader_LoadSceneAsync_mBB6F460901AFC409438C66497FF53E63C9C5669C (SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void SceneLoader::LoadSceneAdditive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadSceneAdditive_m73C51D7A01697E47E568B996B7F40F649AE95EB1 (SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF (String_t* ___0_sceneName, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___0_url, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneAt_m716F9BAC0C25737577B21569CC210869B22A73DE (int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::MoveGameObjectToScene(UnityEngine.GameObject,UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_MoveGameObjectToScene_mF5DC73256FA145D321DE14771F93AF7B832FE62A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___1_scene, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(UnityEngine.SceneManagement.Scene)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_UnloadSceneAsync_mA3AB74052DF7155958E100364AAFFE8E11B52A4A (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300 (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.Single>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_mA05A3BD621633ACF91D30C742ED7409FAF1D93C7 (UnityEvent_2_tEF116C3134900FD3CE072A91779B5B09001F855F* __this, String_t* ___0_arg0, float ___1_arg1, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tEF116C3134900FD3CE072A91779B5B09001F855F*, String_t*, float, const RuntimeMethod*))UnityEvent_2_Invoke_mE2D513B2A046E33896CB9C87F914C497FD81B72C_gshared)(__this, ___0_arg0, ___1_arg1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.Single>::.ctor()
inline void UnityEvent_2__ctor_mCB38CC308C414BBCD12E38E1C838630729D2F52A (UnityEvent_2_tEF116C3134900FD3CE072A91779B5B09001F855F* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_tEF116C3134900FD3CE072A91779B5B09001F855F*, const RuntimeMethod*))UnityEvent_2__ctor_m48F7C02F8FE07D0CF6B8D4765FA245607595488B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.Int32>::Invoke(T0,T1)
inline void UnityEvent_2_Invoke_m7EE09CDAA9893FCD6458C70F8D1089AFBE1BDFE7 (UnityEvent_2_t651FD2EEA36CC1971811E5BFEC4A992CB84C3B83* __this, String_t* ___0_arg0, int32_t ___1_arg1, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t651FD2EEA36CC1971811E5BFEC4A992CB84C3B83*, String_t*, int32_t, const RuntimeMethod*))UnityEvent_2_Invoke_m6170976760BD14937240FAF3E0A9398A1C01609E_gshared)(__this, ___0_arg0, ___1_arg1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<System.String,System.Int32>::.ctor()
inline void UnityEvent_2__ctor_mEFA16CA89C0D7FDD4C53C16A47C918EDD855A0A9 (UnityEvent_2_t651FD2EEA36CC1971811E5BFEC4A992CB84C3B83* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t651FD2EEA36CC1971811E5BFEC4A992CB84C3B83*, const RuntimeMethod*))UnityEvent_2__ctor_m4B96289ED5CA00C9501E038D258351DA2307E7EA_gshared)(__this, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Void BoolInvert::set_Value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolInvert_set_Value_mCF45472B749E6F4DC819CF4271C69ADCDBDC4275 (BoolInvert_t901587D57445C734BEADE7DC6B879CCDEFD8EE3D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// @event.Invoke(!value);
		BooleanEvent_tAA35183A277A8AA16B8AEA60067C6DB637199703* L_0 = __this->___event_4;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BoolInvert::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolInvert__ctor_m67125D5BF439094BC0CB9F39D54B8FDD52B8C0F8 (BoolInvert_t901587D57445C734BEADE7DC6B879CCDEFD8EE3D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BoolInvert/BooleanEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanEvent__ctor_mD109B5117566104D79219B37870E690FA3E2353F (BooleanEvent_tAA35183A277A8AA16B8AEA60067C6DB637199703* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(__this, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
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
// System.Void BoolToFloat::set_Value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolToFloat_set_Value_mA9CCA26E25000DEA34E5210157727E45FC28C74B (BoolToFloat_t345D922BD9EDEA555CB9FE441B1613B0C544A58C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnValueChange.Invoke(Convert.ToSingle(value));
		FloatEvent_t9725781C362C6AFF517216BE99CBA691FA08F4B3* L_0 = __this->___OnValueChange_4;
		bool L_1 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = Convert_ToSingle_mDB62EDFD0197B14286A6DEA482361F6FCD101237(L_1, NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_0, L_2, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BoolToFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolToFloat__ctor_m2E3C567357A525C84FB6B2888137B755B018AFDE (BoolToFloat_t345D922BD9EDEA555CB9FE441B1613B0C544A58C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BoolToFloat/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_mF5DC9A567C225CA4F3FEA2E64CD9B97B0A3D048D (FloatEvent_t9725781C362C6AFF517216BE99CBA691FA08F4B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void ErrorPopup::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorPopup_Awake_m0045BED03416A82F47EA443C4C4F00AFAEB28F73 (ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorPopup_OnLogMessageRecevied_mF8EFE81F933806762894B4F19190C995A3DE7B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived += OnLogMessageRecevied;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)ErrorPopup_OnLogMessageRecevied_mF8EFE81F933806762894B4F19190C995A3DE7B2E_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C(L_0, NULL);
		// }
		return;
	}
}
// System.Void ErrorPopup::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorPopup_OnDestroy_m7C868CCC6A1F88E1181DC41EFFF15C3C937F0178 (ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorPopup_OnLogMessageRecevied_mF8EFE81F933806762894B4F19190C995A3DE7B2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived -= OnLogMessageRecevied;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)ErrorPopup_OnLogMessageRecevied_mF8EFE81F933806762894B4F19190C995A3DE7B2E_RuntimeMethod_var), NULL);
		Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC(L_0, NULL);
		// }
		return;
	}
}
// System.Void ErrorPopup::OnLogMessageRecevied(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorPopup_OnLogMessageRecevied_mF8EFE81F933806762894B4F19190C995A3DE7B2E (ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96* __this, String_t* ___0_logString, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Popup(logString));
		String_t* L_0 = ___0_logString;
		RuntimeObject* L_1;
		L_1 = ErrorPopup_Popup_m0EB398E7E17A47486D1D303E768C2E677ABA1FFA(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ErrorPopup::Popup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorPopup_Popup_m0EB398E7E17A47486D1D303E768C2E677ABA1FFA (ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902* L_0 = (U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902*)il2cpp_codegen_object_new(U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPopupU3Ed__4__ctor_mA8A006D8E5049D98AD9D30B4E00E7389E0FC7BB9(L_0, 0, NULL);
		U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902* L_2 = L_1;
		String_t* L_3 = ___0_text;
		NullCheck(L_2);
		L_2->___text_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___text_4), (void*)L_3);
		return L_2;
	}
}
// System.Void ErrorPopup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorPopup__ctor_m66F901F201FFC8AA64309F0CC09E85051C45B71E (ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ErrorPopup/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m9FF5ED559979EAB627B6703CA8E63DA21D225D12 (U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ErrorPopup/<>c__DisplayClass4_0::<Popup>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CPopupU3Eb__0_m92C0CB0131173A55C845C3F0AA0F583698D1F436 (U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6_m1F3FBDC38E1A7549EC69B6E65BFD61FA048A4807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CPopupU3Eb__1_m0078242D3AC047FDC842A1FBB24C798AFEE19013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B2_1 = NULL;
	FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* G_B2_2 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B1_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B1_1 = NULL;
	FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* G_B1_2 = NULL;
	{
		// var fade = go.GetComponent<FloatTween>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___go_0;
		NullCheck(L_0);
		FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* L_1;
		L_1 = GameObject_GetComponent_TisFloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6_m1F3FBDC38E1A7549EC69B6E65BFD61FA048A4807(L_0, GameObject_GetComponent_TisFloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6_m1F3FBDC38E1A7549EC69B6E65BFD61FA048A4807_RuntimeMethod_var);
		// fade.fromValue = 1;
		FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* L_2 = L_1;
		NullCheck(L_2);
		L_2->___fromValue_6 = (1.0f);
		// fade.toValue = 0;
		FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* L_3 = L_2;
		NullCheck(L_3);
		L_3->___toValue_7 = (0.0f);
		// fade.OnComplete.AddListener(() => Destroy(go));
		FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* L_4 = L_3;
		NullCheck(L_4);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = L_4->___OnComplete_10;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = __this->___U3CU3E9__1_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		G_B1_2 = L_4;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			G_B2_2 = L_4;
			goto IL_0046;
		}
	}
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CPopupU3Eb__1_m0078242D3AC047FDC842A1FBB24C798AFEE19013_RuntimeMethod_var), NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = L_8;
		V_0 = L_9;
		__this->___U3CU3E9__1_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E9__1_1), (void*)L_9);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = V_0;
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0046:
	{
		NullCheck(G_B2_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(G_B2_1, G_B2_0, NULL);
		// fade.Tween();
		NullCheck(G_B2_2);
		FloatTween_Tween_mC7DEAD813E69F4A41EFF368F1F4EB1911A65EA81(G_B2_2, NULL);
		// });
		return;
	}
}
// System.Void ErrorPopup/<>c__DisplayClass4_0::<Popup>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CPopupU3Eb__1_m0078242D3AC047FDC842A1FBB24C798AFEE19013 (U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fade.OnComplete.AddListener(() => Destroy(go));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___go_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
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
// System.Void ErrorPopup/<Popup>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPopupU3Ed__4__ctor_mA8A006D8E5049D98AD9D30B4E00E7389E0FC7BB9 (U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ErrorPopup/<Popup>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPopupU3Ed__4_System_IDisposable_Dispose_mC3BE4798081F99B5FB5F995D6F2A904E7EB70177 (U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ErrorPopup/<Popup>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPopupU3Ed__4_MoveNext_mFC12F987E14A3BDB16C883795ADC7D023E6D2392 (U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CPopupU3Eb__0_m92C0CB0131173A55C845C3F0AA0F583698D1F436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE1496A616E3766EBC25085B50DF7685BC314DB1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96* V_1 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* L_4 = (U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		U3CU3Ec__DisplayClass4_0__ctor_m9FF5ED559979EAB627B6703CA8E63DA21D225D12(L_4, NULL);
		__this->___U3CU3E8__1_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_2), (void*)L_4);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0039:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var go = Instantiate(PopupPrefab) as GameObject;
		U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* L_5 = __this->___U3CU3E8__1_2;
		ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___PopupPrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___go_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___go_0), (void*)L_8);
		// go.GetComponent<RectTransform>().SetParent(GetComponent<RectTransform>());
		U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* L_9 = __this->___U3CU3E8__1_2;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___go_0;
		NullCheck(L_10);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11;
		L_11 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_10, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		ErrorPopup_t7F7A9FDB552671B6B8F169C8579E7930A1A45C96* L_12 = V_1;
		NullCheck(L_12);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13;
		L_13 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_12, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_11, L_13, NULL);
		// go.GetComponent<RectTransform>().SetAsFirstSibling();
		U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* L_14 = __this->___U3CU3E8__1_2;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = L_14->___go_0;
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_15, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_16);
		Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD(L_16, NULL);
		// var txt = go.GetComponentInChildren<Text>();
		U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* L_17 = __this->___U3CU3E8__1_2;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___go_0;
		NullCheck(L_18);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19;
		L_19 = GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13(L_18, GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		// txt.text = string.Format("<color=#00000040>[{0}]</color> {1}", DateTime.Now.ToString(), text);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_20;
		L_20 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_2 = L_20;
		String_t* L_21;
		L_21 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A((&V_2), NULL);
		String_t* L_22 = __this->___text_4;
		String_t* L_23;
		L_23 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralEE1496A616E3766EBC25085B50DF7685BC314DB1, L_21, L_22, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_23);
		// var btn = go.GetComponentInChildren<Button>();
		U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* L_24 = __this->___U3CU3E8__1_2;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___go_0;
		NullCheck(L_25);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_26;
		L_26 = GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A(L_25, GameObject_GetComponentInChildren_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mC24167312F3DB38FB43365A8583DA381DB6EAA4A_RuntimeMethod_var);
		// btn.onClick.AddListener(() =>
		// {
		//     var fade = go.GetComponent<FloatTween>();
		//     fade.fromValue = 1;
		//     fade.toValue = 0;
		//     fade.OnComplete.AddListener(() => Destroy(go));
		//     fade.Tween();
		// });
		NullCheck(L_26);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_27;
		L_27 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_26, NULL);
		U3CU3Ec__DisplayClass4_0_t3C3B63DAC5409CB78E11DF1EFA81960FCC639E2D* L_28 = __this->___U3CU3E8__1_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_29 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_29, L_28, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CPopupU3Eb__0_m92C0CB0131173A55C845C3F0AA0F583698D1F436_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_27, L_29, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ErrorPopup/<Popup>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPopupU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m24A90B45C4DFCA99A2D1D664995A73488CD1517B (U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ErrorPopup/<Popup>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPopupU3Ed__4_System_Collections_IEnumerator_Reset_mA90CC0367A145CCEC9C29C6233BE4DAAFD562A24 (U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPopupU3Ed__4_System_Collections_IEnumerator_Reset_mA90CC0367A145CCEC9C29C6233BE4DAAFD562A24_RuntimeMethod_var)));
	}
}
// System.Object ErrorPopup/<Popup>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPopupU3Ed__4_System_Collections_IEnumerator_get_Current_m17F5A18D3DE0579B5A839B56B4661567D87A813A (U3CPopupU3Ed__4_t1D3BE971F95B261C5FD85030123995F62A93D902* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void FloatToStringFormat::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatToStringFormat_set_Value_m85EF95BCE4F117ABCBD70E579036443B9A63C004 (FloatToStringFormat_t81FC5C974860819DC018BEACA8192D83B75CD106* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Binding.Invoke(string.Format(format, value));
		StringEvent_tDCCAE45C8E79792F11A9874AFCA8EACC96106ECF* L_0 = __this->___Binding_5;
		String_t* L_1 = __this->___format_4;
		float L_2 = ___0_value;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_1, L_4, NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(L_0, L_5, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FloatToStringFormat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatToStringFormat__ctor_m78056E8AF39F731EED3A118DB6CBFFC2BCFB0095 (FloatToStringFormat_t81FC5C974860819DC018BEACA8192D83B75CD106* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string format = "{0}";
		__this->___format_4 = _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___format_4), (void*)_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FloatToStringFormat/StringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEvent__ctor_mF171F5BD21F31D9CD40FCA8B2FA9D31AFEEAD827 (StringEvent_tDCCAE45C8E79792F11A9874AFCA8EACC96106ECF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void FloatTween::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_Awake_mD92115C8E7B4AEB2C9A90D7DEC12847A9271664B (FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* __this, const RuntimeMethod* method) 
{
	{
		// if (RunOnAwake)
		bool L_0 = __this->___RunOnAwake_4;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Tween();
		FloatTween_Tween_mC7DEAD813E69F4A41EFF368F1F4EB1911A65EA81(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void FloatTween::Tween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween_Tween_mC7DEAD813E69F4A41EFF368F1F4EB1911A65EA81 (FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Tween(fromValue, toValue));
		float L_0 = __this->___fromValue_6;
		float L_1 = __this->___toValue_7;
		RuntimeObject* L_2;
		L_2 = FloatTween_Tween_mA51E7B85C990841D42071EB65911654F3FB7744C(__this, L_0, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator FloatTween::Tween(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FloatTween_Tween_mA51E7B85C990841D42071EB65911654F3FB7744C (FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* __this, float ___0_from, float ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1* L_0 = (U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1*)il2cpp_codegen_object_new(U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTweenU3Ed__10__ctor_m7E69BC16664DF661E07DD087E338A305F16961B0(L_0, 0, NULL);
		U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1* L_2 = L_1;
		float L_3 = ___0_from;
		NullCheck(L_2);
		L_2->___from_3 = L_3;
		U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1* L_4 = L_2;
		float L_5 = ___1_to;
		NullCheck(L_4);
		L_4->___to_4 = L_5;
		return L_4;
	}
}
// System.Void FloatTween::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatTween__ctor_m68860B19C77B9505C71D6B588A679F1CDC3F5F93 (FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* __this, const RuntimeMethod* method) 
{
	{
		// public bool RunOnAwake = true;
		__this->___RunOnAwake_4 = (bool)1;
		// public float StartDelay = 0.1f;
		__this->___StartDelay_5 = (0.100000001f);
		// public float toValue = 1f;
		__this->___toValue_7 = (1.0f);
		// public float Speed = 1f;
		__this->___Speed_8 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FloatTween/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m05C54F32FF89D165E584F9B7559FFD182350C595 (FloatEvent_tF493ABA1ABCAF529B9A821824DA42C288C68D5CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void FloatTween/<Tween>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenU3Ed__10__ctor_m7E69BC16664DF661E07DD087E338A305F16961B0 (U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FloatTween/<Tween>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenU3Ed__10_System_IDisposable_Dispose_m0D67D399C06F8FE29C652E8D12C3C4E61E1E84D5 (U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FloatTween/<Tween>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTweenU3Ed__10_MoveNext_m7BB5625435846F79389094BCD35A6BF573E3F889 (U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_00ad;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnChange.Invoke(from);
		FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* L_3 = V_1;
		NullCheck(L_3);
		FloatEvent_tF493ABA1ABCAF529B9A821824DA42C288C68D5CF* L_4 = L_3->___OnChange_9;
		float L_5 = __this->___from_3;
		NullCheck(L_4);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_4, L_5, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// yield return new WaitForSeconds(StartDelay);
		FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___StartDelay_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0054:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var value = from;
		float L_9 = __this->___from_3;
		__this->___U3CvalueU3E5__2_5 = L_9;
		goto IL_00b4;
	}

IL_0069:
	{
		// value = Mathf.MoveTowards(value, to, Time.deltaTime * Speed);
		float L_10 = __this->___U3CvalueU3E5__2_5;
		float L_11 = __this->___to_4;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___Speed_8;
		float L_15;
		L_15 = Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline(L_10, L_11, ((float)il2cpp_codegen_multiply(L_12, L_14)), NULL);
		__this->___U3CvalueU3E5__2_5 = L_15;
		// OnChange.Invoke(value);
		FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* L_16 = V_1;
		NullCheck(L_16);
		FloatEvent_tF493ABA1ABCAF529B9A821824DA42C288C68D5CF* L_17 = L_16->___OnChange_9;
		float L_18 = __this->___U3CvalueU3E5__2_5;
		NullCheck(L_17);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_17, L_18, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ad:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b4:
	{
		// while (!Mathf.Approximately(value, to))
		float L_19 = __this->___U3CvalueU3E5__2_5;
		float L_20 = __this->___to_4;
		bool L_21;
		L_21 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0069;
		}
	}
	{
		// OnComplete.Invoke();
		FloatTween_t734BA7FE859073190E9E2A0A42C10AF00DC641C6* L_22 = V_1;
		NullCheck(L_22);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_23 = L_22->___OnComplete_10;
		NullCheck(L_23);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_23, NULL);
		// }
		return (bool)0;
	}
}
// System.Object FloatTween/<Tween>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD8EA9477DD7737B85A7936142DD6EE25115C27EF (U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FloatTween/<Tween>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTweenU3Ed__10_System_Collections_IEnumerator_Reset_mC7F211709C8347D911189E42431592964AB340FD (U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTweenU3Ed__10_System_Collections_IEnumerator_Reset_mC7F211709C8347D911189E42431592964AB340FD_RuntimeMethod_var)));
	}
}
// System.Object FloatTween/<Tween>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTweenU3Ed__10_System_Collections_IEnumerator_get_Current_m21718A2A1CF97A2075C8DB7C5989DB0F4DB9CC49 (U3CTweenU3Ed__10_t3A3F18E80F250D171FB872CB4657CAEF565434D1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void GetMaterialFloat::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetMaterialFloat_Awake_mD0EB986AAD4138A66A48A9DC75E1BFBAF3694F2E (GetMaterialFloat_t2002262B76C01BCB04BDF33C4D017FCC6826694A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Binding.Invoke(material.GetFloat(propertyName));
		FloatEvent_tC9E4D50E43FC1DF485628F8A3A0AF8A7B55F26B5* L_0 = __this->___Binding_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___material_4;
		String_t* L_2 = __this->___propertyName_5;
		NullCheck(L_1);
		float L_3;
		L_3 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_1, L_2, NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805(L_0, L_3, UnityEvent_1_Invoke_mABC41DCEDDFA68F8F39C0DFC1CF55B7C1B70A805_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GetMaterialFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetMaterialFloat__ctor_m135BCB290C6357A47DB51176BC440E8D716FAEEB (GetMaterialFloat_t2002262B76C01BCB04BDF33C4D017FCC6826694A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GetMaterialFloat/FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_mB2EB2B8385D9FBB035D4C0704D8873FD3E686EFC (FloatEvent_tC9E4D50E43FC1DF485628F8A3A0AF8A7B55F26B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void GetMaterialInt::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetMaterialInt_Awake_m015793FD7D24B3BA57F9F11CCAAAAB8C45CEE6BF (GetMaterialInt_t15EE37C4ABB46561533C96B3F4BA37D7097107E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Binding.Invoke(material.GetInt(propertyName));
		IntEvent_t9782CDD4CEB659387763EF4995BD3092CD55C1DF* L_0 = __this->___Binding_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___material_4;
		String_t* L_2 = __this->___propertyName_5;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = Material_GetInt_mA772B615274DD11B37A352BC66EFA81BFD9C13EA(L_1, L_2, NULL);
		NullCheck(L_0);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_0, L_3, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GetMaterialInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetMaterialInt__ctor_mFA26B2C435BF1C6E454C2AA7F276BA161B077343 (GetMaterialInt_t15EE37C4ABB46561533C96B3F4BA37D7097107E8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GetMaterialInt/IntEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntEvent__ctor_mE00595AA1AAFB4E525EE89C8522758C9B3B16559 (IntEvent_t9782CDD4CEB659387763EF4995BD3092CD55C1DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684(__this, UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
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
// System.Void GridMesh::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridMesh_Start_m9D65FF8F2DDD0559E8C9F6DCDCA83E2C48A4BA34 (GridMesh_tD9E01B1F32E164F3C40206F86AD8C7F7676108FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		// mesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		__this->___mesh_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_6), (void*)L_0);
		// GetComponent<MeshFilter>().sharedMesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_1;
		L_1 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___mesh_6;
		NullCheck(L_1);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_1, L_2, NULL);
		// float sz = 0.5f * Size;
		float L_3 = __this->___Size_5;
		V_0 = ((float)il2cpp_codegen_multiply((0.5f), L_3));
		// var verts = new List<Vector3>(Divisions);
		int32_t L_4 = __this->___Divisions_4;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33(L_5, L_4, List_1__ctor_m7E6E0C4AE37ACBC1E9BDA9E56A8A7D8ACED3FD33_RuntimeMethod_var);
		V_1 = L_5;
		// for (int i = 0; i <= Divisions; i++)
		V_2 = 0;
		goto IL_009b;
	}

IL_0039:
	{
		// float t = Size * i / Divisions - sz;
		float L_6 = __this->___Size_5;
		int32_t L_7 = V_2;
		int32_t L_8 = __this->___Divisions_4;
		float L_9 = V_0;
		V_3 = ((float)il2cpp_codegen_subtract(((float)(((float)il2cpp_codegen_multiply(L_6, ((float)L_7)))/((float)L_8))), L_9));
		// verts.Add(new Vector3(t, 0, -sz));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = V_1;
		float L_11 = V_3;
		float L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_11, (0.0f), ((-L_12)), /*hidden argument*/NULL);
		NullCheck(L_10);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_10, L_13, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// verts.Add(new Vector3(t, 0, sz));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = V_1;
		float L_15 = V_3;
		float L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_15, (0.0f), L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_14, L_17, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// verts.Add(new Vector3(-sz, 0, t));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18 = V_1;
		float L_19 = V_0;
		float L_20 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), ((-L_19)), (0.0f), L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_18, L_21, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// verts.Add(new Vector3(sz, 0, t));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_22 = V_1;
		float L_23 = V_0;
		float L_24 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), L_23, (0.0f), L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_22, L_25, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i <= Divisions; i++)
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_009b:
	{
		// for (int i = 0; i <= Divisions; i++)
		int32_t L_27 = V_2;
		int32_t L_28 = __this->___Divisions_4;
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_0039;
		}
	}
	{
		// mesh.SetVertices(verts);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_29 = __this->___mesh_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_30 = V_1;
		NullCheck(L_29);
		Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E(L_29, L_30, NULL);
		// mesh.SetIndices(Enumerable.Range(0, verts.Count).ToArray(), MeshTopology.Lines, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31 = __this->___mesh_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_32, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		RuntimeObject* L_34;
		L_34 = Enumerable_Range_m4FB9BBBA09BEF5177C13506DB385CF4467C15FD8(0, L_33, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35;
		L_35 = Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8(L_34, Enumerable_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF245DE52408A8C84E3C4CA32F2AFC491079443E8_RuntimeMethod_var);
		NullCheck(L_31);
		Mesh_SetIndices_m2AE7ED76A6C77D218C37C011DDB948589FD45B97(L_31, L_35, 3, 0, NULL);
		// }
		return;
	}
}
// System.Void GridMesh::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridMesh_OnDestroy_m3660602ECD0A4A3752479226950B19E550A5408A (GridMesh_tD9E01B1F32E164F3C40206F86AD8C7F7676108FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mesh != null)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___mesh_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(mesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = __this->___mesh_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GridMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridMesh__ctor_mDA3B96C7EEC5545071BF1582CC76FA1405624EE5 (GridMesh_tD9E01B1F32E164F3C40206F86AD8C7F7676108FC* __this, const RuntimeMethod* method) 
{
	{
		// public int Divisions = 10;
		__this->___Divisions_4 = ((int32_t)10);
		// public float Size = 4f;
		__this->___Size_5 = (4.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MinMaxSlider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxSlider_Awake_mF329118C63E067048A401272DBFC1201BC8F7CEC (MinMaxSlider_tDDEDC649AE21F7D300683797501F3298EFCEE3FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MinMaxSlider_OnValueChanged_m092DA20E3B9048EB48FB352746DD4250E3834282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// minSlider.onValueChanged.AddListener(OnValueChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___minSlider_4;
		NullCheck(L_0);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_1;
		L_1 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_0, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_2 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_2, __this, (intptr_t)((void*)MinMaxSlider_OnValueChanged_m092DA20E3B9048EB48FB352746DD4250E3834282_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_1, L_2, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// maxSlider.onValueChanged.AddListener(OnValueChanged);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_3 = __this->___maxSlider_5;
		NullCheck(L_3);
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_4;
		L_4 = Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline(L_3, NULL);
		UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90* L_5 = (UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90*)il2cpp_codegen_object_new(UnityAction_1_tAEFA3C1C529F0E1AD7C7C7AFC88822D359E7AC90_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_mF770070D0A4FE93F6E04DA37D2EC60429EA545E5(L_5, __this, (intptr_t)((void*)MinMaxSlider_OnValueChanged_m092DA20E3B9048EB48FB352746DD4250E3834282_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC(L_4, L_5, UnityEvent_1_AddListener_m44E396BC4484BD75427FDD8CBE0B533CCAD8C1EC_RuntimeMethod_var);
		// OnValueChanged(0);
		MinMaxSlider_OnValueChanged_m092DA20E3B9048EB48FB352746DD4250E3834282(__this, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void MinMaxSlider::OnValueChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxSlider_OnValueChanged_m092DA20E3B9048EB48FB352746DD4250E3834282 (MinMaxSlider_tDDEDC649AE21F7D300683797501F3298EFCEE3FC* __this, float ___0_v, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float min = minSlider.value, max = maxSlider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___minSlider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		V_0 = L_1;
		// float min = minSlider.value, max = maxSlider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___maxSlider_5;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		V_1 = L_3;
		// minSlider.value = Mathf.Min(min, max);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___minSlider_4;
		float L_5 = V_0;
		float L_6 = V_1;
		float L_7;
		L_7 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_5, L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_7);
		// maxSlider.value = Mathf.Max(min, max);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_8 = __this->___maxSlider_5;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11;
		L_11 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_9, L_10, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_8, L_11);
		// fillRect.anchorMin = Vector2.right * minSlider.normalizedValue;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___fillRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = __this->___minSlider_4;
		NullCheck(L_14);
		float L_15;
		L_15 = Slider_get_normalizedValue_mC839197322275EF1318B6E49B7573FDB30F74D83(L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_13, L_15, NULL);
		NullCheck(L_12);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_12, L_16, NULL);
		// fillRect.anchorMax = Vector2.right * maxSlider.normalizedValue;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___fillRect_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_19 = __this->___maxSlider_5;
		NullCheck(L_19);
		float L_20;
		L_20 = Slider_get_normalizedValue_mC839197322275EF1318B6E49B7573FDB30F74D83(L_19, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_18, L_20, NULL);
		NullCheck(L_17);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_17, L_21, NULL);
		// }
		return;
	}
}
// System.Void MinMaxSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxSlider__ctor_mE57BAEB8A09E3BFC3235F5F3FA956F30918AB54A (MinMaxSlider_tDDEDC649AE21F7D300683797501F3298EFCEE3FC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MoveAlongZ::set_PositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAlongZ_set_PositionZ_m616CD3C9CBBAA809BB6258FAE84C1B590F23C542 (MoveAlongZ_t9F6BBD58E6B45DC1AE64C7E1B16F67C81CD3BE0B* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// transform.position = Vector3.forward * value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_2 = ___0_value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void MoveAlongZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveAlongZ__ctor_m2291AE8EA3EBDAD8A8D6D98DB8B22F8495463C42 (MoveAlongZ_t9F6BBD58E6B45DC1AE64C7E1B16F67C81CD3BE0B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NamedTextureBinding::set_Texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedTextureBinding_set_Texture_mB4AE35F2F750D9E3522CE819F12564C4B2299A5C (NamedTextureBinding_tA63A07B9386F5C56172077A02C4C86010FC7A16C* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mB5085014CB26F5640A33E386AC3AB0D3D1D1A6C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textureBinding.Invoke(textureName, value);
		NamedTextureEvent_t31CA632C56B3DF31A5E94CC9322FCC9E1641A327* L_0 = __this->___textureBinding_5;
		String_t* L_1 = __this->___textureName_4;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___0_value;
		NullCheck(L_0);
		UnityEvent_2_Invoke_mB5085014CB26F5640A33E386AC3AB0D3D1D1A6C3(L_0, L_1, L_2, UnityEvent_2_Invoke_mB5085014CB26F5640A33E386AC3AB0D3D1D1A6C3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void NamedTextureBinding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedTextureBinding__ctor_m4B6884FF05EDDEC27E36E0C70605BE6CAFD2E4A4 (NamedTextureBinding_tA63A07B9386F5C56172077A02C4C86010FC7A16C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NamedTextureBinding/NamedTextureEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedTextureEvent__ctor_mAF999066341FC7862FB2145F6B83A68CDE662EC9 (NamedTextureEvent_t31CA632C56B3DF31A5E94CC9322FCC9E1641A327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_m8DC006BCF10C6D1D03AD07AAB45E0B71AB086115_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_m8DC006BCF10C6D1D03AD07AAB45E0B71AB086115(__this, UnityEvent_2__ctor_m8DC006BCF10C6D1D03AD07AAB45E0B71AB086115_RuntimeMethod_var);
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
// System.Void OrbitCameraControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitCameraControl_Start_m4283F59CDBCF763ABDA75BFAB3C8ACBF02324FA7 (OrbitCameraControl_tC95FDE2DCE509D37C88BC4AF190EC8D6ABDA8937* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cam = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___cam_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void OrbitCameraControl::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitCameraControl_OnDisable_mF7C2121B701803A56FA5564E13851EB5C1C1FCEA (OrbitCameraControl_tC95FDE2DCE509D37C88BC4AF190EC8D6ABDA8937* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.SetCursor(null, Vector2.zero, CursorMode.Auto);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Cursor_SetCursor_m00781B5A9FDF84759E2D8869F08E6120062FCE86((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL, L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void OrbitCameraControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitCameraControl_Update_m4601424E8887516A7DC9B2D207DF5E439AF4180E (OrbitCameraControl_tC95FDE2DCE509D37C88BC4AF190EC8D6ABDA8937* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B10_0 = NULL;
	int32_t G_B14_0 = 0;
	{
		// if (!isActiveAndEnabled)
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!Application.isFocused)
		bool L_1;
		L_1 = Application_get_isFocused_mFEEC52E355AA7AAA6B7250520CA544D80BE77524(NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		return;
	}

IL_0011:
	{
		// Cursor.SetCursor(null, Vector2.zero, CursorMode.Auto);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Cursor_SetCursor_m00781B5A9FDF84759E2D8869F08E6120062FCE86((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL, L_2, 0, NULL);
		// var currMousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		V_0 = L_3;
		// var diff = currMousePosition - prevMousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___prevMousePosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_5, NULL);
		V_1 = L_6;
		// prevMousePosition = currMousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		__this->___prevMousePosition_8 = L_7;
		// if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
		bool L_8;
		L_8 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		if (L_8)
		{
			goto IL_004f;
		}
	}
	{
		bool L_9;
		L_9 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)303), NULL);
		if (!L_9)
		{
			goto IL_008b;
		}
	}

IL_004f:
	{
		// float scroll = Input.GetAxis("Mouse ScrollWheel");
		float L_10;
		L_10 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		V_4 = L_10;
		// cam.fieldOfView = Mathf.Clamp(cam.fieldOfView + scroll * 20f, 1f, 179f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___cam_9;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___cam_9;
		NullCheck(L_12);
		float L_13;
		L_13 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_12, NULL);
		float L_14 = V_4;
		float L_15;
		L_15 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(L_14, (20.0f))))), (1.0f), (179.0f), NULL);
		NullCheck(L_11);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_11, L_15, NULL);
		goto IL_00e9;
	}

IL_008b:
	{
		// float scroll = Input.GetAxis("Mouse ScrollWheel") * _zoomSpeedFactor;
		float L_16;
		L_16 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		float L_17 = __this->____zoomSpeedFactor_4;
		V_5 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		// var z = Vector3.forward * scroll;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_19 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		V_6 = L_20;
		// transform.Translate(z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_6;
		NullCheck(L_21);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_21, L_22, NULL);
		// _rotateAround -= z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = __this->____rotateAround_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_24, NULL);
		__this->____rotateAround_7 = L_25;
		// Cursor.SetCursor(scroll == 0 ? null : ZoomCursor, Vector2.zero, CursorMode.Auto);
		float L_26 = V_5;
		if ((((float)L_26) == ((float)(0.0f))))
		{
			goto IL_00dd;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_27 = __this->___ZoomCursor_12;
		G_B10_0 = L_27;
		goto IL_00de;
	}

IL_00dd:
	{
		G_B10_0 = ((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)(NULL));
	}

IL_00de:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Cursor_SetCursor_m00781B5A9FDF84759E2D8869F08E6120062FCE86(G_B10_0, L_28, 0, NULL);
	}

IL_00e9:
	{
		// bool ctrlAlt = Input.GetKey(KeyCode.LeftAlt) && Input.GetKey(KeyCode.LeftControl);
		bool L_29;
		L_29 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)308), NULL);
		if (!L_29)
		{
			goto IL_0101;
		}
	}
	{
		bool L_30;
		L_30 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)306), NULL);
		G_B14_0 = ((int32_t)(L_30));
		goto IL_0102;
	}

IL_0101:
	{
		G_B14_0 = 0;
	}

IL_0102:
	{
		V_2 = (bool)G_B14_0;
		// if (!ctrlAlt)
		bool L_31 = V_2;
		if (L_31)
		{
			goto IL_019a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_32;
		L_32 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_32)
		{
			goto IL_011e;
		}
	}
	{
		// prevMousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___prevMousePosition_8 = L_33;
		goto IL_019a;
	}

IL_011e:
	{
		// if (Input.GetMouseButton(0))
		bool L_34;
		L_34 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_34)
		{
			goto IL_019a;
		}
	}
	{
		// diff *= _rotateSpeedFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		float L_36 = __this->____rotateSpeedFactor_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, L_36, NULL);
		V_1 = L_37;
		// transform.Translate(_rotateAround);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = __this->____rotateAround_7;
		NullCheck(L_38);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_38, L_39, NULL);
		// transform.Rotate(Vector3.right, -diff.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_1;
		float L_43 = L_42.___y_3;
		NullCheck(L_40);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_40, L_41, ((-L_43)), NULL);
		// transform.Rotate(Vector3.up, diff.x, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_1;
		float L_47 = L_46.___x_2;
		NullCheck(L_44);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_44, L_45, L_47, 0, NULL);
		// transform.Translate(-_rotateAround);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = __this->____rotateAround_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_49, NULL);
		NullCheck(L_48);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_48, L_50, NULL);
		// Cursor.SetCursor(OrbitCursor, cursorOffset, CursorMode.Auto);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_51 = __this->___OrbitCursor_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = __this->___cursorOffset_13;
		Cursor_SetCursor_m00781B5A9FDF84759E2D8869F08E6120062FCE86(L_51, L_52, 0, NULL);
	}

IL_019a:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_53;
		L_53 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(1, NULL);
		if (!L_53)
		{
			goto IL_01b2;
		}
	}
	{
		// prevMousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___prevMousePosition_8 = L_54;
		goto IL_0296;
	}

IL_01b2:
	{
		// if (Input.GetMouseButton(1))
		bool L_55;
		L_55 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (!L_55)
		{
			goto IL_0296;
		}
	}
	{
		// if (Input.GetKey(KeyCode.LeftAlt) || Input.GetKey(KeyCode.LeftAlt))
		bool L_56;
		L_56 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)308), NULL);
		if (L_56)
		{
			goto IL_01d5;
		}
	}
	{
		bool L_57;
		L_57 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)308), NULL);
		if (!L_57)
		{
			goto IL_0249;
		}
	}

IL_01d5:
	{
		// var s = Mathf.Sign(Vector3.Dot(diff, Vector3.right));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_60;
		L_60 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_58, L_59, NULL);
		float L_61;
		L_61 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_60, NULL);
		V_7 = L_61;
		// var z = Vector3.forward * diff.magnitude * 0.1f * s * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_63;
		L_63 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_62, L_63, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_64, (0.100000001f), NULL);
		float L_66 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_65, L_66, NULL);
		float L_68;
		L_68 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_67, L_68, NULL);
		V_8 = L_69;
		// transform.Translate(z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_8;
		NullCheck(L_70);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_70, L_71, NULL);
		// _rotateAround -= z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = __this->____rotateAround_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_72, L_73, NULL);
		__this->____rotateAround_7 = L_74;
		// Cursor.SetCursor(ZoomCursor, cursorOffset, CursorMode.Auto);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_75 = __this->___ZoomCursor_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = __this->___cursorOffset_13;
		Cursor_SetCursor_m00781B5A9FDF84759E2D8869F08E6120062FCE86(L_75, L_76, 0, NULL);
		goto IL_0296;
	}

IL_0249:
	{
		// diff *= _rotateSpeedFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_1;
		float L_78 = __this->____rotateSpeedFactor_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_77, L_78, NULL);
		V_1 = L_79;
		// transform.Rotate(Vector3.right, -diff.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_1;
		float L_83 = L_82.___y_3;
		NullCheck(L_80);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_80, L_81, ((-L_83)), NULL);
		// transform.Rotate(Vector3.up, diff.x, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_1;
		float L_87 = L_86.___x_2;
		NullCheck(L_84);
		Transform_Rotate_m683E67853797040312868B69E963D0E97F433EEB(L_84, L_85, L_87, 0, NULL);
		// Cursor.SetCursor(OrbitCursor, cursorOffset, CursorMode.Auto);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_88 = __this->___OrbitCursor_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = __this->___cursorOffset_13;
		Cursor_SetCursor_m00781B5A9FDF84759E2D8869F08E6120062FCE86(L_88, L_89, 0, NULL);
	}

IL_0296:
	{
		// if (Input.GetMouseButtonDown(2) || (ctrlAlt && Input.GetMouseButtonDown(0)))
		bool L_90;
		L_90 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(2, NULL);
		if (L_90)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_91 = V_2;
		if (!L_91)
		{
			goto IL_02b6;
		}
	}
	{
		bool L_92;
		L_92 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_92)
		{
			goto IL_02b6;
		}
	}

IL_02a9:
	{
		// prevMousePosition = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___prevMousePosition_8 = L_93;
		goto IL_030c;
	}

IL_02b6:
	{
		// if (Input.GetMouseButton(2) || (ctrlAlt && Input.GetMouseButton(0)))
		bool L_94;
		L_94 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(2, NULL);
		if (L_94)
		{
			goto IL_02c9;
		}
	}
	{
		bool L_95 = V_2;
		if (!L_95)
		{
			goto IL_030c;
		}
	}
	{
		bool L_96;
		L_96 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_96)
		{
			goto IL_030c;
		}
	}

IL_02c9:
	{
		// diff *= Time.deltaTime * _moveSpeedFactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_1;
		float L_98;
		L_98 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_99 = __this->____moveSpeedFactor_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_97, ((float)il2cpp_codegen_multiply(L_98, L_99)), NULL);
		V_1 = L_100;
		// transform.Translate(-diff.x, -diff.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_1;
		float L_103 = L_102.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = V_1;
		float L_105 = L_104.___y_3;
		NullCheck(L_101);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_101, ((-L_103)), ((-L_105)), (0.0f), NULL);
		// Cursor.SetCursor(PanCursor, cursorOffset, CursorMode.Auto);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_106 = __this->___PanCursor_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_107 = __this->___cursorOffset_13;
		Cursor_SetCursor_m00781B5A9FDF84759E2D8869F08E6120062FCE86(L_106, L_107, 0, NULL);
	}

IL_030c:
	{
		// var m = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
		float L_108;
		L_108 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_109;
		L_109 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_108, (0.0f), L_109, NULL);
		// transform.Translate(m * _moveSpeedFactor);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_110;
		L_110 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_3;
		float L_112 = __this->____moveSpeedFactor_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_111, L_112, NULL);
		NullCheck(L_110);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_110, L_113, NULL);
		// }
		return;
	}
}
// System.Void OrbitCameraControl::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitCameraControl_Reset_m5B30D6D20BD4E152A91116A4001C89FD25BF80CC (OrbitCameraControl_tC95FDE2DCE509D37C88BC4AF190EC8D6ABDA8937* __this, const RuntimeMethod* method) 
{
	{
		// transform.SetPositionAndRotation(Vector3.zero, Quaternion.identity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_0);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_0, L_1, L_2, NULL);
		// _rotateAround = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->____rotateAround_7 = L_3;
		// }
		return;
	}
}
// System.Void OrbitCameraControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrbitCameraControl__ctor_m14AA736FF49CA5A96E5E85446FD6CD7AF358DE53 (OrbitCameraControl_tC95FDE2DCE509D37C88BC4AF190EC8D6ABDA8937* __this, const RuntimeMethod* method) 
{
	{
		// public float _zoomSpeedFactor = 2;
		__this->____zoomSpeedFactor_4 = (2.0f);
		// public float _rotateSpeedFactor = 0.1f;
		__this->____rotateSpeedFactor_5 = (0.100000001f);
		// public float _moveSpeedFactor = 0.1f;
		__this->____moveSpeedFactor_6 = (0.100000001f);
		// public Vector3 _rotateAround = new Vector3(0, 0, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->____rotateAround_7 = L_0;
		// readonly Vector2 cursorOffset = new Vector2(32, 32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (32.0f), (32.0f), /*hidden argument*/NULL);
		__this->___cursorOffset_13 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// RsDeviceListener RsDeviceListener::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* RsDeviceListener_get_Instance_m1D83F2D0B3CD6DA27875EABF4DE81533121E228F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RsDeviceListener Instance { get; private set; }
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_0 = ((RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_StaticFields*)il2cpp_codegen_static_fields_for(RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void RsDeviceListener::set_Instance(RsDeviceListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsDeviceListener_set_Instance_mACF1E9ACE59AB480296766DB6F8F875096CACBCF (RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RsDeviceListener Instance { get; private set; }
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_0 = ___0_value;
		((RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_StaticFields*)il2cpp_codegen_static_fields_for(RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_StaticFields*)il2cpp_codegen_static_fields_for(RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void RsDeviceListener::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsDeviceListener_Awake_m3BA4CFEDF7D8A275DEBAB860AD66E53875B05C46 (RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance != null && Instance != this)
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_0;
		L_0 = RsDeviceListener_get_Instance_m1D83F2D0B3CD6DA27875EABF4DE81533121E228F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_2;
		L_2 = RsDeviceListener_get_Instance_m1D83F2D0B3CD6DA27875EABF4DE81533121E228F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// throw new Exception(string.Format("{0} singleton already instanced", this.GetType()));
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6273382DE574125E7DA53FCA9FC2366032A69BEC)), L_4, NULL);
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RsDeviceListener_Awake_m3BA4CFEDF7D8A275DEBAB860AD66E53875B05C46_RuntimeMethod_var)));
	}

IL_0030:
	{
		// Instance = this;
		RsDeviceListener_set_Instance_mACF1E9ACE59AB480296766DB6F8F875096CACBCF_inline(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator RsDeviceListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RsDeviceListener_Start_m57C5357DDA66F61CD6978617021A9FFA397E3B1B (RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF* L_0 = (U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF*)il2cpp_codegen_object_new(U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__10__ctor_m040B192C9B6563D379146B8A0B60E0E10D22C65A(L_0, 0, NULL);
		U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void RsDeviceListener::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsDeviceListener_Update_m1E399383A423B0F8308B73195D0C03832D8846CD (RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m62268CBF8804891879991DDB12CD4EF4CCA8855F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4EF899F86A60D4D9E3374F08CEF9BF1849EE15AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisRsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574_m8937529FD416002BFE548E9C0C0DA6AB610CA68A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m67F02E5F22178A5EB8C7DB3E489E920EA799CF1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD20B836045E5A662BBA1DE60B26DC6C51CF02CA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6F45AB48EDB8495B728F40325D1A591B2ADD19C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m463EF464D98762C96F20783694A2A43B6641775F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m51D03330E6D1B5A84B5CB612D9F7C1C319A41AC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisRsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574_m721215ED054E5FA3806409C5AD695054305E123D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_1_U3CUpdateU3Eb__0_mD00FCA5887BA8FB2FF65BDC3AB39193573D9BB61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* V_0 = NULL;
	RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA* V_1 = NULL;
	RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA* V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_t478F8EDB2EB8AFFF9F59512EB47DF060255F6AEE V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_t21733460BB6B41626D484C1E5067D6CEF3F83BAD V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_0 = (U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass11_0__ctor_m817C9BBA6942543A7F70621A9C7396FFD5D334A8(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// if (e.WaitOne(0))
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_2 = __this->___e_9;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_2, 0);
		if (!L_3)
		{
			goto IL_00ed;
		}
	}
	{
		// var avail = FindObjectsOfType<RsStreamAvailability>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA* L_4;
		L_4 = Object_FindObjectsOfType_TisRsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574_m721215ED054E5FA3806409C5AD695054305E123D(Object_FindObjectsOfType_TisRsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574_m721215ED054E5FA3806409C5AD695054305E123D_RuntimeMethod_var);
		V_1 = L_4;
		// int tasks = avail.Count();
		U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_5 = V_0;
		RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA* L_6 = V_1;
		int32_t L_7;
		L_7 = Enumerable_Count_TisRsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574_m8937529FD416002BFE548E9C0C0DA6AB610CA68A((RuntimeObject*)L_6, Enumerable_Count_TisRsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574_m8937529FD416002BFE548E9C0C0DA6AB610CA68A_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___tasks_2 = L_7;
		// AutoResetEvent done = new AutoResetEvent(false);
		U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_8 = V_0;
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_9 = (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0*)il2cpp_codegen_object_new(AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AutoResetEvent__ctor_mB7C8CD30C5BE11A2C8DB79B27593CF0C5FE82ADE(L_9, (bool)0, NULL);
		NullCheck(L_8);
		L_8->___done_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___done_3), (void*)L_9);
		// Dictionary<RsStreamAvailability, bool> resolvables = new Dictionary<RsStreamAvailability, bool>(tasks);
		U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_10 = V_0;
		U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___tasks_2;
		Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188* L_13 = (Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188*)il2cpp_codegen_object_new(Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Dictionary_2__ctor_m4EF899F86A60D4D9E3374F08CEF9BF1849EE15AD(L_13, L_12, Dictionary_2__ctor_m4EF899F86A60D4D9E3374F08CEF9BF1849EE15AD_RuntimeMethod_var);
		NullCheck(L_10);
		L_10->___resolvables_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___resolvables_1), (void*)L_13);
		// foreach (var a in avail)
		RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA* L_14 = V_1;
		V_2 = L_14;
		V_3 = 0;
		goto IL_007d;
	}

IL_0053:
	{
		U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B* L_15 = (U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		U3CU3Ec__DisplayClass11_1__ctor_m929800A05B1E6FE40B56862A26A73A4A20FB64E1(L_15, NULL);
		U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B* L_16 = L_15;
		U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_17 = V_0;
		NullCheck(L_16);
		L_16->___CSU24U3CU3E8__locals1_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___CSU24U3CU3E8__locals1_1), (void*)L_17);
		// foreach (var a in avail)
		U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B* L_18 = L_16;
		RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		L_18->___a_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___a_0), (void*)L_22);
		// ThreadPool.QueueUserWorkItem(state =>
		// {
		//     using (var config = a.DeviceConfiguration.ToPipelineConfig())
		//     {
		//         resolvables[a] = config.CanResolve(pipeline);
		//     }
		// 
		//     if (0 == Interlocked.Decrement(ref tasks))
		//         done.Set();
		// });
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_23 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_23, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass11_1_U3CUpdateU3Eb__0_mD00FCA5887BA8FB2FF65BDC3AB39193573D9BB61_RuntimeMethod_var), NULL);
		bool L_24;
		L_24 = ThreadPool_QueueUserWorkItem_m24B9C1887DBABE1F408E31475AF15B9B9A08854D(L_23, NULL);
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007d:
	{
		// foreach (var a in avail)
		int32_t L_26 = V_3;
		RsStreamAvailabilityU5BU5D_t664781FAC769F59593C86EF792EEEFCB24CB25BA* L_27 = V_2;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0053;
		}
	}
	{
		// done.WaitOne();
		U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_28 = V_0;
		NullCheck(L_28);
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_29 = L_28->___done_3;
		NullCheck(L_29);
		bool L_30;
		L_30 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_29);
		// foreach (var kv in resolvables)
		U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_31 = V_0;
		NullCheck(L_31);
		Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188* L_32 = L_31->___resolvables_1;
		NullCheck(L_32);
		Enumerator_t478F8EDB2EB8AFFF9F59512EB47DF060255F6AEE L_33;
		L_33 = Dictionary_2_GetEnumerator_m62268CBF8804891879991DDB12CD4EF4CCA8855F(L_32, Dictionary_2_GetEnumerator_m62268CBF8804891879991DDB12CD4EF4CCA8855F_RuntimeMethod_var);
		V_4 = L_33;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00df:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m67F02E5F22178A5EB8C7DB3E489E920EA799CF1C((&V_4), Enumerator_Dispose_m67F02E5F22178A5EB8C7DB3E489E920EA799CF1C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d4_1;
			}

IL_009e_1:
			{
				// foreach (var kv in resolvables)
				KeyValuePair_2_t21733460BB6B41626D484C1E5067D6CEF3F83BAD L_34;
				L_34 = Enumerator_get_Current_m6F45AB48EDB8495B728F40325D1A591B2ADD19C4_inline((&V_4), Enumerator_get_Current_m6F45AB48EDB8495B728F40325D1A591B2ADD19C4_RuntimeMethod_var);
				V_5 = L_34;
				// if (kv.Value)
				bool L_35;
				L_35 = KeyValuePair_2_get_Value_m51D03330E6D1B5A84B5CB612D9F7C1C319A41AC4_inline((&V_5), KeyValuePair_2_get_Value_m51D03330E6D1B5A84B5CB612D9F7C1C319A41AC4_RuntimeMethod_var);
				if (!L_35)
				{
					goto IL_00c3_1;
				}
			}
			{
				// kv.Key.OnDeviceAvailable.Invoke();
				RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* L_36;
				L_36 = KeyValuePair_2_get_Key_m463EF464D98762C96F20783694A2A43B6641775F_inline((&V_5), KeyValuePair_2_get_Key_m463EF464D98762C96F20783694A2A43B6641775F_RuntimeMethod_var);
				NullCheck(L_36);
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_37 = L_36->___OnDeviceAvailable_5;
				NullCheck(L_37);
				UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_37, NULL);
				goto IL_00d4_1;
			}

IL_00c3_1:
			{
				// kv.Key.OnDeviceUnAvailable.Invoke();
				RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* L_38;
				L_38 = KeyValuePair_2_get_Key_m463EF464D98762C96F20783694A2A43B6641775F_inline((&V_5), KeyValuePair_2_get_Key_m463EF464D98762C96F20783694A2A43B6641775F_RuntimeMethod_var);
				NullCheck(L_38);
				UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_39 = L_38->___OnDeviceUnAvailable_6;
				NullCheck(L_39);
				UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_39, NULL);
			}

IL_00d4_1:
			{
				// foreach (var kv in resolvables)
				bool L_40;
				L_40 = Enumerator_MoveNext_mD20B836045E5A662BBA1DE60B26DC6C51CF02CA0((&V_4), Enumerator_MoveNext_mD20B836045E5A662BBA1DE60B26DC6C51CF02CA0_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_009e_1;
				}
			}
			{
				goto IL_00ed;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void RsDeviceListener::OnDevicesChanged(Intel.RealSense.DeviceList,Intel.RealSense.DeviceList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsDeviceListener_OnDevicesChanged_mD9BFBD02042845784BE064DBA33B23B8993C3ED0 (RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* __this, DeviceList_t2DDFA9BD6E258074D867A98A4A52287BC92FDD3A* ___0_removed, DeviceList_t2DDFA9BD6E258074D867A98A4A52287BC92FDD3A* ___1_added, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m95EEDD4CCF925AC9F1F37817D5E08DDA82391298_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBD820B9344D8D1C48E15B0DB1938FD15CFEC0D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m35B7C19DD3050513901406B9A08734C8E5B2E181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1EAC856094F330115E599E2528EBEA3F51D91D99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mC8E4E6A3C3357BB619692DBF03949B6EB0461031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5001FBF008A57564A5E40B31C843EC5E660EE9F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9B6D5307B67A7E9B5A353CC776115A87EF4911E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Device_tC79DE088DC369440A01E872788D153A69F210F0E* V_1 = NULL;
	Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Device_tC79DE088DC369440A01E872788D153A69F210F0E* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// foreach (var d in added)
			DeviceList_t2DDFA9BD6E258074D867A98A4A52287BC92FDD3A* L_0 = ___1_added;
			NullCheck(L_0);
			RuntimeObject* L_1;
			L_1 = DeviceList_GetEnumerator_mF1C600676BDAAA61B53769E6B8536871BCA21177(L_0, NULL);
			V_0 = L_1;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0048_1:
				{// begin finally (depth: 2)
					{
						RuntimeObject* L_2 = V_0;
						if (!L_2)
						{
							goto IL_0051_1;
						}
					}
					{
						RuntimeObject* L_3 = V_0;
						NullCheck(L_3);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
					}

IL_0051_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_003e_2;
				}

IL_0009_2:
				{
					// foreach (var d in added)
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					Device_tC79DE088DC369440A01E872788D153A69F210F0E* L_5;
					L_5 = InterfaceFuncInvoker0< Device_tC79DE088DC369440A01E872788D153A69F210F0E* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Intel.RealSense.Device>::get_Current() */, IEnumerator_1_t1EAC856094F330115E599E2528EBEA3F51D91D99_il2cpp_TypeInfo_var, L_4);
					V_1 = L_5;
					// Debug.LogFormat("{0} {1}", d.Info[CameraInfo.Name], d.Info[CameraInfo.SerialNumber]);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
					Device_tC79DE088DC369440A01E872788D153A69F210F0E* L_8 = V_1;
					NullCheck(L_8);
					InfoCollection_tB1009E22CC096F5FF880815BC8C53CC7BCE628F8* L_9;
					L_9 = Device_get_Info_m00D6466D210FCEA32987F7C9F59A7F90066B62D9_inline(L_8, NULL);
					NullCheck(L_9);
					String_t* L_10;
					L_10 = InfoCollection_get_Item_m4B597199E8D463605288739DC5CF4D93B8C98D71(L_9, 0, NULL);
					NullCheck(L_7);
					ArrayElementTypeCheck (L_7, L_10);
					(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
					Device_tC79DE088DC369440A01E872788D153A69F210F0E* L_12 = V_1;
					NullCheck(L_12);
					InfoCollection_tB1009E22CC096F5FF880815BC8C53CC7BCE628F8* L_13;
					L_13 = Device_get_Info_m00D6466D210FCEA32987F7C9F59A7F90066B62D9_inline(L_12, NULL);
					NullCheck(L_13);
					String_t* L_14;
					L_14 = InfoCollection_get_Item_m4B597199E8D463605288739DC5CF4D93B8C98D71(L_13, 1, NULL);
					NullCheck(L_11);
					ArrayElementTypeCheck (L_11, L_14);
					(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_14);
					il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
					Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_11, NULL);
				}

IL_003e_2:
				{
					// foreach (var d in added)
					RuntimeObject* L_15 = V_0;
					NullCheck(L_15);
					bool L_16;
					L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
					if (L_16)
					{
						goto IL_0009_2;
					}
				}
				{
					goto IL_0052_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0052_1:
		{
			// m_removed.Clear();
			List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* L_17 = __this->___m_removed_8;
			NullCheck(L_17);
			List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_inline(L_17, List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_RuntimeMethod_var);
			// foreach (var d in m_added)
			List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* L_18 = __this->___m_added_7;
			NullCheck(L_18);
			Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891 L_19;
			L_19 = List_1_GetEnumerator_m9B6D5307B67A7E9B5A353CC776115A87EF4911E9(L_18, List_1_GetEnumerator_m9B6D5307B67A7E9B5A353CC776115A87EF4911E9_RuntimeMethod_var);
			V_2 = L_19;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0093_1:
				{// begin finally (depth: 2)
					Enumerator_Dispose_m95EEDD4CCF925AC9F1F37817D5E08DDA82391298((&V_2), Enumerator_Dispose_m95EEDD4CCF925AC9F1F37817D5E08DDA82391298_RuntimeMethod_var);
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0088_2;
				}

IL_006b_2:
				{
					// foreach (var d in m_added)
					Device_tC79DE088DC369440A01E872788D153A69F210F0E* L_20;
					L_20 = Enumerator_get_Current_m35B7C19DD3050513901406B9A08734C8E5B2E181_inline((&V_2), Enumerator_get_Current_m35B7C19DD3050513901406B9A08734C8E5B2E181_RuntimeMethod_var);
					V_3 = L_20;
					// if (removed.Contains(d))
					DeviceList_t2DDFA9BD6E258074D867A98A4A52287BC92FDD3A* L_21 = ___0_removed;
					Device_tC79DE088DC369440A01E872788D153A69F210F0E* L_22 = V_3;
					NullCheck(L_21);
					bool L_23;
					L_23 = DeviceList_Contains_mC38BF50157E6379197530E190A1B4D6B70BEE8FB(L_21, L_22, NULL);
					if (!L_23)
					{
						goto IL_0088_2;
					}
				}
				{
					// m_removed.Add(d);
					List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* L_24 = __this->___m_removed_8;
					Device_tC79DE088DC369440A01E872788D153A69F210F0E* L_25 = V_3;
					NullCheck(L_24);
					List_1_Add_m5001FBF008A57564A5E40B31C843EC5E660EE9F6_inline(L_24, L_25, List_1_Add_m5001FBF008A57564A5E40B31C843EC5E660EE9F6_RuntimeMethod_var);
				}

IL_0088_2:
				{
					// foreach (var d in m_added)
					bool L_26;
					L_26 = Enumerator_MoveNext_mBD820B9344D8D1C48E15B0DB1938FD15CFEC0D99((&V_2), Enumerator_MoveNext_mBD820B9344D8D1C48E15B0DB1938FD15CFEC0D99_RuntimeMethod_var);
					if (L_26)
					{
						goto IL_006b_2;
					}
				}
				{
					goto IL_00a1_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00a1_1:
		{
			// m_added.Clear();
			List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* L_27 = __this->___m_added_7;
			NullCheck(L_27);
			List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_inline(L_27, List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_RuntimeMethod_var);
			// m_added.AddRange(added);
			List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* L_28 = __this->___m_added_7;
			DeviceList_t2DDFA9BD6E258074D867A98A4A52287BC92FDD3A* L_29 = ___1_added;
			NullCheck(L_28);
			List_1_AddRange_mC8E4E6A3C3357BB619692DBF03949B6EB0461031(L_28, L_29, List_1_AddRange_mC8E4E6A3C3357BB619692DBF03949B6EB0461031_RuntimeMethod_var);
			// e.Set();
			AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_30 = __this->___e_9;
			NullCheck(L_30);
			bool L_31;
			L_31 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_30, NULL);
			// }
			goto IL_00cd;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{// begin catch(System.Exception)
		// Debug.LogException(e);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cd;
	}// end catch (depth: 1)

IL_00cd:
	{
		// }
		return;
	}
}
// System.Void RsDeviceListener::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsDeviceListener_OnDestroy_mC735E3D7476ABC80B1B57712D36FD0AFD290F20C (RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m95EEDD4CCF925AC9F1F37817D5E08DDA82391298_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBD820B9344D8D1C48E15B0DB1938FD15CFEC0D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m35B7C19DD3050513901406B9A08734C8E5B2E181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9B6D5307B67A7E9B5A353CC776115A87EF4911E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsDeviceListener_OnDevicesChanged_mD9BFBD02042845784BE064DBA33B23B8993C3ED0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var d in m_added)
		List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* L_0 = __this->___m_added_7;
		NullCheck(L_0);
		Enumerator_t19FABC347D3F2FC6B22AD48AD192D4A340330891 L_1;
		L_1 = List_1_GetEnumerator_m9B6D5307B67A7E9B5A353CC776115A87EF4911E9(L_0, List_1_GetEnumerator_m9B6D5307B67A7E9B5A353CC776115A87EF4911E9_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m95EEDD4CCF925AC9F1F37817D5E08DDA82391298((&V_0), Enumerator_Dispose_m95EEDD4CCF925AC9F1F37817D5E08DDA82391298_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var d in m_added)
				Device_tC79DE088DC369440A01E872788D153A69F210F0E* L_2;
				L_2 = Enumerator_get_Current_m35B7C19DD3050513901406B9A08734C8E5B2E181_inline((&V_0), Enumerator_get_Current_m35B7C19DD3050513901406B9A08734C8E5B2E181_RuntimeMethod_var);
				// d.Dispose();
				NullCheck(L_2);
				Object_Dispose_mF9CEF11582FACFF8209F0A1E82D4020309608293(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var d in m_added)
				bool L_3;
				L_3 = Enumerator_MoveNext_mBD820B9344D8D1C48E15B0DB1938FD15CFEC0D99((&V_0), Enumerator_MoveNext_mBD820B9344D8D1C48E15B0DB1938FD15CFEC0D99_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// m_added.Clear();
		List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* L_4 = __this->___m_added_7;
		NullCheck(L_4);
		List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_inline(L_4, List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_RuntimeMethod_var);
		// m_removed.Clear();
		List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* L_5 = __this->___m_removed_8;
		NullCheck(L_5);
		List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_inline(L_5, List_1_Clear_m74095863618984CBA01658C6329B8EADCAE3F1BE_RuntimeMethod_var);
		// if (pipeline != null)
		Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2* L_6 = __this->___pipeline_6;
		if (!L_6)
		{
			goto IL_0063;
		}
	}
	{
		// pipeline.Dispose();
		Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2* L_7 = __this->___pipeline_6;
		NullCheck(L_7);
		Object_Dispose_mF9CEF11582FACFF8209F0A1E82D4020309608293(L_7, NULL);
		// pipeline = null;
		__this->___pipeline_6 = (Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pipeline_6), (void*)(Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2*)NULL);
	}

IL_0063:
	{
		// if (ctx != null)
		Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* L_8 = __this->___ctx_5;
		if (!L_8)
		{
			goto IL_0094;
		}
	}
	{
		// ctx.OnDevicesChanged -= OnDevicesChanged;
		Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* L_9 = __this->___ctx_5;
		OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD* L_10 = (OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD*)il2cpp_codegen_object_new(OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		OnDevicesChangedDelegate__ctor_m4F10A9F2500370E61126A3811ECAF8DE4C9FFA99(L_10, __this, (intptr_t)((void*)RsDeviceListener_OnDevicesChanged_mD9BFBD02042845784BE064DBA33B23B8993C3ED0_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		Context_remove_OnDevicesChanged_mBC2222D0FD29A52AA5AA085751067843A45018A0(L_9, L_10, NULL);
		// ctx.Dispose();
		Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* L_11 = __this->___ctx_5;
		NullCheck(L_11);
		Context_Dispose_m0D0C45E1AB80FD8B255B9A6B47382724F9F29925(L_11, NULL);
		// ctx = null;
		__this->___ctx_5 = (Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ctx_5), (void*)(Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5*)NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void RsDeviceListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsDeviceListener__ctor_mF47C2DD67DCB60973437AA3E7858BBEF5C1813B9 (RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m55BF2FCB682A665B8BC8DDAED18CE47C6317E265_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly List<Device> m_added = new List<Device>();
		List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* L_0 = (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B*)il2cpp_codegen_object_new(List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m55BF2FCB682A665B8BC8DDAED18CE47C6317E265(L_0, List_1__ctor_m55BF2FCB682A665B8BC8DDAED18CE47C6317E265_RuntimeMethod_var);
		__this->___m_added_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_added_7), (void*)L_0);
		// readonly List<Device> m_removed = new List<Device>();
		List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B* L_1 = (List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B*)il2cpp_codegen_object_new(List_1_tE9CFC1DFE5774C11B964C071962C89F8BB5C3D5B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m55BF2FCB682A665B8BC8DDAED18CE47C6317E265(L_1, List_1__ctor_m55BF2FCB682A665B8BC8DDAED18CE47C6317E265_RuntimeMethod_var);
		__this->___m_removed_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_removed_8), (void*)L_1);
		// readonly AutoResetEvent e = new AutoResetEvent(false);
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_2 = (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0*)il2cpp_codegen_object_new(AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AutoResetEvent__ctor_mB7C8CD30C5BE11A2C8DB79B27593CF0C5FE82ADE(L_2, (bool)0, NULL);
		__this->___e_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___e_9), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void RsDeviceListener/<Start>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__10__ctor_m040B192C9B6563D379146B8A0B60E0E10D22C65A (U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void RsDeviceListener/<Start>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__10_System_IDisposable_Dispose_m13E9B9A5D7EB545A789D7D9B0CA7042DF5BB50CF (U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean RsDeviceListener/<Start>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__10_MoveNext_mBE430D6F51B6448AE77FEEFB355D3D3D33237999 (U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsDeviceListener_OnDevicesChanged_mD9BFBD02042845784BE064DBA33B23B8993C3ED0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ctx = new Context();
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_4 = V_1;
		Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* L_5 = (Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5*)il2cpp_codegen_object_new(Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Context__ctor_m833D3312D73B2D956F3142714C1EB4CB7738A34A(L_5, NULL);
		NullCheck(L_4);
		L_4->___ctx_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___ctx_5), (void*)L_5);
		// pipeline = new Pipeline(ctx);
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_6 = V_1;
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_7 = V_1;
		NullCheck(L_7);
		Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* L_8 = L_7->___ctx_5;
		Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2* L_9 = (Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2*)il2cpp_codegen_object_new(Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Pipeline__ctor_m97EC9E399A7C7532907D51F25E3D6E71895DF9E5(L_9, L_8, NULL);
		NullCheck(L_6);
		L_6->___pipeline_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___pipeline_6), (void*)L_9);
		// ctx.OnDevicesChanged += OnDevicesChanged;
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_10 = V_1;
		NullCheck(L_10);
		Context_tF7C2FD0063E47CBEDAD84CD172A586FF4FD0D2C5* L_11 = L_10->___ctx_5;
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_12 = V_1;
		OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD* L_13 = (OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD*)il2cpp_codegen_object_new(OnDevicesChangedDelegate_tDF67690FFCBCF40516E350A0C961D6BF79636CAD_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		OnDevicesChangedDelegate__ctor_m4F10A9F2500370E61126A3811ECAF8DE4C9FFA99(L_13, L_12, (intptr_t)((void*)RsDeviceListener_OnDevicesChanged_mD9BFBD02042845784BE064DBA33B23B8993C3ED0_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		Context_add_OnDevicesChanged_m409A40EEFB06AEA08ABD69A891EE9607AF8F55E3(L_11, L_13, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0061:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// e.Set();
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_14 = V_1;
		NullCheck(L_14);
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_15 = L_14->___e_9;
		NullCheck(L_15);
		bool L_16;
		L_16 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_15, NULL);
		// }
		return (bool)0;
	}
}
// System.Object RsDeviceListener/<Start>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC7233BF58485959AED82EB09D589ECEEDA6ABDFA (U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void RsDeviceListener/<Start>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__10_System_Collections_IEnumerator_Reset_mD85C29888F1103E863CCCAF3D0DE53B2020AB769 (U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__10_System_Collections_IEnumerator_Reset_mD85C29888F1103E863CCCAF3D0DE53B2020AB769_RuntimeMethod_var)));
	}
}
// System.Object RsDeviceListener/<Start>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__10_System_Collections_IEnumerator_get_Current_m8C8223937991F8604289411124081C70662A02B2 (U3CStartU3Ed__10_t6BD5DBAF7206FC8459FDB7DB2D25F474B115DCEF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void RsDeviceListener/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m817C9BBA6942543A7F70621A9C7396FFD5D334A8 (U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void RsDeviceListener/<>c__DisplayClass11_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_1__ctor_m929800A05B1E6FE40B56862A26A73A4A20FB64E1 (U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void RsDeviceListener/<>c__DisplayClass11_1::<Update>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_1_U3CUpdateU3Eb__0_mD00FCA5887BA8FB2FF65BDC3AB39193573D9BB61 (U3CU3Ec__DisplayClass11_1_t642DC0B51937CD27F5DE2C7DDDD63AF0D2A2CC1B* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mB49D9246BC86239B672A9EFA421893E31E003173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Config_tF156DF44EDE591C8529D7A67C051932F799AF402* V_0 = NULL;
	{
		// using (var config = a.DeviceConfiguration.ToPipelineConfig())
		RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* L_0 = __this->___a_0;
		NullCheck(L_0);
		RsConfiguration_tDF5345C0545AC1C14AF457ACEA37F8701B631F1D* L_1 = (&L_0->___DeviceConfiguration_4);
		Config_tF156DF44EDE591C8529D7A67C051932F799AF402* L_2;
		L_2 = RsConfiguration_ToPipelineConfig_m5268DD8F4126F7F079E75CEB9FFB8990F6138BEB(L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					Config_tF156DF44EDE591C8529D7A67C051932F799AF402* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0048;
					}
				}
				{
					Config_tF156DF44EDE591C8529D7A67C051932F799AF402* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// resolvables[a] = config.CanResolve(pipeline);
			U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_5 = __this->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_5);
			Dictionary_2_t262A0517F516DA82A7FC5042407C0B50C1F66188* L_6 = L_5->___resolvables_1;
			RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* L_7 = __this->___a_0;
			Config_tF156DF44EDE591C8529D7A67C051932F799AF402* L_8 = V_0;
			U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_9 = __this->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_9);
			RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_10 = L_9->___U3CU3E4__this_0;
			NullCheck(L_10);
			Pipeline_t13986C55C1BD1DFC9C0C2DB96C069E65166A22A2* L_11 = L_10->___pipeline_6;
			NullCheck(L_8);
			bool L_12;
			L_12 = Config_CanResolve_m4CF60E49D64C5049945B01E30AFD6979AFC79053(L_8, L_11, NULL);
			NullCheck(L_6);
			Dictionary_2_set_Item_mB49D9246BC86239B672A9EFA421893E31E003173(L_6, L_7, L_12, Dictionary_2_set_Item_mB49D9246BC86239B672A9EFA421893E31E003173_RuntimeMethod_var);
			// }
			goto IL_0049;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// if (0 == Interlocked.Decrement(ref tasks))
		U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_13 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_13);
		int32_t* L_14 = (&L_13->___tasks_2);
		int32_t L_15;
		L_15 = Interlocked_Decrement_m6AFAD2E874CBDA373B1EF7572F11D6E91813E75D(L_14, NULL);
		if (L_15)
		{
			goto IL_006c;
		}
	}
	{
		// done.Set();
		U3CU3Ec__DisplayClass11_0_t2C5EE12B0B60A5ABBE7614336AB6416AB7CF6823* L_16 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_16);
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_17 = L_16->___done_3;
		NullCheck(L_17);
		bool L_18;
		L_18 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_17, NULL);
	}

IL_006c:
	{
		// });
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
// System.Void RsStreamAvailability::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RsStreamAvailability__ctor_m42E646E7B1A9377A6A1B6E992F61E092C9F8C534 (RsStreamAvailability_tFB8B3EAE746381AEE5C73CD1AC61AB4B63584574* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SceneLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Awake_m8A39EADE42839ED70417BF3F004E2BBE98D9867E (SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ED4F65603F63EC15987515970EAF069474F9329);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7231B2FC56610FE6683D73F6EF3AE21216F1536);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!created)
		bool L_0 = ((SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB_StaticFields*)il2cpp_codegen_static_fields_for(SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB_il2cpp_TypeInfo_var))->___created_4;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		// AssetBundle.LoadFromFile(Path.Combine(Application.streamingAssetsPath, "sample_assets"));
		String_t* L_1;
		L_1 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_1, _stringLiteral2ED4F65603F63EC15987515970EAF069474F9329, NULL);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_3;
		L_3 = AssetBundle_LoadFromFile_mAFD7B0E8F0A0A88E9BB60180EBA0A99B8B3F2629(L_2, NULL);
		// AssetBundle.LoadFromFile(Path.Combine(Application.streamingAssetsPath, "sample_scenes"));
		String_t* L_4;
		L_4 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		String_t* L_5;
		L_5 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_4, _stringLiteralD7231B2FC56610FE6683D73F6EF3AE21216F1536, NULL);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_6;
		L_6 = AssetBundle_LoadFromFile_mAFD7B0E8F0A0A88E9BB60180EBA0A99B8B3F2629(L_5, NULL);
		// created = true;
		((SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB_StaticFields*)il2cpp_codegen_static_fields_for(SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB_il2cpp_TypeInfo_var))->___created_4 = (bool)1;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SceneLoader::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneLoader_LoadSceneAsync_mBB6F460901AFC409438C66497FF53E63C9C5669C (SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00* L_0 = (U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00*)il2cpp_codegen_object_new(U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadSceneAsyncU3Ed__2__ctor_m00D4F4607F4A6560CA97C2C6BBCFDF170B15F015(L_0, 0, NULL);
		U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00* L_1 = L_0;
		String_t* L_2 = ___0_name;
		NullCheck(L_1);
		L_1->___name_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_2), (void*)L_2);
		return L_1;
	}
}
// System.Void SceneLoader::MainScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_MainScene_m936776F173F0A6871AFF3D49996180DC04BEFEC6 (SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7105A2ECE11E7707B1F13082131D29236460667F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(LoadSceneAsync("StartHere"));
		RuntimeObject* L_0;
		L_0 = SceneLoader_LoadSceneAsync_mBB6F460901AFC409438C66497FF53E63C9C5669C(__this, _stringLiteral7105A2ECE11E7707B1F13082131D29236460667F, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadScene_m60ADF7737F02E0955B67ECE4E81134E55EBC2209 (SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49B3D64E91ABD7B46AE1F8B4824E2A244C1955EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("SampleSceneUI");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral49B3D64E91ABD7B46AE1F8B4824E2A244C1955EB, NULL);
		// LoadSceneAdditive(name);
		String_t* L_0 = ___0_name;
		SceneLoader_LoadSceneAdditive_m73C51D7A01697E47E568B996B7F40F649AE95EB1(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::LoadSceneAdditive(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_LoadSceneAdditive_m73C51D7A01697E47E568B996B7F40F649AE95EB1 (SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(name, LoadSceneMode.Additive);
		String_t* L_0 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m2841705C02C450E42A44B5EEE2A6A2C4261FA3AF(L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Quit_m0E8D9B0FB87C9A92E0844EFCA2EABC43FDF42C99 (SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_OpenURL_m1B40F33B3A4FEE1A90E4C8F4215403E34A580C8A (SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(url);
		String_t* L_0 = ___0_url;
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_mAE1B9561D87FB52A61BD29B1EDE759A8E1504D57 (SceneLoader_tE6497F748EFDFBFA33A8A04C6B2994CA0F1D79FB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SceneLoader/<LoadSceneAsync>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2__ctor_m00D4F4607F4A6560CA97C2C6BBCFDF170B15F015 (U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SceneLoader/<LoadSceneAsync>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2_System_IDisposable_Dispose_mD982B21287E755B6304C6A65FC8AC62F42FDDB70 (U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SceneLoader/<LoadSceneAsync>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadSceneAsyncU3Ed__2_MoveNext_m31138439ABA60FDDC48AD9131AAFCA2B50A6E851 (U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_008d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.MoveGameObjectToScene(Camera.main.gameObject, SceneManager.GetSceneAt(0));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetSceneAt_m716F9BAC0C25737577B21569CC210869B22A73DE(0, NULL);
		SceneManager_MoveGameObjectToScene_mF5DC73256FA145D321DE14771F93AF7B832FE62A(L_3, L_4, NULL);
		// yield return SceneManager.UnloadSceneAsync(SceneManager.GetSceneAt(1));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_5;
		L_5 = SceneManager_GetSceneAt_m716F9BAC0C25737577B21569CC210869B22A73DE(1, NULL);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_6;
		L_6 = SceneManager_UnloadSceneAsync_mA3AB74052DF7155958E100364AAFFE8E11B52A4A(L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0055:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return SceneManager.LoadSceneAsync(name);
		String_t* L_7 = __this->___name_2;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_8;
		L_8 = SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300(L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0076:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_008d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SceneLoader/<LoadSceneAsync>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneAsyncU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m62203E06B74BA8B8D5BF8E432831530359934EC5 (U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SceneLoader/<LoadSceneAsync>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_Reset_m3031B20306A81052D3F5BA81F02BA988CF313BA5 (U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_Reset_m3031B20306A81052D3F5BA81F02BA988CF313BA5_RuntimeMethod_var)));
	}
}
// System.Object SceneLoader/<LoadSceneAsync>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadSceneAsyncU3Ed__2_System_Collections_IEnumerator_get_Current_mD885C3B47AF2F6B316E66D13DA666FBC856F3B43 (U3CLoadSceneAsyncU3Ed__2_tC4C58DE934EE4E332E58B02520A4F7A5DE2EAA00* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void StringFloatBinding::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringFloatBinding_set_Value_mA30C47A03C68E2C324A8F1A82A8CCDE1531C82AE (StringFloatBinding_tD8721754A96DC4EDDB14076D005AC48D1E3446CA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_mA05A3BD621633ACF91D30C742ED7409FAF1D93C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Binding.Invoke(Name, value);
		StringFloatEvent_t4DC786DED57FFD47B01AC7850355BFF480C1D27D* L_0 = __this->___Binding_5;
		String_t* L_1 = __this->___Name_4;
		float L_2 = ___0_value;
		NullCheck(L_0);
		UnityEvent_2_Invoke_mA05A3BD621633ACF91D30C742ED7409FAF1D93C7(L_0, L_1, L_2, UnityEvent_2_Invoke_mA05A3BD621633ACF91D30C742ED7409FAF1D93C7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void StringFloatBinding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringFloatBinding__ctor_m5787C74BF54FB7B35B7C1236F1702938DF837877 (StringFloatBinding_tD8721754A96DC4EDDB14076D005AC48D1E3446CA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void StringFloatBinding/StringFloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringFloatEvent__ctor_m0171F00288351ABB0B6D54B59A541FF8E5088F3A (StringFloatEvent_t4DC786DED57FFD47B01AC7850355BFF480C1D27D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mCB38CC308C414BBCD12E38E1C838630729D2F52A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mCB38CC308C414BBCD12E38E1C838630729D2F52A(__this, UnityEvent_2__ctor_mCB38CC308C414BBCD12E38E1C838630729D2F52A_RuntimeMethod_var);
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
// System.Void StringIntBinding::set_Value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringIntBinding_set_Value_m68AB7DB31881EBF413E7491DD286DBB3B876BDD4 (StringIntBinding_tD06984046E80F31A764C4D5E32F2312B9AAE0F4F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_Invoke_m7EE09CDAA9893FCD6458C70F8D1089AFBE1BDFE7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Binding.Invoke(propertyName, value);
		StringIntEvent_t68B3D2FA35F3B810435D0E6ED3068861F8F83EFE* L_0 = __this->___Binding_5;
		String_t* L_1 = __this->___propertyName_4;
		int32_t L_2 = ___0_value;
		NullCheck(L_0);
		UnityEvent_2_Invoke_m7EE09CDAA9893FCD6458C70F8D1089AFBE1BDFE7(L_0, L_1, L_2, UnityEvent_2_Invoke_m7EE09CDAA9893FCD6458C70F8D1089AFBE1BDFE7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void StringIntBinding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringIntBinding__ctor_m2DCEE8510918A78932FF83BDC31DA9DABEDEB9D8 (StringIntBinding_tD06984046E80F31A764C4D5E32F2312B9AAE0F4F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void StringIntBinding/StringIntEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringIntEvent__ctor_mEC4BAFFDD0674944E91785593F556D4DCBCF72D9 (StringIntEvent_t68B3D2FA35F3B810435D0E6ED3068861F8F83EFE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2__ctor_mEFA16CA89C0D7FDD4C53C16A47C918EDD855A0A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_2__ctor_mEFA16CA89C0D7FDD4C53C16A47C918EDD855A0A9(__this, UnityEvent_2__ctor_mEFA16CA89C0D7FDD4C53C16A47C918EDD855A0A9_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m69751B5EC50D8E7127D4BB2C8D908E38808AF45D_inline (float ___0_current, float ___1_target, float ___2_maxDelta, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___2_maxDelta;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___1_target;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___0_current;
		float L_7 = ___1_target;
		float L_8 = ___0_current;
		float L_9;
		L_9 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___2_maxDelta;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* Slider_get_onValueChanged_m4DA3FD0F8D7BB838F442C07F7796EEE584D0D4F6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public SliderEvent onValueChanged { get { return m_OnValueChanged; } set { m_OnValueChanged = value; } }
		SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* L_0 = __this->___m_OnValueChanged_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* RsDeviceListener_get_Instance_m1D83F2D0B3CD6DA27875EABF4DE81533121E228F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RsDeviceListener Instance { get; private set; }
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_0 = ((RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_StaticFields*)il2cpp_codegen_static_fields_for(RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RsDeviceListener_set_Instance_mACF1E9ACE59AB480296766DB6F8F875096CACBCF_inline (RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RsDeviceListener Instance { get; private set; }
		RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E* L_0 = ___0_value;
		((RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_StaticFields*)il2cpp_codegen_static_fields_for(RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_StaticFields*)il2cpp_codegen_static_fields_for(RsDeviceListener_t92A43E841600525AE543BCF2A318E88D3A2E196E_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InfoCollection_tB1009E22CC096F5FF880815BC8C53CC7BCE628F8* Device_get_Info_m00D6466D210FCEA32987F7C9F59A7F90066B62D9_inline (Device_tC79DE088DC369440A01E872788D153A69F210F0E* __this, const RuntimeMethod* method) 
{
	{
		InfoCollection_tB1009E22CC096F5FF880815BC8C53CC7BCE628F8* L_0 = __this->___U3CInfoU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_item, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_item;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 Enumerator_get_Current_m90E0638FF1812FE1DDE8D13CC607F4CD161D12C1_gshared_inline (Enumerator_tD5E26031CE205BBE3214F599A38680F6E87A011B* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423 L_0 = (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_mC3C5F83458F19B6276D6E090A86CFDADE6EFAAD8_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_m94A9BD1AEA6EA0A8BEE3739A3881F479181638C4_gshared_inline (KeyValuePair_2_t7E5E41B933054DBF6F52C6CDF0BC2CB4B1606423* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
