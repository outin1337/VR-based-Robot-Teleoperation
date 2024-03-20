#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Single UnityEngine.WheelHit::get_forwardSlip()
extern void WheelHit_get_forwardSlip_m1BA6AA2379368EFE2200B92AB4CA20F1AD537CCE (void);
// 0x00000002 System.Single UnityEngine.WheelHit::get_sidewaysSlip()
extern void WheelHit_get_sidewaysSlip_m7E27E0B36C1CC096C56B8815B7C1E7D380D6627B (void);
// 0x00000003 System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
extern void WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8 (void);
// 0x00000004 System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
extern void WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3 (void);
// 0x00000005 System.Boolean UnityEngine.WheelCollider::get_isGrounded()
extern void WheelCollider_get_isGrounded_mA24C86DA670A02E01ACE176B4AF30F801244F327 (void);
// 0x00000006 System.Single UnityEngine.WheelCollider::get_rpm()
extern void WheelCollider_get_rpm_m7AFAA813ED3965AE4B2A2E7CBC6FB2B26B68ED52 (void);
// 0x00000007 System.Void UnityEngine.WheelCollider::ConfigureVehicleSubsteps(System.Single,System.Int32,System.Int32)
extern void WheelCollider_ConfigureVehicleSubsteps_mE2D86B3F981158E554EBD8F79F255F359EBD1488 (void);
// 0x00000008 System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern void WheelCollider_GetWorldPose_m8C41FA2AE9ED543AB94A6E3226523A2FE83FA890 (void);
// 0x00000009 System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
extern void WheelCollider_GetGroundHit_mCB73878577BC5AAEBEA8572FA62326C4C71B3EF2 (void);
static Il2CppMethodPointer s_methodPointers[9] = 
{
	WheelHit_get_forwardSlip_m1BA6AA2379368EFE2200B92AB4CA20F1AD537CCE,
	WheelHit_get_sidewaysSlip_m7E27E0B36C1CC096C56B8815B7C1E7D380D6627B,
	WheelCollider_set_motorTorque_m4958AAF7D867CF7570420F9BAFAF04DC904F02A8,
	WheelCollider_set_steerAngle_m7BF83B27D8956355F873537939BE9F35CF3113C3,
	WheelCollider_get_isGrounded_mA24C86DA670A02E01ACE176B4AF30F801244F327,
	WheelCollider_get_rpm_m7AFAA813ED3965AE4B2A2E7CBC6FB2B26B68ED52,
	WheelCollider_ConfigureVehicleSubsteps_mE2D86B3F981158E554EBD8F79F255F359EBD1488,
	WheelCollider_GetWorldPose_m8C41FA2AE9ED543AB94A6E3226523A2FE83FA890,
	WheelCollider_GetGroundHit_mCB73878577BC5AAEBEA8572FA62326C4C71B3EF2,
};
extern void WheelHit_get_forwardSlip_m1BA6AA2379368EFE2200B92AB4CA20F1AD537CCE_AdjustorThunk (void);
extern void WheelHit_get_sidewaysSlip_m7E27E0B36C1CC096C56B8815B7C1E7D380D6627B_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[2] = 
{
	{ 0x06000001, WheelHit_get_forwardSlip_m1BA6AA2379368EFE2200B92AB4CA20F1AD537CCE_AdjustorThunk },
	{ 0x06000002, WheelHit_get_sidewaysSlip_m7E27E0B36C1CC096C56B8815B7C1E7D380D6627B_AdjustorThunk },
};
static const int32_t s_InvokerIndices[9] = 
{
	5858,
	5858,
	4842,
	4842,
	5711,
	5858,
	1649,
	2320,
	3350,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_VehiclesModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VehiclesModule_CodeGenModule = 
{
	"UnityEngine.VehiclesModule.dll",
	9,
	s_methodPointers,
	2,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
