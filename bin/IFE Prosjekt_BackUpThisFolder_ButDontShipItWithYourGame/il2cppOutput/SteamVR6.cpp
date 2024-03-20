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
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.List`1<Valve.VR.InteractionSystem.Hand>
struct List_1_t00E73C877872433EFAD2C3FE4DDABE5882C9897A;
// System.Collections.Generic.List`1<Valve.VR.InteractionSystem.RenderModel>
struct List_1_tA78273CF6879713086A73AAE76CBDD1AA0A2074C;
// System.Collections.Generic.List`1<Valve.VR.InteractionSystem.Hand/AttachedObject>
struct List_1_tFC8CCEF3AA5767609C976AEE46B0779B1A9E73CF;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// Valve.VR.InteractionSystem.Hand[]
struct HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.MeshRenderer[]
struct MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Valve.VR.SteamVR_TrackedObject[]
struct SteamVR_TrackedObjectU5BU5D_tCC0C4EAA425B3D55541562E449C71292320325D6;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// Valve.VR.VRTextureBounds_t[]
struct VRTextureBounds_tU5BU5D_t15F137C9229B5460D2C90549AED56B079F46985B;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// SteamVR_Utils/RigidTransform[]
struct RigidTransformU5BU5D_t842B8F175C2088726BE059016C20CE05F87E2C17;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// Valve.VR.CVRCompositor
struct CVRCompositor_t792C5A9DA9FAFFD7F3106B12A1BF3F945994E59D;
// Valve.VR.CVROverlay
struct CVROverlay_t4EDDA8ED0BAAFFB0027E06E8B5F2E99498D556A9;
// Valve.VR.CVRSystem
struct CVRSystem_tD8B82A8DBBFA8B9CB38C71A1DD6BC80791E5DCA9;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.FixedJoint
struct FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Valve.VR.Extras.GazeEventHandler
struct GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2;
// Valve.VR.InteractionSystem.Hand
struct Hand_t254CD354808F36131662C3A54DF11F903A59282D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Valve.VR.InteractionSystem.Interactable
struct Interactable_tB21951E300B553092765F8A8CC3067BD11C76264;
// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Valve.VR.InteractionSystem.Sample.Planting
struct Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64;
// Valve.VR.InteractionSystem.Player
struct Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7;
// Valve.VR.Extras.PointerEventHandler
struct PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Valve.VR.InteractionSystem.RenderModel
struct RenderModel_tDFC7939C773BBBA1E0260AB6035DBC2776923AC6;
// Valve.VR.InteractionSystem.Sample.RenderModelChangerUI
struct RenderModelChangerUI_t4AD09914CD0652921E3A4DCAC6EB1EC2A1CC2920;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// Valve.VR.InteractionSystem.Sample.SkeletonUIOptions
struct SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// Valve.VR.InteractionSystem.Sample.SquishyToy
struct SquishyToy_tFF9058814B5F5053C8C4C0382EE4E9C42C5759B6;
// Valve.VR.SteamVR_Action
struct SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4;
// Valve.VR.SteamVR_ActionSet
struct SteamVR_ActionSet_tEF80C43A4D2010DC8847D9D5552F69ABF14D58C7;
// Valve.VR.SteamVR_Action_Boolean
struct SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085;
// Valve.VR.SteamVR_Action_Boolean_Source_Map
struct SteamVR_Action_Boolean_Source_Map_t4F1B28EDD5B2135FB9B1E37152D69BE2001937B8;
// Valve.VR.SteamVR_Action_Pose
struct SteamVR_Action_Pose_tF10F9459807FB1B8BBBC4D47531A52E3E02098AD;
// Valve.VR.SteamVR_Action_Single
struct SteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05;
// Valve.VR.SteamVR_Action_Single_Source_Map
struct SteamVR_Action_Single_Source_Map_tB5386B0B028E1B22BC7D8E48982BFFCBCA93A068;
// Valve.VR.SteamVR_Action_Vibration
struct SteamVR_Action_Vibration_tB2704A6F1EECB0C0CFA93ADA51C4AEB2A94F376A;
// Valve.VR.SteamVR_Behaviour_Pose
struct SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121;
// Valve.VR.SteamVR_Behaviour_PoseEvent
struct SteamVR_Behaviour_PoseEvent_t9958EE99909B3FA575A98B4CF5A78D950E246E89;
// Valve.VR.SteamVR_Behaviour_Pose_ConnectedChangedEvent
struct SteamVR_Behaviour_Pose_ConnectedChangedEvent_t0173D3113B38E4B1FB10C590F77EE84176E49F81;
// Valve.VR.SteamVR_Behaviour_Pose_DeviceIndexChangedEvent
struct SteamVR_Behaviour_Pose_DeviceIndexChangedEvent_t70ECE6FA0D7841B3CB2E9DBA4D201DDB5E9E66A0;
// Valve.VR.SteamVR_Behaviour_Pose_TrackingChangedEvent
struct SteamVR_Behaviour_Pose_TrackingChangedEvent_t203F3CA151CE8C4C697C2D6711584FA26005F40B;
// Valve.VR.Extras.SteamVR_ForceSteamVRMode
struct SteamVR_ForceSteamVRMode_t9ED9BB398F5517351985419850BFAC7F8F7BA8BE;
// Valve.VR.Extras.SteamVR_GazeTracker
struct SteamVR_GazeTracker_t81911C37163B1D23B5783D807FAB92E734AF1191;
// Valve.VR.SteamVR_HistoryBuffer
struct SteamVR_HistoryBuffer_tE2034CF13904C0DADA37DC860800C88CC356056A;
// Valve.VR.Extras.SteamVR_LaserPointer
struct SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3;
// Valve.VR.SteamVR_Settings
struct SteamVR_Settings_t7D6831601950586218FB18C7609D66092003A17B;
// Valve.VR.SteamVR_Skeleton_Poser
struct SteamVR_Skeleton_Poser_t2B9866070257DFF85F3C4B933574A98C5EDDC9AD;
// Valve.VR.Extras.SteamVR_TestThrow
struct SteamVR_TestThrow_t219107F6BC7E0E1457A3E6D991556A52B44262CB;
// Valve.VR.Extras.SteamVR_TestTrackedCamera
struct SteamVR_TestTrackedCamera_tD64A4D1719C2CE25E53CC3CFB5C0AC06A17FA243;
// Valve.VR.SteamVR_TrackedObject
struct SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3;
// System.String
struct String_t;
// Valve.VR.InteractionSystem.Sample.TargetHitEffect
struct TargetHitEffect_t45934383FFA12C7195F420EAA603BDCEA4E489CE;
// Valve.VR.InteractionSystem.Sample.TargetMeasurement
struct TargetMeasurement_tE198FAD83587B0DDFE4057E937C9B9654DA49990;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Valve.VR.InteractionSystem.UIElement
struct UIElement_tBA550E30EDB87A066404FDDE90CBF4A8C75357A7;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Valve.VR.InteractionSystem.CustomEvents/UnityEventHand
struct UnityEventHand_t8EA3E0DC223F9C8F1700EF4CC213B4171D202B7A;
// Valve.VR.InteractionSystem.Interactable/OnAttachedToHandDelegate
struct OnAttachedToHandDelegate_t653F2F4561C5CB61671742FDCBC90B42B5EFBE59;
// Valve.VR.InteractionSystem.Interactable/OnDetachedFromHandDelegate
struct OnDetachedFromHandDelegate_t5CB212E349F709F6E2E0E25636D7E94502A0F1B2;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7
struct U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED;
// Valve.VR.SteamVR_Action_Boolean/ChangeHandler
struct ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C;
// Valve.VR.SteamVR_Behaviour_Pose/ChangeHandler
struct ChangeHandler_tBC157448F446B755C81C2A3E934CB20A39AC220E;
// Valve.VR.SteamVR_Behaviour_Pose/DeviceConnectedChangeHandler
struct DeviceConnectedChangeHandler_t416229D7E567A112CBFC3E56D31097E6C170BE64;
// Valve.VR.SteamVR_Behaviour_Pose/DeviceIndexChangedHandler
struct DeviceIndexChangedHandler_tEA9B73EC9284F19B7FC04D7A9EE58EB37F6CD357;
// Valve.VR.SteamVR_Behaviour_Pose/TrackingChangeHandler
struct TrackingChangeHandler_tF6D2CAA50F8ECB15B07CE2ED45E192242619E2EE;
// Valve.VR.SteamVR_Behaviour_Pose/UpdateHandler
struct UpdateHandler_t1ECD321D739ADE1EF90F2AB65B8453A8943E8A33;
// Valve.VR.SteamVR_Events/Action
struct Action_t38E46395B51E03D6ED9000C55ED4BAEB85E7A3E8;
// Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2
struct U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3;
// Valve.VR.SteamVR_TrackedCamera/VideoStream
struct VideoStream_tC1834BCC5802AF551F9C808B25FD602FBB34C342;
// Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture
struct VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA;

IL2CPP_EXTERN_C RuntimeClass* ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteamVR_Input_t0DD834816170B2FF7481E717889F11FCB6A51298_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SteamVR_t919261AC44F0F1E56D98B28BC2724315305BCCD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7;
IL2CPP_EXTERN_C String_t* _stringLiteral368E804386E939D4381FB0417B6FDA2199D2C3D8;
IL2CPP_EXTERN_C String_t* _stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral49CC2091209FDC9EAD517916CDA545F17F979D7F;
IL2CPP_EXTERN_C String_t* _stringLiteral60243195EA520DD671C596DA76282F3BEC53D16F;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD771670AE0EBEF69C95CAD941F6F05A7252A5B;
IL2CPP_EXTERN_C String_t* _stringLiteral92AA61129D76DB10D47E27CA128DEA7B55875A58;
IL2CPP_EXTERN_C String_t* _stringLiteral9B9720B183B20AD34B8EFDED646FD1C8B759B788;
IL2CPP_EXTERN_C String_t* _stringLiteralAFAFC46D30CBD4066B1BD9637E63F0310881D27B;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralCAD6AF8B2E6FCA8D009D52942C4BF99EFED1C5CD;
IL2CPP_EXTERN_C String_t* _stringLiteralDE4E00FB01CE32D8F89F5D9A5DEDC0B2C61D05CD;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisSkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801_mA8BE8B267DA19BFCBE6B06386DA93C3A684559B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHand_t254CD354808F36131662C3A54DF11F903A59282D_mC7B984D5E7CB67FDAE3E3B99C3C0041EA01756A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInteractable_tB21951E300B553092765F8A8CC3067BD11C76264_m0F42142F0076BDEF6FEFE82D4ED3DC809479AD59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121_mBA8014D71A7DE73CFD409D14A677E152A2CEF5F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisSteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3_m688A45F5B6825F960F27CABE98B8C73B80F03D63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Planting_OnPlantActionChange_m0EFE74FDEDF0B316B742BB7ABDC8FC321D95FB8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SteamVR_Input_GetAction_TisSteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085_mE276A18B0628C50B582D24E3D0F6F2DC3CC13C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SteamVR_Input_GetAction_TisSteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05_mB48648C66C6EBD1FB286798E3A4D220DF1F6FC1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoPlantU3Ed__7_System_Collections_IEnumerator_Reset_m5081C08A18E8951C520672B58EA686FE9C12CC9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4A60D20B1A6FE44BC1B90D711EE734DE9ACDFAE8_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SteamVR_TrackedObjectU5BU5D_tCC0C4EAA425B3D55541562E449C71292320325D6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.SteamVR_Action
struct SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4  : public RuntimeObject
{
	// System.String Valve.VR.SteamVR_Action::actionPath
	String_t* ___actionPath_0;
	// System.Boolean Valve.VR.SteamVR_Action::needsReinit
	bool ___needsReinit_1;
	// System.String Valve.VR.SteamVR_Action::cachedShortName
	String_t* ___cachedShortName_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2
struct U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3  : public RuntimeObject
{
	// System.Int32 Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Valve.VR.Extras.SteamVR_ForceSteamVRMode Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2::<>4__this
	SteamVR_ForceSteamVRMode_t9ED9BB398F5517351985419850BFAC7F8F7BA8BE* ___U3CU3E4__this_2;
};

// Valve.VR.SteamVR_Action`2<Valve.VR.SteamVR_Action_Boolean_Source_Map,Valve.VR.SteamVR_Action_Boolean_Source>
struct SteamVR_Action_2_t301D1E7F2F3767A9B6F7A539F54DC22FF92DD2F5  : public SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4
{
	// SourceMap Valve.VR.SteamVR_Action`2::sourceMap
	SteamVR_Action_Boolean_Source_Map_t4F1B28EDD5B2135FB9B1E37152D69BE2001937B8* ___sourceMap_4;
	// System.Boolean Valve.VR.SteamVR_Action`2::initialized
	bool ___initialized_5;
};

// Valve.VR.SteamVR_Action`2<Valve.VR.SteamVR_Action_Single_Source_Map,Valve.VR.SteamVR_Action_Single_Source>
struct SteamVR_Action_2_t9A216B1683F8946ACB92CB758585EC6A061F57CA  : public SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4
{
	// SourceMap Valve.VR.SteamVR_Action`2::sourceMap
	SteamVR_Action_Single_Source_Map_tB5386B0B028E1B22BC7D8E48982BFFCBCA93A068* ___sourceMap_4;
	// System.Boolean Valve.VR.SteamVR_Action`2::initialized
	bool ___initialized_5;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Valve.VR.Extras.GazeEventArgs
struct GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 
{
	// System.Single Valve.VR.Extras.GazeEventArgs::distance
	float ___distance_0;
};

// Valve.VR.HmdMatrix34_t
struct HmdMatrix34_t_tCE6B9A4DFA7529E19D84BBB7709F6D74EF7BE9A3 
{
	// System.Single Valve.VR.HmdMatrix34_t::m0
	float ___m0_0;
	// System.Single Valve.VR.HmdMatrix34_t::m1
	float ___m1_1;
	// System.Single Valve.VR.HmdMatrix34_t::m2
	float ___m2_2;
	// System.Single Valve.VR.HmdMatrix34_t::m3
	float ___m3_3;
	// System.Single Valve.VR.HmdMatrix34_t::m4
	float ___m4_4;
	// System.Single Valve.VR.HmdMatrix34_t::m5
	float ___m5_5;
	// System.Single Valve.VR.HmdMatrix34_t::m6
	float ___m6_6;
	// System.Single Valve.VR.HmdMatrix34_t::m7
	float ___m7_7;
	// System.Single Valve.VR.HmdMatrix34_t::m8
	float ___m8_8;
	// System.Single Valve.VR.HmdMatrix34_t::m9
	float ___m9_9;
	// System.Single Valve.VR.HmdMatrix34_t::m10
	float ___m10_10;
	// System.Single Valve.VR.HmdMatrix34_t::m11
	float ___m11_11;
};

// Valve.VR.HmdVector3_t
struct HmdVector3_t_t949F31BFD7B64DB87AD5E6C4AABC0AE9B261369F 
{
	// System.Single Valve.VR.HmdVector3_t::v0
	float ___v0_0;
	// System.Single Valve.VR.HmdVector3_t::v1
	float ___v1_1;
	// System.Single Valve.VR.HmdVector3_t::v2
	float ___v2_2;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// Valve.VR.Extras.PointerEventArgs
struct PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 
{
	// Valve.VR.SteamVR_Input_Sources Valve.VR.Extras.PointerEventArgs::fromInputSource
	int32_t ___fromInputSource_0;
	// System.UInt32 Valve.VR.Extras.PointerEventArgs::flags
	uint32_t ___flags_1;
	// System.Single Valve.VR.Extras.PointerEventArgs::distance
	float ___distance_2;
	// UnityEngine.Transform Valve.VR.Extras.PointerEventArgs::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_3;
};
// Native definition for P/Invoke marshalling of Valve.VR.Extras.PointerEventArgs
struct PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshaled_pinvoke
{
	int32_t ___fromInputSource_0;
	uint32_t ___flags_1;
	float ___distance_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_3;
};
// Native definition for COM marshalling of Valve.VR.Extras.PointerEventArgs
struct PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshaled_com
{
	int32_t ___fromInputSource_0;
	uint32_t ___flags_1;
	float ___distance_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_3;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// Valve.VR.VRTextureBounds_t
struct VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 
{
	// System.Single Valve.VR.VRTextureBounds_t::uMin
	float ___uMin_0;
	// System.Single Valve.VR.VRTextureBounds_t::vMin
	float ___vMin_1;
	// System.Single Valve.VR.VRTextureBounds_t::uMax
	float ___uMax_2;
	// System.Single Valve.VR.VRTextureBounds_t::vMax
	float ___vMax_3;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct __StaticArrayInitTypeSizeU3D192_t0846939923D41AF08F45FC53184B651D6CEEEEC1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_t0846939923D41AF08F45FC53184B651D6CEEEEC1__padding[192];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_t49CA90336DC27E237FAEAD23DB38650C2591D9D7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_t49CA90336DC27E237FAEAD23DB38650C2591D9D7__padding[96];
	};
};

// Valve.VR.SteamVR_Action_In`2<Valve.VR.SteamVR_Action_Boolean_Source_Map,Valve.VR.SteamVR_Action_Boolean_Source>
struct SteamVR_Action_In_2_t3BFBB043EF33259BFBF18B4DB69F4A19ED020336  : public SteamVR_Action_2_t301D1E7F2F3767A9B6F7A539F54DC22FF92DD2F5
{
};

// Valve.VR.SteamVR_Action_In`2<Valve.VR.SteamVR_Action_Single_Source_Map,Valve.VR.SteamVR_Action_Single_Source>
struct SteamVR_Action_In_2_tCE0D6D221ED2C89BF9DBCBA61749FD7C7D89BD1F  : public SteamVR_Action_2_t9A216B1683F8946ACB92CB758585EC6A061F57CA
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t52F13E30DB5B0B05A2B4EBD1CC3040D5DE847DA1  : public RuntimeObject
{
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.ContactPoint
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Valve.VR.SteamVR
struct SteamVR_t919261AC44F0F1E56D98B28BC2724315305BCCD2  : public RuntimeObject
{
	// Valve.VR.CVRSystem Valve.VR.SteamVR::<hmd>k__BackingField
	CVRSystem_tD8B82A8DBBFA8B9CB38C71A1DD6BC80791E5DCA9* ___U3ChmdU3Ek__BackingField_4;
	// Valve.VR.CVRCompositor Valve.VR.SteamVR::<compositor>k__BackingField
	CVRCompositor_t792C5A9DA9FAFFD7F3106B12A1BF3F945994E59D* ___U3CcompositorU3Ek__BackingField_5;
	// Valve.VR.CVROverlay Valve.VR.SteamVR::<overlay>k__BackingField
	CVROverlay_t4EDDA8ED0BAAFFB0027E06E8B5F2E99498D556A9* ___U3CoverlayU3Ek__BackingField_6;
	// System.Single Valve.VR.SteamVR::<sceneWidth>k__BackingField
	float ___U3CsceneWidthU3Ek__BackingField_11;
	// System.Single Valve.VR.SteamVR::<sceneHeight>k__BackingField
	float ___U3CsceneHeightU3Ek__BackingField_12;
	// System.Single Valve.VR.SteamVR::<aspect>k__BackingField
	float ___U3CaspectU3Ek__BackingField_13;
	// System.Single Valve.VR.SteamVR::<fieldOfView>k__BackingField
	float ___U3CfieldOfViewU3Ek__BackingField_14;
	// UnityEngine.Vector2 Valve.VR.SteamVR::<tanHalfFov>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CtanHalfFovU3Ek__BackingField_15;
	// Valve.VR.VRTextureBounds_t[] Valve.VR.SteamVR::<textureBounds>k__BackingField
	VRTextureBounds_tU5BU5D_t15F137C9229B5460D2C90549AED56B079F46985B* ___U3CtextureBoundsU3Ek__BackingField_16;
	// SteamVR_Utils/RigidTransform[] Valve.VR.SteamVR::<eyes>k__BackingField
	RigidTransformU5BU5D_t842B8F175C2088726BE059016C20CE05F87E2C17* ___U3CeyesU3Ek__BackingField_17;
	// Valve.VR.ETextureType Valve.VR.SteamVR::textureType
	int32_t ___textureType_18;
};

// Valve.VR.TrackedDevicePose_t
struct TrackedDevicePose_t_t021D6A4AA7DA83ACFB19346C7E37E9BDFD5F2026 
{
	// Valve.VR.HmdMatrix34_t Valve.VR.TrackedDevicePose_t::mDeviceToAbsoluteTracking
	HmdMatrix34_t_tCE6B9A4DFA7529E19D84BBB7709F6D74EF7BE9A3 ___mDeviceToAbsoluteTracking_0;
	// Valve.VR.HmdVector3_t Valve.VR.TrackedDevicePose_t::vVelocity
	HmdVector3_t_t949F31BFD7B64DB87AD5E6C4AABC0AE9B261369F ___vVelocity_1;
	// Valve.VR.HmdVector3_t Valve.VR.TrackedDevicePose_t::vAngularVelocity
	HmdVector3_t_t949F31BFD7B64DB87AD5E6C4AABC0AE9B261369F ___vAngularVelocity_2;
	// Valve.VR.ETrackingResult Valve.VR.TrackedDevicePose_t::eTrackingResult
	int32_t ___eTrackingResult_3;
	// System.Boolean Valve.VR.TrackedDevicePose_t::bPoseIsValid
	bool ___bPoseIsValid_4;
	// System.Boolean Valve.VR.TrackedDevicePose_t::bDeviceIsConnected
	bool ___bDeviceIsConnected_5;
};

// Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7
struct U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED  : public RuntimeObject
{
	// System.Int32 Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Valve.VR.InteractionSystem.Sample.Planting Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::<>4__this
	Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* ___U3CU3E4__this_2;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::<planting>5__2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CplantingU3E5__2_3;
	// UnityEngine.Rigidbody Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::<rigidbody>5__3
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___U3CrigidbodyU3E5__3_4;
	// UnityEngine.Vector3 Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::<initialScale>5__4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CinitialScaleU3E5__4_5;
	// UnityEngine.Vector3 Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::<targetScale>5__5
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CtargetScaleU3E5__5_6;
	// System.Single Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::<startTime>5__6
	float ___U3CstartTimeU3E5__6_7;
	// System.Single Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::<overTime>5__7
	float ___U3CoverTimeU3E5__7_8;
	// System.Single Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::<endTime>5__8
	float ___U3CendTimeU3E5__8_9;
};

// SteamVR_Utils/RigidTransform
struct RigidTransform_t53A42D7BF59C622BCCC3E647DD9088310D3A48CF 
{
	// UnityEngine.Vector3 SteamVR_Utils/RigidTransform::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_0;
	// UnityEngine.Quaternion SteamVR_Utils/RigidTransform::rot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rot_1;
};

// Valve.VR.CameraVideoStreamFrameHeader_t
struct CameraVideoStreamFrameHeader_t_tF29695D7FE4406482482A0429C9F18959C825BAD 
{
	// Valve.VR.EVRTrackedCameraFrameType Valve.VR.CameraVideoStreamFrameHeader_t::eFrameType
	int32_t ___eFrameType_0;
	// System.UInt32 Valve.VR.CameraVideoStreamFrameHeader_t::nWidth
	uint32_t ___nWidth_1;
	// System.UInt32 Valve.VR.CameraVideoStreamFrameHeader_t::nHeight
	uint32_t ___nHeight_2;
	// System.UInt32 Valve.VR.CameraVideoStreamFrameHeader_t::nBytesPerPixel
	uint32_t ___nBytesPerPixel_3;
	// System.UInt32 Valve.VR.CameraVideoStreamFrameHeader_t::nFrameSequence
	uint32_t ___nFrameSequence_4;
	// Valve.VR.TrackedDevicePose_t Valve.VR.CameraVideoStreamFrameHeader_t::trackedDevicePose
	TrackedDevicePose_t_t021D6A4AA7DA83ACFB19346C7E37E9BDFD5F2026 ___trackedDevicePose_5;
	// System.UInt64 Valve.VR.CameraVideoStreamFrameHeader_t::ulFrameExposureTime
	uint64_t ___ulFrameExposureTime_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Valve.VR.SteamVR_Action_Boolean
struct SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085  : public SteamVR_Action_In_2_t3BFBB043EF33259BFBF18B4DB69F4A19ED020336
{
};

// Valve.VR.SteamVR_Action_Single
struct SteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05  : public SteamVR_Action_In_2_tCE0D6D221ED2C89BF9DBCBA61749FD7C7D89BD1F
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Valve.VR.Extras.GazeEventHandler
struct GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2  : public MulticastDelegate_t
{
};

// UnityEngine.Joint
struct Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Valve.VR.Extras.PointerEventHandler
struct PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24  : public MulticastDelegate_t
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// Valve.VR.SteamVR_Action_Boolean/ChangeHandler
struct ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C  : public MulticastDelegate_t
{
};

// Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture
struct VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA  : public RuntimeObject
{
	// System.Boolean Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::<undistorted>k__BackingField
	bool ___U3CundistortedU3Ek__BackingField_0;
	// Valve.VR.VRTextureBounds_t Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::<frameBounds>k__BackingField
	VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 ___U3CframeBoundsU3Ek__BackingField_1;
	// UnityEngine.Texture2D Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::_texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____texture_2;
	// System.Int32 Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::prevFrameCount
	int32_t ___prevFrameCount_3;
	// System.UInt32 Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::glTextureId
	uint32_t ___glTextureId_4;
	// Valve.VR.SteamVR_TrackedCamera/VideoStream Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::videostream
	VideoStream_tC1834BCC5802AF551F9C808B25FD602FBB34C342* ___videostream_5;
	// Valve.VR.CameraVideoStreamFrameHeader_t Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::header
	CameraVideoStreamFrameHeader_t_tF29695D7FE4406482482A0429C9F18959C825BAD ___header_6;
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.FixedJoint
struct FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E  : public Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// Valve.VR.InteractionSystem.Hand
struct Hand_t254CD354808F36131662C3A54DF11F903A59282D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Valve.VR.InteractionSystem.Hand Valve.VR.InteractionSystem.Hand::otherHand
	Hand_t254CD354808F36131662C3A54DF11F903A59282D* ___otherHand_5;
	// Valve.VR.SteamVR_Input_Sources Valve.VR.InteractionSystem.Hand::handType
	int32_t ___handType_6;
	// Valve.VR.SteamVR_Behaviour_Pose Valve.VR.InteractionSystem.Hand::trackedObject
	SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* ___trackedObject_7;
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.InteractionSystem.Hand::grabPinchAction
	SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* ___grabPinchAction_8;
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.InteractionSystem.Hand::grabGripAction
	SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* ___grabGripAction_9;
	// Valve.VR.SteamVR_Action_Vibration Valve.VR.InteractionSystem.Hand::hapticAction
	SteamVR_Action_Vibration_tB2704A6F1EECB0C0CFA93ADA51C4AEB2A94F376A* ___hapticAction_10;
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.InteractionSystem.Hand::uiInteractAction
	SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* ___uiInteractAction_11;
	// System.Boolean Valve.VR.InteractionSystem.Hand::useHoverSphere
	bool ___useHoverSphere_12;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Hand::hoverSphereTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hoverSphereTransform_13;
	// System.Single Valve.VR.InteractionSystem.Hand::hoverSphereRadius
	float ___hoverSphereRadius_14;
	// UnityEngine.LayerMask Valve.VR.InteractionSystem.Hand::hoverLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___hoverLayerMask_15;
	// System.Single Valve.VR.InteractionSystem.Hand::hoverUpdateInterval
	float ___hoverUpdateInterval_16;
	// System.Boolean Valve.VR.InteractionSystem.Hand::useControllerHoverComponent
	bool ___useControllerHoverComponent_17;
	// System.String Valve.VR.InteractionSystem.Hand::controllerHoverComponent
	String_t* ___controllerHoverComponent_18;
	// System.Single Valve.VR.InteractionSystem.Hand::controllerHoverRadius
	float ___controllerHoverRadius_19;
	// System.Boolean Valve.VR.InteractionSystem.Hand::useFingerJointHover
	bool ___useFingerJointHover_20;
	// Valve.VR.SteamVR_Skeleton_JointIndexEnum Valve.VR.InteractionSystem.Hand::fingerJointHover
	int32_t ___fingerJointHover_21;
	// System.Single Valve.VR.InteractionSystem.Hand::fingerJointHoverRadius
	float ___fingerJointHoverRadius_22;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Hand::objectAttachmentPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___objectAttachmentPoint_23;
	// UnityEngine.Camera Valve.VR.InteractionSystem.Hand::noSteamVRFallbackCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___noSteamVRFallbackCamera_24;
	// System.Single Valve.VR.InteractionSystem.Hand::noSteamVRFallbackMaxDistanceNoItem
	float ___noSteamVRFallbackMaxDistanceNoItem_25;
	// System.Single Valve.VR.InteractionSystem.Hand::noSteamVRFallbackMaxDistanceWithItem
	float ___noSteamVRFallbackMaxDistanceWithItem_26;
	// System.Single Valve.VR.InteractionSystem.Hand::noSteamVRFallbackInteractorDistance
	float ___noSteamVRFallbackInteractorDistance_27;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Hand::renderModelPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___renderModelPrefab_28;
	// System.Collections.Generic.List`1<Valve.VR.InteractionSystem.RenderModel> Valve.VR.InteractionSystem.Hand::renderModels
	List_1_tA78273CF6879713086A73AAE76CBDD1AA0A2074C* ___renderModels_29;
	// Valve.VR.InteractionSystem.RenderModel Valve.VR.InteractionSystem.Hand::mainRenderModel
	RenderModel_tDFC7939C773BBBA1E0260AB6035DBC2776923AC6* ___mainRenderModel_30;
	// Valve.VR.InteractionSystem.RenderModel Valve.VR.InteractionSystem.Hand::hoverhighlightRenderModel
	RenderModel_tDFC7939C773BBBA1E0260AB6035DBC2776923AC6* ___hoverhighlightRenderModel_31;
	// System.Boolean Valve.VR.InteractionSystem.Hand::showDebugText
	bool ___showDebugText_32;
	// System.Boolean Valve.VR.InteractionSystem.Hand::spewDebugText
	bool ___spewDebugText_33;
	// System.Boolean Valve.VR.InteractionSystem.Hand::showDebugInteractables
	bool ___showDebugInteractables_34;
	// System.Collections.Generic.List`1<Valve.VR.InteractionSystem.Hand/AttachedObject> Valve.VR.InteractionSystem.Hand::attachedObjects
	List_1_tFC8CCEF3AA5767609C976AEE46B0779B1A9E73CF* ___attachedObjects_35;
	// System.Boolean Valve.VR.InteractionSystem.Hand::<hoverLocked>k__BackingField
	bool ___U3ChoverLockedU3Ek__BackingField_36;
	// Valve.VR.InteractionSystem.Interactable Valve.VR.InteractionSystem.Hand::_hoveringInteractable
	Interactable_tB21951E300B553092765F8A8CC3067BD11C76264* ____hoveringInteractable_37;
	// UnityEngine.TextMesh Valve.VR.InteractionSystem.Hand::debugText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___debugText_38;
	// System.Int32 Valve.VR.InteractionSystem.Hand::prevOverlappingColliders
	int32_t ___prevOverlappingColliders_39;
	// UnityEngine.Collider[] Valve.VR.InteractionSystem.Hand::overlappingColliders
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___overlappingColliders_41;
	// Valve.VR.InteractionSystem.Player Valve.VR.InteractionSystem.Hand::playerInstance
	Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* ___playerInstance_42;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Hand::applicationLostFocusObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___applicationLostFocusObject_43;
	// Valve.VR.SteamVR_Events/Action Valve.VR.InteractionSystem.Hand::inputFocusAction
	Action_t38E46395B51E03D6ED9000C55ED4BAEB85E7A3E8* ___inputFocusAction_44;
};

// Valve.VR.InteractionSystem.Interactable
struct Interactable_tB21951E300B553092765F8A8CC3067BD11C76264  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Valve.VR.SteamVR_ActionSet Valve.VR.InteractionSystem.Interactable::activateActionSetOnAttach
	SteamVR_ActionSet_tEF80C43A4D2010DC8847D9D5552F69ABF14D58C7* ___activateActionSetOnAttach_4;
	// System.Boolean Valve.VR.InteractionSystem.Interactable::hideHandOnAttach
	bool ___hideHandOnAttach_5;
	// System.Boolean Valve.VR.InteractionSystem.Interactable::hideSkeletonOnAttach
	bool ___hideSkeletonOnAttach_6;
	// System.Boolean Valve.VR.InteractionSystem.Interactable::hideControllerOnAttach
	bool ___hideControllerOnAttach_7;
	// System.Int32 Valve.VR.InteractionSystem.Interactable::handAnimationOnPickup
	int32_t ___handAnimationOnPickup_8;
	// Valve.VR.SkeletalMotionRangeChange Valve.VR.InteractionSystem.Interactable::setRangeOfMotionOnPickup
	int32_t ___setRangeOfMotionOnPickup_9;
	// Valve.VR.InteractionSystem.Interactable/OnAttachedToHandDelegate Valve.VR.InteractionSystem.Interactable::onAttachedToHand
	OnAttachedToHandDelegate_t653F2F4561C5CB61671742FDCBC90B42B5EFBE59* ___onAttachedToHand_10;
	// Valve.VR.InteractionSystem.Interactable/OnDetachedFromHandDelegate Valve.VR.InteractionSystem.Interactable::onDetachedFromHand
	OnDetachedFromHandDelegate_t5CB212E349F709F6E2E0E25636D7E94502A0F1B2* ___onDetachedFromHand_11;
	// System.Boolean Valve.VR.InteractionSystem.Interactable::useHandObjectAttachmentPoint
	bool ___useHandObjectAttachmentPoint_12;
	// System.Boolean Valve.VR.InteractionSystem.Interactable::attachEaseIn
	bool ___attachEaseIn_13;
	// UnityEngine.AnimationCurve Valve.VR.InteractionSystem.Interactable::snapAttachEaseInCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___snapAttachEaseInCurve_14;
	// System.Single Valve.VR.InteractionSystem.Interactable::snapAttachEaseInTime
	float ___snapAttachEaseInTime_15;
	// System.Boolean Valve.VR.InteractionSystem.Interactable::snapAttachEaseInCompleted
	bool ___snapAttachEaseInCompleted_16;
	// Valve.VR.SteamVR_Skeleton_Poser Valve.VR.InteractionSystem.Interactable::skeletonPoser
	SteamVR_Skeleton_Poser_t2B9866070257DFF85F3C4B933574A98C5EDDC9AD* ___skeletonPoser_17;
	// System.Boolean Valve.VR.InteractionSystem.Interactable::handFollowTransform
	bool ___handFollowTransform_18;
	// System.Boolean Valve.VR.InteractionSystem.Interactable::highlightOnHover
	bool ___highlightOnHover_19;
	// UnityEngine.MeshRenderer[] Valve.VR.InteractionSystem.Interactable::highlightRenderers
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* ___highlightRenderers_20;
	// UnityEngine.MeshRenderer[] Valve.VR.InteractionSystem.Interactable::existingRenderers
	MeshRendererU5BU5D_tDF429EF168050A5CE085D0B51909A6AE2067E446* ___existingRenderers_21;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Interactable::highlightHolder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___highlightHolder_22;
	// UnityEngine.SkinnedMeshRenderer[] Valve.VR.InteractionSystem.Interactable::highlightSkinnedRenderers
	SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* ___highlightSkinnedRenderers_23;
	// UnityEngine.SkinnedMeshRenderer[] Valve.VR.InteractionSystem.Interactable::existingSkinnedRenderers
	SkinnedMeshRendererU5BU5D_tB7C495C5EF8CD078193C03ABCEF8FF36ABE6014B* ___existingSkinnedRenderers_24;
	// UnityEngine.GameObject[] Valve.VR.InteractionSystem.Interactable::hideHighlight
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hideHighlight_26;
	// System.Int32 Valve.VR.InteractionSystem.Interactable::hoverPriority
	int32_t ___hoverPriority_27;
	// Valve.VR.InteractionSystem.Hand Valve.VR.InteractionSystem.Interactable::attachedToHand
	Hand_t254CD354808F36131662C3A54DF11F903A59282D* ___attachedToHand_28;
	// System.Collections.Generic.List`1<Valve.VR.InteractionSystem.Hand> Valve.VR.InteractionSystem.Interactable::hoveringHands
	List_1_t00E73C877872433EFAD2C3FE4DDABE5882C9897A* ___hoveringHands_29;
	// System.Boolean Valve.VR.InteractionSystem.Interactable::<isDestroying>k__BackingField
	bool ___U3CisDestroyingU3Ek__BackingField_30;
	// System.Boolean Valve.VR.InteractionSystem.Interactable::<isHovering>k__BackingField
	bool ___U3CisHoveringU3Ek__BackingField_31;
	// System.Boolean Valve.VR.InteractionSystem.Interactable::<wasHovering>k__BackingField
	bool ___U3CwasHoveringU3Ek__BackingField_32;
	// System.Single Valve.VR.InteractionSystem.Interactable::blendToPoseTime
	float ___blendToPoseTime_33;
	// System.Single Valve.VR.InteractionSystem.Interactable::releasePoseBlendTime
	float ___releasePoseBlendTime_34;
};

// Valve.VR.InteractionSystem.Sample.Planting
struct Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.InteractionSystem.Sample.Planting::plantAction
	SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* ___plantAction_4;
	// Valve.VR.InteractionSystem.Hand Valve.VR.InteractionSystem.Sample.Planting::hand
	Hand_t254CD354808F36131662C3A54DF11F903A59282D* ___hand_5;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Sample.Planting::prefabToPlant
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabToPlant_6;
};

// Valve.VR.InteractionSystem.Player
struct Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Valve.VR.InteractionSystem.Player::trackingOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trackingOriginTransform_4;
	// UnityEngine.Transform[] Valve.VR.InteractionSystem.Player::hmdTransforms
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___hmdTransforms_5;
	// Valve.VR.InteractionSystem.Hand[] Valve.VR.InteractionSystem.Player::hands
	HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A* ___hands_6;
	// UnityEngine.Collider Valve.VR.InteractionSystem.Player::headCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___headCollider_7;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Player::rigSteamVR
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rigSteamVR_8;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Player::rig2DFallback
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rig2DFallback_9;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Player::audioListener
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___audioListener_10;
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.InteractionSystem.Player::headsetOnHead
	SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* ___headsetOnHead_11;
	// System.Boolean Valve.VR.InteractionSystem.Player::allowToggleTo2D
	bool ___allowToggleTo2D_12;
};

// Valve.VR.InteractionSystem.Sample.SkeletonUIOptions
struct SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Valve.VR.InteractionSystem.Sample.SquishyToy
struct SquishyToy_tFF9058814B5F5053C8C4C0382EE4E9C42C5759B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Valve.VR.InteractionSystem.Interactable Valve.VR.InteractionSystem.Sample.SquishyToy::interactable
	Interactable_tB21951E300B553092765F8A8CC3067BD11C76264* ___interactable_4;
	// UnityEngine.SkinnedMeshRenderer Valve.VR.InteractionSystem.Sample.SquishyToy::renderer
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* ___renderer_5;
	// System.Boolean Valve.VR.InteractionSystem.Sample.SquishyToy::affectMaterial
	bool ___affectMaterial_6;
	// Valve.VR.SteamVR_Action_Single Valve.VR.InteractionSystem.Sample.SquishyToy::gripSqueeze
	SteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05* ___gripSqueeze_7;
	// Valve.VR.SteamVR_Action_Single Valve.VR.InteractionSystem.Sample.SquishyToy::pinchSqueeze
	SteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05* ___pinchSqueeze_8;
	// UnityEngine.Rigidbody Valve.VR.InteractionSystem.Sample.SquishyToy::rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidbody_9;
};

// Valve.VR.SteamVR_Behaviour_Pose
struct SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Valve.VR.SteamVR_Action_Pose Valve.VR.SteamVR_Behaviour_Pose::poseAction
	SteamVR_Action_Pose_tF10F9459807FB1B8BBBC4D47531A52E3E02098AD* ___poseAction_4;
	// Valve.VR.SteamVR_Input_Sources Valve.VR.SteamVR_Behaviour_Pose::inputSource
	int32_t ___inputSource_5;
	// UnityEngine.Transform Valve.VR.SteamVR_Behaviour_Pose::origin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___origin_6;
	// Valve.VR.SteamVR_Behaviour_PoseEvent Valve.VR.SteamVR_Behaviour_Pose::onTransformUpdated
	SteamVR_Behaviour_PoseEvent_t9958EE99909B3FA575A98B4CF5A78D950E246E89* ___onTransformUpdated_7;
	// Valve.VR.SteamVR_Behaviour_PoseEvent Valve.VR.SteamVR_Behaviour_Pose::onTransformChanged
	SteamVR_Behaviour_PoseEvent_t9958EE99909B3FA575A98B4CF5A78D950E246E89* ___onTransformChanged_8;
	// Valve.VR.SteamVR_Behaviour_Pose_ConnectedChangedEvent Valve.VR.SteamVR_Behaviour_Pose::onConnectedChanged
	SteamVR_Behaviour_Pose_ConnectedChangedEvent_t0173D3113B38E4B1FB10C590F77EE84176E49F81* ___onConnectedChanged_9;
	// Valve.VR.SteamVR_Behaviour_Pose_TrackingChangedEvent Valve.VR.SteamVR_Behaviour_Pose::onTrackingChanged
	SteamVR_Behaviour_Pose_TrackingChangedEvent_t203F3CA151CE8C4C697C2D6711584FA26005F40B* ___onTrackingChanged_10;
	// Valve.VR.SteamVR_Behaviour_Pose_DeviceIndexChangedEvent Valve.VR.SteamVR_Behaviour_Pose::onDeviceIndexChanged
	SteamVR_Behaviour_Pose_DeviceIndexChangedEvent_t70ECE6FA0D7841B3CB2E9DBA4D201DDB5E9E66A0* ___onDeviceIndexChanged_11;
	// Valve.VR.SteamVR_Behaviour_Pose/UpdateHandler Valve.VR.SteamVR_Behaviour_Pose::onTransformUpdatedEvent
	UpdateHandler_t1ECD321D739ADE1EF90F2AB65B8453A8943E8A33* ___onTransformUpdatedEvent_12;
	// Valve.VR.SteamVR_Behaviour_Pose/ChangeHandler Valve.VR.SteamVR_Behaviour_Pose::onTransformChangedEvent
	ChangeHandler_tBC157448F446B755C81C2A3E934CB20A39AC220E* ___onTransformChangedEvent_13;
	// Valve.VR.SteamVR_Behaviour_Pose/DeviceConnectedChangeHandler Valve.VR.SteamVR_Behaviour_Pose::onConnectedChangedEvent
	DeviceConnectedChangeHandler_t416229D7E567A112CBFC3E56D31097E6C170BE64* ___onConnectedChangedEvent_14;
	// Valve.VR.SteamVR_Behaviour_Pose/TrackingChangeHandler Valve.VR.SteamVR_Behaviour_Pose::onTrackingChangedEvent
	TrackingChangeHandler_tF6D2CAA50F8ECB15B07CE2ED45E192242619E2EE* ___onTrackingChangedEvent_15;
	// Valve.VR.SteamVR_Behaviour_Pose/DeviceIndexChangedHandler Valve.VR.SteamVR_Behaviour_Pose::onDeviceIndexChangedEvent
	DeviceIndexChangedHandler_tEA9B73EC9284F19B7FC04D7A9EE58EB37F6CD357* ___onDeviceIndexChangedEvent_16;
	// System.Boolean Valve.VR.SteamVR_Behaviour_Pose::broadcastDeviceChanges
	bool ___broadcastDeviceChanges_17;
	// System.Int32 Valve.VR.SteamVR_Behaviour_Pose::deviceIndex
	int32_t ___deviceIndex_18;
	// Valve.VR.SteamVR_HistoryBuffer Valve.VR.SteamVR_Behaviour_Pose::historyBuffer
	SteamVR_HistoryBuffer_tE2034CF13904C0DADA37DC860800C88CC356056A* ___historyBuffer_19;
	// System.Int32 Valve.VR.SteamVR_Behaviour_Pose::lastFrameUpdated
	int32_t ___lastFrameUpdated_20;
};

// Valve.VR.Extras.SteamVR_ForceSteamVRMode
struct SteamVR_ForceSteamVRMode_t9ED9BB398F5517351985419850BFAC7F8F7BA8BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Valve.VR.Extras.SteamVR_ForceSteamVRMode::vrCameraPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___vrCameraPrefab_4;
	// UnityEngine.GameObject[] Valve.VR.Extras.SteamVR_ForceSteamVRMode::disableObjectsOnLoad
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___disableObjectsOnLoad_5;
};

// Valve.VR.Extras.SteamVR_GazeTracker
struct SteamVR_GazeTracker_t81911C37163B1D23B5783D807FAB92E734AF1191  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Valve.VR.Extras.SteamVR_GazeTracker::isInGaze
	bool ___isInGaze_4;
	// Valve.VR.Extras.GazeEventHandler Valve.VR.Extras.SteamVR_GazeTracker::GazeOn
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* ___GazeOn_5;
	// Valve.VR.Extras.GazeEventHandler Valve.VR.Extras.SteamVR_GazeTracker::GazeOff
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* ___GazeOff_6;
	// System.Single Valve.VR.Extras.SteamVR_GazeTracker::gazeInCutoff
	float ___gazeInCutoff_7;
	// System.Single Valve.VR.Extras.SteamVR_GazeTracker::gazeOutCutoff
	float ___gazeOutCutoff_8;
	// UnityEngine.Transform Valve.VR.Extras.SteamVR_GazeTracker::hmdTrackedObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hmdTrackedObject_9;
};

// Valve.VR.Extras.SteamVR_LaserPointer
struct SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Valve.VR.SteamVR_Behaviour_Pose Valve.VR.Extras.SteamVR_LaserPointer::pose
	SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* ___pose_4;
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.Extras.SteamVR_LaserPointer::interactWithUI
	SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* ___interactWithUI_5;
	// System.Boolean Valve.VR.Extras.SteamVR_LaserPointer::active
	bool ___active_6;
	// UnityEngine.Color Valve.VR.Extras.SteamVR_LaserPointer::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_7;
	// System.Single Valve.VR.Extras.SteamVR_LaserPointer::thickness
	float ___thickness_8;
	// UnityEngine.Color Valve.VR.Extras.SteamVR_LaserPointer::clickColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___clickColor_9;
	// UnityEngine.GameObject Valve.VR.Extras.SteamVR_LaserPointer::holder
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___holder_10;
	// UnityEngine.GameObject Valve.VR.Extras.SteamVR_LaserPointer::pointer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pointer_11;
	// System.Boolean Valve.VR.Extras.SteamVR_LaserPointer::isActive
	bool ___isActive_12;
	// System.Boolean Valve.VR.Extras.SteamVR_LaserPointer::addRigidBody
	bool ___addRigidBody_13;
	// UnityEngine.Transform Valve.VR.Extras.SteamVR_LaserPointer::reference
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___reference_14;
	// Valve.VR.Extras.PointerEventHandler Valve.VR.Extras.SteamVR_LaserPointer::PointerIn
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* ___PointerIn_15;
	// Valve.VR.Extras.PointerEventHandler Valve.VR.Extras.SteamVR_LaserPointer::PointerOut
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* ___PointerOut_16;
	// Valve.VR.Extras.PointerEventHandler Valve.VR.Extras.SteamVR_LaserPointer::PointerClick
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* ___PointerClick_17;
	// UnityEngine.Transform Valve.VR.Extras.SteamVR_LaserPointer::previousContact
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___previousContact_18;
};

// Valve.VR.Extras.SteamVR_TestThrow
struct SteamVR_TestThrow_t219107F6BC7E0E1457A3E6D991556A52B44262CB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Valve.VR.Extras.SteamVR_TestThrow::prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefab_4;
	// UnityEngine.Rigidbody Valve.VR.Extras.SteamVR_TestThrow::attachPoint
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___attachPoint_5;
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.Extras.SteamVR_TestThrow::spawn
	SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* ___spawn_6;
	// Valve.VR.SteamVR_Behaviour_Pose Valve.VR.Extras.SteamVR_TestThrow::trackedObj
	SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* ___trackedObj_7;
	// UnityEngine.FixedJoint Valve.VR.Extras.SteamVR_TestThrow::joint
	FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* ___joint_8;
};

// Valve.VR.Extras.SteamVR_TestTrackedCamera
struct SteamVR_TestTrackedCamera_tD64A4D1719C2CE25E53CC3CFB5C0AC06A17FA243  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material Valve.VR.Extras.SteamVR_TestTrackedCamera::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_4;
	// UnityEngine.Transform Valve.VR.Extras.SteamVR_TestTrackedCamera::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_5;
	// System.Boolean Valve.VR.Extras.SteamVR_TestTrackedCamera::undistorted
	bool ___undistorted_6;
	// System.Boolean Valve.VR.Extras.SteamVR_TestTrackedCamera::cropped
	bool ___cropped_7;
};

// Valve.VR.SteamVR_TrackedObject
struct SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Valve.VR.SteamVR_TrackedObject/EIndex Valve.VR.SteamVR_TrackedObject::index
	int32_t ___index_4;
	// UnityEngine.Transform Valve.VR.SteamVR_TrackedObject::origin
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___origin_5;
	// System.Boolean Valve.VR.SteamVR_TrackedObject::<isValid>k__BackingField
	bool ___U3CisValidU3Ek__BackingField_6;
	// Valve.VR.SteamVR_Events/Action Valve.VR.SteamVR_TrackedObject::newPosesAction
	Action_t38E46395B51E03D6ED9000C55ED4BAEB85E7A3E8* ___newPosesAction_7;
};

// Valve.VR.InteractionSystem.Sample.TargetHitEffect
struct TargetHitEffect_t45934383FFA12C7195F420EAA603BDCEA4E489CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider Valve.VR.InteractionSystem.Sample.TargetHitEffect::targetCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___targetCollider_4;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Sample.TargetHitEffect::spawnObjectOnCollision
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnObjectOnCollision_5;
	// System.Boolean Valve.VR.InteractionSystem.Sample.TargetHitEffect::colorSpawnedObject
	bool ___colorSpawnedObject_6;
	// System.Boolean Valve.VR.InteractionSystem.Sample.TargetHitEffect::destroyOnTargetCollision
	bool ___destroyOnTargetCollision_7;
};

// Valve.VR.InteractionSystem.Sample.TargetMeasurement
struct TargetMeasurement_tE198FAD83587B0DDFE4057E937C9B9654DA49990  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Sample.TargetMeasurement::visualWrapper
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___visualWrapper_4;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Sample.TargetMeasurement::measurementTape
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___measurementTape_5;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Sample.TargetMeasurement::endPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___endPoint_6;
	// UnityEngine.UI.Text Valve.VR.InteractionSystem.Sample.TargetMeasurement::measurementTextM
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___measurementTextM_7;
	// UnityEngine.UI.Text Valve.VR.InteractionSystem.Sample.TargetMeasurement::measurementTextFT
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___measurementTextFT_8;
	// System.Single Valve.VR.InteractionSystem.Sample.TargetMeasurement::maxDistanceToDraw
	float ___maxDistanceToDraw_9;
	// System.Boolean Valve.VR.InteractionSystem.Sample.TargetMeasurement::drawTape
	bool ___drawTape_10;
	// System.Single Valve.VR.InteractionSystem.Sample.TargetMeasurement::lastDistance
	float ___lastDistance_11;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Valve.VR.InteractionSystem.UIElement
struct UIElement_tBA550E30EDB87A066404FDDE90CBF4A8C75357A7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Valve.VR.InteractionSystem.CustomEvents/UnityEventHand Valve.VR.InteractionSystem.UIElement::onHandClick
	UnityEventHand_t8EA3E0DC223F9C8F1700EF4CC213B4171D202B7A* ___onHandClick_4;
	// Valve.VR.InteractionSystem.Hand Valve.VR.InteractionSystem.UIElement::currentHand
	Hand_t254CD354808F36131662C3A54DF11F903A59282D* ___currentHand_5;
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

// Valve.VR.InteractionSystem.Sample.RenderModelChangerUI
struct RenderModelChangerUI_t4AD09914CD0652921E3A4DCAC6EB1EC2A1CC2920  : public UIElement_tBA550E30EDB87A066404FDDE90CBF4A8C75357A7
{
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Sample.RenderModelChangerUI::leftPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftPrefab_6;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Sample.RenderModelChangerUI::rightPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightPrefab_7;
	// Valve.VR.InteractionSystem.Sample.SkeletonUIOptions Valve.VR.InteractionSystem.Sample.RenderModelChangerUI::ui
	SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* ___ui_8;
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

// Valve.VR.SteamVR_Action
struct SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4_StaticFields
{
	// System.Boolean Valve.VR.SteamVR_Action::startUpdatingSourceOnAccess
	bool ___startUpdatingSourceOnAccess_2;
};

// Valve.VR.SteamVR_Action

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2

// Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// Valve.VR.Extras.GazeEventArgs

// Valve.VR.Extras.GazeEventArgs

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Valve.VR.Extras.PointerEventArgs

// Valve.VR.Extras.PointerEventArgs

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// Valve.VR.VRTextureBounds_t

// Valve.VR.VRTextureBounds_t

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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t52F13E30DB5B0B05A2B4EBD1CC3040D5DE847DA1_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192 <PrivateImplementationDetails>::4D176D5085A581646D1B76B3693E274445A643CA4A485B534ED0F35C799DC0B0
	__StaticArrayInitTypeSizeU3D192_t0846939923D41AF08F45FC53184B651D6CEEEEC1 ___4D176D5085A581646D1B76B3693E274445A643CA4A485B534ED0F35C799DC0B0_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::F4600CC93137BF93FD8EAEFF529A3AF5BC78FC53C9EAE7562C085D6D51819DA0
	__StaticArrayInitTypeSizeU3D96_t49CA90336DC27E237FAEAD23DB38650C2591D9D7 ___F4600CC93137BF93FD8EAEFF529A3AF5BC78FC53C9EAE7562C085D6D51819DA0_1;
};

// <PrivateImplementationDetails>

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.ContactPoint

// UnityEngine.ContactPoint

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Plane

// UnityEngine.Plane

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// Valve.VR.SteamVR
struct SteamVR_t919261AC44F0F1E56D98B28BC2724315305BCCD2_StaticFields
{
	// System.Boolean Valve.VR.SteamVR::_enabled
	bool ____enabled_0;
	// Valve.VR.SteamVR Valve.VR.SteamVR::_instance
	SteamVR_t919261AC44F0F1E56D98B28BC2724315305BCCD2* ____instance_1;
	// Valve.VR.SteamVR/InitializedStates Valve.VR.SteamVR::initializedState
	int32_t ___initializedState_2;
	// Valve.VR.SteamVR_Settings Valve.VR.SteamVR::<settings>k__BackingField
	SteamVR_Settings_t7D6831601950586218FB18C7609D66092003A17B* ___U3CsettingsU3Ek__BackingField_3;
	// System.Boolean Valve.VR.SteamVR::<initializing>k__BackingField
	bool ___U3CinitializingU3Ek__BackingField_7;
	// System.Boolean Valve.VR.SteamVR::<calibrating>k__BackingField
	bool ___U3CcalibratingU3Ek__BackingField_8;
	// System.Boolean Valve.VR.SteamVR::<outOfRange>k__BackingField
	bool ___U3CoutOfRangeU3Ek__BackingField_9;
	// System.Boolean[] Valve.VR.SteamVR::connected
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___connected_10;
	// System.Boolean Valve.VR.SteamVR::runningTemporarySession
	bool ___runningTemporarySession_19;
};

// Valve.VR.SteamVR

// Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7

// Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7

// SteamVR_Utils/RigidTransform

// SteamVR_Utils/RigidTransform

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Mesh

// UnityEngine.Mesh

// UnityEngine.Shader

// UnityEngine.Shader

// Valve.VR.SteamVR_Action_Boolean

// Valve.VR.SteamVR_Action_Boolean

// Valve.VR.SteamVR_Action_Single

// Valve.VR.SteamVR_Action_Single

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// Valve.VR.Extras.GazeEventHandler

// Valve.VR.Extras.GazeEventHandler

// UnityEngine.Joint

// UnityEngine.Joint

// System.NotSupportedException

// System.NotSupportedException

// Valve.VR.Extras.PointerEventHandler

// Valve.VR.Extras.PointerEventHandler

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// Valve.VR.SteamVR_Action_Boolean/ChangeHandler

// Valve.VR.SteamVR_Action_Boolean/ChangeHandler

// Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture

// Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture

// UnityEngine.BoxCollider

// UnityEngine.BoxCollider

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

// UnityEngine.FixedJoint

// UnityEngine.FixedJoint

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SkinnedMeshRenderer

// UnityEngine.SkinnedMeshRenderer

// Valve.VR.InteractionSystem.Hand

// Valve.VR.InteractionSystem.Hand

// Valve.VR.InteractionSystem.Interactable
struct Interactable_tB21951E300B553092765F8A8CC3067BD11C76264_StaticFields
{
	// UnityEngine.Material Valve.VR.InteractionSystem.Interactable::highlightMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___highlightMat_25;
};

// Valve.VR.InteractionSystem.Interactable

// Valve.VR.InteractionSystem.Sample.Planting

// Valve.VR.InteractionSystem.Sample.Planting

// Valve.VR.InteractionSystem.Player
struct Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7_StaticFields
{
	// Valve.VR.InteractionSystem.Player Valve.VR.InteractionSystem.Player::_instance
	Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* ____instance_13;
};

// Valve.VR.InteractionSystem.Player

// Valve.VR.InteractionSystem.Sample.SkeletonUIOptions

// Valve.VR.InteractionSystem.Sample.SkeletonUIOptions

// Valve.VR.InteractionSystem.Sample.SquishyToy

// Valve.VR.InteractionSystem.Sample.SquishyToy

// Valve.VR.SteamVR_Behaviour_Pose

// Valve.VR.SteamVR_Behaviour_Pose

// Valve.VR.Extras.SteamVR_ForceSteamVRMode

// Valve.VR.Extras.SteamVR_ForceSteamVRMode

// Valve.VR.Extras.SteamVR_GazeTracker

// Valve.VR.Extras.SteamVR_GazeTracker

// Valve.VR.Extras.SteamVR_LaserPointer

// Valve.VR.Extras.SteamVR_LaserPointer

// Valve.VR.Extras.SteamVR_TestThrow

// Valve.VR.Extras.SteamVR_TestThrow

// Valve.VR.Extras.SteamVR_TestTrackedCamera

// Valve.VR.Extras.SteamVR_TestTrackedCamera

// Valve.VR.SteamVR_TrackedObject

// Valve.VR.SteamVR_TrackedObject

// Valve.VR.InteractionSystem.Sample.TargetHitEffect

// Valve.VR.InteractionSystem.Sample.TargetHitEffect

// Valve.VR.InteractionSystem.Sample.TargetMeasurement

// Valve.VR.InteractionSystem.Sample.TargetMeasurement

// Valve.VR.InteractionSystem.UIElement

// Valve.VR.InteractionSystem.UIElement

// Valve.VR.InteractionSystem.Sample.RenderModelChangerUI

// Valve.VR.InteractionSystem.Sample.RenderModelChangerUI

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
// Valve.VR.InteractionSystem.Hand[]
struct HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A  : public RuntimeArray
{
	ALIGN_FIELD (8) Hand_t254CD354808F36131662C3A54DF11F903A59282D* m_Items[1];

	inline Hand_t254CD354808F36131662C3A54DF11F903A59282D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Hand_t254CD354808F36131662C3A54DF11F903A59282D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Hand_t254CD354808F36131662C3A54DF11F903A59282D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Hand_t254CD354808F36131662C3A54DF11F903A59282D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Hand_t254CD354808F36131662C3A54DF11F903A59282D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Hand_t254CD354808F36131662C3A54DF11F903A59282D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 m_Items[1];

	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Valve.VR.SteamVR_TrackedObject[]
struct SteamVR_TrackedObjectU5BU5D_tCC0C4EAA425B3D55541562E449C71292320325D6  : public RuntimeArray
{
	ALIGN_FIELD (8) SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3* m_Items[1];

	inline SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T Valve.VR.SteamVR_Input::GetAction<System.Object>(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SteamVR_Input_GetAction_TisRuntimeObject_m5E5FAFD3B145B39001393FD34867D6E373F61F12_gshared (String_t* ___0_actionName, bool ___1_caseSensitive, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Valve.VR.InteractionSystem.Hand>()
inline Hand_t254CD354808F36131662C3A54DF11F903A59282D* Component_GetComponent_TisHand_t254CD354808F36131662C3A54DF11F903A59282D_mC7B984D5E7CB67FDAE3E3B99C3C0041EA01756A9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Hand_t254CD354808F36131662C3A54DF11F903A59282D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Valve.VR.SteamVR_Action::op_Equality(Valve.VR.SteamVR_Action,Valve.VR.SteamVR_Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_op_Equality_mBA7790F105DD361F9103366D99DF8ABFFD35DD6F (SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4* ___0_action1, SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4* ___1_action2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void Valve.VR.SteamVR_Action_Boolean/ChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeHandler__ctor_m6050CC4FC9178302DC98AD2072C50ED6D8AD5E10 (ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Valve.VR.SteamVR_Action_Boolean::AddOnChangeListener(Valve.VR.SteamVR_Action_Boolean/ChangeHandler,Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Boolean_AddOnChangeListener_mF05643B59289C4AA26CBCE1F9D5AAAAE67B87ED5 (SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* __this, ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C* ___0_functionToCall, int32_t ___1_inputSource, const RuntimeMethod* method) ;
// System.Boolean Valve.VR.SteamVR_Action::op_Inequality(Valve.VR.SteamVR_Action,Valve.VR.SteamVR_Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_op_Inequality_m4631A7694F70536B27D4A84D5F34040ADF6A1B35 (SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4* ___0_action1, SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4* ___1_action2, const RuntimeMethod* method) ;
// System.Void Valve.VR.SteamVR_Action_Boolean::RemoveOnChangeListener(Valve.VR.SteamVR_Action_Boolean/ChangeHandler,Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Action_Boolean_RemoveOnChangeListener_mDF3BB3763511FDB1F02E67857463F1918779C59F (SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* __this, ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C* ___0_functionToStopCalling, int32_t ___1_inputSource, const RuntimeMethod* method) ;
// System.Void Valve.VR.InteractionSystem.Sample.Planting::Plant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planting_Plant_mD751C50BE568DC477C3008E266E8E1383B8CF355 (Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Valve.VR.InteractionSystem.Sample.Planting::DoPlant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Planting_DoPlant_m4528E5FFD8B1D301603DE2F0B51604C43EA7E0D4 (Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlantU3Ed__7__ctor_mBDB1747C2532B341C571C165FCA8CCBCF1B35E09 (U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m1B27F500505FFB57D78548B9F5A540A2AD092903 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// Valve.VR.InteractionSystem.Player Valve.VR.InteractionSystem.Player::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228 (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Random::ColorHSV(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Random_ColorHSV_m60D106CD16CB419F712015C81A8AF4EDE65A55D1 (float ___0_hueMin, float ___1_hueMax, float ___2_saturationMin, float ___3_saturationMax, float ___4_valueMin, float ___5_valueMax, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Valve.VR.InteractionSystem.UIElement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElement_Awake_m8848402FF36DDFDF165B295DEEDFBFBAAD73BC1F (UIElement_tBA550E30EDB87A066404FDDE90CBF4A8C75357A7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Valve.VR.InteractionSystem.Sample.SkeletonUIOptions>()
inline SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* Component_GetComponentInParent_TisSkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801_mA8BE8B267DA19BFCBE6B06386DA93C3A684559B4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void Valve.VR.InteractionSystem.UIElement::OnButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElement_OnButtonClick_m0FCC99E14F83A020F5CC0B23A4074E20857B589E (UIElement_tBA550E30EDB87A066404FDDE90CBF4A8C75357A7* __this, const RuntimeMethod* method) ;
// System.Void Valve.VR.InteractionSystem.Sample.SkeletonUIOptions::SetRenderModel(Valve.VR.InteractionSystem.Sample.RenderModelChangerUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUIOptions_SetRenderModel_m795C34BB2081751BA83491EEB50C085174027C1C (SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* __this, RenderModelChangerUI_t4AD09914CD0652921E3A4DCAC6EB1EC2A1CC2920* ___0_prefabs, const RuntimeMethod* method) ;
// System.Void Valve.VR.InteractionSystem.UIElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIElement__ctor_mC93FF9B150B2D5AC045C92C38525BED3C2A54726 (UIElement_tBA550E30EDB87A066404FDDE90CBF4A8C75357A7* __this, const RuntimeMethod* method) ;
// System.Void Valve.VR.InteractionSystem.Hand::SetSkeletonRangeOfMotion(Valve.VR.EVRSkeletalMotionRange,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_SetSkeletonRangeOfMotion_mCCF3BA7EA9686D3F0BD36897C7D24C0B42739121 (Hand_t254CD354808F36131662C3A54DF11F903A59282D* __this, int32_t ___0_newRangeOfMotion, float ___1_blendOverSeconds, const RuntimeMethod* method) ;
// System.Void Valve.VR.InteractionSystem.Hand::ShowController(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_ShowController_m6D7DEB9B7CFC9D924C91937535B5AAF5A69D66B7 (Hand_t254CD354808F36131662C3A54DF11F903A59282D* __this, bool ___0_permanent, const RuntimeMethod* method) ;
// System.Void Valve.VR.InteractionSystem.Hand::SetRenderModel(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_SetRenderModel_m2871E8FE10DDCF54BFFBC0E100B957082A55CFEA (Hand_t254CD354808F36131662C3A54DF11F903A59282D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_prefab, const RuntimeMethod* method) ;
// System.Void Valve.VR.InteractionSystem.Hand::HideController(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_HideController_mF9887B3403BBDD8F2308121993AEE5865A206854 (Hand_t254CD354808F36131662C3A54DF11F903A59282D* __this, bool ___0_permanent, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.ContactPoint::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Texture2D_GetPixelBilinear_m6AE4AF4FD181C478DF0F2C5C329F22A263ABFF5C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, float ___0_u, float ___1_v, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m71FD4F0B3360ABE32B729DDC9D375DEF3BD026BE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_dir, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_duration, bool ___4_depthTest, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75 (double* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Valve.VR.InteractionSystem.Interactable>()
inline Interactable_tB21951E300B553092765F8A8CC3067BD11C76264* Component_GetComponent_TisInteractable_tB21951E300B553092765F8A8CC3067BD11C76264_m0F42142F0076BDEF6FEFE82D4ED3DC809479AD59 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Interactable_tB21951E300B553092765F8A8CC3067BD11C76264* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Single Valve.VR.SteamVR_Action_Single::GetAxis(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SteamVR_Action_Single_GetAxis_m6A2EBE710F696FAF1D1AB4BCAA0E713910EA34F4 (SteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05* __this, int32_t ___0_inputSource, const RuntimeMethod* method) ;
// System.Single UnityEngine.SkinnedMeshRenderer::GetBlendShapeWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SkinnedMeshRenderer_GetBlendShapeWeight_m8659C3960388D9B0EF2514CB0E0D9BD4B87E9A08 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::SetBlendShapeWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_blendShapeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_blendShapeCount_mB91EABCC5DFB3B91C4C0047851BC13FB92727408 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// T Valve.VR.SteamVR_Input::GetAction<Valve.VR.SteamVR_Action_Single>(System.String,System.Boolean)
inline SteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05* SteamVR_Input_GetAction_TisSteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05_mB48648C66C6EBD1FB286798E3A4D220DF1F6FC1F (String_t* ___0_actionName, bool ___1_caseSensitive, const RuntimeMethod* method)
{
	return ((  SteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05* (*) (String_t*, bool, const RuntimeMethod*))SteamVR_Input_GetAction_TisRuntimeObject_m5E5FAFD3B145B39001393FD34867D6E373F61F12_gshared)(___0_actionName, ___1_caseSensitive, method);
}
// System.Void Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m281117DDB5514682C985EB5C935C486021016021 (U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void Valve.VR.SteamVR::Initialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_Initialize_mB5F6406A723A0F78CEBFAE6BC08E75B6EA55D189 (bool ___0_forceUnityVRMode, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void Valve.VR.Extras.GazeEventHandler::Invoke(System.Object,Valve.VR.Extras.GazeEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_inline (GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<Valve.VR.SteamVR_TrackedObject>()
inline SteamVR_TrackedObjectU5BU5D_tCC0C4EAA425B3D55541562E449C71292320325D6* Object_FindObjectsOfType_TisSteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3_m688A45F5B6825F960F27CABE98B8C73B80F03D63 (const RuntimeMethod* method)
{
	return ((  SteamVR_TrackedObjectU5BU5D_tCC0C4EAA425B3D55541562E449C71292320325D6* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_inNormal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_inPoint, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, float* ___1_enter, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Valve.VR.SteamVR_Behaviour_Pose>()
inline SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* Component_GetComponent_TisSteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121_mBA8014D71A7DE73CFD409D14A677E152A2CEF5F7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B (int32_t ___0_type, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Void Valve.VR.Extras.PointerEventHandler::Invoke(System.Object,Valve.VR.Extras.PointerEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_inline (PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean Valve.VR.SteamVR_Action_Boolean::GetStateUp(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Boolean_GetStateUp_mFD84CD2C7AEE34CDF90649E6597D1E906F22F89C (SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* __this, int32_t ___0_inputSource, const RuntimeMethod* method) ;
// System.Boolean Valve.VR.SteamVR_Action_Boolean::GetState(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Boolean_GetState_m09301D3981D25AB4A853AD9192FD91DD15D27383 (SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* __this, int32_t ___0_inputSource, const RuntimeMethod* method) ;
// Valve.VR.SteamVR_Action_Boolean Valve.VR.SteamVR_Input::GetBooleanAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* SteamVR_Input_GetBooleanAction_mED6BF7916C7A157AB7EEDA127B791F9ED1BA9542 (String_t* ___0_actionName, bool ___1_caseSensitive, const RuntimeMethod* method) ;
// System.Boolean Valve.VR.SteamVR_Action_Boolean::GetStateDown(Valve.VR.SteamVR_Input_Sources)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SteamVR_Action_Boolean_GetStateDown_m16A290166787BD59ADD7AC9EA59153792477554A (SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* __this, int32_t ___0_inputSource, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.FixedJoint>()
inline FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint_set_connectedBody_mE9E631476E9D4264E8DC0D6307146F5EB64D3ED4 (Joint_tB2C5499F976EBB1EA1C11A80E1BD9F5E2EE4D682* __this, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Valve.VR.SteamVR_Behaviour_Pose::GetVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SteamVR_Behaviour_Pose_GetVelocity_mE11C36347925354155DCB58FA62381F2BCC562EA (SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Valve.VR.SteamVR_Behaviour_Pose::GetAngularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SteamVR_Behaviour_Pose_GetAngularVelocity_mE9FEBECBC6DE7A34B975793D3D2F4D2E4B252E51 (SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_angularVelocity_m4EACCFCF15CA441CCD53B24322C2E7B8EEBDF6A8 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___0_value, const RuntimeMethod* method) ;
// T Valve.VR.SteamVR_Input::GetAction<Valve.VR.SteamVR_Action_Boolean>(System.String,System.Boolean)
inline SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* SteamVR_Input_GetAction_TisSteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085_mE276A18B0628C50B582D24E3D0F6F2DC3CC13C15 (String_t* ___0_actionName, bool ___1_caseSensitive, const RuntimeMethod* method)
{
	return ((  SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* (*) (String_t*, bool, const RuntimeMethod*))SteamVR_Input_GetAction_TisRuntimeObject_m5E5FAFD3B145B39001393FD34867D6E373F61F12_gshared)(___0_actionName, ___1_caseSensitive, method);
}
// Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture Valve.VR.SteamVR_TrackedCamera::Source(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* SteamVR_TrackedCamera_Source_mC5F07B345CA4D97899EE1C9863C3FF2522B2475A (bool ___0_undistorted, int32_t ___1_deviceIndex, const RuntimeMethod* method) ;
// System.UInt64 Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::Acquire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoStreamTexture_Acquire_m3425090014E51A565185271E9AFC1D04FBF02BB7 (VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* __this, const RuntimeMethod* method) ;
// System.Boolean Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::get_hasCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoStreamTexture_get_hasCamera_mB2FE27351C936EBFEBA4EE5FBE262CAD869773CD (VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.UInt64 Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoStreamTexture_Release_m87C40A64A6B313817EB3C076809C1ACC1B0EC62B (VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* VideoStreamTexture_get_texture_m8F7F04439C6D9D1896A5F1779A2D32496194B8E0 (VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* __this, const RuntimeMethod* method) ;
// Valve.VR.VRTextureBounds_t Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::get_frameBounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 VideoStreamTexture_get_frameBounds_m7990BA1FA13DF90DC41C41EFA889CB697C64925B_inline (VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Boolean Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::get_hasTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoStreamTexture_get_hasTracking_m35FD8B51C40760E1816736D3D9775F4A8036A52A (VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* __this, const RuntimeMethod* method) ;
// SteamVR_Utils/RigidTransform Valve.VR.SteamVR_TrackedCamera/VideoStreamTexture::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RigidTransform_t53A42D7BF59C622BCCC3E647DD9088310D3A48CF VideoStreamTexture_get_transform_mE527BA8CC0AE6E92C179BB1C331F1C9D68ADFDC0 (VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.InteractionSystem.Sample.Planting::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planting_OnEnable_mAED0467891F0DB69207CB764A876E562BE60A8AB (Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHand_t254CD354808F36131662C3A54DF11F903A59282D_mC7B984D5E7CB67FDAE3E3B99C3C0041EA01756A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Planting_OnPlantActionChange_m0EFE74FDEDF0B316B742BB7ABDC8FC321D95FB8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49CC2091209FDC9EAD517916CDA545F17F979D7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hand == null)
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_0 = __this->___hand_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// hand = this.GetComponent<Hand>();
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_2;
		L_2 = Component_GetComponent_TisHand_t254CD354808F36131662C3A54DF11F903A59282D_mC7B984D5E7CB67FDAE3E3B99C3C0041EA01756A9(__this, Component_GetComponent_TisHand_t254CD354808F36131662C3A54DF11F903A59282D_mC7B984D5E7CB67FDAE3E3B99C3C0041EA01756A9_RuntimeMethod_var);
		__this->___hand_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hand_5), (void*)L_2);
	}

IL_001a:
	{
		// if (plantAction == null)
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_3 = __this->___plantAction_4;
		il2cpp_codegen_runtime_class_init_inline(SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SteamVR_Action_op_Equality_mBA7790F105DD361F9103366D99DF8ABFFD35DD6F(L_3, (SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogError("<b>[SteamVR Interaction]</b> No plant action assigned", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral49CC2091209FDC9EAD517916CDA545F17F979D7F, __this, NULL);
		// return;
		return;
	}

IL_0034:
	{
		// plantAction.AddOnChangeListener(OnPlantActionChange, hand.handType);
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_5 = __this->___plantAction_4;
		ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C* L_6 = (ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C*)il2cpp_codegen_object_new(ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ChangeHandler__ctor_m6050CC4FC9178302DC98AD2072C50ED6D8AD5E10(L_6, __this, (intptr_t)((void*)Planting_OnPlantActionChange_m0EFE74FDEDF0B316B742BB7ABDC8FC321D95FB8B_RuntimeMethod_var), NULL);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_7 = __this->___hand_5;
		NullCheck(L_7);
		int32_t L_8 = L_7->___handType_6;
		NullCheck(L_5);
		SteamVR_Action_Boolean_AddOnChangeListener_mF05643B59289C4AA26CBCE1F9D5AAAAE67B87ED5(L_5, L_6, L_8, NULL);
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.Planting::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planting_OnDisable_mB0CA0F173FEEE16ABD8523C5B6113FF9A8B1AD19 (Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Planting_OnPlantActionChange_m0EFE74FDEDF0B316B742BB7ABDC8FC321D95FB8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (plantAction != null)
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_0 = __this->___plantAction_4;
		il2cpp_codegen_runtime_class_init_inline(SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SteamVR_Action_op_Inequality_m4631A7694F70536B27D4A84D5F34040ADF6A1B35(L_0, (SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// plantAction.RemoveOnChangeListener(OnPlantActionChange, hand.handType);
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_2 = __this->___plantAction_4;
		ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C* L_3 = (ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C*)il2cpp_codegen_object_new(ChangeHandler_tDD902E5E574B491BF7014374BACA725FC769900C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ChangeHandler__ctor_m6050CC4FC9178302DC98AD2072C50ED6D8AD5E10(L_3, __this, (intptr_t)((void*)Planting_OnPlantActionChange_m0EFE74FDEDF0B316B742BB7ABDC8FC321D95FB8B_RuntimeMethod_var), NULL);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_4 = __this->___hand_5;
		NullCheck(L_4);
		int32_t L_5 = L_4->___handType_6;
		NullCheck(L_2);
		SteamVR_Action_Boolean_RemoveOnChangeListener_mDF3BB3763511FDB1F02E67857463F1918779C59F(L_2, L_3, L_5, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.Planting::OnPlantActionChange(Valve.VR.SteamVR_Action_Boolean,Valve.VR.SteamVR_Input_Sources,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planting_OnPlantActionChange_m0EFE74FDEDF0B316B742BB7ABDC8FC321D95FB8B (Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* __this, SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* ___0_actionIn, int32_t ___1_inputSource, bool ___2_newValue, const RuntimeMethod* method) 
{
	{
		// if (newValue)
		bool L_0 = ___2_newValue;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// Plant();
		Planting_Plant_mD751C50BE568DC477C3008E266E8E1383B8CF355(__this, NULL);
	}

IL_0009:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.Planting::Plant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planting_Plant_mD751C50BE568DC477C3008E266E8E1383B8CF355 (Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(DoPlant());
		RuntimeObject* L_0;
		L_0 = Planting_DoPlant_m4528E5FFD8B1D301603DE2F0B51604C43EA7E0D4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Valve.VR.InteractionSystem.Sample.Planting::DoPlant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Planting_DoPlant_m4528E5FFD8B1D301603DE2F0B51604C43EA7E0D4 (Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED* L_0 = (U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED*)il2cpp_codegen_object_new(U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDoPlantU3Ed__7__ctor_mBDB1747C2532B341C571C165FCA8CCBCF1B35E09(L_0, 0, NULL);
		U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.Planting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planting__ctor_m12ED660E434DC68EE23D21DB0413C9B020CD0E5F (Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* __this, const RuntimeMethod* method) 
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
// System.Void Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlantU3Ed__7__ctor_mBDB1747C2532B341C571C165FCA8CCBCF1B35E09 (U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlantU3Ed__7_System_IDisposable_Dispose_m7E541E5A1CAB84A2C6254FF79385E1838776CE4A (U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoPlantU3Ed__7_MoveNext_m893E4FB4447FC72CEF994720911522D324AB3873 (U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_01e2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bool hit = Physics.Raycast(hand.transform.position, Vector3.down, out hitInfo);
		Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* L_4 = V_1;
		NullCheck(L_4);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_5 = L_4->___hand_5;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		bool L_9;
		L_9 = Physics_Raycast_m1B27F500505FFB57D78548B9F5A540A2AD092903(L_7, L_8, (&V_3), NULL);
		// if (hit)
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// plantPosition = hitInfo.point + (Vector3.up * 0.05f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, (0.0500000007f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_12, NULL);
		V_2 = L_13;
		goto IL_0089;
	}

IL_005d:
	{
		// plantPosition = hand.transform.position;
		Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* L_14 = V_1;
		NullCheck(L_14);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_15 = L_14->___hand_5;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		V_2 = L_17;
		// plantPosition.y = Player.instance.transform.position.y;
		Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* L_18;
		L_18 = Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228(NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___y_3;
		(&V_2)->___y_3 = L_21;
	}

IL_0089:
	{
		// GameObject planting = GameObject.Instantiate<GameObject>(prefabToPlant);
		Planting_tEFAF40A50D974B2AB2AF786F25442A9F7BAA5E64* L_22 = V_1;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22->___prefabToPlant_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___U3CplantingU3E5__2_3 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplantingU3E5__2_3), (void*)L_24);
		// planting.transform.position = plantPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___U3CplantingU3E5__2_3;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_27, NULL);
		// planting.transform.rotation = Quaternion.Euler(0, Random.value * 360f, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___U3CplantingU3E5__2_3;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		float L_30;
		L_30 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), ((float)il2cpp_codegen_multiply(L_30, (360.0f))), (0.0f), NULL);
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_31, NULL);
		// planting.GetComponentInChildren<MeshRenderer>().material.SetColor("_TintColor", Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___U3CplantingU3E5__2_3;
		NullCheck(L_32);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_33;
		L_33 = GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750(L_32, GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var);
		NullCheck(L_33);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34;
		L_34 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_33, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = Random_ColorHSV_m60D106CD16CB419F712015C81A8AF4EDE65A55D1((0.0f), (1.0f), (1.0f), (1.0f), (0.5f), (1.0f), NULL);
		NullCheck(L_34);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_34, _stringLiteral01AC0365CB17BCE0478BFCD5E4FE89032C19B0E7, L_35, NULL);
		// Rigidbody rigidbody = planting.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___U3CplantingU3E5__2_3;
		NullCheck(L_36);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_37;
		L_37 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_36, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___U3CrigidbodyU3E5__3_4 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrigidbodyU3E5__3_4), (void*)L_37);
		// if (rigidbody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_38 = __this->___U3CrigidbodyU3E5__3_4;
		bool L_39;
		L_39 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_38, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_39)
		{
			goto IL_013d;
		}
	}
	{
		// rigidbody.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_40 = __this->___U3CrigidbodyU3E5__3_4;
		NullCheck(L_40);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_40, (bool)1, NULL);
	}

IL_013d:
	{
		// Vector3 initialScale = Vector3.one * 0.01f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_41, (0.00999999978f), NULL);
		__this->___U3CinitialScaleU3E5__4_5 = L_42;
		// Vector3 targetScale = Vector3.one * (1 + (Random.value * 0.25f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_44;
		L_44 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(L_44, (0.25f))))), NULL);
		__this->___U3CtargetScaleU3E5__5_6 = L_45;
		// float startTime = Time.time;
		float L_46;
		L_46 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___U3CstartTimeU3E5__6_7 = L_46;
		// float overTime = 0.5f;
		__this->___U3CoverTimeU3E5__7_8 = (0.5f);
		// float endTime = startTime + overTime;
		float L_47 = __this->___U3CstartTimeU3E5__6_7;
		float L_48 = __this->___U3CoverTimeU3E5__7_8;
		__this->___U3CendTimeU3E5__8_9 = ((float)il2cpp_codegen_add(L_47, L_48));
		goto IL_01e9;
	}

IL_019e:
	{
		// planting.transform.localScale = Vector3.Slerp(initialScale, targetScale, (Time.time - startTime) / overTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___U3CplantingU3E5__2_3;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = __this->___U3CinitialScaleU3E5__4_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = __this->___U3CtargetScaleU3E5__5_6;
		float L_53;
		L_53 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_54 = __this->___U3CstartTimeU3E5__6_7;
		float L_55 = __this->___U3CoverTimeU3E5__7_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_51, L_52, ((float)(((float)il2cpp_codegen_subtract(L_53, L_54))/L_55)), NULL);
		NullCheck(L_50);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_50, L_56, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_01e2:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01e9:
	{
		// while (Time.time < endTime)
		float L_57;
		L_57 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_58 = __this->___U3CendTimeU3E5__8_9;
		if ((((float)L_57) < ((float)L_58)))
		{
			goto IL_019e;
		}
	}
	{
		// if (rigidbody != null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_59 = __this->___U3CrigidbodyU3E5__3_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_60;
		L_60 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_59, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_60)
		{
			goto IL_0210;
		}
	}
	{
		// rigidbody.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_61 = __this->___U3CrigidbodyU3E5__3_4;
		NullCheck(L_61);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_61, (bool)0, NULL);
	}

IL_0210:
	{
		// }
		return (bool)0;
	}
}
// System.Object Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoPlantU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA433895098F1F5181BC1899AA0E37D8A1ABCB25B (U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoPlantU3Ed__7_System_Collections_IEnumerator_Reset_m5081C08A18E8951C520672B58EA686FE9C12CC9B (U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoPlantU3Ed__7_System_Collections_IEnumerator_Reset_m5081C08A18E8951C520672B58EA686FE9C12CC9B_RuntimeMethod_var)));
	}
}
// System.Object Valve.VR.InteractionSystem.Sample.Planting/<DoPlant>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoPlantU3Ed__7_System_Collections_IEnumerator_get_Current_m7DE2298BA1F25A852D898F2C13AB925CD85F4E08 (U3CDoPlantU3Ed__7_tF2244B0FD544A7A97D1EAA76DC112AA98029EEED* __this, const RuntimeMethod* method) 
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
// System.Void Valve.VR.InteractionSystem.Sample.RenderModelChangerUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderModelChangerUI_Awake_m59CDB3CD87E29A2E119D7A773683DDD8E5F4B4D3 (RenderModelChangerUI_t4AD09914CD0652921E3A4DCAC6EB1EC2A1CC2920* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisSkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801_mA8BE8B267DA19BFCBE6B06386DA93C3A684559B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		UIElement_Awake_m8848402FF36DDFDF165B295DEEDFBFBAAD73BC1F(__this, NULL);
		// ui = this.GetComponentInParent<SkeletonUIOptions>();
		SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* L_0;
		L_0 = Component_GetComponentInParent_TisSkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801_mA8BE8B267DA19BFCBE6B06386DA93C3A684559B4(__this, Component_GetComponentInParent_TisSkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801_mA8BE8B267DA19BFCBE6B06386DA93C3A684559B4_RuntimeMethod_var);
		__this->___ui_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ui_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.RenderModelChangerUI::OnButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderModelChangerUI_OnButtonClick_m808415B217E1553768DFE991B06481ECFAB994EF (RenderModelChangerUI_t4AD09914CD0652921E3A4DCAC6EB1EC2A1CC2920* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnButtonClick();
		UIElement_OnButtonClick_m0FCC99E14F83A020F5CC0B23A4074E20857B589E(__this, NULL);
		// if (ui != null)
		SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* L_0 = __this->___ui_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// ui.SetRenderModel(this);
		SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* L_2 = __this->___ui_8;
		NullCheck(L_2);
		SkeletonUIOptions_SetRenderModel_m795C34BB2081751BA83491EEB50C085174027C1C(L_2, __this, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.RenderModelChangerUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderModelChangerUI__ctor_mB3BFF6519B689AB6A933A8E0D7F77DCFEDDBE219 (RenderModelChangerUI_t4AD09914CD0652921E3A4DCAC6EB1EC2A1CC2920* __this, const RuntimeMethod* method) 
{
	{
		UIElement__ctor_mC93FF9B150B2D5AC045C92C38525BED3C2A54726(__this, NULL);
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
// System.Void Valve.VR.InteractionSystem.Sample.SkeletonUIOptions::AnimateHandWithController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUIOptions_AnimateHandWithController_m7AC813D24771B7D1FC2E52D690E23C47B0EEDD5B (SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hand_t254CD354808F36131662C3A54DF11F903A59282D* V_1 = NULL;
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// Hand hand = Player.instance.hands[handIndex];
		Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* L_0;
		L_0 = Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228(NULL);
		NullCheck(L_0);
		HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A* L_1 = L_0->___hands_6;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// if (hand != null)
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		// hand.SetSkeletonRangeOfMotion(Valve.VR.EVRSkeletalMotionRange.WithController);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_7 = V_1;
		NullCheck(L_7);
		Hand_SetSkeletonRangeOfMotion_mCCF3BA7EA9686D3F0BD36897C7D24C0B42739121(L_7, 0, (0.100000001f), NULL);
	}

IL_0026:
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002a:
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		int32_t L_9 = V_0;
		Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* L_10;
		L_10 = Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228(NULL);
		NullCheck(L_10);
		HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A* L_11 = L_10->___hands_6;
		NullCheck(L_11);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.SkeletonUIOptions::AnimateHandWithoutController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUIOptions_AnimateHandWithoutController_m96BFB8D3551BCF808FA1CF7838E5C88B9DB4CE7D (SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hand_t254CD354808F36131662C3A54DF11F903A59282D* V_1 = NULL;
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// Hand hand = Player.instance.hands[handIndex];
		Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* L_0;
		L_0 = Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228(NULL);
		NullCheck(L_0);
		HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A* L_1 = L_0->___hands_6;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// if (hand != null)
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		// hand.SetSkeletonRangeOfMotion(Valve.VR.EVRSkeletalMotionRange.WithoutController);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_7 = V_1;
		NullCheck(L_7);
		Hand_SetSkeletonRangeOfMotion_mCCF3BA7EA9686D3F0BD36897C7D24C0B42739121(L_7, 1, (0.100000001f), NULL);
	}

IL_0026:
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002a:
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		int32_t L_9 = V_0;
		Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* L_10;
		L_10 = Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228(NULL);
		NullCheck(L_10);
		HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A* L_11 = L_10->___hands_6;
		NullCheck(L_11);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.SkeletonUIOptions::ShowController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUIOptions_ShowController_m3A2BC64F65D845AE629539C497E85F49A706A26C (SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hand_t254CD354808F36131662C3A54DF11F903A59282D* V_1 = NULL;
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// Hand hand = Player.instance.hands[handIndex];
		Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* L_0;
		L_0 = Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228(NULL);
		NullCheck(L_0);
		HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A* L_1 = L_0->___hands_6;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// if (hand != null)
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		// hand.ShowController(true);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_7 = V_1;
		NullCheck(L_7);
		Hand_ShowController_m6D7DEB9B7CFC9D924C91937535B5AAF5A69D66B7(L_7, (bool)1, NULL);
	}

IL_0021:
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		int32_t L_9 = V_0;
		Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* L_10;
		L_10 = Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228(NULL);
		NullCheck(L_10);
		HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A* L_11 = L_10->___hands_6;
		NullCheck(L_11);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.SkeletonUIOptions::SetRenderModel(Valve.VR.InteractionSystem.Sample.RenderModelChangerUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUIOptions_SetRenderModel_m795C34BB2081751BA83491EEB50C085174027C1C (SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* __this, RenderModelChangerUI_t4AD09914CD0652921E3A4DCAC6EB1EC2A1CC2920* ___0_prefabs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hand_t254CD354808F36131662C3A54DF11F903A59282D* V_1 = NULL;
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		V_0 = 0;
		goto IL_0048;
	}

IL_0004:
	{
		// Hand hand = Player.instance.hands[handIndex];
		Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* L_0;
		L_0 = Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228(NULL);
		NullCheck(L_0);
		HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A* L_1 = L_0->___hands_6;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// if (hand != null)
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// if (hand.handType == SteamVR_Input_Sources.RightHand)
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___handType_6;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_002f;
		}
	}
	{
		// hand.SetRenderModel(prefabs.rightPrefab);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_9 = V_1;
		RenderModelChangerUI_t4AD09914CD0652921E3A4DCAC6EB1EC2A1CC2920* L_10 = ___0_prefabs;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___rightPrefab_7;
		NullCheck(L_9);
		Hand_SetRenderModel_m2871E8FE10DDCF54BFFBC0E100B957082A55CFEA(L_9, L_11, NULL);
	}

IL_002f:
	{
		// if (hand.handType == SteamVR_Input_Sources.LeftHand)
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___handType_6;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0044;
		}
	}
	{
		// hand.SetRenderModel(prefabs.leftPrefab);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_14 = V_1;
		RenderModelChangerUI_t4AD09914CD0652921E3A4DCAC6EB1EC2A1CC2920* L_15 = ___0_prefabs;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___leftPrefab_6;
		NullCheck(L_14);
		Hand_SetRenderModel_m2871E8FE10DDCF54BFFBC0E100B957082A55CFEA(L_14, L_16, NULL);
	}

IL_0044:
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0048:
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		int32_t L_18 = V_0;
		Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* L_19;
		L_19 = Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228(NULL);
		NullCheck(L_19);
		HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A* L_20 = L_19->___hands_6;
		NullCheck(L_20);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.SkeletonUIOptions::HideController()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUIOptions_HideController_m3D19EBBF5664FD14A5504D743ED4048AA87DF94E (SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hand_t254CD354808F36131662C3A54DF11F903A59282D* V_1 = NULL;
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// Hand hand = Player.instance.hands[handIndex];
		Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* L_0;
		L_0 = Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228(NULL);
		NullCheck(L_0);
		HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A* L_1 = L_0->___hands_6;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// if (hand != null)
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		// hand.HideController(true);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_7 = V_1;
		NullCheck(L_7);
		Hand_HideController_mF9887B3403BBDD8F2308121993AEE5865A206854(L_7, (bool)1, NULL);
	}

IL_0021:
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		// for (int handIndex = 0; handIndex < Player.instance.hands.Length; handIndex++)
		int32_t L_9 = V_0;
		Player_t14F4A873C23E4657D07D1B5628DA59FBF01923B7* L_10;
		L_10 = Player_get_instance_mD7A3E5DE6F0E16A0B64F858112CAD873A8028228(NULL);
		NullCheck(L_10);
		HandU5BU5D_t7AC7E6A366A92B43F0E9501839C33FA9950ADA6A* L_11 = L_10->___hands_6;
		NullCheck(L_11);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.SkeletonUIOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeletonUIOptions__ctor_mE2D4ED51920A8BA5997F8C1FB70DC83C7328A704 (SkeletonUIOptions_tAC3A35BBC92DDEBDD0C7088C054B34667C8F7801* __this, const RuntimeMethod* method) 
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
// System.Void Valve.VR.InteractionSystem.Sample.TargetHitEffect::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHitEffect_OnCollisionEnter_m0E17002026F27DDDFFE369E8E4D8D4C3EAA8A5C2 (TargetHitEffect_t45934383FFA12C7195F420EAA603BDCEA4E489CE* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_5 = NULL;
	int32_t V_6 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_7 = NULL;
	{
		// if (collision.collider == targetCollider)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_0, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = __this->___targetCollider_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0229;
		}
	}
	{
		// ContactPoint contact = collision.contacts[0];
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___0_collision;
		NullCheck(L_4);
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_5;
		L_5 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6 = 0;
		ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		// float backTrackLength = 1f;
		V_2 = (1.0f);
		// Ray ray = new Ray(contact.point - (-contact.normal * backTrackLength), -contact.normal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_9, NULL);
		float L_11 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_8, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = ContactPoint_get_normal_mD7F0567CA2FD68644F7C6FE318E10C4D15F92AD6((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_14, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_3), L_13, L_15, NULL);
		// if (collision.collider.Raycast(ray, out hit, 2))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_16 = ___0_collision;
		NullCheck(L_16);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_17;
		L_17 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_16, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_18 = V_3;
		NullCheck(L_17);
		bool L_19;
		L_19 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_17, L_18, (&V_1), (2.0f), NULL);
		if (!L_19)
		{
			goto IL_01f8;
		}
	}
	{
		// if (colorSpawnedObject)
		bool L_20 = __this->___colorSpawnedObject_6;
		if (!L_20)
		{
			goto IL_01f8;
		}
	}
	{
		// Renderer renderer = collision.gameObject.GetComponent<Renderer>();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_21 = ___0_collision;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_21, NULL);
		NullCheck(L_22);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_23;
		L_23 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_22, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		// Texture2D tex = (Texture2D)renderer.material.mainTexture;
		NullCheck(L_23);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24;
		L_24 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_23, NULL);
		NullCheck(L_24);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_25;
		L_25 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_24, NULL);
		// Color color = tex.GetPixelBilinear(hit.textureCoord.x, hit.textureCoord.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D((&V_1), NULL);
		float L_27 = L_26.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D((&V_1), NULL);
		float L_29 = L_28.___y_1;
		NullCheck(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_25, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Texture2D_GetPixelBilinear_m6AE4AF4FD181C478DF0F2C5C329F22A263ABFF5C(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_25, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)), L_27, L_29, NULL);
		V_4 = L_30;
		// if (color.r > 0.7f && color.g > 0.7f && color.b < 0.7f)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_4;
		float L_32 = L_31.___r_0;
		if ((!(((float)L_32) > ((float)(0.699999988f)))))
		{
			goto IL_00e9;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = V_4;
		float L_34 = L_33.___g_1;
		if ((!(((float)L_34) > ((float)(0.699999988f)))))
		{
			goto IL_00e9;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_4;
		float L_36 = L_35.___b_2;
		if ((!(((float)L_36) < ((float)(0.699999988f)))))
		{
			goto IL_00e9;
		}
	}
	{
		// color = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		V_4 = L_37;
		goto IL_0166;
	}

IL_00e9:
	{
		// else if (Mathf.Max(color.r, color.g, color.b) == color.r)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = L_38;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40 = V_4;
		float L_41 = L_40.___r_0;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_41);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = L_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = V_4;
		float L_44 = L_43.___g_1;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_44);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = L_42;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46 = V_4;
		float L_47 = L_46.___b_2;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_47);
		float L_48;
		L_48 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_45, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49 = V_4;
		float L_50 = L_49.___r_0;
		if ((!(((float)L_48) == ((float)L_50))))
		{
			goto IL_0124;
		}
	}
	{
		// color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51;
		L_51 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		V_4 = L_51;
		goto IL_0166;
	}

IL_0124:
	{
		// else if (Mathf.Max(color.r, color.g, color.b) == color.g)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_52 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = L_52;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54 = V_4;
		float L_55 = L_54.___r_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_55);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_56 = L_53;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_57 = V_4;
		float L_58 = L_57.___g_1;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_58);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59 = L_56;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60 = V_4;
		float L_61 = L_60.___b_2;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_61);
		float L_62;
		L_62 = Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline(L_59, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63 = V_4;
		float L_64 = L_63.___g_1;
		if ((!(((float)L_62) == ((float)L_64))))
		{
			goto IL_015f;
		}
	}
	{
		// color = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_65;
		L_65 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		V_4 = L_65;
		goto IL_0166;
	}

IL_015f:
	{
		// color = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66;
		L_66 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		V_4 = L_66;
	}

IL_0166:
	{
		// color *= 15f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_68;
		L_68 = Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline(L_67, (15.0f), NULL);
		V_4 = L_68;
		// GameObject spawned = GameObject.Instantiate(spawnObjectOnCollision);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = __this->___spawnObjectOnCollision_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70;
		L_70 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_69, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// spawned.transform.position = contact.point;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = L_70;
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = ContactPoint_get_point_mCCDFDACC5D8DB469898060A56A3CC45132911208((&V_0), NULL);
		NullCheck(L_72);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_72, L_73, NULL);
		// spawned.transform.forward = ray.direction;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = L_71;
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_74, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_3), NULL);
		NullCheck(L_75);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_75, L_76, NULL);
		// Renderer[] spawnedRenderers = spawned.GetComponentsInChildren<Renderer>();
		NullCheck(L_74);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_77;
		L_77 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734(L_74, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		V_5 = L_77;
		// for (int rendererIndex = 0; rendererIndex < spawnedRenderers.Length; rendererIndex++)
		V_6 = 0;
		goto IL_01f0;
	}

IL_01af:
	{
		// Renderer spawnedRenderer = spawnedRenderers[rendererIndex];
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_78 = V_5;
		int32_t L_79 = V_6;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_7 = L_81;
		// spawnedRenderer.material.color = color;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_82 = V_7;
		NullCheck(L_82);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_83;
		L_83 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_82, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84 = V_4;
		NullCheck(L_83);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_83, L_84, NULL);
		// if (spawnedRenderer.material.HasProperty("_EmissionColor"))
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_85 = V_7;
		NullCheck(L_85);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_86;
		L_86 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_85, NULL);
		NullCheck(L_86);
		bool L_87;
		L_87 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_86, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, NULL);
		if (!L_87)
		{
			goto IL_01ea;
		}
	}
	{
		// spawnedRenderer.material.SetColor("_EmissionColor", color);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_88 = V_7;
		NullCheck(L_88);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_89;
		L_89 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_88, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_90 = V_4;
		NullCheck(L_89);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_89, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_90, NULL);
	}

IL_01ea:
	{
		// for (int rendererIndex = 0; rendererIndex < spawnedRenderers.Length; rendererIndex++)
		int32_t L_91 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_91, 1));
	}

IL_01f0:
	{
		// for (int rendererIndex = 0; rendererIndex < spawnedRenderers.Length; rendererIndex++)
		int32_t L_92 = V_6;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_93 = V_5;
		NullCheck(L_93);
		if ((((int32_t)L_92) < ((int32_t)((int32_t)(((RuntimeArray*)L_93)->max_length)))))
		{
			goto IL_01af;
		}
	}

IL_01f8:
	{
		// Debug.DrawRay(ray.origin, ray.direction, Color.cyan, 5, true);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_3), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_96;
		L_96 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m71FD4F0B3360ABE32B729DDC9D375DEF3BD026BE(L_94, L_95, L_96, (5.0f), (bool)1, NULL);
		// if (destroyOnTargetCollision)
		bool L_97 = __this->___destroyOnTargetCollision_7;
		if (!L_97)
		{
			goto IL_0229;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98;
		L_98 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_98, NULL);
	}

IL_0229:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.TargetHitEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetHitEffect__ctor_m8432BADD6C054C909729599EAB10ADEAE1F03D10 (TargetHitEffect_t45934383FFA12C7195F420EAA603BDCEA4E489CE* __this, const RuntimeMethod* method) 
{
	{
		// public bool colorSpawnedObject = true;
		__this->___colorSpawnedObject_6 = (bool)1;
		// public bool destroyOnTargetCollision = true;
		__this->___destroyOnTargetCollision_7 = (bool)1;
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
// System.Void Valve.VR.InteractionSystem.Sample.TargetMeasurement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetMeasurement_Update_m14524E36D7CC154874A9274D60E0B71F170D721C (TargetMeasurement_tE198FAD83587B0DDFE4057E937C9B9654DA49990* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD771670AE0EBEF69C95CAD941F6F05A7252A5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92AA61129D76DB10D47E27CA128DEA7B55875A58);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	double V_3 = 0.0;
	{
		// if (Camera.main != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0122;
		}
	}
	{
		// Vector3 fromPoint = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_0 = L_4;
		// fromPoint.y = endPoint.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___endPoint_6;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		(&V_0)->___y_3 = L_7;
		// float distance = Vector3.Distance(fromPoint, endPoint.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___endPoint_6;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_8, L_10, NULL);
		V_1 = L_11;
		// Vector3 center = Vector3.Lerp(fromPoint, endPoint.position, 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___endPoint_6;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_12, L_14, (0.5f), NULL);
		V_2 = L_15;
		// this.transform.position = center;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_17, NULL);
		// this.transform.forward = endPoint.position - fromPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___endPoint_6;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_21, NULL);
		NullCheck(L_18);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_18, L_22, NULL);
		// measurementTape.localScale = new Vector3(0.05f, distance, 0.05f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___measurementTape_5;
		float L_24 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), (0.0500000007f), L_24, (0.0500000007f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_23, L_25, NULL);
		// if (Mathf.Abs(distance - lastDistance) > 0.01f)
		float L_26 = V_1;
		float L_27 = __this->___lastDistance_11;
		float L_28;
		L_28 = fabsf(((float)il2cpp_codegen_subtract(L_26, L_27)));
		if ((!(((float)L_28) > ((float)(0.00999999978f)))))
		{
			goto IL_00f9;
		}
	}
	{
		// measurementTextM.text = distance.ToString("00.0m");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = __this->___measurementTextM_7;
		String_t* L_30;
		L_30 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_1), _stringLiteral8AD771670AE0EBEF69C95CAD941F6F05A7252A5B, NULL);
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_30);
		// measurementTextFT.text = (distance * 3.28084).ToString("00.0ft");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = __this->___measurementTextFT_8;
		float L_32 = V_1;
		V_3 = ((double)il2cpp_codegen_multiply(((double)L_32), (3.28084)));
		String_t* L_33;
		L_33 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75((&V_3), _stringLiteral92AA61129D76DB10D47E27CA128DEA7B55875A58, NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_33);
		// lastDistance = distance;
		float L_34 = V_1;
		__this->___lastDistance_11 = L_34;
	}

IL_00f9:
	{
		// if (drawTape)
		bool L_35 = __this->___drawTape_10;
		if (!L_35)
		{
			goto IL_0116;
		}
	}
	{
		// visualWrapper.SetActive(distance < maxDistanceToDraw);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___visualWrapper_4;
		float L_37 = V_1;
		float L_38 = __this->___maxDistanceToDraw_9;
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)((((float)L_37) < ((float)L_38))? 1 : 0), NULL);
		return;
	}

IL_0116:
	{
		// visualWrapper.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___visualWrapper_4;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
	}

IL_0122:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.TargetMeasurement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetMeasurement__ctor_m778FCB183C0AB521261E737F6D2022B9192BF58F (TargetMeasurement_tE198FAD83587B0DDFE4057E937C9B9654DA49990* __this, const RuntimeMethod* method) 
{
	{
		// public float maxDistanceToDraw = 6f;
		__this->___maxDistanceToDraw_9 = (6.0f);
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
// System.Void Valve.VR.InteractionSystem.Sample.SquishyToy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquishyToy_Start_m926714DA7464CA4D26535827A7E91D65FB5FCD6B (SquishyToy_tFF9058814B5F5053C8C4C0382EE4E9C42C5759B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInteractable_tB21951E300B553092765F8A8CC3067BD11C76264_m0F42142F0076BDEF6FEFE82D4ED3DC809479AD59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rigidbody == null)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigidbody_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigidbody_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbody_9), (void*)L_2);
	}

IL_001a:
	{
		// if (interactable == null)
		Interactable_tB21951E300B553092765F8A8CC3067BD11C76264* L_3 = __this->___interactable_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// interactable = GetComponent<Interactable>();
		Interactable_tB21951E300B553092765F8A8CC3067BD11C76264* L_5;
		L_5 = Component_GetComponent_TisInteractable_tB21951E300B553092765F8A8CC3067BD11C76264_m0F42142F0076BDEF6FEFE82D4ED3DC809479AD59(__this, Component_GetComponent_TisInteractable_tB21951E300B553092765F8A8CC3067BD11C76264_m0F42142F0076BDEF6FEFE82D4ED3DC809479AD59_RuntimeMethod_var);
		__this->___interactable_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactable_4), (void*)L_5);
	}

IL_0034:
	{
		// if (renderer == null)
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_6 = __this->___renderer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// renderer = GetComponent<SkinnedMeshRenderer>();
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_8;
		L_8 = Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0(__this, Component_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_mEECCD90E43EE8CE830826547680F92F9DBD486E0_RuntimeMethod_var);
		__this->___renderer_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderer_5), (void*)L_8);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.SquishyToy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquishyToy_Update_m85A1C7822E560D06D76245506ED0FC2A81F94CC6 (SquishyToy_tFF9058814B5F5053C8C4C0382EE4E9C42C5759B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9720B183B20AD34B8EFDED646FD1C8B759B788);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE4E00FB01CE32D8F89F5D9A5DEDC0B2C61D05CD);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float grip = 0;
		V_0 = (0.0f);
		// float pinch = 0;
		V_1 = (0.0f);
		// if (interactable.attachedToHand)
		Interactable_tB21951E300B553092765F8A8CC3067BD11C76264* L_0 = __this->___interactable_4;
		NullCheck(L_0);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_1 = L_0->___attachedToHand_28;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		// grip = gripSqueeze.GetAxis(interactable.attachedToHand.handType);
		SteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05* L_3 = __this->___gripSqueeze_7;
		Interactable_tB21951E300B553092765F8A8CC3067BD11C76264* L_4 = __this->___interactable_4;
		NullCheck(L_4);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_5 = L_4->___attachedToHand_28;
		NullCheck(L_5);
		int32_t L_6 = L_5->___handType_6;
		NullCheck(L_3);
		float L_7;
		L_7 = SteamVR_Action_Single_GetAxis_m6A2EBE710F696FAF1D1AB4BCAA0E713910EA34F4(L_3, L_6, NULL);
		V_0 = L_7;
		// pinch = pinchSqueeze.GetAxis(interactable.attachedToHand.handType);
		SteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05* L_8 = __this->___pinchSqueeze_8;
		Interactable_tB21951E300B553092765F8A8CC3067BD11C76264* L_9 = __this->___interactable_4;
		NullCheck(L_9);
		Hand_t254CD354808F36131662C3A54DF11F903A59282D* L_10 = L_9->___attachedToHand_28;
		NullCheck(L_10);
		int32_t L_11 = L_10->___handType_6;
		NullCheck(L_8);
		float L_12;
		L_12 = SteamVR_Action_Single_GetAxis_m6A2EBE710F696FAF1D1AB4BCAA0E713910EA34F4(L_8, L_11, NULL);
		V_1 = L_12;
	}

IL_0056:
	{
		// renderer.SetBlendShapeWeight(0, Mathf.Lerp(renderer.GetBlendShapeWeight(0), grip * 100, Time.deltaTime * 10));
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_13 = __this->___renderer_5;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_14 = __this->___renderer_5;
		NullCheck(L_14);
		float L_15;
		L_15 = SkinnedMeshRenderer_GetBlendShapeWeight_m8659C3960388D9B0EF2514CB0E0D9BD4B87E9A08(L_14, 0, NULL);
		float L_16 = V_0;
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_18;
		L_18 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_15, ((float)il2cpp_codegen_multiply(L_16, (100.0f))), ((float)il2cpp_codegen_multiply(L_17, (10.0f))), NULL);
		NullCheck(L_13);
		SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E(L_13, 0, L_18, NULL);
		// if (renderer.sharedMesh.blendShapeCount > 1) // make sure there's a pinch blend shape
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_19 = __this->___renderer_5;
		NullCheck(L_19);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_20;
		L_20 = SkinnedMeshRenderer_get_sharedMesh_m73D141639F0B72EBFAEF21D667AEFCA6E119A302(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Mesh_get_blendShapeCount_mB91EABCC5DFB3B91C4C0047851BC13FB92727408(L_20, NULL);
		if ((((int32_t)L_21) <= ((int32_t)1)))
		{
			goto IL_00c7;
		}
	}
	{
		// renderer.SetBlendShapeWeight(1, Mathf.Lerp(renderer.GetBlendShapeWeight(1), pinch * 100, Time.deltaTime * 10));
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_22 = __this->___renderer_5;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_23 = __this->___renderer_5;
		NullCheck(L_23);
		float L_24;
		L_24 = SkinnedMeshRenderer_GetBlendShapeWeight_m8659C3960388D9B0EF2514CB0E0D9BD4B87E9A08(L_23, 1, NULL);
		float L_25 = V_1;
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_27;
		L_27 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_24, ((float)il2cpp_codegen_multiply(L_25, (100.0f))), ((float)il2cpp_codegen_multiply(L_26, (10.0f))), NULL);
		NullCheck(L_22);
		SkinnedMeshRenderer_SetBlendShapeWeight_mD5724DB29A33F007E42F3666BF4B7ABC9C7F6F5E(L_22, 1, L_27, NULL);
	}

IL_00c7:
	{
		// if (affectMaterial)
		bool L_28 = __this->___affectMaterial_6;
		if (!L_28)
		{
			goto IL_0132;
		}
	}
	{
		// renderer.material.SetFloat("_Deform", Mathf.Pow(grip * 1f, 0.5f));
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_29 = __this->___renderer_5;
		NullCheck(L_29);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30;
		L_30 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_29, NULL);
		float L_31 = V_0;
		float L_32;
		L_32 = powf(((float)il2cpp_codegen_multiply(L_31, (1.0f))), (0.5f));
		NullCheck(L_30);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_30, _stringLiteral9B9720B183B20AD34B8EFDED646FD1C8B759B788, L_32, NULL);
		// if (renderer.material.HasProperty("_PinchDeform"))
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_33 = __this->___renderer_5;
		NullCheck(L_33);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_34;
		L_34 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_33, NULL);
		NullCheck(L_34);
		bool L_35;
		L_35 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_34, _stringLiteralDE4E00FB01CE32D8F89F5D9A5DEDC0B2C61D05CD, NULL);
		if (!L_35)
		{
			goto IL_0132;
		}
	}
	{
		// renderer.material.SetFloat("_PinchDeform", Mathf.Pow(pinch * 1f, 0.5f));
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_36 = __this->___renderer_5;
		NullCheck(L_36);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37;
		L_37 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_36, NULL);
		float L_38 = V_1;
		float L_39;
		L_39 = powf(((float)il2cpp_codegen_multiply(L_38, (1.0f))), (0.5f));
		NullCheck(L_37);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_37, _stringLiteralDE4E00FB01CE32D8F89F5D9A5DEDC0B2C61D05CD, L_39, NULL);
	}

IL_0132:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.SquishyToy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquishyToy__ctor_m328F2967AA0A35A43AAAA5ECF39D801C9B7FFA4A (SquishyToy_tFF9058814B5F5053C8C4C0382EE4E9C42C5759B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamVR_Input_GetAction_TisSteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05_mB48648C66C6EBD1FB286798E3A4D220DF1F6FC1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamVR_Input_t0DD834816170B2FF7481E717889F11FCB6A51298_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAD6AF8B2E6FCA8D009D52942C4BF99EFED1C5CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool affectMaterial = true;
		__this->___affectMaterial_6 = (bool)1;
		// public SteamVR_Action_Single gripSqueeze = SteamVR_Input.GetAction<SteamVR_Action_Single>("Squeeze");
		il2cpp_codegen_runtime_class_init_inline(SteamVR_Input_t0DD834816170B2FF7481E717889F11FCB6A51298_il2cpp_TypeInfo_var);
		SteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05* L_0;
		L_0 = SteamVR_Input_GetAction_TisSteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05_mB48648C66C6EBD1FB286798E3A4D220DF1F6FC1F(_stringLiteralCAD6AF8B2E6FCA8D009D52942C4BF99EFED1C5CD, (bool)0, SteamVR_Input_GetAction_TisSteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05_mB48648C66C6EBD1FB286798E3A4D220DF1F6FC1F_RuntimeMethod_var);
		__this->___gripSqueeze_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gripSqueeze_7), (void*)L_0);
		// public SteamVR_Action_Single pinchSqueeze = SteamVR_Input.GetAction<SteamVR_Action_Single>("Squeeze");
		SteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05* L_1;
		L_1 = SteamVR_Input_GetAction_TisSteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05_mB48648C66C6EBD1FB286798E3A4D220DF1F6FC1F(_stringLiteralCAD6AF8B2E6FCA8D009D52942C4BF99EFED1C5CD, (bool)0, SteamVR_Input_GetAction_TisSteamVR_Action_Single_tD12E54544B14A72A74E3FB73E09703C5707D4E05_mB48648C66C6EBD1FB286798E3A4D220DF1F6FC1F_RuntimeMethod_var);
		__this->___pinchSqueeze_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pinchSqueeze_8), (void*)L_1);
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
// System.Collections.IEnumerator Valve.VR.Extras.SteamVR_ForceSteamVRMode::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SteamVR_ForceSteamVRMode_Start_mC0CDC51F2C719E5B2A5AB783DC07073F02A7C6A1 (SteamVR_ForceSteamVRMode_t9ED9BB398F5517351985419850BFAC7F8F7BA8BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3* L_0 = (U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3*)il2cpp_codegen_object_new(U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__2__ctor_m281117DDB5514682C985EB5C935C486021016021(L_0, 0, NULL);
		U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Valve.VR.Extras.SteamVR_ForceSteamVRMode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_ForceSteamVRMode__ctor_m53149312592B72533AB90FBDC8C8B26DE1BBEBAE (SteamVR_ForceSteamVRMode_t9ED9BB398F5517351985419850BFAC7F8F7BA8BE* __this, const RuntimeMethod* method) 
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
// System.Void Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2__ctor_m281117DDB5514682C985EB5C935C486021016021 (U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_IDisposable_Dispose_m0BE0FE0121B66C72C7CF2D6AC90BCE690054F4EF (U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__2_MoveNext_m88AFF5A8B5A644795DEC1135DD417581F04354AC (U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamVR_t919261AC44F0F1E56D98B28BC2724315305BCCD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SteamVR_ForceSteamVRMode_t9ED9BB398F5517351985419850BFAC7F8F7BA8BE* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SteamVR_ForceSteamVRMode_t9ED9BB398F5517351985419850BFAC7F8F7BA8BE* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_0042;
			}
			case 2:
			{
				goto IL_0061;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1f); // just here to show that you can wait a while.
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SteamVR.Initialize(true);
		il2cpp_codegen_runtime_class_init_inline(SteamVR_t919261AC44F0F1E56D98B28BC2724315305BCCD2_il2cpp_TypeInfo_var);
		SteamVR_Initialize_mB5F6406A723A0F78CEBFAE6BC08E75B6EA55D189((bool)1, NULL);
		goto IL_0068;
	}

IL_0051:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0061:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0068:
	{
		// while (SteamVR.initializedState != SteamVR.InitializedStates.InitializeSuccess)
		il2cpp_codegen_runtime_class_init_inline(SteamVR_t919261AC44F0F1E56D98B28BC2724315305BCCD2_il2cpp_TypeInfo_var);
		int32_t L_4 = ((SteamVR_t919261AC44F0F1E56D98B28BC2724315305BCCD2_StaticFields*)il2cpp_codegen_static_fields_for(SteamVR_t919261AC44F0F1E56D98B28BC2724315305BCCD2_il2cpp_TypeInfo_var))->___initializedState_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0051;
		}
	}
	{
		// for (int disableIndex = 0; disableIndex < disableObjectsOnLoad.Length; disableIndex++)
		V_2 = 0;
		goto IL_0091;
	}

IL_0074:
	{
		// GameObject toDisable = disableObjectsOnLoad[disableIndex];
		SteamVR_ForceSteamVRMode_t9ED9BB398F5517351985419850BFAC7F8F7BA8BE* L_5 = V_1;
		NullCheck(L_5);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = L_5->___disableObjectsOnLoad_5;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (toDisable != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_008d;
		}
	}
	{
		// toDisable.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_3;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
	}

IL_008d:
	{
		// for (int disableIndex = 0; disableIndex < disableObjectsOnLoad.Length; disableIndex++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0091:
	{
		// for (int disableIndex = 0; disableIndex < disableObjectsOnLoad.Length; disableIndex++)
		int32_t L_14 = V_2;
		SteamVR_ForceSteamVRMode_t9ED9BB398F5517351985419850BFAC7F8F7BA8BE* L_15 = V_1;
		NullCheck(L_15);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = L_15->___disableObjectsOnLoad_5;
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0074;
		}
	}
	{
		// GameObject.Instantiate(vrCameraPrefab);
		SteamVR_ForceSteamVRMode_t9ED9BB398F5517351985419850BFAC7F8F7BA8BE* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___vrCameraPrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA2A71C7E204718F3ABEA5DC5009A8142EF2628F5 (U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4A60D20B1A6FE44BC1B90D711EE734DE9ACDFAE8 (U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__2_System_Collections_IEnumerator_Reset_m4A60D20B1A6FE44BC1B90D711EE734DE9ACDFAE8_RuntimeMethod_var)));
	}
}
// System.Object Valve.VR.Extras.SteamVR_ForceSteamVRMode/<Start>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__2_System_Collections_IEnumerator_get_Current_m1E66101162404C9203B1B0DCB63126331865C884 (U3CStartU3Ed__2_t70B14BA28BB672BE580084F7CB32ACFA5D4177B3* __this, const RuntimeMethod* method) 
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
// System.Void Valve.VR.Extras.SteamVR_GazeTracker::add_GazeOn(Valve.VR.Extras.GazeEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_GazeTracker_add_GazeOn_m66D59B66CA11AEBFA9FF160B4F798CC8DE81578B (SteamVR_GazeTracker_t81911C37163B1D23B5783D807FAB92E734AF1191* __this, GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_0 = NULL;
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_1 = NULL;
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_2 = NULL;
	{
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_0 = __this->___GazeOn_5;
		V_0 = L_0;
	}

IL_0007:
	{
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_1 = V_0;
		V_1 = L_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_2 = V_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)CastclassSealed((RuntimeObject*)L_4, GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2_il2cpp_TypeInfo_var));
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2** L_5 = (&__this->___GazeOn_5);
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_6 = V_2;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_7 = V_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_8;
		L_8 = InterlockedCompareExchangeImpl<GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*>(L_5, L_6, L_7);
		V_0 = L_8;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_9 = V_0;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_10 = V_1;
		if ((!(((RuntimeObject*)(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)L_9) == ((RuntimeObject*)(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_GazeTracker::remove_GazeOn(Valve.VR.Extras.GazeEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_GazeTracker_remove_GazeOn_mEDA100BC88524492745DDB5DF61636724E7E833E (SteamVR_GazeTracker_t81911C37163B1D23B5783D807FAB92E734AF1191* __this, GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_0 = NULL;
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_1 = NULL;
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_2 = NULL;
	{
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_0 = __this->___GazeOn_5;
		V_0 = L_0;
	}

IL_0007:
	{
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_1 = V_0;
		V_1 = L_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_2 = V_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)CastclassSealed((RuntimeObject*)L_4, GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2_il2cpp_TypeInfo_var));
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2** L_5 = (&__this->___GazeOn_5);
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_6 = V_2;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_7 = V_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_8;
		L_8 = InterlockedCompareExchangeImpl<GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*>(L_5, L_6, L_7);
		V_0 = L_8;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_9 = V_0;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_10 = V_1;
		if ((!(((RuntimeObject*)(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)L_9) == ((RuntimeObject*)(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_GazeTracker::add_GazeOff(Valve.VR.Extras.GazeEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_GazeTracker_add_GazeOff_m91098EB068DDAD2F55F541A2332AC7AD6989EC6C (SteamVR_GazeTracker_t81911C37163B1D23B5783D807FAB92E734AF1191* __this, GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_0 = NULL;
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_1 = NULL;
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_2 = NULL;
	{
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_0 = __this->___GazeOff_6;
		V_0 = L_0;
	}

IL_0007:
	{
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_1 = V_0;
		V_1 = L_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_2 = V_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)CastclassSealed((RuntimeObject*)L_4, GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2_il2cpp_TypeInfo_var));
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2** L_5 = (&__this->___GazeOff_6);
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_6 = V_2;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_7 = V_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_8;
		L_8 = InterlockedCompareExchangeImpl<GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*>(L_5, L_6, L_7);
		V_0 = L_8;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_9 = V_0;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_10 = V_1;
		if ((!(((RuntimeObject*)(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)L_9) == ((RuntimeObject*)(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_GazeTracker::remove_GazeOff(Valve.VR.Extras.GazeEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_GazeTracker_remove_GazeOff_m35038FFB8F12035F976CE09095151410494E34F5 (SteamVR_GazeTracker_t81911C37163B1D23B5783D807FAB92E734AF1191* __this, GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_0 = NULL;
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_1 = NULL;
	GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* V_2 = NULL;
	{
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_0 = __this->___GazeOff_6;
		V_0 = L_0;
	}

IL_0007:
	{
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_1 = V_0;
		V_1 = L_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_2 = V_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)CastclassSealed((RuntimeObject*)L_4, GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2_il2cpp_TypeInfo_var));
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2** L_5 = (&__this->___GazeOff_6);
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_6 = V_2;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_7 = V_1;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_8;
		L_8 = InterlockedCompareExchangeImpl<GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*>(L_5, L_6, L_7);
		V_0 = L_8;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_9 = V_0;
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_10 = V_1;
		if ((!(((RuntimeObject*)(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)L_9) == ((RuntimeObject*)(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_GazeTracker::OnGazeOn(Valve.VR.Extras.GazeEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_GazeTracker_OnGazeOn_mB452DD9E43993CBE5820A482B340B6D4345F972D (SteamVR_GazeTracker_t81911C37163B1D23B5783D807FAB92E734AF1191* __this, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___0_gazeEventArgs, const RuntimeMethod* method) 
{
	{
		// if (GazeOn != null)
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_0 = __this->___GazeOn_5;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// GazeOn(this, gazeEventArgs);
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_1 = __this->___GazeOn_5;
		GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 L_2 = ___0_gazeEventArgs;
		NullCheck(L_1);
		GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_GazeTracker::OnGazeOff(Valve.VR.Extras.GazeEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_GazeTracker_OnGazeOff_m678CD42170081DEEF8B9A341361B327C10F30680 (SteamVR_GazeTracker_t81911C37163B1D23B5783D807FAB92E734AF1191* __this, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___0_gazeEventArgs, const RuntimeMethod* method) 
{
	{
		// if (GazeOff != null)
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_0 = __this->___GazeOff_6;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// GazeOff(this, gazeEventArgs);
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* L_1 = __this->___GazeOff_6;
		GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 L_2 = ___0_gazeEventArgs;
		NullCheck(L_1);
		GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_GazeTracker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_GazeTracker_Update_m0E358BF77815FA93E3EBEBD2D8E34B21D1EB9BDE (SteamVR_GazeTracker_t81911C37163B1D23B5783D807FAB92E734AF1191* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisSteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3_m688A45F5B6825F960F27CABE98B8C73B80F03D63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SteamVR_TrackedObjectU5BU5D_tCC0C4EAA425B3D55541562E449C71292320325D6* V_0 = NULL;
	int32_t V_1 = 0;
	SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3* V_2 = NULL;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 V_7;
	memset((&V_7), 0, sizeof(V_7));
	GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// if (hmdTrackedObject == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___hmdTrackedObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// SteamVR_TrackedObject[] trackedObjects = FindObjectsOfType<SteamVR_TrackedObject>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		SteamVR_TrackedObjectU5BU5D_tCC0C4EAA425B3D55541562E449C71292320325D6* L_2;
		L_2 = Object_FindObjectsOfType_TisSteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3_m688A45F5B6825F960F27CABE98B8C73B80F03D63(Object_FindObjectsOfType_TisSteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3_m688A45F5B6825F960F27CABE98B8C73B80F03D63_RuntimeMethod_var);
		// foreach (SteamVR_TrackedObject tracked in trackedObjects)
		V_0 = L_2;
		V_1 = 0;
		goto IL_0036;
	}

IL_0018:
	{
		// foreach (SteamVR_TrackedObject tracked in trackedObjects)
		SteamVR_TrackedObjectU5BU5D_tCC0C4EAA425B3D55541562E449C71292320325D6* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (tracked.index == SteamVR_TrackedObject.EIndex.Hmd)
		SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___index_4;
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		// hmdTrackedObject = tracked.transform;
		SteamVR_TrackedObject_t10234B2A88FCF55A9BFFFC661F00781C86B953B3* L_9 = V_2;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		__this->___hmdTrackedObject_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hmdTrackedObject_9), (void*)L_10);
		// break;
		goto IL_003c;
	}

IL_0032:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0036:
	{
		// foreach (SteamVR_TrackedObject tracked in trackedObjects)
		int32_t L_12 = V_1;
		SteamVR_TrackedObjectU5BU5D_tCC0C4EAA425B3D55541562E449C71292320325D6* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0018;
		}
	}

IL_003c:
	{
		// if (hmdTrackedObject)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___hmdTrackedObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_14, NULL);
		if (!L_15)
		{
			goto IL_0125;
		}
	}
	{
		// Ray ray = new Ray(hmdTrackedObject.position, hmdTrackedObject.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___hmdTrackedObject_9;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___hmdTrackedObject_9;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_18, NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_3), L_17, L_19, NULL);
		// Plane plane = new Plane(hmdTrackedObject.forward, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___hmdTrackedObject_9;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Plane__ctor_m2BFB65EBFF51123791878684ECC375B99FAD10A2((&V_4), L_21, L_23, NULL);
		// float enter = 0.0f;
		V_5 = (0.0f);
		// if (plane.Raycast(ray, out enter))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_24 = V_3;
		bool L_25;
		L_25 = Plane_Raycast_mC6D25A732413A2694A75CB0F2F9E75DEDDA117F0((&V_4), L_24, (&V_5), NULL);
		if (!L_25)
		{
			goto IL_0125;
		}
	}
	{
		// Vector3 intersect = hmdTrackedObject.position + hmdTrackedObject.forward * enter;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___hmdTrackedObject_9;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___hmdTrackedObject_9;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_28, NULL);
		float L_30 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_31, NULL);
		// float dist = Vector3.Distance(intersect, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35;
		L_35 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_32, L_34, NULL);
		V_6 = L_35;
		// if (dist < gazeInCutoff && !isInGaze)
		float L_36 = V_6;
		float L_37 = __this->___gazeInCutoff_7;
		if ((!(((float)L_36) < ((float)L_37))))
		{
			goto IL_00fb;
		}
	}
	{
		bool L_38 = __this->___isInGaze_4;
		if (L_38)
		{
			goto IL_00fb;
		}
	}
	{
		// isInGaze = true;
		__this->___isInGaze_4 = (bool)1;
		// gazeEventArgs.distance = dist;
		float L_39 = V_6;
		(&V_7)->___distance_0 = L_39;
		// OnGazeOn(gazeEventArgs);
		GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 L_40 = V_7;
		VirtualActionInvoker1< GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 >::Invoke(4 /* System.Void Valve.VR.Extras.SteamVR_GazeTracker::OnGazeOn(Valve.VR.Extras.GazeEventArgs) */, __this, L_40);
		return;
	}

IL_00fb:
	{
		// else if (dist >= gazeOutCutoff && isInGaze)
		float L_41 = V_6;
		float L_42 = __this->___gazeOutCutoff_8;
		if ((!(((float)L_41) >= ((float)L_42))))
		{
			goto IL_0125;
		}
	}
	{
		bool L_43 = __this->___isInGaze_4;
		if (!L_43)
		{
			goto IL_0125;
		}
	}
	{
		// isInGaze = false;
		__this->___isInGaze_4 = (bool)0;
		// gazeEventArgs.distance = dist;
		float L_44 = V_6;
		(&V_8)->___distance_0 = L_44;
		// OnGazeOff(gazeEventArgs);
		GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 L_45 = V_8;
		VirtualActionInvoker1< GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 >::Invoke(5 /* System.Void Valve.VR.Extras.SteamVR_GazeTracker::OnGazeOff(Valve.VR.Extras.GazeEventArgs) */, __this, L_45);
	}

IL_0125:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_GazeTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_GazeTracker__ctor_mE5C01C4183DB15A33429D193D4D9D1BF91F70DC7 (SteamVR_GazeTracker_t81911C37163B1D23B5783D807FAB92E734AF1191* __this, const RuntimeMethod* method) 
{
	{
		// public float gazeInCutoff = 0.15f;
		__this->___gazeInCutoff_7 = (0.150000006f);
		// public float gazeOutCutoff = 0.4f;
		__this->___gazeOutCutoff_8 = (0.400000006f);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_Multicast(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* currentDelegate = reinterpret_cast<GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, ___1_gazeEventArgs, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenInst(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_gazeEventArgs, method);
}
void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenStatic(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_gazeEventArgs, method);
}
void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenStaticInvoker(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sender, ___1_gazeEventArgs);
}
void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_ClosedStaticInvoker(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender, ___1_gazeEventArgs);
}
void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenVirtual(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker1< GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_gazeEventArgs);
}
void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenInterface(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker1< GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_gazeEventArgs);
}
void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenGenericVirtual(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker1< GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 >::Invoke(method, ___0_sender, ___1_gazeEventArgs);
}
void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenGenericInterface(GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker1< GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 >::Invoke(method, ___0_sender, ___1_gazeEventArgs);
}
// System.Void Valve.VR.Extras.GazeEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeEventHandler__ctor_m79F4AD7490729E690A7B3A954521FBEC67610347 (GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_Multicast;
}
// System.Void Valve.VR.Extras.GazeEventHandler::Invoke(System.Object,Valve.VR.Extras.GazeEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671 (GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_gazeEventArgs, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Valve.VR.Extras.GazeEventHandler::BeginInvoke(System.Object,Valve.VR.Extras.GazeEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GazeEventHandler_BeginInvoke_m4804D91EA0120DC0FEDE4A203FC0B17E35BF08FE (GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_sender;
	__d_args[1] = Box(GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8_il2cpp_TypeInfo_var, &___1_gazeEventArgs);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Valve.VR.Extras.GazeEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeEventHandler_EndInvoke_m5A7D6AC3A8286F9B0B395C634635C290A7515CAF (GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::add_PointerIn(Valve.VR.Extras.PointerEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer_add_PointerIn_mC7BFA7F428CCA863336F02812DF214E24C8F5654 (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_0 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_1 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_2 = NULL;
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_0 = __this->___PointerIn_15;
		V_0 = L_0;
	}

IL_0007:
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_1 = V_0;
		V_1 = L_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_2 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)CastclassSealed((RuntimeObject*)L_4, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var));
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24** L_5 = (&__this->___PointerIn_15);
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_6 = V_2;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_7 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_8;
		L_8 = InterlockedCompareExchangeImpl<PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*>(L_5, L_6, L_7);
		V_0 = L_8;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_9 = V_0;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_10 = V_1;
		if ((!(((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_9) == ((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::remove_PointerIn(Valve.VR.Extras.PointerEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer_remove_PointerIn_mAC1FC6B2EC13513B397BB46825798C34AA71D393 (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_0 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_1 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_2 = NULL;
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_0 = __this->___PointerIn_15;
		V_0 = L_0;
	}

IL_0007:
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_1 = V_0;
		V_1 = L_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_2 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)CastclassSealed((RuntimeObject*)L_4, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var));
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24** L_5 = (&__this->___PointerIn_15);
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_6 = V_2;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_7 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_8;
		L_8 = InterlockedCompareExchangeImpl<PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*>(L_5, L_6, L_7);
		V_0 = L_8;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_9 = V_0;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_10 = V_1;
		if ((!(((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_9) == ((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::add_PointerOut(Valve.VR.Extras.PointerEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer_add_PointerOut_mE0973D14BD3B11FB732F713C05A364F82A06026E (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_0 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_1 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_2 = NULL;
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_0 = __this->___PointerOut_16;
		V_0 = L_0;
	}

IL_0007:
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_1 = V_0;
		V_1 = L_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_2 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)CastclassSealed((RuntimeObject*)L_4, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var));
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24** L_5 = (&__this->___PointerOut_16);
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_6 = V_2;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_7 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_8;
		L_8 = InterlockedCompareExchangeImpl<PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*>(L_5, L_6, L_7);
		V_0 = L_8;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_9 = V_0;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_10 = V_1;
		if ((!(((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_9) == ((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::remove_PointerOut(Valve.VR.Extras.PointerEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer_remove_PointerOut_mD2F98950A4068106A01BD60489EA0CCCC01D5CBC (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_0 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_1 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_2 = NULL;
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_0 = __this->___PointerOut_16;
		V_0 = L_0;
	}

IL_0007:
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_1 = V_0;
		V_1 = L_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_2 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)CastclassSealed((RuntimeObject*)L_4, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var));
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24** L_5 = (&__this->___PointerOut_16);
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_6 = V_2;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_7 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_8;
		L_8 = InterlockedCompareExchangeImpl<PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*>(L_5, L_6, L_7);
		V_0 = L_8;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_9 = V_0;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_10 = V_1;
		if ((!(((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_9) == ((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::add_PointerClick(Valve.VR.Extras.PointerEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer_add_PointerClick_m1EE8837EB4C6A1AFB31113A6263FD2E5E11D2501 (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_0 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_1 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_2 = NULL;
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_0 = __this->___PointerClick_17;
		V_0 = L_0;
	}

IL_0007:
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_1 = V_0;
		V_1 = L_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_2 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)CastclassSealed((RuntimeObject*)L_4, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var));
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24** L_5 = (&__this->___PointerClick_17);
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_6 = V_2;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_7 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_8;
		L_8 = InterlockedCompareExchangeImpl<PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*>(L_5, L_6, L_7);
		V_0 = L_8;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_9 = V_0;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_10 = V_1;
		if ((!(((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_9) == ((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::remove_PointerClick(Valve.VR.Extras.PointerEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer_remove_PointerClick_m0902D27707D912B67504858FFF09E05B82A0F1BF (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_0 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_1 = NULL;
	PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* V_2 = NULL;
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_0 = __this->___PointerClick_17;
		V_0 = L_0;
	}

IL_0007:
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_1 = V_0;
		V_1 = L_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_2 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)CastclassSealed((RuntimeObject*)L_4, PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24_il2cpp_TypeInfo_var));
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24** L_5 = (&__this->___PointerClick_17);
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_6 = V_2;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_7 = V_1;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_8;
		L_8 = InterlockedCompareExchangeImpl<PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*>(L_5, L_6, L_7);
		V_0 = L_8;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_9 = V_0;
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_10 = V_1;
		if ((!(((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_9) == ((RuntimeObject*)(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer_Start_m1297A5E85B5D50D973F83329688A13E347B14228 (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121_mBA8014D71A7DE73CFD409D14A677E152A2CEF5F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60243195EA520DD671C596DA76282F3BEC53D16F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFAFC46D30CBD4066B1BD9637E63F0310881D27B);
		s_Il2CppMethodInitialized = true;
	}
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	{
		// if (pose == null)
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_0 = __this->___pose_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// pose = this.GetComponent<SteamVR_Behaviour_Pose>();
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_2;
		L_2 = Component_GetComponent_TisSteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121_mBA8014D71A7DE73CFD409D14A677E152A2CEF5F7(__this, Component_GetComponent_TisSteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121_mBA8014D71A7DE73CFD409D14A677E152A2CEF5F7_RuntimeMethod_var);
		__this->___pose_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pose_4), (void*)L_2);
	}

IL_001a:
	{
		// if (pose == null)
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_3 = __this->___pose_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.LogError("No SteamVR_Behaviour_Pose component found on this object", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteralAFAFC46D30CBD4066B1BD9637E63F0310881D27B, __this, NULL);
	}

IL_0033:
	{
		// if (interactWithUI == null)
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_5 = __this->___interactWithUI_5;
		il2cpp_codegen_runtime_class_init_inline(SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = SteamVR_Action_op_Equality_mBA7790F105DD361F9103366D99DF8ABFFD35DD6F(L_5, (SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// Debug.LogError("No ui interaction action has been set on this component.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(_stringLiteral60243195EA520DD671C596DA76282F3BEC53D16F, __this, NULL);
	}

IL_004c:
	{
		// holder = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_7, NULL);
		__this->___holder_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___holder_10), (void*)L_7);
		// holder.transform.parent = this.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___holder_10;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_9, L_10, NULL);
		// holder.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___holder_10;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_13, NULL);
		// holder.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___holder_10;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_16, NULL);
		// pointer = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_CreatePrimitive_m13C0A691E679A83DD595913200A1DD9A906EB47B(3, NULL);
		__this->___pointer_11 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pointer_11), (void*)L_17);
		// pointer.transform.parent = holder.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___pointer_11;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___holder_10;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_19);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_19, L_21, NULL);
		// pointer.transform.localScale = new Vector3(thickness, thickness, 100f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___pointer_11;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		float L_24 = __this->___thickness_8;
		float L_25 = __this->___thickness_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), L_24, L_25, (100.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_23, L_26, NULL);
		// pointer.transform.localPosition = new Vector3(0f, 0f, 50f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___pointer_11;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), (0.0f), (0.0f), (50.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_28, L_29, NULL);
		// pointer.transform.localRotation = Quaternion.identity;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___pointer_11;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_31);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_31, L_32, NULL);
		// BoxCollider collider = pointer.GetComponent<BoxCollider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___pointer_11;
		NullCheck(L_33);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_34;
		L_34 = GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C(L_33, GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var);
		V_0 = L_34;
		// if (addRigidBody)
		bool L_35 = __this->___addRigidBody_13;
		if (!L_35)
		{
			goto IL_0153;
		}
	}
	{
		// if (collider)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_36 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_36, NULL);
		if (!L_37)
		{
			goto IL_0140;
		}
	}
	{
		// collider.isTrigger = true;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_38 = V_0;
		NullCheck(L_38);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_38, (bool)1, NULL);
	}

IL_0140:
	{
		// Rigidbody rigidBody = pointer.AddComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___pointer_11;
		NullCheck(L_39);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_40;
		L_40 = GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093(L_39, GameObject_AddComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m03A761629A3F71B0248F1B26EF612F592B757093_RuntimeMethod_var);
		// rigidBody.isKinematic = true;
		NullCheck(L_40);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_40, (bool)1, NULL);
		goto IL_0161;
	}

IL_0153:
	{
		// if (collider)
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_41 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_41, NULL);
		if (!L_42)
		{
			goto IL_0161;
		}
	}
	{
		// Object.Destroy(collider);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_43 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_43, NULL);
	}

IL_0161:
	{
		// Material newMaterial = new Material(Shader.Find("Unlit/Color"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_44;
		L_44 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral3D93A89666F831FB9324883A9347EA29365E69DF, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_45, L_44, NULL);
		V_1 = L_45;
		// newMaterial.SetColor("_Color", color);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47 = __this->___color_7;
		NullCheck(L_46);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_46, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_47, NULL);
		// pointer.GetComponent<MeshRenderer>().material = newMaterial;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___pointer_11;
		NullCheck(L_48);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_49;
		L_49 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_48, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_50 = V_1;
		NullCheck(L_49);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_49, L_50, NULL);
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::OnPointerIn(Valve.VR.Extras.PointerEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer_OnPointerIn_m69240085DD68684B30B183232A35594C5A363D60 (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___0_e, const RuntimeMethod* method) 
{
	{
		// if (PointerIn != null)
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_0 = __this->___PointerIn_15;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// PointerIn(this, e);
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_1 = __this->___PointerIn_15;
		PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 L_2 = ___0_e;
		NullCheck(L_1);
		PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::OnPointerClick(Valve.VR.Extras.PointerEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer_OnPointerClick_m61CADC7EC96147312E99CD1F229CD28CA58DCBD2 (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___0_e, const RuntimeMethod* method) 
{
	{
		// if (PointerClick != null)
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_0 = __this->___PointerClick_17;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// PointerClick(this, e);
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_1 = __this->___PointerClick_17;
		PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 L_2 = ___0_e;
		NullCheck(L_1);
		PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::OnPointerOut(Valve.VR.Extras.PointerEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer_OnPointerOut_m347085DD7311F268BCA323C874BF778B460CC188 (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___0_e, const RuntimeMethod* method) 
{
	{
		// if (PointerOut != null)
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_0 = __this->___PointerOut_16;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// PointerOut(this, e);
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* L_1 = __this->___PointerOut_16;
		PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 L_2 = ___0_e;
		NullCheck(L_1);
		PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_inline(L_1, __this, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer_Update_m80DB6B0B5655564DDB0DE2A46798BB5D1FD7909A (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 V_2;
	memset((&V_2), 0, sizeof(V_2));
	PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 V_3;
	memset((&V_3), 0, sizeof(V_3));
	PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool G_B5_0 = false;
	bool G_B3_0 = false;
	bool G_B4_0 = false;
	bool G_B8_0 = false;
	bool G_B6_0 = false;
	bool G_B7_0 = false;
	bool G_B10_0 = false;
	bool G_B9_0 = false;
	bool G_B13_0 = false;
	bool G_B11_0 = false;
	bool G_B12_0 = false;
	{
		// if (!isActive)
		bool L_0 = __this->___isActive_12;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		// isActive = true;
		__this->___isActive_12 = (bool)1;
		// this.transform.GetChild(0).gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, 0, NULL);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_0026:
	{
		// float dist = 100f;
		V_0 = (100.0f);
		// Ray raycast = new Ray(transform.position, transform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_8), L_5, L_7, /*hidden argument*/NULL);
		// bool bHit = Physics.Raycast(raycast, out hit);
		bool L_9;
		L_9 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_8, (&V_1), NULL);
		// if (previousContact && previousContact != hit.transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___previousContact_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		G_B3_0 = L_9;
		if (!L_11)
		{
			G_B5_0 = L_9;
			goto IL_00b8;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___previousContact_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, L_13, NULL);
		G_B4_0 = G_B3_0;
		if (!L_14)
		{
			G_B5_0 = G_B3_0;
			goto IL_00b8;
		}
	}
	{
		// PointerEventArgs args = new PointerEventArgs();
		il2cpp_codegen_initobj((&V_2), sizeof(PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415));
		// args.fromInputSource = pose.inputSource;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_15 = __this->___pose_4;
		NullCheck(L_15);
		int32_t L_16 = L_15->___inputSource_5;
		(&V_2)->___fromInputSource_0 = L_16;
		// args.distance = 0f;
		(&V_2)->___distance_2 = (0.0f);
		// args.flags = 0;
		(&V_2)->___flags_1 = 0;
		// args.target = previousContact;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___previousContact_18;
		(&V_2)->___target_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___target_3), (void*)L_17);
		// OnPointerOut(args);
		PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 L_18 = V_2;
		VirtualActionInvoker1< PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 >::Invoke(6 /* System.Void Valve.VR.Extras.SteamVR_LaserPointer::OnPointerOut(Valve.VR.Extras.PointerEventArgs) */, __this, L_18);
		// previousContact = null;
		__this->___previousContact_18 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousContact_18), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		G_B5_0 = G_B4_0;
	}

IL_00b8:
	{
		// if (bHit && previousContact != hit.transform)
		bool L_19 = G_B5_0;
		G_B6_0 = L_19;
		if (!L_19)
		{
			G_B8_0 = L_19;
			goto IL_0121;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___previousContact_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, L_21, NULL);
		G_B7_0 = G_B6_0;
		if (!L_22)
		{
			G_B8_0 = G_B6_0;
			goto IL_0121;
		}
	}
	{
		// PointerEventArgs argsIn = new PointerEventArgs();
		il2cpp_codegen_initobj((&V_3), sizeof(PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415));
		// argsIn.fromInputSource = pose.inputSource;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_23 = __this->___pose_4;
		NullCheck(L_23);
		int32_t L_24 = L_23->___inputSource_5;
		(&V_3)->___fromInputSource_0 = L_24;
		// argsIn.distance = hit.distance;
		float L_25;
		L_25 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_1), NULL);
		(&V_3)->___distance_2 = L_25;
		// argsIn.flags = 0;
		(&V_3)->___flags_1 = 0;
		// argsIn.target = hit.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		(&V_3)->___target_3 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___target_3), (void*)L_26);
		// OnPointerIn(argsIn);
		PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 L_27 = V_3;
		VirtualActionInvoker1< PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 >::Invoke(4 /* System.Void Valve.VR.Extras.SteamVR_LaserPointer::OnPointerIn(Valve.VR.Extras.PointerEventArgs) */, __this, L_27);
		// previousContact = hit.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		__this->___previousContact_18 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousContact_18), (void*)L_28);
		G_B8_0 = G_B7_0;
	}

IL_0121:
	{
		// if (!bHit)
		bool L_29 = G_B8_0;
		G_B9_0 = L_29;
		if (L_29)
		{
			G_B10_0 = L_29;
			goto IL_012b;
		}
	}
	{
		// previousContact = null;
		__this->___previousContact_18 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previousContact_18), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		G_B10_0 = G_B9_0;
	}

IL_012b:
	{
		// if (bHit && hit.distance < 100f)
		bool L_30 = G_B10_0;
		G_B11_0 = L_30;
		if (!L_30)
		{
			G_B13_0 = L_30;
			goto IL_0144;
		}
	}
	{
		float L_31;
		L_31 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_1), NULL);
		G_B12_0 = G_B11_0;
		if ((!(((float)L_31) < ((float)(100.0f)))))
		{
			G_B13_0 = G_B11_0;
			goto IL_0144;
		}
	}
	{
		// dist = hit.distance;
		float L_32;
		L_32 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_1), NULL);
		V_0 = L_32;
		G_B13_0 = G_B12_0;
	}

IL_0144:
	{
		// if (bHit && interactWithUI.GetStateUp(pose.inputSource))
		if (!G_B13_0)
		{
			goto IL_01a4;
		}
	}
	{
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_33 = __this->___interactWithUI_5;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_34 = __this->___pose_4;
		NullCheck(L_34);
		int32_t L_35 = L_34->___inputSource_5;
		NullCheck(L_33);
		bool L_36;
		L_36 = SteamVR_Action_Boolean_GetStateUp_mFD84CD2C7AEE34CDF90649E6597D1E906F22F89C(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_01a4;
		}
	}
	{
		// PointerEventArgs argsClick = new PointerEventArgs();
		il2cpp_codegen_initobj((&V_4), sizeof(PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415));
		// argsClick.fromInputSource = pose.inputSource;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_37 = __this->___pose_4;
		NullCheck(L_37);
		int32_t L_38 = L_37->___inputSource_5;
		(&V_4)->___fromInputSource_0 = L_38;
		// argsClick.distance = hit.distance;
		float L_39;
		L_39 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_1), NULL);
		(&V_4)->___distance_2 = L_39;
		// argsClick.flags = 0;
		(&V_4)->___flags_1 = 0;
		// argsClick.target = hit.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		(&V_4)->___target_3 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___target_3), (void*)L_40);
		// OnPointerClick(argsClick);
		PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 L_41 = V_4;
		VirtualActionInvoker1< PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 >::Invoke(5 /* System.Void Valve.VR.Extras.SteamVR_LaserPointer::OnPointerClick(Valve.VR.Extras.PointerEventArgs) */, __this, L_41);
	}

IL_01a4:
	{
		// if (interactWithUI != null && interactWithUI.GetState(pose.inputSource))
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_42 = __this->___interactWithUI_5;
		il2cpp_codegen_runtime_class_init_inline(SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = SteamVR_Action_op_Inequality_m4631A7694F70536B27D4A84D5F34040ADF6A1B35(L_42, (SteamVR_Action_t53B5016DA0FD7570A4613C9215BB86623567D7D4*)NULL, NULL);
		if (!L_43)
		{
			goto IL_0215;
		}
	}
	{
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_44 = __this->___interactWithUI_5;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_45 = __this->___pose_4;
		NullCheck(L_45);
		int32_t L_46 = L_45->___inputSource_5;
		NullCheck(L_44);
		bool L_47;
		L_47 = SteamVR_Action_Boolean_GetState_m09301D3981D25AB4A853AD9192FD91DD15D27383(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_0215;
		}
	}
	{
		// pointer.transform.localScale = new Vector3(thickness * 5f, thickness * 5f, dist);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___pointer_11;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_48, NULL);
		float L_50 = __this->___thickness_8;
		float L_51 = __this->___thickness_8;
		float L_52 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_53), ((float)il2cpp_codegen_multiply(L_50, (5.0f))), ((float)il2cpp_codegen_multiply(L_51, (5.0f))), L_52, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_49, L_53, NULL);
		// pointer.GetComponent<MeshRenderer>().material.color = clickColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___pointer_11;
		NullCheck(L_54);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_55;
		L_55 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_54, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_55);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56;
		L_56 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_55, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_57 = __this->___clickColor_9;
		NullCheck(L_56);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_56, L_57, NULL);
		goto IL_0252;
	}

IL_0215:
	{
		// pointer.transform.localScale = new Vector3(thickness, thickness, dist);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___pointer_11;
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
		float L_60 = __this->___thickness_8;
		float L_61 = __this->___thickness_8;
		float L_62 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_63), L_60, L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_59);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_59, L_63, NULL);
		// pointer.GetComponent<MeshRenderer>().material.color = color;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = __this->___pointer_11;
		NullCheck(L_64);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_65;
		L_65 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_64, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_65);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66;
		L_66 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_65, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67 = __this->___color_7;
		NullCheck(L_66);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_66, L_67, NULL);
	}

IL_0252:
	{
		// pointer.transform.localPosition = new Vector3(0f, 0f, dist / 2f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = __this->___pointer_11;
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_68, NULL);
		float L_70 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_71), (0.0f), (0.0f), ((float)(L_70/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_69);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_69, L_71, NULL);
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_LaserPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_LaserPointer__ctor_m12C2E278C3028C4240F1C7A164A15C3CE70150D2 (SteamVR_LaserPointer_tF23E0B696A499854EE6720382C56763CCA3AF4C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamVR_Input_t0DD834816170B2FF7481E717889F11FCB6A51298_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral368E804386E939D4381FB0417B6FDA2199D2C3D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SteamVR_Action_Boolean interactWithUI = SteamVR_Input.GetBooleanAction("InteractUI");
		il2cpp_codegen_runtime_class_init_inline(SteamVR_Input_t0DD834816170B2FF7481E717889F11FCB6A51298_il2cpp_TypeInfo_var);
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_0;
		L_0 = SteamVR_Input_GetBooleanAction_mED6BF7916C7A157AB7EEDA127B791F9ED1BA9542(_stringLiteral368E804386E939D4381FB0417B6FDA2199D2C3D8, (bool)0, NULL);
		__this->___interactWithUI_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interactWithUI_5), (void*)L_0);
		// public bool active = true;
		__this->___active_6 = (bool)1;
		// public float thickness = 0.002f;
		__this->___thickness_8 = (0.00200000009f);
		// public Color clickColor = Color.green;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		__this->___clickColor_9 = L_1;
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
// Conversion methods for marshalling of: Valve.VR.Extras.PointerEventArgs
IL2CPP_EXTERN_C void PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshal_pinvoke(const PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415& unmarshaled, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshaled_pinvoke& marshaled)
{
	Exception_t* ___target_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'PointerEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_3Exception, NULL);
}
IL2CPP_EXTERN_C void PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshal_pinvoke_back(const PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshaled_pinvoke& marshaled, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415& unmarshaled)
{
	Exception_t* ___target_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'PointerEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Valve.VR.Extras.PointerEventArgs
IL2CPP_EXTERN_C void PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshal_pinvoke_cleanup(PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Valve.VR.Extras.PointerEventArgs
IL2CPP_EXTERN_C void PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshal_com(const PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415& unmarshaled, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshaled_com& marshaled)
{
	Exception_t* ___target_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'PointerEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_3Exception, NULL);
}
IL2CPP_EXTERN_C void PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshal_com_back(const PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshaled_com& marshaled, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415& unmarshaled)
{
	Exception_t* ___target_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'PointerEventArgs': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: Valve.VR.Extras.PointerEventArgs
IL2CPP_EXTERN_C void PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshal_com_cleanup(PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_Multicast(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* currentDelegate = reinterpret_cast<PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenInst(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenStatic(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_e, method);
}
void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenStaticInvoker(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sender, ___1_e);
}
void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_ClosedStaticInvoker(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender, ___1_e);
}
void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenVirtual(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker1< PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_e);
}
void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenInterface(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker1< PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_e);
}
void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenGenericVirtual(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker1< PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 >::Invoke(method, ___0_sender, ___1_e);
}
void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenGenericInterface(PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker1< PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 >::Invoke(method, ___0_sender, ___1_e);
}
// System.Void Valve.VR.Extras.PointerEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventHandler__ctor_m05CCF4E9D676F601B20A62DCFEDAB989AA040E3F (PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_Multicast;
}
// System.Void Valve.VR.Extras.PointerEventHandler::Invoke(System.Object,Valve.VR.Extras.PointerEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40 (PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Valve.VR.Extras.PointerEventHandler::BeginInvoke(System.Object,Valve.VR.Extras.PointerEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PointerEventHandler_BeginInvoke_m93F409501BFA0C4F4822ED4D5DA015F129826B59 (PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___0_sender;
	__d_args[1] = Box(PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415_il2cpp_TypeInfo_var, &___1_e);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void Valve.VR.Extras.PointerEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventHandler_EndInvoke_m513C2D77D42BF44FCC49EFC02228D7765E41A52C (PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.Extras.SteamVR_TestThrow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_TestThrow_Awake_mED228F10B26C8751F1A9C839822913EFBF006D7C (SteamVR_TestThrow_t219107F6BC7E0E1457A3E6D991556A52B44262CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121_mBA8014D71A7DE73CFD409D14A677E152A2CEF5F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackedObj = GetComponent<SteamVR_Behaviour_Pose>();
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_0;
		L_0 = Component_GetComponent_TisSteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121_mBA8014D71A7DE73CFD409D14A677E152A2CEF5F7(__this, Component_GetComponent_TisSteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121_mBA8014D71A7DE73CFD409D14A677E152A2CEF5F7_RuntimeMethod_var);
		__this->___trackedObj_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackedObj_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_TestThrow::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_TestThrow_FixedUpdate_m353CA62A3A6CCAA0D77287258CA8F7FC694528CF (SteamVR_TestThrow_t219107F6BC7E0E1457A3E6D991556A52B44262CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B8_0 = NULL;
	{
		// if (joint == null && spawn.GetStateDown(trackedObj.inputSource))
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_0 = __this->___joint_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_006b;
		}
	}
	{
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_2 = __this->___spawn_6;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_3 = __this->___trackedObj_7;
		NullCheck(L_3);
		int32_t L_4 = L_3->___inputSource_5;
		NullCheck(L_2);
		bool L_5;
		L_5 = SteamVR_Action_Boolean_GetStateDown_m16A290166787BD59ADD7AC9EA59153792477554A(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	{
		// GameObject go = GameObject.Instantiate(prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___prefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_7;
		// go.transform.position = attachPoint.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___attachPoint_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_12, NULL);
		// joint = go.AddComponent<FixedJoint>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_14;
		L_14 = GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159(L_13, GameObject_AddComponent_TisFixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E_m55087CF9E0B9B9026B0844811592B36880109159_RuntimeMethod_var);
		__this->___joint_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joint_8), (void*)L_14);
		// joint.connectedBody = attachPoint;
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_15 = __this->___joint_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->___attachPoint_5;
		NullCheck(L_15);
		Joint_set_connectedBody_mE9E631476E9D4264E8DC0D6307146F5EB64D3ED4(L_15, L_16, NULL);
		return;
	}

IL_006b:
	{
		// else if (joint != null && spawn.GetStateUp(trackedObj.inputSource))
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_17 = __this->___joint_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_0164;
		}
	}
	{
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_19 = __this->___spawn_6;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_20 = __this->___trackedObj_7;
		NullCheck(L_20);
		int32_t L_21 = L_20->___inputSource_5;
		NullCheck(L_19);
		bool L_22;
		L_22 = SteamVR_Action_Boolean_GetStateUp_mFD84CD2C7AEE34CDF90649E6597D1E906F22F89C(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_0164;
		}
	}
	{
		// GameObject go = joint.gameObject;
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_23 = __this->___joint_8;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		// Rigidbody rigidbody = go.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24;
		NullCheck(L_25);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26;
		L_26 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_25, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		V_1 = L_26;
		// Object.DestroyImmediate(joint);
		FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E* L_27 = __this->___joint_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_27, NULL);
		// joint = null;
		__this->___joint_8 = (FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joint_8), (void*)(FixedJoint_tA10A077292A86BA2A2AB3542E3441610055F806E*)NULL);
		// Object.Destroy(go, 15.0f);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_25, (15.0f), NULL);
		// Transform origin = trackedObj.origin ? trackedObj.origin : trackedObj.transform.parent;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_28 = __this->___trackedObj_7;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = L_28->___origin_6;
		bool L_30;
		L_30 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_29, NULL);
		if (L_30)
		{
			goto IL_00e9;
		}
	}
	{
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_31 = __this->___trackedObj_7;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_32, NULL);
		G_B8_0 = L_33;
		goto IL_00f4;
	}

IL_00e9:
	{
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_34 = __this->___trackedObj_7;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = L_34->___origin_6;
		G_B8_0 = L_35;
	}

IL_00f4:
	{
		V_2 = G_B8_0;
		// if (origin != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_012e;
		}
	}
	{
		// rigidbody.velocity = origin.TransformVector(trackedObj.GetVelocity());
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_38 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = V_2;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_40 = __this->___trackedObj_7;
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = SteamVR_Behaviour_Pose_GetVelocity_mE11C36347925354155DCB58FA62381F2BCC562EA(L_40, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_39, L_41, NULL);
		NullCheck(L_38);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_38, L_42, NULL);
		// rigidbody.angularVelocity = origin.TransformVector(trackedObj.GetAngularVelocity());
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_43 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = V_2;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_45 = __this->___trackedObj_7;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = SteamVR_Behaviour_Pose_GetAngularVelocity_mE9FEBECBC6DE7A34B975793D3D2F4D2E4B252E51(L_45, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_TransformVector_mFA6FB7570442728CB15D03C696353148711CDD98(L_44, L_46, NULL);
		NullCheck(L_43);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_43, L_47, NULL);
		goto IL_0150;
	}

IL_012e:
	{
		// rigidbody.velocity = trackedObj.GetVelocity();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_48 = V_1;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_49 = __this->___trackedObj_7;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = SteamVR_Behaviour_Pose_GetVelocity_mE11C36347925354155DCB58FA62381F2BCC562EA(L_49, NULL);
		NullCheck(L_48);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_48, L_50, NULL);
		// rigidbody.angularVelocity = trackedObj.GetAngularVelocity();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_51 = V_1;
		SteamVR_Behaviour_Pose_tBD3B58E7E4A94F17D57CFDDC60252E9ED38BA121* L_52 = __this->___trackedObj_7;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = SteamVR_Behaviour_Pose_GetAngularVelocity_mE9FEBECBC6DE7A34B975793D3D2F4D2E4B252E51(L_52, NULL);
		NullCheck(L_51);
		Rigidbody_set_angularVelocity_m23266B4E52BF0D2E65CC984AC73CC40B8D4A27E0(L_51, L_53, NULL);
	}

IL_0150:
	{
		// rigidbody.maxAngularVelocity = rigidbody.angularVelocity.magnitude;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_54 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_55 = V_1;
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Rigidbody_get_angularVelocity_m4EACCFCF15CA441CCD53B24322C2E7B8EEBDF6A8(L_55, NULL);
		V_3 = L_56;
		float L_57;
		L_57 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		NullCheck(L_54);
		Rigidbody_set_maxAngularVelocity_m26E48B1DC6B9F8DBB81EE0681ABEB3AB255FC3F6(L_54, L_57, NULL);
	}

IL_0164:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_TestThrow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_TestThrow__ctor_m1D6C5B00E23BD752844A42A6588330363E7E1E55 (SteamVR_TestThrow_t219107F6BC7E0E1457A3E6D991556A52B44262CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamVR_Input_GetAction_TisSteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085_mE276A18B0628C50B582D24E3D0F6F2DC3CC13C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SteamVR_Input_t0DD834816170B2FF7481E717889F11FCB6A51298_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral368E804386E939D4381FB0417B6FDA2199D2C3D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SteamVR_Action_Boolean spawn = SteamVR_Input.GetAction<SteamVR_Action_Boolean>("InteractUI");
		il2cpp_codegen_runtime_class_init_inline(SteamVR_Input_t0DD834816170B2FF7481E717889F11FCB6A51298_il2cpp_TypeInfo_var);
		SteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085* L_0;
		L_0 = SteamVR_Input_GetAction_TisSteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085_mE276A18B0628C50B582D24E3D0F6F2DC3CC13C15(_stringLiteral368E804386E939D4381FB0417B6FDA2199D2C3D8, (bool)0, SteamVR_Input_GetAction_TisSteamVR_Action_Boolean_tD7D3760C5009A36484E9F78BB5C0F3358B46A085_mE276A18B0628C50B582D24E3D0F6F2DC3CC13C15_RuntimeMethod_var);
		__this->___spawn_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawn_6), (void*)L_0);
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
// System.Void Valve.VR.Extras.SteamVR_TestTrackedCamera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_TestTrackedCamera_OnEnable_mCFC336C099B8A9C22500DA49D5EB0E82F919AD31 (SteamVR_TestTrackedCamera_tD64A4D1719C2CE25E53CC3CFB5C0AC06A17FA243* __this, const RuntimeMethod* method) 
{
	{
		// SteamVR_TrackedCamera.VideoStreamTexture source = SteamVR_TrackedCamera.Source(undistorted);
		bool L_0 = __this->___undistorted_6;
		VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* L_1;
		L_1 = SteamVR_TrackedCamera_Source_mC5F07B345CA4D97899EE1C9863C3FF2522B2475A(L_0, 0, NULL);
		// source.Acquire();
		VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* L_2 = L_1;
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = VideoStreamTexture_Acquire_m3425090014E51A565185271E9AFC1D04FBF02BB7(L_2, NULL);
		// if (!source.hasCamera)
		NullCheck(L_2);
		bool L_4;
		L_4 = VideoStreamTexture_get_hasCamera_mB2FE27351C936EBFEBA4EE5FBE262CAD869773CD(L_2, NULL);
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_TestTrackedCamera::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_TestTrackedCamera_OnDisable_m776AFB505F5EBD66D3238AD30EE9BD83F591D9B0 (SteamVR_TestTrackedCamera_tD64A4D1719C2CE25E53CC3CFB5C0AC06A17FA243* __this, const RuntimeMethod* method) 
{
	{
		// material.mainTexture = null;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___material_4;
		NullCheck(L_0);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_0, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)NULL, NULL);
		// SteamVR_TrackedCamera.VideoStreamTexture source = SteamVR_TrackedCamera.Source(undistorted);
		bool L_1 = __this->___undistorted_6;
		VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* L_2;
		L_2 = SteamVR_TrackedCamera_Source_mC5F07B345CA4D97899EE1C9863C3FF2522B2475A(L_1, 0, NULL);
		// source.Release();
		NullCheck(L_2);
		uint64_t L_3;
		L_3 = VideoStreamTexture_Release_m87C40A64A6B313817EB3C076809C1ACC1B0EC62B(L_2, NULL);
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_TestTrackedCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_TestTrackedCamera_Update_m951BEAB26FF539F3CF2CAC61988599B316C3977A (SteamVR_TestTrackedCamera_tD64A4D1719C2CE25E53CC3CFB5C0AC06A17FA243* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	float V_2 = 0.0f;
	VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	RigidTransform_t53A42D7BF59C622BCCC3E647DD9088310D3A48CF V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// SteamVR_TrackedCamera.VideoStreamTexture source = SteamVR_TrackedCamera.Source(undistorted);
		bool L_0 = __this->___undistorted_6;
		VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* L_1;
		L_1 = SteamVR_TrackedCamera_Source_mC5F07B345CA4D97899EE1C9863C3FF2522B2475A(L_0, 0, NULL);
		V_0 = L_1;
		// Texture2D texture = source.texture;
		VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* L_2 = V_0;
		NullCheck(L_2);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = VideoStreamTexture_get_texture_m8F7F04439C6D9D1896A5F1779A2D32496194B8E0(L_2, NULL);
		V_1 = L_3;
		// if (texture == null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// material.mainTexture = texture;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___material_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = V_1;
		NullCheck(L_6);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_6, L_7, NULL);
		// float aspect = (float)texture.width / texture.height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_10);
		V_2 = ((float)(((float)L_9)/((float)L_11)));
		// if (cropped)
		bool L_12 = __this->___cropped_7;
		if (!L_12)
		{
			goto IL_00a6;
		}
	}
	{
		// VRTextureBounds_t bounds = source.frameBounds;
		VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* L_13 = V_0;
		NullCheck(L_13);
		VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 L_14;
		L_14 = VideoStreamTexture_get_frameBounds_m7990BA1FA13DF90DC41C41EFA889CB697C64925B_inline(L_13, NULL);
		V_3 = L_14;
		// material.mainTextureOffset = new Vector2(bounds.uMin, bounds.vMin);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___material_4;
		VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 L_16 = V_3;
		float L_17 = L_16.___uMin_0;
		VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 L_18 = V_3;
		float L_19 = L_18.___vMin_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), L_17, L_19, /*hidden argument*/NULL);
		NullCheck(L_15);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_15, L_20, NULL);
		// float du = bounds.uMax - bounds.uMin;
		VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 L_21 = V_3;
		float L_22 = L_21.___uMax_2;
		VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 L_23 = V_3;
		float L_24 = L_23.___uMin_0;
		V_4 = ((float)il2cpp_codegen_subtract(L_22, L_24));
		// float dv = bounds.vMax - bounds.vMin;
		VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 L_25 = V_3;
		float L_26 = L_25.___vMax_3;
		VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 L_27 = V_3;
		float L_28 = L_27.___vMin_1;
		V_5 = ((float)il2cpp_codegen_subtract(L_26, L_28));
		// material.mainTextureScale = new Vector2(du, dv);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = __this->___material_4;
		float L_30 = V_4;
		float L_31 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_32), L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_29);
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_29, L_32, NULL);
		// aspect *= Mathf.Abs(du / dv);
		float L_33 = V_2;
		float L_34 = V_4;
		float L_35 = V_5;
		float L_36;
		L_36 = fabsf(((float)(L_34/L_35)));
		V_2 = ((float)il2cpp_codegen_multiply(L_33, L_36));
		goto IL_00d0;
	}

IL_00a6:
	{
		// material.mainTextureOffset = Vector2.zero;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37 = __this->___material_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_37);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_37, L_38, NULL);
		// material.mainTextureScale = new Vector2(1, -1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_39 = __this->___material_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (1.0f), (-1.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		Material_set_mainTextureScale_mABC2B4327CCDC6BB0E0EA72C6F29817400F56EF1(L_39, L_40, NULL);
	}

IL_00d0:
	{
		// target.localScale = new Vector3(1, 1.0f / aspect, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41 = __this->___target_5;
		float L_42 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_43), (1.0f), ((float)((1.0f)/L_42)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_41, L_43, NULL);
		// if (source.hasTracking)
		VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* L_44 = V_0;
		NullCheck(L_44);
		bool L_45;
		L_45 = VideoStreamTexture_get_hasTracking_m35FD8B51C40760E1816736D3D9775F4A8036A52A(L_44, NULL);
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		// SteamVR_Utils.RigidTransform rigidTransform = source.transform;
		VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* L_46 = V_0;
		NullCheck(L_46);
		RigidTransform_t53A42D7BF59C622BCCC3E647DD9088310D3A48CF L_47;
		L_47 = VideoStreamTexture_get_transform_mE527BA8CC0AE6E92C179BB1C331F1C9D68ADFDC0(L_46, NULL);
		V_6 = L_47;
		// target.localPosition = rigidTransform.pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = __this->___target_5;
		RigidTransform_t53A42D7BF59C622BCCC3E647DD9088310D3A48CF L_49 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = L_49.___pos_0;
		NullCheck(L_48);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_48, L_50, NULL);
		// target.localRotation = rigidTransform.rot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = __this->___target_5;
		RigidTransform_t53A42D7BF59C622BCCC3E647DD9088310D3A48CF L_52 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53 = L_52.___rot_1;
		NullCheck(L_51);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_51, L_53, NULL);
	}

IL_0125:
	{
		// }
		return;
	}
}
// System.Void Valve.VR.Extras.SteamVR_TestTrackedCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SteamVR_TestTrackedCamera__ctor_m79377CD78E6D85D46684F545C2FEDB1161E47D9F (SteamVR_TestTrackedCamera_tD64A4D1719C2CE25E53CC3CFB5C0AC06A17FA243* __this, const RuntimeMethod* method) 
{
	{
		// public bool undistorted = true;
		__this->___undistorted_6 = (bool)1;
		// public bool cropped = true;
		__this->___cropped_7 = (bool)1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_m870B77F6A5225EC21D9778043F987B9B17D08F6B_inline (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_values, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___0_values;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0047;
	}

IL_0015:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___0_values;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_4 = 1;
		goto IL_0038;
	}

IL_001e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___0_values;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = V_1;
		V_5 = (bool)((((float)L_9) > ((float)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0031;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___0_values;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = L_15;
	}

IL_0031:
	{
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_4;
		int32_t L_18 = V_0;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_001e;
		}
	}
	{
		float L_20 = V_1;
		V_3 = L_20;
		goto IL_0047;
	}

IL_0047:
	{
		float L_21 = V_3;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m379B20A820266ACF82A21425B9CAE8DCD773CFBB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		float L_2 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_a;
		float L_4 = L_3.___g_1;
		float L_5 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___b_2;
		float L_8 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___a_3;
		float L_11 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeEventHandler_Invoke_m21CFA2C8F7CEE3D8610502A41CB3A04BA8772671_inline (GazeEventHandler_tE19F14DE0F1A0FC20745C8DD8BED73567A6973B2* __this, RuntimeObject* ___0_sender, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8 ___1_gazeEventArgs, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, GazeEventArgs_t0907675248B75B97C7C43C1882D5E86A423EC4A8, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_gazeEventArgs, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventHandler_Invoke_mA5397DE3C43ABE3391FE7B834BD089946865CF40_inline (PointerEventHandler_t6A6A464504C73019E33780B79F2842AFEA9CBE24* __this, RuntimeObject* ___0_sender, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415 ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, PointerEventArgs_t87CC3197C81A4D89F6BCBA4DE41F80A2C0179415, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 VideoStreamTexture_get_frameBounds_m7990BA1FA13DF90DC41C41EFA889CB697C64925B_inline (VideoStreamTexture_t043987189E8DB029189758EA165F296EB5AB01DA* __this, const RuntimeMethod* method) 
{
	{
		// public VRTextureBounds_t frameBounds { get; private set; }
		VRTextureBounds_t_tBFECB5432BDEBBF954E74C19D2F96FE0E9FB01B3 L_0 = __this->___U3CframeBoundsU3Ek__BackingField_1;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
