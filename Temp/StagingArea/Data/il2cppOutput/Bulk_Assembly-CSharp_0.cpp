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

// HandTool
struct HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96;
// Invector.CharacterController.vThirdPersonAnimator
struct vThirdPersonAnimator_tF24E16ABD5341B3D837CC1ECE04DEE08DF6A80D4;
// Invector.CharacterController.vThirdPersonController
struct vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437;
// Invector.CharacterController.vThirdPersonInput
struct vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F;
// Invector.CharacterController.vThirdPersonMotor
struct vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F;
// Movement
struct Movement_t0EE58EC6DE08B383697671C8720D14A34AFF7A2E;
// PlayerAction
struct PlayerAction_t246178FC03C8D2122CE3815BBA800BC75AA5D3B9;
// PlayerController
struct PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Tool
struct Tool_t3198B30B861349FB008BAD724A58D53AB36B3012;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_tE9BB282384F0196211AD1A480477254188211F57;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// VirtualJoystick
struct VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930;
// vComment
struct vComment_tDF948C14C8C4D9C562D65468C8D2819BEB96ABD9;
// vDestroyGameObject
struct vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65;
// vDestroyGameObject/<Start>d__1
struct U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F;
// vPickupItem
struct vPickupItem_t147D3AF5E224CF1731EB7B243DFC5FFD6D2A1810;
// vThirdPersonCamera
struct vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F;

extern RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* LocomotionType_t04F1026900EAA9F38E0A2312FF48BF2448755DF3_il2cpp_TypeInfo_var;
extern RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
extern RuntimeClass* vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral095A5B9B687B38E33C551AF8758A74993890275B;
extern String_t* _stringLiteral0F8A9C0EB23E615A1D8B064995A0E7D9645FEA6C;
extern String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
extern String_t* _stringLiteral1EBA140FDD9C6860A1730C408E3064AA417CA2A3;
extern String_t* _stringLiteral2046D9B4E31DEBB56DCDECDE34F58F58104E0065;
extern String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
extern String_t* _stringLiteral42BC272E41ECB68FE544AA26C6F3AC14C8E21034;
extern String_t* _stringLiteral4B320286A7B52182926BE83598B20BF6EE8B1A32;
extern String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
extern String_t* _stringLiteral4BE348194FAF4269E77089A77DA5A3B6F4412E44;
extern String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
extern String_t* _stringLiteral5D48DC9774E9816F60AF6F01EB4122B1EF00C64B;
extern String_t* _stringLiteral7412DA39CDA17626B9DA1357A2EA2CE17154045B;
extern String_t* _stringLiteral8AED85FDEAA118119BC98412BB4291AA2E38590B;
extern String_t* _stringLiteral92422CF7E9D6DAD8D348DC60D2E40DFD5CFCB32B;
extern String_t* _stringLiteral9A830C714BB2B52B8F817649335855437EBCB701;
extern String_t* _stringLiteralC93491C01451C2A4EDC538F9777B98B3239349C6;
extern String_t* _stringLiteralCC8D7979F8F6B6CAC74FEF89F920AA835E515A9E;
extern String_t* _stringLiteralCE2A5353874FB974AE9402FD90C0C5366C054D2D;
extern String_t* _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8;
extern String_t* _stringLiteralEAA800D70FBB4BCA67ABF8791260FEBEEB618C10;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m7FAA3F910786B0B5F3E0CBA755F38E0453EAF7BA_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_m656D49904B3F94B59037C34C25609C7F992F3625_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_m73D2BA64E56A00BAEDB982029C042CB4CF1A0D37_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisvThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437_mCE3055DABAA5762FF0DCAB451ED8A8D4FC410822_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponents_TisMonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_mFF32883CC15055E3DA209D02FFE7DFEB78C12741_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTool_t3198B30B861349FB008BAD724A58D53AB36B3012_m551C8A996CA76450F4DA17A2B18EAF74A3B666F9_RuntimeMethod_var;
extern const RuntimeMethod* Object_FindObjectOfType_TisvThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_m18DA38BDDF82025DCAD3D7CAB52576C327FE8F83_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m598F88DED9D87264A81225A7F8360E1E2D1C92DE_RuntimeMethod_var;
extern const RuntimeMethod* vExtensions_Contains_m6C5F59B2DEDE7B3D32602F7AE9B45E802659161A_RuntimeMethod_var;
extern const uint32_t HandTool_Animation_m6A4D243070AB985FAFED92D33EF1483FEB99F77A_MetadataUsageId;
extern const uint32_t HandTool_MoveAction_m44147F9413B1CA928ADA0D242C1C878A37F83901_MetadataUsageId;
extern const uint32_t HandTool_RemoveAction_m6C8DA2C2C75F5BDF618F2407275F9710D8F1D671_MetadataUsageId;
extern const uint32_t Movement_Update_m52C5E564F403608D8AF654430FD64687E5AF6548_MetadataUsageId;
extern const uint32_t PlayerAction_Start_m94C87DC882459A298238C04DBAF5ADF3B02B35DF_MetadataUsageId;
extern const uint32_t PlayerAction_Update_mB3EDC6C8A5A19B79CE880C73A8E5FAAA8924F2FE_MetadataUsageId;
extern const uint32_t PlayerController_Start_mC0C9B9461D0BDAC48EC43715818A4BA63C4F45EF_MetadataUsageId;
extern const uint32_t PlayerController_animatePlayer_mE886DF20647DB36DB772E5405560D7D583A5BDF0_MetadataUsageId;
extern const uint32_t PlayerController_moveMobilePlayer_mCCE71985D6CB6479615179BA0A08C3508EDDF511_MetadataUsageId;
extern const uint32_t PlayerController_movePlayer_mFC367B200C7A575AC24C37A5969521E36FECEDEA_MetadataUsageId;
extern const uint32_t Tool_Start_m8AA9112A289F45B51E19EB641D51BB9C4AE22593_MetadataUsageId;
extern const uint32_t U3CStartU3Ed__1_MoveNext_m9DCDA2C7C9A155035336517EA81DC633CBE592C1_MetadataUsageId;
extern const uint32_t U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m598F88DED9D87264A81225A7F8360E1E2D1C92DE_MetadataUsageId;
extern const uint32_t VirtualJoystick_FixedUpdate_m9991085820B15A4272B8730D5008CF3C8A88ACBC_MetadataUsageId;
extern const uint32_t VirtualJoystick_Update_mEDA3846E36B7B229F1DD689C12DB79D626E37402_MetadataUsageId;
extern const uint32_t vDestroyGameObject_Start_mD9715ADA8C30FD3D74D8D6B5F1A5BC00BF93ACA7_MetadataUsageId;
extern const uint32_t vExtensions_ClampAngle_m58ABF193781CA3AD4A3EDB941A8C55829E0A80B3_MetadataUsageId;
extern const uint32_t vExtensions_Contains_m6C5F59B2DEDE7B3D32602F7AE9B45E802659161A_MetadataUsageId;
extern const uint32_t vExtensions_Difference_mA2661F59E5710B34DF60A6FF441D3B502BC58760_MetadataUsageId;
extern const uint32_t vExtensions_GetBoundPoint_m013ECC6A65DB8A1E90A559C4C4F1C8036AE4B8C8_MetadataUsageId;
extern const uint32_t vExtensions_NearClipPlanePoints_mECAE3C1BF85D3F24483FAA364992B45B21908C3A_MetadataUsageId;
extern const uint32_t vExtensions_SetActiveChildren_m07D15FE9D0E85B678F52B6FB5BF70ACEF2EFBE92_MetadataUsageId;
extern const uint32_t vExtensions_SetLayerRecursively_m138B5843B3F124A4FD2C185A2A96993ADD30483A_MetadataUsageId;
extern const uint32_t vPickupItem_OnTriggerEnter_mEB7AA011410E65D1DFF65B9EB02E101B73121BA3_MetadataUsageId;
extern const uint32_t vPickupItem_Start_mEF3E1EA4FCBFD588CE680BFEE5B5BB6900E019CF_MetadataUsageId;
extern const uint32_t vThirdPersonAnimator_OnAnimatorMove_mC8BD57FADE6EFD7D0C42568CAB37CCD07C3F7C73_MetadataUsageId;
extern const uint32_t vThirdPersonAnimator_UpdateAnimator_mE2EC2ABDD44215CB1F4324C5A426A9E1728E056E_MetadataUsageId;
extern const uint32_t vThirdPersonCamera_CameraMovement_m0D8F5AF405A8FB779DE25AA313AA297283DA9644_MetadataUsageId;
extern const uint32_t vThirdPersonCamera_CullingRayCast_mCA97CF765A52EBC171402401B674C82183F5E24E_MetadataUsageId;
extern const uint32_t vThirdPersonCamera_FixedUpdate_m30A0543663B117F425E903470B9B341BE217E9AD_MetadataUsageId;
extern const uint32_t vThirdPersonCamera_Init_m1EC8A56D50ED823044C0F65FAC3BB27B09A3BBCF_MetadataUsageId;
extern const uint32_t vThirdPersonCamera_ScreenPointToRay_m6A7A68AC0DF777B4BCA067E6243B7C1324B9761A_MetadataUsageId;
extern const uint32_t vThirdPersonCamera_SetTarget_mF82A2724E72F174A198EDDC00A9403D25F331233_MetadataUsageId;
extern const uint32_t vThirdPersonCamera_get_instance_m3028F15438CE49FDA398E11FBE0E7D7C46F30A44_MetadataUsageId;
extern const uint32_t vThirdPersonController_Jump_m663F74E870920AF5DF1D28FC815E1F2010882700_MetadataUsageId;
extern const uint32_t vThirdPersonController_RotateWithAnotherTransform_mA8C7E53148B756AE3F01DA7A38CE4DC39090CFCF_MetadataUsageId;
extern const uint32_t vThirdPersonInput_CameraInput_mB16195AC52FD6CDAFDDB27B16E7108F72CF96416_MetadataUsageId;
extern const uint32_t vThirdPersonInput_CharacterInit_m32C95B7E1C0DDD50C0790004B5C3AE8B453D53A7_MetadataUsageId;
extern const uint32_t vThirdPersonInput_LateUpdate_m4D2F54374CE3E27D42B1706358EC485CA6AAA362_MetadataUsageId;
extern const uint32_t vThirdPersonInput_UpdateCameraStates_mF9E3C43A267B9F17968EF4C9F71CF02FB26AE760_MetadataUsageId;
extern const uint32_t vThirdPersonInput__ctor_m6E3CCC2D521954C839184DDE1DE601B05A791D1E_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_AirControl_m9959C777D90EDCA9B628A65D5F5AECA8A4F93486_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_CheckGroundDistance_m353B2A3091AE768AADC7C4B87244190C48E0E893_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_CheckGround_mD2E750B9FFC5D4152808803B4A16A24BEAB95DB9_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_ControlSpeed_m2941913A911A6056A2C584B167A7F5C3C8D9CB96_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_FreeMovement_mB6A22F1332081950BB69C4BC073ACCBAB01DE839_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_GroundAngle_m7E0A6E141879B0FBF8016CABF10FFEC78E330CBF_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_Init_m079DAD8228CD9B981D776CF48DF73AA47874D4CF_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_RemoveComponents_mC6CDF20BCC47046E7DD2C4B691254792049749F5_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_RotateToTarget_m8EE1D23AAF84452720101D57B08D16A7052BA16C_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_Sliding_m3A14617ACE0C1A43B78F015E7DA6EB8F9E9B4E32_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_StepOffset_m5F69945D3E8FED5DC65A503428A244EE5777DCBE_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_StrafeMovement_m48CCCD7DCC3E6181E72B454DB4244DDD1A87A350_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_UpdateTargetDirection_m8E839C0D87E77030F3EF24B7E2427B58B7EEAF57_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_get_freeLocomotionConditions_m158DB18E06FC15E80958A35F132EE7D02C24E304_MetadataUsageId;
extern const uint32_t vThirdPersonMotor_get_jumpFwdCondition_m5465BBCCD6A6ACC8A13CF5B8FE80C1B25D1FBC64_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
struct MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A;
struct RaycastHitU5BU5D_tE9BB282384F0196211AD1A480477254188211F57;
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93;


#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
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
#ifndef VEXTENSIONS_T5A75961295AEFB9972F5846C40BA4828A6E3C62F_H
#define VEXTENSIONS_T5A75961295AEFB9972F5846C40BA4828A6E3C62F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Invector.vExtensions
struct  vExtensions_t5A75961295AEFB9972F5846C40BA4828A6E3C62F  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEXTENSIONS_T5A75961295AEFB9972F5846C40BA4828A6E3C62F_H
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef U3CSTARTU3ED__1_T2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F_H
#define U3CSTARTU3ED__1_T2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// vDestroyGameObject_<Start>d__1
struct  U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F  : public RuntimeObject
{
public:
	// System.Int32 vDestroyGameObject_<Start>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object vDestroyGameObject_<Start>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// vDestroyGameObject vDestroyGameObject_<Start>d__1::<>4__this
	vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F, ___U3CU3E4__this_2)); }
	inline vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3ED__1_T2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
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
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#define LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_TBB9173D8B6939D476E67E849280AC9F4EC4D93B0_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#define WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifndef BOXPOINT_T0DB72B4BFF55B92502866B73D47DCBECE6B08B32_H
#define BOXPOINT_T0DB72B4BFF55B92502866B73D47DCBECE6B08B32_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Invector.BoxPoint
struct  BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32 
{
public:
	// UnityEngine.Vector3 Invector.BoxPoint::top
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___top_0;
	// UnityEngine.Vector3 Invector.BoxPoint::center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_1;
	// UnityEngine.Vector3 Invector.BoxPoint::bottom
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___bottom_2;

public:
	inline static int32_t get_offset_of_top_0() { return static_cast<int32_t>(offsetof(BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32, ___top_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_top_0() const { return ___top_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_top_0() { return &___top_0; }
	inline void set_top_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___top_0 = value;
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32, ___center_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_center_1() const { return ___center_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___center_1 = value;
	}

	inline static int32_t get_offset_of_bottom_2() { return static_cast<int32_t>(offsetof(BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32, ___bottom_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_bottom_2() const { return ___bottom_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_bottom_2() { return &___bottom_2; }
	inline void set_bottom_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___bottom_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXPOINT_T0DB72B4BFF55B92502866B73D47DCBECE6B08B32_H
#ifndef LOCOMOTIONTYPE_T04F1026900EAA9F38E0A2312FF48BF2448755DF3_H
#define LOCOMOTIONTYPE_T04F1026900EAA9F38E0A2312FF48BF2448755DF3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Invector.CharacterController.vThirdPersonMotor_LocomotionType
struct  LocomotionType_t04F1026900EAA9F38E0A2312FF48BF2448755DF3 
{
public:
	// System.Int32 Invector.CharacterController.vThirdPersonMotor_LocomotionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocomotionType_t04F1026900EAA9F38E0A2312FF48BF2448755DF3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCOMOTIONTYPE_T04F1026900EAA9F38E0A2312FF48BF2448755DF3_H
#ifndef CLIPPLANEPOINTS_T20AE479CE67DB28A40559835C3B4E444F20CD717_H
#define CLIPPLANEPOINTS_T20AE479CE67DB28A40559835C3B4E444F20CD717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Invector.ClipPlanePoints
struct  ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717 
{
public:
	// UnityEngine.Vector3 Invector.ClipPlanePoints::UpperLeft
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___UpperLeft_0;
	// UnityEngine.Vector3 Invector.ClipPlanePoints::UpperRight
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___UpperRight_1;
	// UnityEngine.Vector3 Invector.ClipPlanePoints::LowerLeft
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___LowerLeft_2;
	// UnityEngine.Vector3 Invector.ClipPlanePoints::LowerRight
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___LowerRight_3;

public:
	inline static int32_t get_offset_of_UpperLeft_0() { return static_cast<int32_t>(offsetof(ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717, ___UpperLeft_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_UpperLeft_0() const { return ___UpperLeft_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_UpperLeft_0() { return &___UpperLeft_0; }
	inline void set_UpperLeft_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___UpperLeft_0 = value;
	}

	inline static int32_t get_offset_of_UpperRight_1() { return static_cast<int32_t>(offsetof(ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717, ___UpperRight_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_UpperRight_1() const { return ___UpperRight_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_UpperRight_1() { return &___UpperRight_1; }
	inline void set_UpperRight_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___UpperRight_1 = value;
	}

	inline static int32_t get_offset_of_LowerLeft_2() { return static_cast<int32_t>(offsetof(ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717, ___LowerLeft_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_LowerLeft_2() const { return ___LowerLeft_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_LowerLeft_2() { return &___LowerLeft_2; }
	inline void set_LowerLeft_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___LowerLeft_2 = value;
	}

	inline static int32_t get_offset_of_LowerRight_3() { return static_cast<int32_t>(offsetof(ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717, ___LowerRight_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_LowerRight_3() const { return ___LowerRight_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_LowerRight_3() { return &___LowerRight_3; }
	inline void set_LowerRight_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___LowerRight_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIPPLANEPOINTS_T20AE479CE67DB28A40559835C3B4E444F20CD717_H
#ifndef HITBARPOINTS_TD86E37F4329677C178CCFD2F0935D0D01DB0D0F8_H
#define HITBARPOINTS_TD86E37F4329677C178CCFD2F0935D0D01DB0D0F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Invector.HitBarPoints
struct  HitBarPoints_tD86E37F4329677C178CCFD2F0935D0D01DB0D0F8 
{
public:
	// System.Int32 Invector.HitBarPoints::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HitBarPoints_tD86E37F4329677C178CCFD2F0935D0D01DB0D0F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HITBARPOINTS_TD86E37F4329677C178CCFD2F0935D0D01DB0D0F8_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef CURSORLOCKMODE_TF9B28266D253124BE56C232B7ED2D9F7CC3D1E38_H
#define CURSORLOCKMODE_TF9B28266D253124BE56C232B7ED2D9F7CC3D1E38_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CursorLockMode
struct  CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_tF9B28266D253124BE56C232B7ED2D9F7CC3D1E38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSORLOCKMODE_TF9B28266D253124BE56C232B7ED2D9F7CC3D1E38_H
#ifndef FORCEMODE_T76188FF14D0038E184106555207A81218E97D0A5_H
#define FORCEMODE_T76188FF14D0038E184106555207A81218E97D0A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode
struct  ForceMode_t76188FF14D0038E184106555207A81218E97D0A5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t76188FF14D0038E184106555207A81218E97D0A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEMODE_T76188FF14D0038E184106555207A81218E97D0A5_H
#ifndef HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#define HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T30B57DC00548E963A569318C8F4A4123E7447E37_H
#ifndef KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#define KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_TC93EA87C5A6901160B583ADFCD3EF6726570DC3C_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef PHYSICMATERIALCOMBINE_TC0ACD5BFB99EA82B9D6C908D767D41E259403482_H
#define PHYSICMATERIALCOMBINE_TC0ACD5BFB99EA82B9D6C908D767D41E259403482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterialCombine
struct  PhysicMaterialCombine_tC0ACD5BFB99EA82B9D6C908D767D41E259403482 
{
public:
	// System.Int32 UnityEngine.PhysicMaterialCombine::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhysicMaterialCombine_tC0ACD5BFB99EA82B9D6C908D767D41E259403482, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIALCOMBINE_TC0ACD5BFB99EA82B9D6C908D767D41E259403482_H
#ifndef RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#define RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_TE2163D4CB3E6B267E29F8ABE41684490E4A614B2_H
#ifndef RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#define RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T19695F18F9265FE5425062BBA6A4D330480538C3_H
#ifndef RIGIDBODYCONSTRAINTS_TC57FF2BFB454674CE1FDEF9EEDAF5FCFAB23FFC8_H
#define RIGIDBODYCONSTRAINTS_TC57FF2BFB454674CE1FDEF9EEDAF5FCFAB23FFC8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RigidbodyConstraints
struct  RigidbodyConstraints_tC57FF2BFB454674CE1FDEF9EEDAF5FCFAB23FFC8 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints_tC57FF2BFB454674CE1FDEF9EEDAF5FCFAB23FFC8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODYCONSTRAINTS_TC57FF2BFB454674CE1FDEF9EEDAF5FCFAB23FFC8_H
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
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef AUDIOCLIP_TCC3C35F579203CE2601243585AB3D6953C3BA051_H
#define AUDIOCLIP_TCC3C35F579203CE2601243585AB3D6953C3BA051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_4), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_TCC3C35F579203CE2601243585AB3D6953C3BA051_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef PHYSICMATERIAL_TBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8_H
#define PHYSICMATERIAL_TBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_TBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef CANVASRENDERER_TB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_H
#define CANVASRENDERER_TB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasRenderer
struct  CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisMaskU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72, ___U3CisMaskU3Ek__BackingField_4)); }
	inline bool get_U3CisMaskU3Ek__BackingField_4() const { return ___U3CisMaskU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisMaskU3Ek__BackingField_4() { return &___U3CisMaskU3Ek__BackingField_4; }
	inline void set_U3CisMaskU3Ek__BackingField_4(bool value)
	{
		___U3CisMaskU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASRENDERER_TB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_H
#ifndef COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#define COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifndef RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#define RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifndef RIGIDBODY_TE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_H
#define RIGIDBODY_TE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_TE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef ANIMATOR_TF1A88E66B3B731DDA75A066DBAE9C55837660F5A_H
#define ANIMATOR_TF1A88E66B3B731DDA75A066DBAE9C55837660F5A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_TF1A88E66B3B731DDA75A066DBAE9C55837660F5A_H
#ifndef AUDIOBEHAVIOUR_TC612EC4E17A648A5C568621F3FBF1DBD773C71C7_H
#define AUDIOBEHAVIOUR_TC612EC4E17A648A5C568621F3FBF1DBD773C71C7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_TC612EC4E17A648A5C568621F3FBF1DBD773C71C7_H
#ifndef BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
#define BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_H
#ifndef CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#define CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifndef CAPSULECOLLIDER_T5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_H
#define CAPSULECOLLIDER_T5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#define RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifndef VTHIRDPERSONINPUT_TC30BBEC81AE0D8883E2F620479392EEC61D0FD9F_H
#define VTHIRDPERSONINPUT_TC30BBEC81AE0D8883E2F620479392EEC61D0FD9F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Invector.CharacterController.vThirdPersonInput
struct  vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String Invector.CharacterController.vThirdPersonInput::horizontalInput
	String_t* ___horizontalInput_4;
	// System.String Invector.CharacterController.vThirdPersonInput::verticallInput
	String_t* ___verticallInput_5;
	// UnityEngine.KeyCode Invector.CharacterController.vThirdPersonInput::jumpInput
	int32_t ___jumpInput_6;
	// UnityEngine.KeyCode Invector.CharacterController.vThirdPersonInput::strafeInput
	int32_t ___strafeInput_7;
	// UnityEngine.KeyCode Invector.CharacterController.vThirdPersonInput::sprintInput
	int32_t ___sprintInput_8;
	// System.String Invector.CharacterController.vThirdPersonInput::rotateCameraXInput
	String_t* ___rotateCameraXInput_9;
	// System.String Invector.CharacterController.vThirdPersonInput::rotateCameraYInput
	String_t* ___rotateCameraYInput_10;
	// vThirdPersonCamera Invector.CharacterController.vThirdPersonInput::tpCamera
	vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * ___tpCamera_11;
	// System.String Invector.CharacterController.vThirdPersonInput::customCameraState
	String_t* ___customCameraState_12;
	// System.String Invector.CharacterController.vThirdPersonInput::customlookAtPoint
	String_t* ___customlookAtPoint_13;
	// System.Boolean Invector.CharacterController.vThirdPersonInput::changeCameraState
	bool ___changeCameraState_14;
	// System.Boolean Invector.CharacterController.vThirdPersonInput::smoothCameraState
	bool ___smoothCameraState_15;
	// System.Boolean Invector.CharacterController.vThirdPersonInput::keepDirection
	bool ___keepDirection_16;
	// Invector.CharacterController.vThirdPersonController Invector.CharacterController.vThirdPersonInput::cc
	vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * ___cc_17;

public:
	inline static int32_t get_offset_of_horizontalInput_4() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___horizontalInput_4)); }
	inline String_t* get_horizontalInput_4() const { return ___horizontalInput_4; }
	inline String_t** get_address_of_horizontalInput_4() { return &___horizontalInput_4; }
	inline void set_horizontalInput_4(String_t* value)
	{
		___horizontalInput_4 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalInput_4), value);
	}

	inline static int32_t get_offset_of_verticallInput_5() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___verticallInput_5)); }
	inline String_t* get_verticallInput_5() const { return ___verticallInput_5; }
	inline String_t** get_address_of_verticallInput_5() { return &___verticallInput_5; }
	inline void set_verticallInput_5(String_t* value)
	{
		___verticallInput_5 = value;
		Il2CppCodeGenWriteBarrier((&___verticallInput_5), value);
	}

	inline static int32_t get_offset_of_jumpInput_6() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___jumpInput_6)); }
	inline int32_t get_jumpInput_6() const { return ___jumpInput_6; }
	inline int32_t* get_address_of_jumpInput_6() { return &___jumpInput_6; }
	inline void set_jumpInput_6(int32_t value)
	{
		___jumpInput_6 = value;
	}

	inline static int32_t get_offset_of_strafeInput_7() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___strafeInput_7)); }
	inline int32_t get_strafeInput_7() const { return ___strafeInput_7; }
	inline int32_t* get_address_of_strafeInput_7() { return &___strafeInput_7; }
	inline void set_strafeInput_7(int32_t value)
	{
		___strafeInput_7 = value;
	}

	inline static int32_t get_offset_of_sprintInput_8() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___sprintInput_8)); }
	inline int32_t get_sprintInput_8() const { return ___sprintInput_8; }
	inline int32_t* get_address_of_sprintInput_8() { return &___sprintInput_8; }
	inline void set_sprintInput_8(int32_t value)
	{
		___sprintInput_8 = value;
	}

	inline static int32_t get_offset_of_rotateCameraXInput_9() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___rotateCameraXInput_9)); }
	inline String_t* get_rotateCameraXInput_9() const { return ___rotateCameraXInput_9; }
	inline String_t** get_address_of_rotateCameraXInput_9() { return &___rotateCameraXInput_9; }
	inline void set_rotateCameraXInput_9(String_t* value)
	{
		___rotateCameraXInput_9 = value;
		Il2CppCodeGenWriteBarrier((&___rotateCameraXInput_9), value);
	}

	inline static int32_t get_offset_of_rotateCameraYInput_10() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___rotateCameraYInput_10)); }
	inline String_t* get_rotateCameraYInput_10() const { return ___rotateCameraYInput_10; }
	inline String_t** get_address_of_rotateCameraYInput_10() { return &___rotateCameraYInput_10; }
	inline void set_rotateCameraYInput_10(String_t* value)
	{
		___rotateCameraYInput_10 = value;
		Il2CppCodeGenWriteBarrier((&___rotateCameraYInput_10), value);
	}

	inline static int32_t get_offset_of_tpCamera_11() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___tpCamera_11)); }
	inline vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * get_tpCamera_11() const { return ___tpCamera_11; }
	inline vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F ** get_address_of_tpCamera_11() { return &___tpCamera_11; }
	inline void set_tpCamera_11(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * value)
	{
		___tpCamera_11 = value;
		Il2CppCodeGenWriteBarrier((&___tpCamera_11), value);
	}

	inline static int32_t get_offset_of_customCameraState_12() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___customCameraState_12)); }
	inline String_t* get_customCameraState_12() const { return ___customCameraState_12; }
	inline String_t** get_address_of_customCameraState_12() { return &___customCameraState_12; }
	inline void set_customCameraState_12(String_t* value)
	{
		___customCameraState_12 = value;
		Il2CppCodeGenWriteBarrier((&___customCameraState_12), value);
	}

	inline static int32_t get_offset_of_customlookAtPoint_13() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___customlookAtPoint_13)); }
	inline String_t* get_customlookAtPoint_13() const { return ___customlookAtPoint_13; }
	inline String_t** get_address_of_customlookAtPoint_13() { return &___customlookAtPoint_13; }
	inline void set_customlookAtPoint_13(String_t* value)
	{
		___customlookAtPoint_13 = value;
		Il2CppCodeGenWriteBarrier((&___customlookAtPoint_13), value);
	}

	inline static int32_t get_offset_of_changeCameraState_14() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___changeCameraState_14)); }
	inline bool get_changeCameraState_14() const { return ___changeCameraState_14; }
	inline bool* get_address_of_changeCameraState_14() { return &___changeCameraState_14; }
	inline void set_changeCameraState_14(bool value)
	{
		___changeCameraState_14 = value;
	}

	inline static int32_t get_offset_of_smoothCameraState_15() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___smoothCameraState_15)); }
	inline bool get_smoothCameraState_15() const { return ___smoothCameraState_15; }
	inline bool* get_address_of_smoothCameraState_15() { return &___smoothCameraState_15; }
	inline void set_smoothCameraState_15(bool value)
	{
		___smoothCameraState_15 = value;
	}

	inline static int32_t get_offset_of_keepDirection_16() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___keepDirection_16)); }
	inline bool get_keepDirection_16() const { return ___keepDirection_16; }
	inline bool* get_address_of_keepDirection_16() { return &___keepDirection_16; }
	inline void set_keepDirection_16(bool value)
	{
		___keepDirection_16 = value;
	}

	inline static int32_t get_offset_of_cc_17() { return static_cast<int32_t>(offsetof(vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F, ___cc_17)); }
	inline vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * get_cc_17() const { return ___cc_17; }
	inline vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 ** get_address_of_cc_17() { return &___cc_17; }
	inline void set_cc_17(vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * value)
	{
		___cc_17 = value;
		Il2CppCodeGenWriteBarrier((&___cc_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VTHIRDPERSONINPUT_TC30BBEC81AE0D8883E2F620479392EEC61D0FD9F_H
#ifndef VTHIRDPERSONMOTOR_TF003CB66852886C054134EDFB6D948BACFC7862F_H
#define VTHIRDPERSONMOTOR_TF003CB66852886C054134EDFB6D948BACFC7862F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Invector.CharacterController.vThirdPersonMotor
struct  vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.LayerMask Invector.CharacterController.vThirdPersonMotor::groundLayer
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___groundLayer_4;
	// System.Single Invector.CharacterController.vThirdPersonMotor::groundMinDistance
	float ___groundMinDistance_5;
	// System.Single Invector.CharacterController.vThirdPersonMotor::groundMaxDistance
	float ___groundMaxDistance_6;
	// Invector.CharacterController.vThirdPersonMotor_LocomotionType Invector.CharacterController.vThirdPersonMotor::locomotionType
	int32_t ___locomotionType_7;
	// System.Boolean Invector.CharacterController.vThirdPersonMotor::lockMovement
	bool ___lockMovement_8;
	// System.Single Invector.CharacterController.vThirdPersonMotor::freeRotationSpeed
	float ___freeRotationSpeed_9;
	// System.Single Invector.CharacterController.vThirdPersonMotor::strafeRotationSpeed
	float ___strafeRotationSpeed_10;
	// System.Boolean Invector.CharacterController.vThirdPersonMotor::jumpAirControl
	bool ___jumpAirControl_11;
	// System.Single Invector.CharacterController.vThirdPersonMotor::jumpTimer
	float ___jumpTimer_12;
	// System.Single Invector.CharacterController.vThirdPersonMotor::jumpCounter
	float ___jumpCounter_13;
	// System.Single Invector.CharacterController.vThirdPersonMotor::jumpForward
	float ___jumpForward_14;
	// System.Single Invector.CharacterController.vThirdPersonMotor::jumpHeight
	float ___jumpHeight_15;
	// System.Boolean Invector.CharacterController.vThirdPersonMotor::useRootMotion
	bool ___useRootMotion_16;
	// System.Single Invector.CharacterController.vThirdPersonMotor::freeWalkSpeed
	float ___freeWalkSpeed_17;
	// System.Single Invector.CharacterController.vThirdPersonMotor::freeRunningSpeed
	float ___freeRunningSpeed_18;
	// System.Single Invector.CharacterController.vThirdPersonMotor::freeSprintSpeed
	float ___freeSprintSpeed_19;
	// System.Single Invector.CharacterController.vThirdPersonMotor::strafeWalkSpeed
	float ___strafeWalkSpeed_20;
	// System.Single Invector.CharacterController.vThirdPersonMotor::strafeRunningSpeed
	float ___strafeRunningSpeed_21;
	// System.Single Invector.CharacterController.vThirdPersonMotor::strafeSprintSpeed
	float ___strafeSprintSpeed_22;
	// System.Single Invector.CharacterController.vThirdPersonMotor::stepOffsetEnd
	float ___stepOffsetEnd_23;
	// System.Single Invector.CharacterController.vThirdPersonMotor::stepOffsetStart
	float ___stepOffsetStart_24;
	// System.Single Invector.CharacterController.vThirdPersonMotor::stepSmooth
	float ___stepSmooth_25;
	// System.Single Invector.CharacterController.vThirdPersonMotor::slopeLimit
	float ___slopeLimit_26;
	// System.Single Invector.CharacterController.vThirdPersonMotor::extraGravity
	float ___extraGravity_27;
	// System.Single Invector.CharacterController.vThirdPersonMotor::groundDistance
	float ___groundDistance_28;
	// UnityEngine.RaycastHit Invector.CharacterController.vThirdPersonMotor::groundHit
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___groundHit_29;
	// System.Boolean Invector.CharacterController.vThirdPersonMotor::isGrounded
	bool ___isGrounded_30;
	// System.Boolean Invector.CharacterController.vThirdPersonMotor::isStrafing
	bool ___isStrafing_31;
	// System.Boolean Invector.CharacterController.vThirdPersonMotor::isSprinting
	bool ___isSprinting_32;
	// System.Boolean Invector.CharacterController.vThirdPersonMotor::isSliding
	bool ___isSliding_33;
	// System.Boolean Invector.CharacterController.vThirdPersonMotor::isJumping
	bool ___isJumping_34;
	// UnityEngine.Vector3 Invector.CharacterController.vThirdPersonMotor::targetDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetDirection_35;
	// UnityEngine.Quaternion Invector.CharacterController.vThirdPersonMotor::targetRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___targetRotation_36;
	// UnityEngine.Quaternion Invector.CharacterController.vThirdPersonMotor::freeRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___freeRotation_37;
	// System.Boolean Invector.CharacterController.vThirdPersonMotor::keepDirection
	bool ___keepDirection_38;
	// UnityEngine.Animator Invector.CharacterController.vThirdPersonMotor::animator
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator_39;
	// UnityEngine.Rigidbody Invector.CharacterController.vThirdPersonMotor::_rigidbody
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ____rigidbody_40;
	// UnityEngine.PhysicMaterial Invector.CharacterController.vThirdPersonMotor::maxFrictionPhysics
	PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___maxFrictionPhysics_41;
	// UnityEngine.PhysicMaterial Invector.CharacterController.vThirdPersonMotor::frictionPhysics
	PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___frictionPhysics_42;
	// UnityEngine.PhysicMaterial Invector.CharacterController.vThirdPersonMotor::slippyPhysics
	PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___slippyPhysics_43;
	// UnityEngine.CapsuleCollider Invector.CharacterController.vThirdPersonMotor::_capsuleCollider
	CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * ____capsuleCollider_44;
	// System.Single Invector.CharacterController.vThirdPersonMotor::colliderHeight
	float ___colliderHeight_45;
	// UnityEngine.Vector2 Invector.CharacterController.vThirdPersonMotor::input
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___input_46;
	// System.Single Invector.CharacterController.vThirdPersonMotor::speed
	float ___speed_47;
	// System.Single Invector.CharacterController.vThirdPersonMotor::direction
	float ___direction_48;
	// System.Single Invector.CharacterController.vThirdPersonMotor::verticalVelocity
	float ___verticalVelocity_49;
	// System.Single Invector.CharacterController.vThirdPersonMotor::velocity
	float ___velocity_50;

public:
	inline static int32_t get_offset_of_groundLayer_4() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___groundLayer_4)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_groundLayer_4() const { return ___groundLayer_4; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_groundLayer_4() { return &___groundLayer_4; }
	inline void set_groundLayer_4(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___groundLayer_4 = value;
	}

	inline static int32_t get_offset_of_groundMinDistance_5() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___groundMinDistance_5)); }
	inline float get_groundMinDistance_5() const { return ___groundMinDistance_5; }
	inline float* get_address_of_groundMinDistance_5() { return &___groundMinDistance_5; }
	inline void set_groundMinDistance_5(float value)
	{
		___groundMinDistance_5 = value;
	}

	inline static int32_t get_offset_of_groundMaxDistance_6() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___groundMaxDistance_6)); }
	inline float get_groundMaxDistance_6() const { return ___groundMaxDistance_6; }
	inline float* get_address_of_groundMaxDistance_6() { return &___groundMaxDistance_6; }
	inline void set_groundMaxDistance_6(float value)
	{
		___groundMaxDistance_6 = value;
	}

	inline static int32_t get_offset_of_locomotionType_7() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___locomotionType_7)); }
	inline int32_t get_locomotionType_7() const { return ___locomotionType_7; }
	inline int32_t* get_address_of_locomotionType_7() { return &___locomotionType_7; }
	inline void set_locomotionType_7(int32_t value)
	{
		___locomotionType_7 = value;
	}

	inline static int32_t get_offset_of_lockMovement_8() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___lockMovement_8)); }
	inline bool get_lockMovement_8() const { return ___lockMovement_8; }
	inline bool* get_address_of_lockMovement_8() { return &___lockMovement_8; }
	inline void set_lockMovement_8(bool value)
	{
		___lockMovement_8 = value;
	}

	inline static int32_t get_offset_of_freeRotationSpeed_9() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___freeRotationSpeed_9)); }
	inline float get_freeRotationSpeed_9() const { return ___freeRotationSpeed_9; }
	inline float* get_address_of_freeRotationSpeed_9() { return &___freeRotationSpeed_9; }
	inline void set_freeRotationSpeed_9(float value)
	{
		___freeRotationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_strafeRotationSpeed_10() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___strafeRotationSpeed_10)); }
	inline float get_strafeRotationSpeed_10() const { return ___strafeRotationSpeed_10; }
	inline float* get_address_of_strafeRotationSpeed_10() { return &___strafeRotationSpeed_10; }
	inline void set_strafeRotationSpeed_10(float value)
	{
		___strafeRotationSpeed_10 = value;
	}

	inline static int32_t get_offset_of_jumpAirControl_11() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___jumpAirControl_11)); }
	inline bool get_jumpAirControl_11() const { return ___jumpAirControl_11; }
	inline bool* get_address_of_jumpAirControl_11() { return &___jumpAirControl_11; }
	inline void set_jumpAirControl_11(bool value)
	{
		___jumpAirControl_11 = value;
	}

	inline static int32_t get_offset_of_jumpTimer_12() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___jumpTimer_12)); }
	inline float get_jumpTimer_12() const { return ___jumpTimer_12; }
	inline float* get_address_of_jumpTimer_12() { return &___jumpTimer_12; }
	inline void set_jumpTimer_12(float value)
	{
		___jumpTimer_12 = value;
	}

	inline static int32_t get_offset_of_jumpCounter_13() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___jumpCounter_13)); }
	inline float get_jumpCounter_13() const { return ___jumpCounter_13; }
	inline float* get_address_of_jumpCounter_13() { return &___jumpCounter_13; }
	inline void set_jumpCounter_13(float value)
	{
		___jumpCounter_13 = value;
	}

	inline static int32_t get_offset_of_jumpForward_14() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___jumpForward_14)); }
	inline float get_jumpForward_14() const { return ___jumpForward_14; }
	inline float* get_address_of_jumpForward_14() { return &___jumpForward_14; }
	inline void set_jumpForward_14(float value)
	{
		___jumpForward_14 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_15() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___jumpHeight_15)); }
	inline float get_jumpHeight_15() const { return ___jumpHeight_15; }
	inline float* get_address_of_jumpHeight_15() { return &___jumpHeight_15; }
	inline void set_jumpHeight_15(float value)
	{
		___jumpHeight_15 = value;
	}

	inline static int32_t get_offset_of_useRootMotion_16() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___useRootMotion_16)); }
	inline bool get_useRootMotion_16() const { return ___useRootMotion_16; }
	inline bool* get_address_of_useRootMotion_16() { return &___useRootMotion_16; }
	inline void set_useRootMotion_16(bool value)
	{
		___useRootMotion_16 = value;
	}

	inline static int32_t get_offset_of_freeWalkSpeed_17() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___freeWalkSpeed_17)); }
	inline float get_freeWalkSpeed_17() const { return ___freeWalkSpeed_17; }
	inline float* get_address_of_freeWalkSpeed_17() { return &___freeWalkSpeed_17; }
	inline void set_freeWalkSpeed_17(float value)
	{
		___freeWalkSpeed_17 = value;
	}

	inline static int32_t get_offset_of_freeRunningSpeed_18() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___freeRunningSpeed_18)); }
	inline float get_freeRunningSpeed_18() const { return ___freeRunningSpeed_18; }
	inline float* get_address_of_freeRunningSpeed_18() { return &___freeRunningSpeed_18; }
	inline void set_freeRunningSpeed_18(float value)
	{
		___freeRunningSpeed_18 = value;
	}

	inline static int32_t get_offset_of_freeSprintSpeed_19() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___freeSprintSpeed_19)); }
	inline float get_freeSprintSpeed_19() const { return ___freeSprintSpeed_19; }
	inline float* get_address_of_freeSprintSpeed_19() { return &___freeSprintSpeed_19; }
	inline void set_freeSprintSpeed_19(float value)
	{
		___freeSprintSpeed_19 = value;
	}

	inline static int32_t get_offset_of_strafeWalkSpeed_20() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___strafeWalkSpeed_20)); }
	inline float get_strafeWalkSpeed_20() const { return ___strafeWalkSpeed_20; }
	inline float* get_address_of_strafeWalkSpeed_20() { return &___strafeWalkSpeed_20; }
	inline void set_strafeWalkSpeed_20(float value)
	{
		___strafeWalkSpeed_20 = value;
	}

	inline static int32_t get_offset_of_strafeRunningSpeed_21() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___strafeRunningSpeed_21)); }
	inline float get_strafeRunningSpeed_21() const { return ___strafeRunningSpeed_21; }
	inline float* get_address_of_strafeRunningSpeed_21() { return &___strafeRunningSpeed_21; }
	inline void set_strafeRunningSpeed_21(float value)
	{
		___strafeRunningSpeed_21 = value;
	}

	inline static int32_t get_offset_of_strafeSprintSpeed_22() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___strafeSprintSpeed_22)); }
	inline float get_strafeSprintSpeed_22() const { return ___strafeSprintSpeed_22; }
	inline float* get_address_of_strafeSprintSpeed_22() { return &___strafeSprintSpeed_22; }
	inline void set_strafeSprintSpeed_22(float value)
	{
		___strafeSprintSpeed_22 = value;
	}

	inline static int32_t get_offset_of_stepOffsetEnd_23() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___stepOffsetEnd_23)); }
	inline float get_stepOffsetEnd_23() const { return ___stepOffsetEnd_23; }
	inline float* get_address_of_stepOffsetEnd_23() { return &___stepOffsetEnd_23; }
	inline void set_stepOffsetEnd_23(float value)
	{
		___stepOffsetEnd_23 = value;
	}

	inline static int32_t get_offset_of_stepOffsetStart_24() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___stepOffsetStart_24)); }
	inline float get_stepOffsetStart_24() const { return ___stepOffsetStart_24; }
	inline float* get_address_of_stepOffsetStart_24() { return &___stepOffsetStart_24; }
	inline void set_stepOffsetStart_24(float value)
	{
		___stepOffsetStart_24 = value;
	}

	inline static int32_t get_offset_of_stepSmooth_25() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___stepSmooth_25)); }
	inline float get_stepSmooth_25() const { return ___stepSmooth_25; }
	inline float* get_address_of_stepSmooth_25() { return &___stepSmooth_25; }
	inline void set_stepSmooth_25(float value)
	{
		___stepSmooth_25 = value;
	}

	inline static int32_t get_offset_of_slopeLimit_26() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___slopeLimit_26)); }
	inline float get_slopeLimit_26() const { return ___slopeLimit_26; }
	inline float* get_address_of_slopeLimit_26() { return &___slopeLimit_26; }
	inline void set_slopeLimit_26(float value)
	{
		___slopeLimit_26 = value;
	}

	inline static int32_t get_offset_of_extraGravity_27() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___extraGravity_27)); }
	inline float get_extraGravity_27() const { return ___extraGravity_27; }
	inline float* get_address_of_extraGravity_27() { return &___extraGravity_27; }
	inline void set_extraGravity_27(float value)
	{
		___extraGravity_27 = value;
	}

	inline static int32_t get_offset_of_groundDistance_28() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___groundDistance_28)); }
	inline float get_groundDistance_28() const { return ___groundDistance_28; }
	inline float* get_address_of_groundDistance_28() { return &___groundDistance_28; }
	inline void set_groundDistance_28(float value)
	{
		___groundDistance_28 = value;
	}

	inline static int32_t get_offset_of_groundHit_29() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___groundHit_29)); }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  get_groundHit_29() const { return ___groundHit_29; }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * get_address_of_groundHit_29() { return &___groundHit_29; }
	inline void set_groundHit_29(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		___groundHit_29 = value;
	}

	inline static int32_t get_offset_of_isGrounded_30() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___isGrounded_30)); }
	inline bool get_isGrounded_30() const { return ___isGrounded_30; }
	inline bool* get_address_of_isGrounded_30() { return &___isGrounded_30; }
	inline void set_isGrounded_30(bool value)
	{
		___isGrounded_30 = value;
	}

	inline static int32_t get_offset_of_isStrafing_31() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___isStrafing_31)); }
	inline bool get_isStrafing_31() const { return ___isStrafing_31; }
	inline bool* get_address_of_isStrafing_31() { return &___isStrafing_31; }
	inline void set_isStrafing_31(bool value)
	{
		___isStrafing_31 = value;
	}

	inline static int32_t get_offset_of_isSprinting_32() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___isSprinting_32)); }
	inline bool get_isSprinting_32() const { return ___isSprinting_32; }
	inline bool* get_address_of_isSprinting_32() { return &___isSprinting_32; }
	inline void set_isSprinting_32(bool value)
	{
		___isSprinting_32 = value;
	}

	inline static int32_t get_offset_of_isSliding_33() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___isSliding_33)); }
	inline bool get_isSliding_33() const { return ___isSliding_33; }
	inline bool* get_address_of_isSliding_33() { return &___isSliding_33; }
	inline void set_isSliding_33(bool value)
	{
		___isSliding_33 = value;
	}

	inline static int32_t get_offset_of_isJumping_34() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___isJumping_34)); }
	inline bool get_isJumping_34() const { return ___isJumping_34; }
	inline bool* get_address_of_isJumping_34() { return &___isJumping_34; }
	inline void set_isJumping_34(bool value)
	{
		___isJumping_34 = value;
	}

	inline static int32_t get_offset_of_targetDirection_35() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___targetDirection_35)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_targetDirection_35() const { return ___targetDirection_35; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_targetDirection_35() { return &___targetDirection_35; }
	inline void set_targetDirection_35(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___targetDirection_35 = value;
	}

	inline static int32_t get_offset_of_targetRotation_36() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___targetRotation_36)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_targetRotation_36() const { return ___targetRotation_36; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_targetRotation_36() { return &___targetRotation_36; }
	inline void set_targetRotation_36(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___targetRotation_36 = value;
	}

	inline static int32_t get_offset_of_freeRotation_37() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___freeRotation_37)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_freeRotation_37() const { return ___freeRotation_37; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_freeRotation_37() { return &___freeRotation_37; }
	inline void set_freeRotation_37(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___freeRotation_37 = value;
	}

	inline static int32_t get_offset_of_keepDirection_38() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___keepDirection_38)); }
	inline bool get_keepDirection_38() const { return ___keepDirection_38; }
	inline bool* get_address_of_keepDirection_38() { return &___keepDirection_38; }
	inline void set_keepDirection_38(bool value)
	{
		___keepDirection_38 = value;
	}

	inline static int32_t get_offset_of_animator_39() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___animator_39)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_animator_39() const { return ___animator_39; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_animator_39() { return &___animator_39; }
	inline void set_animator_39(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___animator_39 = value;
		Il2CppCodeGenWriteBarrier((&___animator_39), value);
	}

	inline static int32_t get_offset_of__rigidbody_40() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ____rigidbody_40)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get__rigidbody_40() const { return ____rigidbody_40; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of__rigidbody_40() { return &____rigidbody_40; }
	inline void set__rigidbody_40(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		____rigidbody_40 = value;
		Il2CppCodeGenWriteBarrier((&____rigidbody_40), value);
	}

	inline static int32_t get_offset_of_maxFrictionPhysics_41() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___maxFrictionPhysics_41)); }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * get_maxFrictionPhysics_41() const { return ___maxFrictionPhysics_41; }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 ** get_address_of_maxFrictionPhysics_41() { return &___maxFrictionPhysics_41; }
	inline void set_maxFrictionPhysics_41(PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * value)
	{
		___maxFrictionPhysics_41 = value;
		Il2CppCodeGenWriteBarrier((&___maxFrictionPhysics_41), value);
	}

	inline static int32_t get_offset_of_frictionPhysics_42() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___frictionPhysics_42)); }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * get_frictionPhysics_42() const { return ___frictionPhysics_42; }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 ** get_address_of_frictionPhysics_42() { return &___frictionPhysics_42; }
	inline void set_frictionPhysics_42(PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * value)
	{
		___frictionPhysics_42 = value;
		Il2CppCodeGenWriteBarrier((&___frictionPhysics_42), value);
	}

	inline static int32_t get_offset_of_slippyPhysics_43() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___slippyPhysics_43)); }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * get_slippyPhysics_43() const { return ___slippyPhysics_43; }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 ** get_address_of_slippyPhysics_43() { return &___slippyPhysics_43; }
	inline void set_slippyPhysics_43(PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * value)
	{
		___slippyPhysics_43 = value;
		Il2CppCodeGenWriteBarrier((&___slippyPhysics_43), value);
	}

	inline static int32_t get_offset_of__capsuleCollider_44() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ____capsuleCollider_44)); }
	inline CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * get__capsuleCollider_44() const { return ____capsuleCollider_44; }
	inline CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 ** get_address_of__capsuleCollider_44() { return &____capsuleCollider_44; }
	inline void set__capsuleCollider_44(CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * value)
	{
		____capsuleCollider_44 = value;
		Il2CppCodeGenWriteBarrier((&____capsuleCollider_44), value);
	}

	inline static int32_t get_offset_of_colliderHeight_45() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___colliderHeight_45)); }
	inline float get_colliderHeight_45() const { return ___colliderHeight_45; }
	inline float* get_address_of_colliderHeight_45() { return &___colliderHeight_45; }
	inline void set_colliderHeight_45(float value)
	{
		___colliderHeight_45 = value;
	}

	inline static int32_t get_offset_of_input_46() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___input_46)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_input_46() const { return ___input_46; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_input_46() { return &___input_46; }
	inline void set_input_46(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___input_46 = value;
	}

	inline static int32_t get_offset_of_speed_47() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___speed_47)); }
	inline float get_speed_47() const { return ___speed_47; }
	inline float* get_address_of_speed_47() { return &___speed_47; }
	inline void set_speed_47(float value)
	{
		___speed_47 = value;
	}

	inline static int32_t get_offset_of_direction_48() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___direction_48)); }
	inline float get_direction_48() const { return ___direction_48; }
	inline float* get_address_of_direction_48() { return &___direction_48; }
	inline void set_direction_48(float value)
	{
		___direction_48 = value;
	}

	inline static int32_t get_offset_of_verticalVelocity_49() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___verticalVelocity_49)); }
	inline float get_verticalVelocity_49() const { return ___verticalVelocity_49; }
	inline float* get_address_of_verticalVelocity_49() { return &___verticalVelocity_49; }
	inline void set_verticalVelocity_49(float value)
	{
		___verticalVelocity_49 = value;
	}

	inline static int32_t get_offset_of_velocity_50() { return static_cast<int32_t>(offsetof(vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F, ___velocity_50)); }
	inline float get_velocity_50() const { return ___velocity_50; }
	inline float* get_address_of_velocity_50() { return &___velocity_50; }
	inline void set_velocity_50(float value)
	{
		___velocity_50 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VTHIRDPERSONMOTOR_TF003CB66852886C054134EDFB6D948BACFC7862F_H
#ifndef MOVEMENT_T0EE58EC6DE08B383697671C8720D14A34AFF7A2E_H
#define MOVEMENT_T0EE58EC6DE08B383697671C8720D14A34AFF7A2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Movement
struct  Movement_t0EE58EC6DE08B383697671C8720D14A34AFF7A2E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Movement::movementSpeed
	float ___movementSpeed_4;
	// System.Single Movement::rotationSpeed
	float ___rotationSpeed_5;

public:
	inline static int32_t get_offset_of_movementSpeed_4() { return static_cast<int32_t>(offsetof(Movement_t0EE58EC6DE08B383697671C8720D14A34AFF7A2E, ___movementSpeed_4)); }
	inline float get_movementSpeed_4() const { return ___movementSpeed_4; }
	inline float* get_address_of_movementSpeed_4() { return &___movementSpeed_4; }
	inline void set_movementSpeed_4(float value)
	{
		___movementSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_5() { return static_cast<int32_t>(offsetof(Movement_t0EE58EC6DE08B383697671C8720D14A34AFF7A2E, ___rotationSpeed_5)); }
	inline float get_rotationSpeed_5() const { return ___rotationSpeed_5; }
	inline float* get_address_of_rotationSpeed_5() { return &___rotationSpeed_5; }
	inline void set_rotationSpeed_5(float value)
	{
		___rotationSpeed_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEMENT_T0EE58EC6DE08B383697671C8720D14A34AFF7A2E_H
#ifndef PLAYERACTION_T246178FC03C8D2122CE3815BBA800BC75AA5D3B9_H
#define PLAYERACTION_T246178FC03C8D2122CE3815BBA800BC75AA5D3B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerAction
struct  PlayerAction_t246178FC03C8D2122CE3815BBA800BC75AA5D3B9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Tool PlayerAction::tool
	Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * ___tool_4;
	// System.Boolean PlayerAction::toolTaken
	bool ___toolTaken_5;
	// UnityEngine.GameObject[] PlayerAction::availableTools
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___availableTools_6;

public:
	inline static int32_t get_offset_of_tool_4() { return static_cast<int32_t>(offsetof(PlayerAction_t246178FC03C8D2122CE3815BBA800BC75AA5D3B9, ___tool_4)); }
	inline Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * get_tool_4() const { return ___tool_4; }
	inline Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 ** get_address_of_tool_4() { return &___tool_4; }
	inline void set_tool_4(Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * value)
	{
		___tool_4 = value;
		Il2CppCodeGenWriteBarrier((&___tool_4), value);
	}

	inline static int32_t get_offset_of_toolTaken_5() { return static_cast<int32_t>(offsetof(PlayerAction_t246178FC03C8D2122CE3815BBA800BC75AA5D3B9, ___toolTaken_5)); }
	inline bool get_toolTaken_5() const { return ___toolTaken_5; }
	inline bool* get_address_of_toolTaken_5() { return &___toolTaken_5; }
	inline void set_toolTaken_5(bool value)
	{
		___toolTaken_5 = value;
	}

	inline static int32_t get_offset_of_availableTools_6() { return static_cast<int32_t>(offsetof(PlayerAction_t246178FC03C8D2122CE3815BBA800BC75AA5D3B9, ___availableTools_6)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_availableTools_6() const { return ___availableTools_6; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_availableTools_6() { return &___availableTools_6; }
	inline void set_availableTools_6(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___availableTools_6 = value;
		Il2CppCodeGenWriteBarrier((&___availableTools_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERACTION_T246178FC03C8D2122CE3815BBA800BC75AA5D3B9_H
#ifndef PLAYERCONTROLLER_T4CE339054014370D89B89922EDC0EA2766589C85_H
#define PLAYERCONTROLLER_T4CE339054014370D89B89922EDC0EA2766589C85_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single PlayerController::delay
	float ___delay_4;
	// System.Single PlayerController::movementSpeed
	float ___movementSpeed_5;
	// System.Single PlayerController::rotationSpeed
	float ___rotationSpeed_6;
	// System.Single PlayerController::offsetCamera
	float ___offsetCamera_7;
	// System.Single PlayerController::vertical
	float ___vertical_8;
	// System.Single PlayerController::horizontal
	float ___horizontal_9;
	// System.Single PlayerController::speed
	float ___speed_10;
	// System.Boolean PlayerController::touchDetected
	bool ___touchDetected_11;
	// UnityEngine.Animator PlayerController::anim
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___anim_12;
	// UnityEngine.GameObject PlayerController::cam
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cam_13;

public:
	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_5() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___movementSpeed_5)); }
	inline float get_movementSpeed_5() const { return ___movementSpeed_5; }
	inline float* get_address_of_movementSpeed_5() { return &___movementSpeed_5; }
	inline void set_movementSpeed_5(float value)
	{
		___movementSpeed_5 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_6() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___rotationSpeed_6)); }
	inline float get_rotationSpeed_6() const { return ___rotationSpeed_6; }
	inline float* get_address_of_rotationSpeed_6() { return &___rotationSpeed_6; }
	inline void set_rotationSpeed_6(float value)
	{
		___rotationSpeed_6 = value;
	}

	inline static int32_t get_offset_of_offsetCamera_7() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___offsetCamera_7)); }
	inline float get_offsetCamera_7() const { return ___offsetCamera_7; }
	inline float* get_address_of_offsetCamera_7() { return &___offsetCamera_7; }
	inline void set_offsetCamera_7(float value)
	{
		___offsetCamera_7 = value;
	}

	inline static int32_t get_offset_of_vertical_8() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___vertical_8)); }
	inline float get_vertical_8() const { return ___vertical_8; }
	inline float* get_address_of_vertical_8() { return &___vertical_8; }
	inline void set_vertical_8(float value)
	{
		___vertical_8 = value;
	}

	inline static int32_t get_offset_of_horizontal_9() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___horizontal_9)); }
	inline float get_horizontal_9() const { return ___horizontal_9; }
	inline float* get_address_of_horizontal_9() { return &___horizontal_9; }
	inline void set_horizontal_9(float value)
	{
		___horizontal_9 = value;
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_touchDetected_11() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___touchDetected_11)); }
	inline bool get_touchDetected_11() const { return ___touchDetected_11; }
	inline bool* get_address_of_touchDetected_11() { return &___touchDetected_11; }
	inline void set_touchDetected_11(bool value)
	{
		___touchDetected_11 = value;
	}

	inline static int32_t get_offset_of_anim_12() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___anim_12)); }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * get_anim_12() const { return ___anim_12; }
	inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A ** get_address_of_anim_12() { return &___anim_12; }
	inline void set_anim_12(Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * value)
	{
		___anim_12 = value;
		Il2CppCodeGenWriteBarrier((&___anim_12), value);
	}

	inline static int32_t get_offset_of_cam_13() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___cam_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cam_13() const { return ___cam_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cam_13() { return &___cam_13; }
	inline void set_cam_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cam_13 = value;
		Il2CppCodeGenWriteBarrier((&___cam_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T4CE339054014370D89B89922EDC0EA2766589C85_H
#ifndef TOOL_T3198B30B861349FB008BAD724A58D53AB36B3012_H
#define TOOL_T3198B30B861349FB008BAD724A58D53AB36B3012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tool
struct  Tool_t3198B30B861349FB008BAD724A58D53AB36B3012  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Tool::isActive
	bool ___isActive_4;
	// UnityEngine.GameObject Tool::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_5;

public:
	inline static int32_t get_offset_of_isActive_4() { return static_cast<int32_t>(offsetof(Tool_t3198B30B861349FB008BAD724A58D53AB36B3012, ___isActive_4)); }
	inline bool get_isActive_4() const { return ___isActive_4; }
	inline bool* get_address_of_isActive_4() { return &___isActive_4; }
	inline void set_isActive_4(bool value)
	{
		___isActive_4 = value;
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(Tool_t3198B30B861349FB008BAD724A58D53AB36B3012, ___player_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_5() const { return ___player_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((&___player_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOL_T3198B30B861349FB008BAD724A58D53AB36B3012_H
#ifndef AUDIOSOURCE_T5196F862B4E60F404613361C90D87FBDD041E93C_H
#define AUDIOSOURCE_T5196F862B4E60F404613361C90D87FBDD041E93C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t9643FEF245632F35A3FED88FBBDDEA3404BDEAE1 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T5196F862B4E60F404613361C90D87FBDD041E93C_H
#ifndef VIRTUALJOYSTICK_T39938024ED4CC57DF984C21458D1EE40EE307930_H
#define VIRTUALJOYSTICK_T39938024ED4CC57DF984C21458D1EE40EE307930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualJoystick
struct  VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// PlayerController VirtualJoystick::player
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * ___player_4;
	// System.Single VirtualJoystick::speed
	float ___speed_5;
	// System.Boolean VirtualJoystick::touchStart
	bool ___touchStart_6;
	// UnityEngine.Vector2 VirtualJoystick::pointA
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pointA_7;
	// UnityEngine.Vector2 VirtualJoystick::pointB
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pointB_8;
	// UnityEngine.Vector2 VirtualJoystick::screenPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint_9;
	// UnityEngine.RectTransform VirtualJoystick::circle
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___circle_10;
	// UnityEngine.RectTransform VirtualJoystick::outerCircle
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___outerCircle_11;
	// System.Single VirtualJoystick::spriteSize
	float ___spriteSize_12;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930, ___player_4)); }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * get_player_4() const { return ___player_4; }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_touchStart_6() { return static_cast<int32_t>(offsetof(VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930, ___touchStart_6)); }
	inline bool get_touchStart_6() const { return ___touchStart_6; }
	inline bool* get_address_of_touchStart_6() { return &___touchStart_6; }
	inline void set_touchStart_6(bool value)
	{
		___touchStart_6 = value;
	}

	inline static int32_t get_offset_of_pointA_7() { return static_cast<int32_t>(offsetof(VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930, ___pointA_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_pointA_7() const { return ___pointA_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_pointA_7() { return &___pointA_7; }
	inline void set_pointA_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___pointA_7 = value;
	}

	inline static int32_t get_offset_of_pointB_8() { return static_cast<int32_t>(offsetof(VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930, ___pointB_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_pointB_8() const { return ___pointB_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_pointB_8() { return &___pointB_8; }
	inline void set_pointB_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___pointB_8 = value;
	}

	inline static int32_t get_offset_of_screenPoint_9() { return static_cast<int32_t>(offsetof(VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930, ___screenPoint_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPoint_9() const { return ___screenPoint_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPoint_9() { return &___screenPoint_9; }
	inline void set_screenPoint_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPoint_9 = value;
	}

	inline static int32_t get_offset_of_circle_10() { return static_cast<int32_t>(offsetof(VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930, ___circle_10)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_circle_10() const { return ___circle_10; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_circle_10() { return &___circle_10; }
	inline void set_circle_10(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___circle_10 = value;
		Il2CppCodeGenWriteBarrier((&___circle_10), value);
	}

	inline static int32_t get_offset_of_outerCircle_11() { return static_cast<int32_t>(offsetof(VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930, ___outerCircle_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_outerCircle_11() const { return ___outerCircle_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_outerCircle_11() { return &___outerCircle_11; }
	inline void set_outerCircle_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___outerCircle_11 = value;
		Il2CppCodeGenWriteBarrier((&___outerCircle_11), value);
	}

	inline static int32_t get_offset_of_spriteSize_12() { return static_cast<int32_t>(offsetof(VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930, ___spriteSize_12)); }
	inline float get_spriteSize_12() const { return ___spriteSize_12; }
	inline float* get_address_of_spriteSize_12() { return &___spriteSize_12; }
	inline void set_spriteSize_12(float value)
	{
		___spriteSize_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALJOYSTICK_T39938024ED4CC57DF984C21458D1EE40EE307930_H
#ifndef VCOMMENT_TDF948C14C8C4D9C562D65468C8D2819BEB96ABD9_H
#define VCOMMENT_TDF948C14C8C4D9C562D65468C8D2819BEB96ABD9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// vComment
struct  vComment_tDF948C14C8C4D9C562D65468C8D2819BEB96ABD9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VCOMMENT_TDF948C14C8C4D9C562D65468C8D2819BEB96ABD9_H
#ifndef VDESTROYGAMEOBJECT_T37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65_H
#define VDESTROYGAMEOBJECT_T37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// vDestroyGameObject
struct  vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single vDestroyGameObject::delay
	float ___delay_4;

public:
	inline static int32_t get_offset_of_delay_4() { return static_cast<int32_t>(offsetof(vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65, ___delay_4)); }
	inline float get_delay_4() const { return ___delay_4; }
	inline float* get_address_of_delay_4() { return &___delay_4; }
	inline void set_delay_4(float value)
	{
		___delay_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VDESTROYGAMEOBJECT_T37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65_H
#ifndef VPICKUPITEM_T147D3AF5E224CF1731EB7B243DFC5FFD6D2A1810_H
#define VPICKUPITEM_T147D3AF5E224CF1731EB7B243DFC5FFD6D2A1810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// vPickupItem
struct  vPickupItem_t147D3AF5E224CF1731EB7B243DFC5FFD6D2A1810  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AudioSource vPickupItem::_audioSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ____audioSource_4;
	// UnityEngine.AudioClip vPickupItem::_audioClip
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ____audioClip_5;
	// UnityEngine.GameObject vPickupItem::_particle
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____particle_6;

public:
	inline static int32_t get_offset_of__audioSource_4() { return static_cast<int32_t>(offsetof(vPickupItem_t147D3AF5E224CF1731EB7B243DFC5FFD6D2A1810, ____audioSource_4)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get__audioSource_4() const { return ____audioSource_4; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of__audioSource_4() { return &____audioSource_4; }
	inline void set__audioSource_4(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		____audioSource_4 = value;
		Il2CppCodeGenWriteBarrier((&____audioSource_4), value);
	}

	inline static int32_t get_offset_of__audioClip_5() { return static_cast<int32_t>(offsetof(vPickupItem_t147D3AF5E224CF1731EB7B243DFC5FFD6D2A1810, ____audioClip_5)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get__audioClip_5() const { return ____audioClip_5; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of__audioClip_5() { return &____audioClip_5; }
	inline void set__audioClip_5(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		____audioClip_5 = value;
		Il2CppCodeGenWriteBarrier((&____audioClip_5), value);
	}

	inline static int32_t get_offset_of__particle_6() { return static_cast<int32_t>(offsetof(vPickupItem_t147D3AF5E224CF1731EB7B243DFC5FFD6D2A1810, ____particle_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get__particle_6() const { return ____particle_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of__particle_6() { return &____particle_6; }
	inline void set__particle_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		____particle_6 = value;
		Il2CppCodeGenWriteBarrier((&____particle_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VPICKUPITEM_T147D3AF5E224CF1731EB7B243DFC5FFD6D2A1810_H
#ifndef VTHIRDPERSONCAMERA_T53F7E519595658746E0E202AD00AEF9AED0B4D2F_H
#define VTHIRDPERSONCAMERA_T53F7E519595658746E0E202AD00AEF9AED0B4D2F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// vThirdPersonCamera
struct  vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform vThirdPersonCamera::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_5;
	// System.Single vThirdPersonCamera::smoothCameraRotation
	float ___smoothCameraRotation_6;
	// UnityEngine.LayerMask vThirdPersonCamera::cullingLayer
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___cullingLayer_7;
	// System.Boolean vThirdPersonCamera::lockCamera
	bool ___lockCamera_8;
	// System.Single vThirdPersonCamera::rightOffset
	float ___rightOffset_9;
	// System.Single vThirdPersonCamera::defaultDistance
	float ___defaultDistance_10;
	// System.Single vThirdPersonCamera::height
	float ___height_11;
	// System.Single vThirdPersonCamera::smoothFollow
	float ___smoothFollow_12;
	// System.Single vThirdPersonCamera::xMouseSensitivity
	float ___xMouseSensitivity_13;
	// System.Single vThirdPersonCamera::yMouseSensitivity
	float ___yMouseSensitivity_14;
	// System.Single vThirdPersonCamera::yMinLimit
	float ___yMinLimit_15;
	// System.Single vThirdPersonCamera::yMaxLimit
	float ___yMaxLimit_16;
	// System.Int32 vThirdPersonCamera::indexList
	int32_t ___indexList_17;
	// System.Int32 vThirdPersonCamera::indexLookPoint
	int32_t ___indexLookPoint_18;
	// System.Single vThirdPersonCamera::offSetPlayerPivot
	float ___offSetPlayerPivot_19;
	// System.String vThirdPersonCamera::currentStateName
	String_t* ___currentStateName_20;
	// UnityEngine.Transform vThirdPersonCamera::currentTarget
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___currentTarget_21;
	// UnityEngine.Vector2 vThirdPersonCamera::movementSpeed
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___movementSpeed_22;
	// UnityEngine.Transform vThirdPersonCamera::targetLookAt
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___targetLookAt_23;
	// UnityEngine.Vector3 vThirdPersonCamera::currentTargetPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentTargetPos_24;
	// UnityEngine.Vector3 vThirdPersonCamera::lookPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookPoint_25;
	// UnityEngine.Vector3 vThirdPersonCamera::current_cPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___current_cPos_26;
	// UnityEngine.Vector3 vThirdPersonCamera::desired_cPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desired_cPos_27;
	// UnityEngine.Camera vThirdPersonCamera::_camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ____camera_28;
	// System.Single vThirdPersonCamera::distance
	float ___distance_29;
	// System.Single vThirdPersonCamera::mouseY
	float ___mouseY_30;
	// System.Single vThirdPersonCamera::mouseX
	float ___mouseX_31;
	// System.Single vThirdPersonCamera::currentHeight
	float ___currentHeight_32;
	// System.Single vThirdPersonCamera::cullingDistance
	float ___cullingDistance_33;
	// System.Single vThirdPersonCamera::checkHeightRadius
	float ___checkHeightRadius_34;
	// System.Single vThirdPersonCamera::clipPlaneMargin
	float ___clipPlaneMargin_35;
	// System.Single vThirdPersonCamera::forward
	float ___forward_36;
	// System.Single vThirdPersonCamera::xMinLimit
	float ___xMinLimit_37;
	// System.Single vThirdPersonCamera::xMaxLimit
	float ___xMaxLimit_38;
	// System.Single vThirdPersonCamera::cullingHeight
	float ___cullingHeight_39;
	// System.Single vThirdPersonCamera::cullingMinDist
	float ___cullingMinDist_40;

public:
	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___target_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_5() const { return ___target_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((&___target_5), value);
	}

	inline static int32_t get_offset_of_smoothCameraRotation_6() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___smoothCameraRotation_6)); }
	inline float get_smoothCameraRotation_6() const { return ___smoothCameraRotation_6; }
	inline float* get_address_of_smoothCameraRotation_6() { return &___smoothCameraRotation_6; }
	inline void set_smoothCameraRotation_6(float value)
	{
		___smoothCameraRotation_6 = value;
	}

	inline static int32_t get_offset_of_cullingLayer_7() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___cullingLayer_7)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_cullingLayer_7() const { return ___cullingLayer_7; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_cullingLayer_7() { return &___cullingLayer_7; }
	inline void set_cullingLayer_7(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___cullingLayer_7 = value;
	}

	inline static int32_t get_offset_of_lockCamera_8() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___lockCamera_8)); }
	inline bool get_lockCamera_8() const { return ___lockCamera_8; }
	inline bool* get_address_of_lockCamera_8() { return &___lockCamera_8; }
	inline void set_lockCamera_8(bool value)
	{
		___lockCamera_8 = value;
	}

	inline static int32_t get_offset_of_rightOffset_9() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___rightOffset_9)); }
	inline float get_rightOffset_9() const { return ___rightOffset_9; }
	inline float* get_address_of_rightOffset_9() { return &___rightOffset_9; }
	inline void set_rightOffset_9(float value)
	{
		___rightOffset_9 = value;
	}

	inline static int32_t get_offset_of_defaultDistance_10() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___defaultDistance_10)); }
	inline float get_defaultDistance_10() const { return ___defaultDistance_10; }
	inline float* get_address_of_defaultDistance_10() { return &___defaultDistance_10; }
	inline void set_defaultDistance_10(float value)
	{
		___defaultDistance_10 = value;
	}

	inline static int32_t get_offset_of_height_11() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___height_11)); }
	inline float get_height_11() const { return ___height_11; }
	inline float* get_address_of_height_11() { return &___height_11; }
	inline void set_height_11(float value)
	{
		___height_11 = value;
	}

	inline static int32_t get_offset_of_smoothFollow_12() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___smoothFollow_12)); }
	inline float get_smoothFollow_12() const { return ___smoothFollow_12; }
	inline float* get_address_of_smoothFollow_12() { return &___smoothFollow_12; }
	inline void set_smoothFollow_12(float value)
	{
		___smoothFollow_12 = value;
	}

	inline static int32_t get_offset_of_xMouseSensitivity_13() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___xMouseSensitivity_13)); }
	inline float get_xMouseSensitivity_13() const { return ___xMouseSensitivity_13; }
	inline float* get_address_of_xMouseSensitivity_13() { return &___xMouseSensitivity_13; }
	inline void set_xMouseSensitivity_13(float value)
	{
		___xMouseSensitivity_13 = value;
	}

	inline static int32_t get_offset_of_yMouseSensitivity_14() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___yMouseSensitivity_14)); }
	inline float get_yMouseSensitivity_14() const { return ___yMouseSensitivity_14; }
	inline float* get_address_of_yMouseSensitivity_14() { return &___yMouseSensitivity_14; }
	inline void set_yMouseSensitivity_14(float value)
	{
		___yMouseSensitivity_14 = value;
	}

	inline static int32_t get_offset_of_yMinLimit_15() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___yMinLimit_15)); }
	inline float get_yMinLimit_15() const { return ___yMinLimit_15; }
	inline float* get_address_of_yMinLimit_15() { return &___yMinLimit_15; }
	inline void set_yMinLimit_15(float value)
	{
		___yMinLimit_15 = value;
	}

	inline static int32_t get_offset_of_yMaxLimit_16() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___yMaxLimit_16)); }
	inline float get_yMaxLimit_16() const { return ___yMaxLimit_16; }
	inline float* get_address_of_yMaxLimit_16() { return &___yMaxLimit_16; }
	inline void set_yMaxLimit_16(float value)
	{
		___yMaxLimit_16 = value;
	}

	inline static int32_t get_offset_of_indexList_17() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___indexList_17)); }
	inline int32_t get_indexList_17() const { return ___indexList_17; }
	inline int32_t* get_address_of_indexList_17() { return &___indexList_17; }
	inline void set_indexList_17(int32_t value)
	{
		___indexList_17 = value;
	}

	inline static int32_t get_offset_of_indexLookPoint_18() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___indexLookPoint_18)); }
	inline int32_t get_indexLookPoint_18() const { return ___indexLookPoint_18; }
	inline int32_t* get_address_of_indexLookPoint_18() { return &___indexLookPoint_18; }
	inline void set_indexLookPoint_18(int32_t value)
	{
		___indexLookPoint_18 = value;
	}

	inline static int32_t get_offset_of_offSetPlayerPivot_19() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___offSetPlayerPivot_19)); }
	inline float get_offSetPlayerPivot_19() const { return ___offSetPlayerPivot_19; }
	inline float* get_address_of_offSetPlayerPivot_19() { return &___offSetPlayerPivot_19; }
	inline void set_offSetPlayerPivot_19(float value)
	{
		___offSetPlayerPivot_19 = value;
	}

	inline static int32_t get_offset_of_currentStateName_20() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___currentStateName_20)); }
	inline String_t* get_currentStateName_20() const { return ___currentStateName_20; }
	inline String_t** get_address_of_currentStateName_20() { return &___currentStateName_20; }
	inline void set_currentStateName_20(String_t* value)
	{
		___currentStateName_20 = value;
		Il2CppCodeGenWriteBarrier((&___currentStateName_20), value);
	}

	inline static int32_t get_offset_of_currentTarget_21() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___currentTarget_21)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_currentTarget_21() const { return ___currentTarget_21; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_currentTarget_21() { return &___currentTarget_21; }
	inline void set_currentTarget_21(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___currentTarget_21 = value;
		Il2CppCodeGenWriteBarrier((&___currentTarget_21), value);
	}

	inline static int32_t get_offset_of_movementSpeed_22() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___movementSpeed_22)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_movementSpeed_22() const { return ___movementSpeed_22; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_movementSpeed_22() { return &___movementSpeed_22; }
	inline void set_movementSpeed_22(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___movementSpeed_22 = value;
	}

	inline static int32_t get_offset_of_targetLookAt_23() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___targetLookAt_23)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_targetLookAt_23() const { return ___targetLookAt_23; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_targetLookAt_23() { return &___targetLookAt_23; }
	inline void set_targetLookAt_23(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___targetLookAt_23 = value;
		Il2CppCodeGenWriteBarrier((&___targetLookAt_23), value);
	}

	inline static int32_t get_offset_of_currentTargetPos_24() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___currentTargetPos_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentTargetPos_24() const { return ___currentTargetPos_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentTargetPos_24() { return &___currentTargetPos_24; }
	inline void set_currentTargetPos_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentTargetPos_24 = value;
	}

	inline static int32_t get_offset_of_lookPoint_25() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___lookPoint_25)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lookPoint_25() const { return ___lookPoint_25; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lookPoint_25() { return &___lookPoint_25; }
	inline void set_lookPoint_25(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lookPoint_25 = value;
	}

	inline static int32_t get_offset_of_current_cPos_26() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___current_cPos_26)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_current_cPos_26() const { return ___current_cPos_26; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_current_cPos_26() { return &___current_cPos_26; }
	inline void set_current_cPos_26(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___current_cPos_26 = value;
	}

	inline static int32_t get_offset_of_desired_cPos_27() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___desired_cPos_27)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_desired_cPos_27() const { return ___desired_cPos_27; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_desired_cPos_27() { return &___desired_cPos_27; }
	inline void set_desired_cPos_27(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___desired_cPos_27 = value;
	}

	inline static int32_t get_offset_of__camera_28() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ____camera_28)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get__camera_28() const { return ____camera_28; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of__camera_28() { return &____camera_28; }
	inline void set__camera_28(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		____camera_28 = value;
		Il2CppCodeGenWriteBarrier((&____camera_28), value);
	}

	inline static int32_t get_offset_of_distance_29() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___distance_29)); }
	inline float get_distance_29() const { return ___distance_29; }
	inline float* get_address_of_distance_29() { return &___distance_29; }
	inline void set_distance_29(float value)
	{
		___distance_29 = value;
	}

	inline static int32_t get_offset_of_mouseY_30() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___mouseY_30)); }
	inline float get_mouseY_30() const { return ___mouseY_30; }
	inline float* get_address_of_mouseY_30() { return &___mouseY_30; }
	inline void set_mouseY_30(float value)
	{
		___mouseY_30 = value;
	}

	inline static int32_t get_offset_of_mouseX_31() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___mouseX_31)); }
	inline float get_mouseX_31() const { return ___mouseX_31; }
	inline float* get_address_of_mouseX_31() { return &___mouseX_31; }
	inline void set_mouseX_31(float value)
	{
		___mouseX_31 = value;
	}

	inline static int32_t get_offset_of_currentHeight_32() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___currentHeight_32)); }
	inline float get_currentHeight_32() const { return ___currentHeight_32; }
	inline float* get_address_of_currentHeight_32() { return &___currentHeight_32; }
	inline void set_currentHeight_32(float value)
	{
		___currentHeight_32 = value;
	}

	inline static int32_t get_offset_of_cullingDistance_33() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___cullingDistance_33)); }
	inline float get_cullingDistance_33() const { return ___cullingDistance_33; }
	inline float* get_address_of_cullingDistance_33() { return &___cullingDistance_33; }
	inline void set_cullingDistance_33(float value)
	{
		___cullingDistance_33 = value;
	}

	inline static int32_t get_offset_of_checkHeightRadius_34() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___checkHeightRadius_34)); }
	inline float get_checkHeightRadius_34() const { return ___checkHeightRadius_34; }
	inline float* get_address_of_checkHeightRadius_34() { return &___checkHeightRadius_34; }
	inline void set_checkHeightRadius_34(float value)
	{
		___checkHeightRadius_34 = value;
	}

	inline static int32_t get_offset_of_clipPlaneMargin_35() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___clipPlaneMargin_35)); }
	inline float get_clipPlaneMargin_35() const { return ___clipPlaneMargin_35; }
	inline float* get_address_of_clipPlaneMargin_35() { return &___clipPlaneMargin_35; }
	inline void set_clipPlaneMargin_35(float value)
	{
		___clipPlaneMargin_35 = value;
	}

	inline static int32_t get_offset_of_forward_36() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___forward_36)); }
	inline float get_forward_36() const { return ___forward_36; }
	inline float* get_address_of_forward_36() { return &___forward_36; }
	inline void set_forward_36(float value)
	{
		___forward_36 = value;
	}

	inline static int32_t get_offset_of_xMinLimit_37() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___xMinLimit_37)); }
	inline float get_xMinLimit_37() const { return ___xMinLimit_37; }
	inline float* get_address_of_xMinLimit_37() { return &___xMinLimit_37; }
	inline void set_xMinLimit_37(float value)
	{
		___xMinLimit_37 = value;
	}

	inline static int32_t get_offset_of_xMaxLimit_38() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___xMaxLimit_38)); }
	inline float get_xMaxLimit_38() const { return ___xMaxLimit_38; }
	inline float* get_address_of_xMaxLimit_38() { return &___xMaxLimit_38; }
	inline void set_xMaxLimit_38(float value)
	{
		___xMaxLimit_38 = value;
	}

	inline static int32_t get_offset_of_cullingHeight_39() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___cullingHeight_39)); }
	inline float get_cullingHeight_39() const { return ___cullingHeight_39; }
	inline float* get_address_of_cullingHeight_39() { return &___cullingHeight_39; }
	inline void set_cullingHeight_39(float value)
	{
		___cullingHeight_39 = value;
	}

	inline static int32_t get_offset_of_cullingMinDist_40() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F, ___cullingMinDist_40)); }
	inline float get_cullingMinDist_40() const { return ___cullingMinDist_40; }
	inline float* get_address_of_cullingMinDist_40() { return &___cullingMinDist_40; }
	inline void set_cullingMinDist_40(float value)
	{
		___cullingMinDist_40 = value;
	}
};

struct vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_StaticFields
{
public:
	// vThirdPersonCamera vThirdPersonCamera::_instance
	vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_StaticFields, ____instance_4)); }
	inline vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * get__instance_4() const { return ____instance_4; }
	inline vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((&____instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VTHIRDPERSONCAMERA_T53F7E519595658746E0E202AD00AEF9AED0B4D2F_H
#ifndef HANDTOOL_T26B5FE17BAA59A3C24EFF72E796EA3F452B77E96_H
#define HANDTOOL_T26B5FE17BAA59A3C24EFF72E796EA3F452B77E96_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HandTool
struct  HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96  : public Tool_t3198B30B861349FB008BAD724A58D53AB36B3012
{
public:
	// System.Single HandTool::speed
	float ___speed_6;
	// System.Single HandTool::distance
	float ___distance_7;
	// UnityEngine.Transform HandTool::spring
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___spring_8;
	// UnityEngine.Transform HandTool::hand
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___hand_9;
	// UnityEngine.Transform HandTool::endSpring
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___endSpring_10;
	// System.Single HandTool::initialZ
	float ___initialZ_11;
	// System.Boolean HandTool::going
	bool ___going_12;
	// System.Boolean HandTool::back
	bool ___back_13;

public:
	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_distance_7() { return static_cast<int32_t>(offsetof(HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96, ___distance_7)); }
	inline float get_distance_7() const { return ___distance_7; }
	inline float* get_address_of_distance_7() { return &___distance_7; }
	inline void set_distance_7(float value)
	{
		___distance_7 = value;
	}

	inline static int32_t get_offset_of_spring_8() { return static_cast<int32_t>(offsetof(HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96, ___spring_8)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_spring_8() const { return ___spring_8; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_spring_8() { return &___spring_8; }
	inline void set_spring_8(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___spring_8 = value;
		Il2CppCodeGenWriteBarrier((&___spring_8), value);
	}

	inline static int32_t get_offset_of_hand_9() { return static_cast<int32_t>(offsetof(HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96, ___hand_9)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_hand_9() const { return ___hand_9; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_hand_9() { return &___hand_9; }
	inline void set_hand_9(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___hand_9 = value;
		Il2CppCodeGenWriteBarrier((&___hand_9), value);
	}

	inline static int32_t get_offset_of_endSpring_10() { return static_cast<int32_t>(offsetof(HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96, ___endSpring_10)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_endSpring_10() const { return ___endSpring_10; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_endSpring_10() { return &___endSpring_10; }
	inline void set_endSpring_10(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___endSpring_10 = value;
		Il2CppCodeGenWriteBarrier((&___endSpring_10), value);
	}

	inline static int32_t get_offset_of_initialZ_11() { return static_cast<int32_t>(offsetof(HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96, ___initialZ_11)); }
	inline float get_initialZ_11() const { return ___initialZ_11; }
	inline float* get_address_of_initialZ_11() { return &___initialZ_11; }
	inline void set_initialZ_11(float value)
	{
		___initialZ_11 = value;
	}

	inline static int32_t get_offset_of_going_12() { return static_cast<int32_t>(offsetof(HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96, ___going_12)); }
	inline bool get_going_12() const { return ___going_12; }
	inline bool* get_address_of_going_12() { return &___going_12; }
	inline void set_going_12(bool value)
	{
		___going_12 = value;
	}

	inline static int32_t get_offset_of_back_13() { return static_cast<int32_t>(offsetof(HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96, ___back_13)); }
	inline bool get_back_13() const { return ___back_13; }
	inline bool* get_address_of_back_13() { return &___back_13; }
	inline void set_back_13(bool value)
	{
		___back_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDTOOL_T26B5FE17BAA59A3C24EFF72E796EA3F452B77E96_H
#ifndef VTHIRDPERSONANIMATOR_TF24E16ABD5341B3D837CC1ECE04DEE08DF6A80D4_H
#define VTHIRDPERSONANIMATOR_TF24E16ABD5341B3D837CC1ECE04DEE08DF6A80D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Invector.CharacterController.vThirdPersonAnimator
struct  vThirdPersonAnimator_tF24E16ABD5341B3D837CC1ECE04DEE08DF6A80D4  : public vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VTHIRDPERSONANIMATOR_TF24E16ABD5341B3D837CC1ECE04DEE08DF6A80D4_H
#ifndef VTHIRDPERSONCONTROLLER_T5036A66B33C99FB3F61959464A9E45D0E2D7A437_H
#define VTHIRDPERSONCONTROLLER_T5036A66B33C99FB3F61959464A9E45D0E2D7A437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Invector.CharacterController.vThirdPersonController
struct  vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437  : public vThirdPersonAnimator_tF24E16ABD5341B3D837CC1ECE04DEE08DF6A80D4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VTHIRDPERSONCONTROLLER_T5036A66B33C99FB3F61959464A9E45D0E2D7A437_H
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * m_Items[1];

public:
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_tE9BB282384F0196211AD1A480477254188211F57  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  m_Items[1];

public:
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * m_Items[1];

public:
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_mC1990520B7718DB9F2D68839716E6853645566FC_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m6D4C38C330FCFD3C323B34031A7E877A5E2D453A_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.Void Tool::Start()
extern "C" IL2CPP_METHOD_ATTR void Tool_Start_m8AA9112A289F45B51E19EB641D51BB9C4AE22593 (Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_mB0D957A9D8A9819E18D2E81F465C5C0B60CBC6DA (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_detectCollisions(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_detectCollisions_mD6BE24EC78D298D6F737822E3A63123AF586045F (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_m6E6AACB03165E54952E7CFE13C07188205A7061F (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void HandTool::Animation()
extern "C" IL2CPP_METHOD_ATTR void HandTool_Animation_m6A4D243070AB985FAFED92D33EF1483FEB99F77A (HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96 * __this, const RuntimeMethod* method);
// System.Void Tool::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tool__ctor_m6D73DADFDDF8D765A98E87EEDB58D1901EB011BE (Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* p0, bool p1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_mC260C82EF3FD1DB6B66FE898C595D5F901E59681 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* p0, float p1, float p2, float p3, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animator::get_rootRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_get_rootRotation_m68969AC7E749C182149EF6A05307930613FAB6B0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void Invector.CharacterController.vThirdPersonMotor::ControlSpeed(System.Single)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_ControlSpeed_m2941913A911A6056A2C584B167A7F5C3C8D9CB96 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, float ___velocity0, const RuntimeMethod* method);
// System.Void Invector.CharacterController.vThirdPersonMotor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor__ctor_mE6D73342E716F15BA25E7D47A5B3D50B6EBE00DB (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431 (bool p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m65BA22AECB97BA6A2795532170EAAE2F2624D344 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, float p2, const RuntimeMethod* method);
// System.Void Invector.CharacterController.vThirdPersonAnimator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonAnimator__ctor_m88EDEC9C629C32FEE9246282873E9E939A9EEBDC (vThirdPersonAnimator_tF24E16ABD5341B3D837CC1ECE04DEE08DF6A80D4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Invector.CharacterController.vThirdPersonController>()
inline vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * Component_GetComponent_TisvThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437_mCE3055DABAA5762FF0DCAB451ED8A8D4FC410822 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void Invector.CharacterController.vThirdPersonMotor::Init()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_Init_m079DAD8228CD9B981D776CF48DF73AA47874D4CF (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<vThirdPersonCamera>()
inline vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * Object_FindObjectOfType_TisvThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_m18DA38BDDF82025DCAD3D7CAB52576C327FE8F83 (const RuntimeMethod* method)
{
	return ((  vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_mE3957366B74863C807E6E8A23D239A0CB079BB9C_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void vThirdPersonCamera::SetMainTarget(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera_SetMainTarget_m9E74396CFD922D503F3F94975EB53B56CEBBD812 (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___newTarget0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
extern "C" IL2CPP_METHOD_ATTR void Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F (int32_t p0, const RuntimeMethod* method);
// System.Void Invector.CharacterController.vThirdPersonMotor::AirControl()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_AirControl_m9959C777D90EDCA9B628A65D5F5AECA8A4F93486 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C" IL2CPP_METHOD_ATTR float Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496 (String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m87C9C3E0877717675108A80EC663E60AD4D60D7C (int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Cursor::get_visible()
extern "C" IL2CPP_METHOD_ATTR bool Cursor_get_visible_m0BB8BC7FEDD558FB661E9023AB8C04FFEE41377C (const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
extern "C" IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// System.Void vThirdPersonCamera::RotateCamera(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera_RotateCamera_m73CDBE5D7114F10B1A1F1BE2BA46F33D1BBD6F7B (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void vThirdPersonCamera::Init()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera_Init_m1EC8A56D50ED823044C0F65FAC3BB27B09A3BBCF (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<UnityEngine.MonoBehaviour>()
inline MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A* Component_GetComponents_TisMonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_mFF32883CC15055E3DA209D02FFE7DFEB78C12741 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mC1990520B7718DB9F2D68839716E6853645566FC_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m7FAA3F910786B0B5F3E0CBA755F38E0453EAF7BA (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.PhysicMaterial::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial__ctor_m1E6AB8A9A487E70DE44AF221946176BE96584DFC (PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.PhysicMaterial::set_staticFriction(System.Single)
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial_set_staticFriction_m6DC930416F9C22EBCA4661D58F3E369B4E779D3A (PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.PhysicMaterial::set_dynamicFriction(System.Single)
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial_set_dynamicFriction_m9FCE6D1715B7385FE3FB427C13C77643BECF635E (PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * __this, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.PhysicMaterial::set_frictionCombine(UnityEngine.PhysicMaterialCombine)
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial_set_frictionCombine_mB05C3A5D9A430E1BECADC0530C67C604E2F11696 (PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * Component_GetComponent_TisCapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_m73D2BA64E56A00BAEDB982029C042CB4CF1A0D37 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void Invector.CharacterController.vThirdPersonMotor::CheckGround()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_CheckGround_mD2E750B9FFC5D4152808803B4A16A24BEAB95DB9 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// System.Void Invector.CharacterController.vThirdPersonMotor::ControlJumpBehaviour()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_ControlJumpBehaviour_m33E3924D77E3B0BB3266C05A99FC0CDB6BB44B31 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// System.Void Invector.CharacterController.vThirdPersonMotor::ControlLocomotion()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_ControlLocomotion_m46D574FEB493A0166B64D830294500D14B3E7843 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// System.Boolean Invector.CharacterController.vThirdPersonMotor::get_freeLocomotionConditions()
extern "C" IL2CPP_METHOD_ATTR bool vThirdPersonMotor_get_freeLocomotionConditions_m158DB18E06FC15E80958A35F132EE7D02C24E304 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// System.Void Invector.CharacterController.vThirdPersonMotor::StrafeMovement()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_StrafeMovement_m48CCCD7DCC3E6181E72B454DB4244DDD1A87A350 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_deltaPosition_m85287AA699C50B6AA7489CD313F8CFED5D998533 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mD64ACF772614FE36CFD8A477A07A407B35DF1A54 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean Invector.CharacterController.vThirdPersonMotor::get_jumpFwdCondition()
extern "C" IL2CPP_METHOD_ATTR bool vThirdPersonMotor_get_jumpFwdCondition_m5465BBCCD6A6ACC8A13CF5B8FE80C1B25D1FBC64 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CapsuleCollider_get_center_m415B40B8ADB6B1C29F3EF4C23839D5514BBA18AE (CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// System.Single UnityEngine.CapsuleCollider::get_height()
extern "C" IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_mA0F14683CEDB4F32B59D0262AB7507574228EF75 (CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.CapsuleCollider::get_radius()
extern "C" IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m8E753A625226A5AF557AAFEBF5B6D0720C00802D (CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C" IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5 (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  p0, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::CapsuleCastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_tE9BB282384F0196211AD1A480477254188211F57* Physics_CapsuleCastAll_m5F70E1568012DEEA00E9B60091B64EA55EBF620F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, float p2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p3, float p4, int32_t p5, const RuntimeMethod* method);
// System.Void Invector.CharacterController.vThirdPersonMotor::CheckGroundDistance()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_CheckGroundDistance_m353B2A3091AE768AADC7C4B87244190C48E0E893 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m0E86E1B1038DDB8554A8A0D58729A7788D989588 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74 (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * p0, const RuntimeMethod* method);
// System.Double System.Math::Round(System.Double,System.Int32)
extern "C" IL2CPP_METHOD_ATTR double Math_Round_m43E20353F30A47D0005BEC4431B380572B9A4932 (double p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean Invector.CharacterController.vThirdPersonMotor::StepOffset()
extern "C" IL2CPP_METHOD_ATTR bool vThirdPersonMotor_StepOffset_m5F69945D3E8FED5DC65A503428A244EE5777DCBE (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// System.Void Invector.CharacterController.vThirdPersonMotor::Sliding()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_Sliding_m3A14617ACE0C1A43B78F015E7DA6EB8F9E9B4E32 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55 (const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m9F5CAD8DA7923E897C5DCAF913BD411AD1A87950 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  p0, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * p1, float p2, int32_t p3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_mE831E516D318F8928FD9020BF7E9FEAD95574D68 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  p0, float p1, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * p2, float p3, int32_t p4, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Single Invector.CharacterController.vThirdPersonMotor::GroundAngle()
extern "C" IL2CPP_METHOD_ATTR float vThirdPersonMotor_GroundAngle_m7E0A6E141879B0FBF8016CABF10FFEC78E330CBF (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" IL2CPP_METHOD_ATTR Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::get_isTrigger()
extern "C" IL2CPP_METHOD_ATTR bool Collider_get_isTrigger_m08B7B55C34B99492CE923444B5253A7812BC8D8E (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300 (int32_t p0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Invector.vExtensions::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void vExtensions_SetLayerRecursively_m138B5843B3F124A4FD2C185A2A96993ADD30483A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, int32_t ___layer1, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_aspect_m2ADA7982754920C3B58B4DB664801D6F2416E0C6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// Invector.BoxPoint Invector.vExtensions::GetBoxPoint(UnityEngine.BoxCollider)
extern "C" IL2CPP_METHOD_ATTR BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  vExtensions_GetBoxPoint_m498753849EAFB4E6F3A73F0001A835479D518A86 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Debug_DrawRay_mFAFA3E87963CE419BECBC6CEAD95D092F616F0C5 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p2, float p3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoxCollider_get_center_mA9164B9949F419A35CC949685F1DC14588BC6402 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_GetPoint_mE8830D3BA68A184AD70514428B75F5664105ED08 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, float p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* p0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.Object)
extern "C" IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mEB7DC37A2F6E92B628AF5F5486C1B6A4556870E6 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9 (String_t* p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Tool>()
inline Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * GameObject_GetComponent_TisTool_t3198B30B861349FB008BAD724A58D53AB36B3012_m551C8A996CA76450F4DA17A2B18EAF74A3B666F9 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D (String_t* p0, const RuntimeMethod* method);
// System.Void PlayerController::movePlayer()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_movePlayer_mFC367B200C7A575AC24C37A5969521E36FECEDEA (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method);
// System.Void PlayerController::animatePlayer()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_animatePlayer_mE886DF20647DB36DB772E5405560D7D583A5BDF0 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  p1, float p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_mBC5947EA49ED797F0DB1830BFC13AF6514B765FD (int32_t p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_mC8B181E5125330ECFB9F8C5D94AA8F4AD1ABD10C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CanvasRenderer>()
inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * Component_GetComponent_TisCanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_m656D49904B3F94B59037C34C25609C7F992F3625 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.CanvasRenderer::SetAlpha(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CanvasRenderer_SetAlpha_m54E7C6AEA9CD4D5C34F729B10B29F3B1146FB2BD (CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mFA83B0C0BABD3113D1AAB38FBB953C91EA7FFA30 (int32_t p0, const RuntimeMethod* method);
// System.Void PlayerController::moveMobilePlayer(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void PlayerController_moveMobilePlayer_mCCE71985D6CB6479615179BA0A08C3508EDDF511 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_ClampMagnitude_m295C57C516C0F2B528CD9A80CE5B071927D3627F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, float p1, const RuntimeMethod* method);
// System.Void VirtualJoystick::moveCharacter(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void VirtualJoystick_moveCharacter_mB62E150CBEE26337B0D927D9CC23E75354A427BF (VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, float p1, const RuntimeMethod* method);
// System.Void vDestroyGameObject/<Start>d__1::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__1__ctor_m2B6B51F19AED3BC4F41F97AFD3A13CD00A878B9A (U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, String_t* p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m6D4C38C330FCFD3C323B34031A7E877A5E2D453A_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * p0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
extern "C" IL2CPP_METHOD_ATTR float AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, float p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C" IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void vThirdPersonCamera::CameraMovement()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera_CameraMovement_m0D8F5AF405A8FB779DE25AA313AA297283DA9644 (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Single Invector.vExtensions::ClampAngle(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float vExtensions_ClampAngle_m58ABF193781CA3AD4A3EDB941A8C55829E0A80B3 (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float p0, float p1, float p2, const RuntimeMethod* method);
// Invector.ClipPlanePoints Invector.vExtensions::NearClipPlanePoints(UnityEngine.Camera,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  vExtensions_NearClipPlanePoints_mECAE3C1BF85D3F24483FAA364992B45B21908C3A (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos1, float ___clipPlaneMargin2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_SphereCast_m41B360D0B25BAADAD64F5D4BEAC07F92AF911837 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p2, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * p3, float p4, int32_t p5, const RuntimeMethod* method);
// System.Boolean vThirdPersonCamera::CullingRayCast(UnityEngine.Vector3,Invector.ClipPlanePoints,UnityEngine.RaycastHit&,System.Single,UnityEngine.LayerMask,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR bool vThirdPersonCamera_CullingRayCast_mCA97CF765A52EBC171402401B674C82183F5E24E (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___from0, ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  ____to1, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___hitInfo2, float ___distance3, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___cullingLayer4, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color5, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_mFB0018A196CC9E45CA8A238899EA8B093264B024 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * p2, float p3, int32_t p4, const RuntimeMethod* method);
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
// System.Void HandTool::Start()
extern "C" IL2CPP_METHOD_ATTR void HandTool_Start_mDC2F67BEE63F62C32A344F37D63D218AFFEF9A7F (HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96 * __this, const RuntimeMethod* method)
{
	{
		Tool_Start_m8AA9112A289F45B51E19EB641D51BB9C4AE22593(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_0, 2, /*hidden argument*/NULL);
		__this->set_spring_8(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_2, 1, /*hidden argument*/NULL);
		__this->set_hand_9(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_4, 2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_5, 0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_6, 0, /*hidden argument*/NULL);
		__this->set_endSpring_10(L_7);
		return;
	}
}
// System.Boolean HandTool::Action()
extern "C" IL2CPP_METHOD_ATTR bool HandTool_Action_m4D788362D071ABEF41EE0B1214F591ACEA82044C (HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96 * __this, const RuntimeMethod* method)
{
	{
		((Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 *)__this)->set_isActive_4((bool)1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_spring_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_z_4();
		__this->set_initialZ_11(L_3);
		bool L_4 = ((Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 *)__this)->get_isActive_4();
		return L_4;
	}
}
// System.Void HandTool::MoveAction()
extern "C" IL2CPP_METHOD_ATTR void HandTool_MoveAction_m44147F9413B1CA928ADA0D242C1C878A37F83901 (HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandTool_MoveAction_m44147F9413B1CA928ADA0D242C1C878A37F83901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		Rigidbody_set_useGravity_mB0D957A9D8A9819E18D2E81F465C5C0B60CBC6DA(L_0, (bool)0, /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_1 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		Rigidbody_set_detectCollisions_mD6BE24EC78D298D6F737822E3A63123AF586045F(L_1, (bool)0, /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_2 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		Rigidbody_set_constraints_m6E6AACB03165E54952E7CFE13C07188205A7061F(L_2, ((int32_t)116), /*hidden argument*/NULL);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_3 = Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6(__this, /*hidden argument*/Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6_RuntimeMethod_var);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_3, (bool)0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = ((Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 *)__this)->get_player_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = ((Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 *)__this)->get_player_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = ((Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 *)__this)->get_player_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_17), L_8, ((float)il2cpp_codegen_add((float)L_12, (float)(2.5f))), L_16, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_4, L_17, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = ((Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 *)__this)->get_player_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_19, /*hidden argument*/NULL);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_18, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HandTool::RemoveAction()
extern "C" IL2CPP_METHOD_ATTR void HandTool_RemoveAction_m6C8DA2C2C75F5BDF618F2407275F9710D8F1D671 (HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandTool_RemoveAction_m6C8DA2C2C75F5BDF618F2407275F9710D8F1D671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_0 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		Rigidbody_set_useGravity_mB0D957A9D8A9819E18D2E81F465C5C0B60CBC6DA(L_0, (bool)1, /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_1 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		Rigidbody_set_constraints_m6E6AACB03165E54952E7CFE13C07188205A7061F(L_1, ((int32_t)80), /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_2 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		Rigidbody_set_detectCollisions_mD6BE24EC78D298D6F737822E3A63123AF586045F(L_2, (bool)1, /*hidden argument*/NULL);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_3 = Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6(__this, /*hidden argument*/Component_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m6B8E8E0E0AF6B08652B81B7950FC5AF63EAD40C6_RuntimeMethod_var);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_3, (bool)1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_4, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HandTool::Animation()
extern "C" IL2CPP_METHOD_ATTR void HandTool_Animation_m6A4D243070AB985FAFED92D33EF1483FEB99F77A (HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandTool_Animation_m6A4D243070AB985FAFED92D33EF1483FEB99F77A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral5D48DC9774E9816F60AF6F01EB4122B1EF00C64B, /*hidden argument*/NULL);
		bool L_0 = __this->get_back_13();
		if (L_0)
		{
			goto IL_00d5;
		}
	}
	{
		bool L_1 = __this->get_going_12();
		if (L_1)
		{
			goto IL_00d5;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_spring_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_spring_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_4, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_spring_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_z_4();
		float L_11 = __this->get_distance_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_12), (1.0f), (1.0f), ((float)il2cpp_codegen_add((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		float L_13 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_14 = __this->get_speed_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_6, L_12, ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14)), /*hidden argument*/NULL);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_15, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = __this->get_hand_9();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_16, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = __this->get_endSpring_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = __this->get_endSpring_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = __this->get_endSpring_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_30), L_21, L_25, L_29, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_17, L_30, /*hidden argument*/NULL);
		goto IL_01ab;
	}

IL_00d5:
	{
		bool L_31 = __this->get_back_13();
		if (L_31)
		{
			goto IL_0186;
		}
	}
	{
		bool L_32 = __this->get_going_12();
		if (!L_32)
		{
			goto IL_0186;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = __this->get_spring_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_33, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = __this->get_spring_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_35, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38;
		memset(&L_38, 0, sizeof(L_38));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_38), (1.0f), (1.0f), (5.0f), /*hidden argument*/NULL);
		float L_39 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_40 = __this->get_speed_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_37, L_38, ((float)il2cpp_codegen_multiply((float)L_39, (float)L_40)), /*hidden argument*/NULL);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_34, L_41, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = __this->get_hand_9();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_43 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_42, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = __this->get_endSpring_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_44, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = __this->get_endSpring_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_48, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_52 = __this->get_endSpring_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_53 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_52, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56;
		memset(&L_56, 0, sizeof(L_56));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_56), L_47, L_51, L_55, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_43, L_56, /*hidden argument*/NULL);
		goto IL_01ab;
	}

IL_0186:
	{
		bool L_57 = __this->get_back_13();
		if (!L_57)
		{
			goto IL_01ab;
		}
	}
	{
		bool L_58 = __this->get_going_12();
		if (!L_58)
		{
			goto IL_01ab;
		}
	}
	{
		((Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 *)__this)->set_isActive_4((bool)0);
		__this->set_going_12((bool)0);
		__this->set_back_13((bool)0);
	}

IL_01ab:
	{
		bool L_59 = __this->get_going_12();
		bool L_60 = L_59;
		RuntimeObject * L_61 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_60);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_61, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = __this->get_spring_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_63 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_62, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_63, /*hidden argument*/NULL);
		float L_65 = L_64.get_z_4();
		float L_66 = __this->get_initialZ_11();
		float L_67 = __this->get_distance_7();
		if ((!(((float)L_65) >= ((float)((float)il2cpp_codegen_add((float)L_66, (float)L_67))))))
		{
			goto IL_01e7;
		}
	}
	{
		__this->set_going_12((bool)1);
		return;
	}

IL_01e7:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_68 = __this->get_spring_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_69 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_68, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_69, /*hidden argument*/NULL);
		float L_71 = L_70.get_z_4();
		if ((!(((float)L_71) <= ((float)(6.0f)))))
		{
			goto IL_028d;
		}
	}
	{
		bool L_72 = __this->get_going_12();
		if (!L_72)
		{
			goto IL_028d;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_73 = __this->get_spring_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_74 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_73, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75;
		memset(&L_75, 0, sizeof(L_75));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_75), (1.0f), (1.0f), (6.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_74, L_75, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_76 = __this->get_hand_9();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_77 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_76, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_78 = __this->get_endSpring_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_79 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_78, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_79, /*hidden argument*/NULL);
		float L_81 = L_80.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_82 = __this->get_endSpring_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_83 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_82, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_83, /*hidden argument*/NULL);
		float L_85 = L_84.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_86 = __this->get_endSpring_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_87 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_86, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_87, /*hidden argument*/NULL);
		float L_89 = L_88.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90;
		memset(&L_90, 0, sizeof(L_90));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_90), L_81, L_85, L_89, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_77, L_90, /*hidden argument*/NULL);
		__this->set_back_13((bool)1);
	}

IL_028d:
	{
		return;
	}
}
// System.Void HandTool::Update()
extern "C" IL2CPP_METHOD_ATTR void HandTool_Update_m03AC1A4DCB0DF35FE8044F3E8E29A90D54515406 (HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = ((Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 *)__this)->get_isActive_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		HandTool_Animation_m6A4D243070AB985FAFED92D33EF1483FEB99F77A(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		return;
	}
}
// System.Void HandTool::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HandTool__ctor_m96F7CFC09B6326B5E19B90C47FDCC99321A5861B (HandTool_t26B5FE17BAA59A3C24EFF72E796EA3F452B77E96 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_6((10.0f));
		__this->set_distance_7((100.0f));
		Tool__ctor_m6D73DADFDDF8D765A98E87EEDB58D1901EB011BE(__this, /*hidden argument*/NULL);
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
// System.Void Invector.CharacterController.vThirdPersonAnimator::UpdateAnimator()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonAnimator_UpdateAnimator_mE2EC2ABDD44215CB1F4324C5A426A9E1728E056E (vThirdPersonAnimator_tF24E16ABD5341B3D837CC1ECE04DEE08DF6A80D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonAnimator_UpdateAnimator_mE2EC2ABDD44215CB1F4324C5A426A9E1728E056E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_animator_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_2 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_animator_39();
		bool L_3 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001b:
	{
		return;
	}

IL_001c:
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_4 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_animator_39();
		bool L_5 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_isStrafing_31();
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_4, _stringLiteral7412DA39CDA17626B9DA1357A2EA2CE17154045B, L_5, /*hidden argument*/NULL);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_6 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_animator_39();
		bool L_7 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_isGrounded_30();
		Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E(L_6, _stringLiteralCC8D7979F8F6B6CAC74FEF89F920AA835E515A9E, L_7, /*hidden argument*/NULL);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_8 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_animator_39();
		float L_9 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_groundDistance_28();
		Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43(L_8, _stringLiteralCE2A5353874FB974AE9402FD90C0C5366C054D2D, L_9, /*hidden argument*/NULL);
		bool L_10 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_isGrounded_30();
		if (L_10)
		{
			goto IL_007c;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_11 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_animator_39();
		float L_12 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_verticalVelocity_49();
		Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43(L_11, _stringLiteral42BC272E41ECB68FE544AA26C6F3AC14C8E21034, L_12, /*hidden argument*/NULL);
	}

IL_007c:
	{
		bool L_13 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_isStrafing_31();
		if (!L_13)
		{
			goto IL_00a4;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_14 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_animator_39();
		float L_15 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_direction_48();
		float L_16 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Animator_SetFloat_mC260C82EF3FD1DB6B66FE898C595D5F901E59681(L_14, _stringLiteral4B320286A7B52182926BE83598B20BF6EE8B1A32, L_15, (0.1f), L_16, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_17 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_animator_39();
		float L_18 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_speed_47();
		float L_19 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Animator_SetFloat_mC260C82EF3FD1DB6B66FE898C595D5F901E59681(L_17, _stringLiteral0F8A9C0EB23E615A1D8B064995A0E7D9645FEA6C, L_18, (0.1f), L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonAnimator::OnAnimatorMove()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonAnimator_OnAnimatorMove_mC8BD57FADE6EFD7D0C42568CAB37CCD07C3F7C73 (vThirdPersonAnimator_tF24E16ABD5341B3D837CC1ECE04DEE08DF6A80D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonAnimator_OnAnimatorMove_mC8BD57FADE6EFD7D0C42568CAB37CCD07C3F7C73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		bool L_0 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_isGrounded_30();
		if (!L_0)
		{
			goto IL_0111;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_2 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_animator_39();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Animator_get_rootRotation_m68969AC7E749C182149EF6A05307930613FAB6B0(L_2, /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_1, L_3, /*hidden argument*/NULL);
		float L_4 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_direction_48();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_5 = fabsf(L_4);
		float L_6 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_speed_47();
		float L_7 = fabsf(L_6);
		V_0 = ((float)il2cpp_codegen_add((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_8, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_isSprinting_32();
		if (L_10)
		{
			goto IL_0059;
		}
	}
	{
		G_B4_0 = (1.0f);
		goto IL_005e;
	}

IL_0059:
	{
		G_B4_0 = (1.5f);
	}

IL_005e:
	{
		float L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_11, (0.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)G_B4_0, (float)L_12));
		bool L_13 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_isStrafing_31();
		if (!L_13)
		{
			goto IL_00b7;
		}
	}
	{
		float L_14 = V_1;
		if ((!(((float)L_14) <= ((float)(0.5f)))))
		{
			goto IL_008d;
		}
	}
	{
		float L_15 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_strafeWalkSpeed_20();
		vThirdPersonMotor_ControlSpeed_m2941913A911A6056A2C584B167A7F5C3C8D9CB96(__this, L_15, /*hidden argument*/NULL);
		return;
	}

IL_008d:
	{
		float L_16 = V_1;
		if ((!(((float)L_16) > ((float)(0.5f)))))
		{
			goto IL_00aa;
		}
	}
	{
		float L_17 = V_1;
		if ((!(((float)L_17) <= ((float)(1.0f)))))
		{
			goto IL_00aa;
		}
	}
	{
		float L_18 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_strafeRunningSpeed_21();
		vThirdPersonMotor_ControlSpeed_m2941913A911A6056A2C584B167A7F5C3C8D9CB96(__this, L_18, /*hidden argument*/NULL);
		return;
	}

IL_00aa:
	{
		float L_19 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_strafeSprintSpeed_22();
		vThirdPersonMotor_ControlSpeed_m2941913A911A6056A2C584B167A7F5C3C8D9CB96(__this, L_19, /*hidden argument*/NULL);
		return;
	}

IL_00b7:
	{
		bool L_20 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_isStrafing_31();
		if (L_20)
		{
			goto IL_0111;
		}
	}
	{
		float L_21 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_speed_47();
		if ((!(((float)L_21) <= ((float)(0.5f)))))
		{
			goto IL_00d9;
		}
	}
	{
		float L_22 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_freeWalkSpeed_17();
		vThirdPersonMotor_ControlSpeed_m2941913A911A6056A2C584B167A7F5C3C8D9CB96(__this, L_22, /*hidden argument*/NULL);
		return;
	}

IL_00d9:
	{
		float L_23 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_speed_47();
		if ((!(((double)(((double)((double)L_23)))) > ((double)(0.5)))))
		{
			goto IL_0105;
		}
	}
	{
		float L_24 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_speed_47();
		if ((!(((float)L_24) <= ((float)(1.0f)))))
		{
			goto IL_0105;
		}
	}
	{
		float L_25 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_freeRunningSpeed_18();
		vThirdPersonMotor_ControlSpeed_m2941913A911A6056A2C584B167A7F5C3C8D9CB96(__this, L_25, /*hidden argument*/NULL);
		return;
	}

IL_0105:
	{
		float L_26 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_freeSprintSpeed_19();
		vThirdPersonMotor_ControlSpeed_m2941913A911A6056A2C584B167A7F5C3C8D9CB96(__this, L_26, /*hidden argument*/NULL);
	}

IL_0111:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonAnimator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonAnimator__ctor_m88EDEC9C629C32FEE9246282873E9E939A9EEBDC (vThirdPersonAnimator_tF24E16ABD5341B3D837CC1ECE04DEE08DF6A80D4 * __this, const RuntimeMethod* method)
{
	{
		vThirdPersonMotor__ctor_mE6D73342E716F15BA25E7D47A5B3D50B6EBE00DB(__this, /*hidden argument*/NULL);
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
// System.Void Invector.CharacterController.vThirdPersonController::Start()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonController_Start_mD515AC465A11409958C199DBC7609A2F60E3FB59 (vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * __this, const RuntimeMethod* method)
{
	{
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonController::Sprint(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonController_Sprint_mFF23878BFF2411BFE6AE2E1E1DE8D5E22A0EAEE5 (vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->set_isSprinting_32(L_0);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonController::Strafe()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonController_Strafe_mCA0101051D032C73A717E0C2E1E955DCF82B760E (vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_locomotionType_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		bool L_1 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_isStrafing_31();
		((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->set_isStrafing_31((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonController::Jump()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonController_Jump_m663F74E870920AF5DF1D28FC815E1F2010882700 (vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonController_Jump_m663F74E870920AF5DF1D28FC815E1F2010882700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_isGrounded_30();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_isJumping_34();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		if (G_B3_0)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		float L_2 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_jumpTimer_12();
		((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->set_jumpCounter_13(L_2);
		((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->set_isJumping_34((bool)1);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_3 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_5) < ((float)(1.0f)))))
		{
			goto IL_005a;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_6 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_animator_39();
		Animator_CrossFadeInFixedTime_m65BA22AECB97BA6A2795532170EAAE2F2624D344(L_6, _stringLiteral1EBA140FDD9C6860A1730C408E3064AA417CA2A3, (0.1f), /*hidden argument*/NULL);
		return;
	}

IL_005a:
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_7 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_animator_39();
		Animator_CrossFadeInFixedTime_m65BA22AECB97BA6A2795532170EAAE2F2624D344(L_7, _stringLiteral4BE348194FAF4269E77089A77DA5A3B6F4412E44, (0.2f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonController::RotateWithAnotherTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonController_RotateWithAnotherTransform_mA8C7E53148B756AE3F01DA7A38CE4DC39090CFCF (vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___referenceTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonController_RotateWithAnotherTransform_mA8C7E53148B756AE3F01DA7A38CE4DC39090CFCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___referenceTransform0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), L_2, L_5, L_8, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_10, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_12, /*hidden argument*/NULL);
		float L_14 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->get_strafeRotationSpeed_10();
		float L_15 = Time_get_fixedDeltaTime_m76C241EDB6F824713AF57DCECD5765871770FA4C(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27(L_11, L_13, ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_9, L_16, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_17, /*hidden argument*/NULL);
		((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)__this)->set_targetRotation_36(L_18);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonController__ctor_mD2A3A63B19E2613644CB710E0B3DB86EACF8C740 (vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * __this, const RuntimeMethod* method)
{
	{
		vThirdPersonAnimator__ctor_m88EDEC9C629C32FEE9246282873E9E939A9EEBDC(__this, /*hidden argument*/NULL);
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
// System.Void Invector.CharacterController.vThirdPersonInput::Start()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_Start_mA46EC790DB93EAFD42D5D52675D776B21D1A0598 (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Invector.CharacterController.vThirdPersonInput::CharacterInit() */, __this);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::CharacterInit()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_CharacterInit_m32C95B7E1C0DDD50C0790004B5C3AE8B453D53A7 (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonInput_CharacterInit_m32C95B7E1C0DDD50C0790004B5C3AE8B453D53A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_0 = Component_GetComponent_TisvThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437_mCE3055DABAA5762FF0DCAB451ED8A8D4FC410822(__this, /*hidden argument*/Component_GetComponent_TisvThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437_mCE3055DABAA5762FF0DCAB451ED8A8D4FC410822_RuntimeMethod_var);
		__this->set_cc_17(L_0);
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_1 = __this->get_cc_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_3 = __this->get_cc_17();
		vThirdPersonMotor_Init_m079DAD8228CD9B981D776CF48DF73AA47874D4CF(L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_4 = Object_FindObjectOfType_TisvThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_m18DA38BDDF82025DCAD3D7CAB52576C327FE8F83(/*hidden argument*/Object_FindObjectOfType_TisvThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_m18DA38BDDF82025DCAD3D7CAB52576C327FE8F83_RuntimeMethod_var);
		__this->set_tpCamera_11(L_4);
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_5 = __this->get_tpCamera_11();
		bool L_6 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_7 = __this->get_tpCamera_11();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		vThirdPersonCamera_SetMainTarget_m9E74396CFD922D503F3F94975EB53B56CEBBD812(L_7, L_8, /*hidden argument*/NULL);
	}

IL_004e:
	{
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)0, /*hidden argument*/NULL);
		Cursor_set_lockState_m019E27A0FE021A28A1C672801416ACA5E770933F(1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::LateUpdate()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_LateUpdate_m4D2F54374CE3E27D42B1706358EC485CA6AAA362 (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonInput_LateUpdate_m4D2F54374CE3E27D42B1706358EC485CA6AAA362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_0 = __this->get_cc_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		VirtActionInvoker0::Invoke(9 /* System.Void Invector.CharacterController.vThirdPersonInput::InputHandle() */, __this);
		VirtActionInvoker0::Invoke(16 /* System.Void Invector.CharacterController.vThirdPersonInput::UpdateCameraStates() */, __this);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_FixedUpdate_m8FD34391D784985588A47B0C9E3B65BEE5BA39ED (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_0 = __this->get_cc_17();
		vThirdPersonMotor_AirControl_m9959C777D90EDCA9B628A65D5F5AECA8A4F93486(L_0, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(15 /* System.Void Invector.CharacterController.vThirdPersonInput::CameraInput() */, __this);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::Update()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_Update_mC834BD21105B12A0F717C5CEE3068B99865FCC42 (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_0 = __this->get_cc_17();
		VirtActionInvoker0::Invoke(4 /* System.Void Invector.CharacterController.vThirdPersonMotor::UpdateMotor() */, L_0);
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_1 = __this->get_cc_17();
		VirtActionInvoker0::Invoke(8 /* System.Void Invector.CharacterController.vThirdPersonAnimator::UpdateAnimator() */, L_1);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::InputHandle()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_InputHandle_m564EF7FEF07AAB8863C642C32793D879D969FC75 (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(14 /* System.Void Invector.CharacterController.vThirdPersonInput::ExitGameInput() */, __this);
		VirtActionInvoker0::Invoke(15 /* System.Void Invector.CharacterController.vThirdPersonInput::CameraInput() */, __this);
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_0 = __this->get_cc_17();
		bool L_1 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)L_0)->get_lockMovement_8();
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		VirtActionInvoker0::Invoke(10 /* System.Void Invector.CharacterController.vThirdPersonInput::MoveCharacter() */, __this);
		VirtActionInvoker0::Invoke(12 /* System.Void Invector.CharacterController.vThirdPersonInput::SprintInput() */, __this);
		VirtActionInvoker0::Invoke(11 /* System.Void Invector.CharacterController.vThirdPersonInput::StrafeInput() */, __this);
		VirtActionInvoker0::Invoke(13 /* System.Void Invector.CharacterController.vThirdPersonInput::JumpInput() */, __this);
	}

IL_0031:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::MoveCharacter()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_MoveCharacter_m6C0A56F113725C8D0480F914876408CDAD79624C (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_0 = __this->get_cc_17();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_1 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)L_0)->get_address_of_input_46();
		String_t* L_2 = __this->get_horizontalInput_4();
		float L_3 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(L_2, /*hidden argument*/NULL);
		L_1->set_x_0(L_3);
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_4 = __this->get_cc_17();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_5 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)L_4)->get_address_of_input_46();
		String_t* L_6 = __this->get_verticallInput_5();
		float L_7 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(L_6, /*hidden argument*/NULL);
		L_5->set_y_1(L_7);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::StrafeInput()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_StrafeInput_m6DBDB846F26FEAEC6B9B324B301E491D1670642D (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_strafeInput_7();
		bool L_1 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_2 = __this->get_cc_17();
		VirtActionInvoker0::Invoke(11 /* System.Void Invector.CharacterController.vThirdPersonController::Strafe() */, L_2);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::SprintInput()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_SprintInput_m32E43DC463753C1FD3E7B4B878C3D6F68F496EB9 (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_sprintInput_8();
		bool L_1 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_2 = __this->get_cc_17();
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void Invector.CharacterController.vThirdPersonController::Sprint(System.Boolean) */, L_2, (bool)1);
		return;
	}

IL_001a:
	{
		int32_t L_3 = __this->get_sprintInput_8();
		bool L_4 = Input_GetKeyUp_m87C9C3E0877717675108A80EC663E60AD4D60D7C(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_5 = __this->get_cc_17();
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void Invector.CharacterController.vThirdPersonController::Sprint(System.Boolean) */, L_5, (bool)0);
	}

IL_0033:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::JumpInput()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_JumpInput_mE3645305B2DEBB426C39F0C7ED59308EA87E6586 (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_jumpInput_6();
		bool L_1 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_2 = __this->get_cc_17();
		VirtActionInvoker0::Invoke(12 /* System.Void Invector.CharacterController.vThirdPersonController::Jump() */, L_2);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::ExitGameInput()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_ExitGameInput_m73F8CEEE4D0AF0D53693C8FF4B9F9A4E86F37E30 (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		bool L_1 = Cursor_get_visible_m0BB8BC7FEDD558FB661E9023AB8C04FFEE41377C(/*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431((bool)1, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::CameraInput()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_CameraInput_mB16195AC52FD6CDAFDDB27B16E7108F72CF96416 (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonInput_CameraInput_mB16195AC52FD6CDAFDDB27B16E7108F72CF96416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * G_B5_0 = NULL;
	vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * G_B4_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B6_0 = NULL;
	vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * G_B6_1 = NULL;
	vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * G_B9_0 = NULL;
	vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * G_B8_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B10_0 = NULL;
	vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * G_B10_1 = NULL;
	{
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_0 = __this->get_tpCamera_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		String_t* L_2 = __this->get_rotateCameraYInput_10();
		float L_3 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = __this->get_rotateCameraXInput_9();
		float L_5 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_6 = __this->get_tpCamera_11();
		float L_7 = V_1;
		float L_8 = V_0;
		vThirdPersonCamera_RotateCamera_m73CDBE5D7114F10B1A1F1BE2BA46F33D1BBD6F7B(L_6, L_7, L_8, /*hidden argument*/NULL);
		bool L_9 = __this->get_keepDirection_16();
		if (L_9)
		{
			goto IL_0063;
		}
	}
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_10 = __this->get_cc_17();
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_11 = __this->get_tpCamera_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B4_0 = L_10;
		if (L_12)
		{
			G_B5_0 = L_10;
			goto IL_0053;
		}
	}
	{
		G_B6_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
		G_B6_1 = G_B4_0;
		goto IL_005e;
	}

IL_0053:
	{
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_13 = __this->get_tpCamera_11();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_13, /*hidden argument*/NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_0;
	}

IL_005e:
	{
		VirtActionInvoker1< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * >::Invoke(7 /* System.Void Invector.CharacterController.vThirdPersonMotor::UpdateTargetDirection(UnityEngine.Transform) */, G_B6_1, G_B6_0);
	}

IL_0063:
	{
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_15 = __this->get_tpCamera_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_15, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B8_0 = __this;
		if (L_16)
		{
			G_B9_0 = __this;
			goto IL_0075;
		}
	}
	{
		G_B10_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
		G_B10_1 = G_B8_0;
		goto IL_0080;
	}

IL_0075:
	{
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_17 = __this->get_tpCamera_11();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_17, /*hidden argument*/NULL);
		G_B10_0 = L_18;
		G_B10_1 = G_B9_0;
	}

IL_0080:
	{
		VirtActionInvoker1< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * >::Invoke(17 /* System.Void Invector.CharacterController.vThirdPersonInput::RotateWithCamera(UnityEngine.Transform) */, G_B10_1, G_B10_0);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::UpdateCameraStates()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_UpdateCameraStates_mF9E3C43A267B9F17968EF4C9F71CF02FB26AE760 (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonInput_UpdateCameraStates_mF9E3C43A267B9F17968EF4C9F71CF02FB26AE760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_0 = __this->get_tpCamera_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_2 = Object_FindObjectOfType_TisvThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_m18DA38BDDF82025DCAD3D7CAB52576C327FE8F83(/*hidden argument*/Object_FindObjectOfType_TisvThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_m18DA38BDDF82025DCAD3D7CAB52576C327FE8F83_RuntimeMethod_var);
		__this->set_tpCamera_11(L_2);
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_3 = __this->get_tpCamera_11();
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		return;
	}

IL_0028:
	{
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_5 = __this->get_tpCamera_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_7 = __this->get_tpCamera_11();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		vThirdPersonCamera_SetMainTarget_m9E74396CFD922D503F3F94975EB53B56CEBBD812(L_7, L_8, /*hidden argument*/NULL);
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_9 = __this->get_tpCamera_11();
		vThirdPersonCamera_Init_m1EC8A56D50ED823044C0F65FAC3BB27B09A3BBCF(L_9, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::RotateWithCamera(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput_RotateWithCamera_m240A21CA0155017D6A852F28272728F485DA0654 (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___cameraTransform0, const RuntimeMethod* method)
{
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_0 = __this->get_cc_17();
		bool L_1 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)L_0)->get_isStrafing_31();
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_2 = __this->get_cc_17();
		bool L_3 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)L_2)->get_lockMovement_8();
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_4 = __this->get_cc_17();
		bool L_5 = ((vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F *)L_4)->get_lockMovement_8();
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		vThirdPersonController_t5036A66B33C99FB3F61959464A9E45D0E2D7A437 * L_6 = __this->get_cc_17();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___cameraTransform0;
		VirtActionInvoker1< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * >::Invoke(13 /* System.Void Invector.CharacterController.vThirdPersonController::RotateWithAnotherTransform(UnityEngine.Transform) */, L_6, L_7);
	}

IL_0033:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonInput::.ctor()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonInput__ctor_m6E3CCC2D521954C839184DDE1DE601B05A791D1E (vThirdPersonInput_tC30BBEC81AE0D8883E2F620479392EEC61D0FD9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonInput__ctor_m6E3CCC2D521954C839184DDE1DE601B05A791D1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_horizontalInput_4(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C);
		__this->set_verticallInput_5(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5);
		__this->set_jumpInput_6(((int32_t)32));
		__this->set_strafeInput_7(((int32_t)9));
		__this->set_sprintInput_8(((int32_t)304));
		__this->set_rotateCameraXInput_9(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0);
		__this->set_rotateCameraYInput_10(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Invector.CharacterController.vThirdPersonMotor::RemoveComponents()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_RemoveComponents_mC6CDF20BCC47046E7DD2C4B691254792049749F5 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_RemoveComponents_mC6CDF20BCC47046E7DD2C4B691254792049749F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_0 = __this->get__capsuleCollider_44();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_2 = __this->get__capsuleCollider_44();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_3 = __this->get__rigidbody_40();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_5 = __this->get__rigidbody_40();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_6 = __this->get_animator_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_8 = __this->get_animator_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_8, /*hidden argument*/NULL);
	}

IL_004b:
	{
		MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A* L_9 = Component_GetComponents_TisMonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_mFF32883CC15055E3DA209D02FFE7DFEB78C12741(__this, /*hidden argument*/Component_GetComponents_TisMonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_mFF32883CC15055E3DA209D02FFE7DFEB78C12741_RuntimeMethod_var);
		V_0 = L_9;
		V_1 = 0;
		goto IL_0062;
	}

IL_0056:
	{
		MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A* L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_15 = V_1;
		MonoBehaviourU5BU5D_tEC81C7491112CB97F70976A67ABB8C33168F5F0A* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0056;
		}
	}
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::Init()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_Init_m079DAD8228CD9B981D776CF48DF73AA47874D4CF (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_Init_m079DAD8228CD9B981D776CF48DF73AA47874D4CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_0 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m7FAA3F910786B0B5F3E0CBA755F38E0453EAF7BA(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m7FAA3F910786B0B5F3E0CBA755F38E0453EAF7BA_RuntimeMethod_var);
		__this->set_animator_39(L_0);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_1 = (PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 *)il2cpp_codegen_object_new(PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8_il2cpp_TypeInfo_var);
		PhysicMaterial__ctor_m1E6AB8A9A487E70DE44AF221946176BE96584DFC(L_1, /*hidden argument*/NULL);
		__this->set_frictionPhysics_42(L_1);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_2 = __this->get_frictionPhysics_42();
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_2, _stringLiteral095A5B9B687B38E33C551AF8758A74993890275B, /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_3 = __this->get_frictionPhysics_42();
		PhysicMaterial_set_staticFriction_m6DC930416F9C22EBCA4661D58F3E369B4E779D3A(L_3, (0.25f), /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_4 = __this->get_frictionPhysics_42();
		PhysicMaterial_set_dynamicFriction_m9FCE6D1715B7385FE3FB427C13C77643BECF635E(L_4, (0.25f), /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_5 = __this->get_frictionPhysics_42();
		PhysicMaterial_set_frictionCombine_mB05C3A5D9A430E1BECADC0530C67C604E2F11696(L_5, 1, /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_6 = (PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 *)il2cpp_codegen_object_new(PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8_il2cpp_TypeInfo_var);
		PhysicMaterial__ctor_m1E6AB8A9A487E70DE44AF221946176BE96584DFC(L_6, /*hidden argument*/NULL);
		__this->set_maxFrictionPhysics_41(L_6);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_7 = __this->get_maxFrictionPhysics_41();
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_7, _stringLiteral8AED85FDEAA118119BC98412BB4291AA2E38590B, /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_8 = __this->get_maxFrictionPhysics_41();
		PhysicMaterial_set_staticFriction_m6DC930416F9C22EBCA4661D58F3E369B4E779D3A(L_8, (1.0f), /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_9 = __this->get_maxFrictionPhysics_41();
		PhysicMaterial_set_dynamicFriction_m9FCE6D1715B7385FE3FB427C13C77643BECF635E(L_9, (1.0f), /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_10 = __this->get_maxFrictionPhysics_41();
		PhysicMaterial_set_frictionCombine_mB05C3A5D9A430E1BECADC0530C67C604E2F11696(L_10, 3, /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_11 = (PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 *)il2cpp_codegen_object_new(PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8_il2cpp_TypeInfo_var);
		PhysicMaterial__ctor_m1E6AB8A9A487E70DE44AF221946176BE96584DFC(L_11, /*hidden argument*/NULL);
		__this->set_slippyPhysics_43(L_11);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_12 = __this->get_slippyPhysics_43();
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_12, _stringLiteralEAA800D70FBB4BCA67ABF8791260FEBEEB618C10, /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_13 = __this->get_slippyPhysics_43();
		PhysicMaterial_set_staticFriction_m6DC930416F9C22EBCA4661D58F3E369B4E779D3A(L_13, (0.0f), /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_14 = __this->get_slippyPhysics_43();
		PhysicMaterial_set_dynamicFriction_m9FCE6D1715B7385FE3FB427C13C77643BECF635E(L_14, (0.0f), /*hidden argument*/NULL);
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_15 = __this->get_slippyPhysics_43();
		PhysicMaterial_set_frictionCombine_mB05C3A5D9A430E1BECADC0530C67C604E2F11696(L_15, 2, /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_16 = Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m3F58A77E3F62D9C80D7B49BA04E3D4809264FD5C_RuntimeMethod_var);
		__this->set__rigidbody_40(L_16);
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_17 = Component_GetComponent_TisCapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_m73D2BA64E56A00BAEDB982029C042CB4CF1A0D37(__this, /*hidden argument*/Component_GetComponent_TisCapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1_m73D2BA64E56A00BAEDB982029C042CB4CF1A0D37_RuntimeMethod_var);
		__this->set__capsuleCollider_44(L_17);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::UpdateMotor()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_UpdateMotor_m2B96761ED297CC127E3A140F938DD2A39B610942 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	{
		vThirdPersonMotor_CheckGround_mD2E750B9FFC5D4152808803B4A16A24BEAB95DB9(__this, /*hidden argument*/NULL);
		vThirdPersonMotor_ControlJumpBehaviour_m33E3924D77E3B0BB3266C05A99FC0CDB6BB44B31(__this, /*hidden argument*/NULL);
		vThirdPersonMotor_ControlLocomotion_m46D574FEB493A0166B64D830294500D14B3E7843(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Invector.CharacterController.vThirdPersonMotor::get_freeLocomotionConditions()
extern "C" IL2CPP_METHOD_ATTR bool vThirdPersonMotor_get_freeLocomotionConditions_m158DB18E06FC15E80958A35F132EE7D02C24E304 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_get_freeLocomotionConditions_m158DB18E06FC15E80958A35F132EE7D02C24E304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->get_address_of_locomotionType_7();
		int32_t L_1 = ((int32_t)1);
		RuntimeObject * L_2 = Box(LocomotionType_t04F1026900EAA9F38E0A2312FF48BF2448755DF3_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(LocomotionType_t04F1026900EAA9F38E0A2312FF48BF2448755DF3_il2cpp_TypeInfo_var, L_0);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*L_0 = *(int32_t*)UnBox(L_3);
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		__this->set_isStrafing_31((bool)1);
	}

IL_0020:
	{
		bool L_5 = __this->get_isStrafing_31();
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		int32_t* L_6 = __this->get_address_of_locomotionType_7();
		int32_t L_7 = ((int32_t)1);
		RuntimeObject * L_8 = Box(LocomotionType_t04F1026900EAA9F38E0A2312FF48BF2448755DF3_il2cpp_TypeInfo_var, &L_7);
		RuntimeObject * L_9 = Box(LocomotionType_t04F1026900EAA9F38E0A2312FF48BF2448755DF3_il2cpp_TypeInfo_var, L_6);
		bool L_10 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_9, L_8);
		*L_6 = *(int32_t*)UnBox(L_9);
		if (!L_10)
		{
			goto IL_0059;
		}
	}

IL_0041:
	{
		int32_t* L_11 = __this->get_address_of_locomotionType_7();
		int32_t L_12 = ((int32_t)2);
		RuntimeObject * L_13 = Box(LocomotionType_t04F1026900EAA9F38E0A2312FF48BF2448755DF3_il2cpp_TypeInfo_var, &L_12);
		RuntimeObject * L_14 = Box(LocomotionType_t04F1026900EAA9F38E0A2312FF48BF2448755DF3_il2cpp_TypeInfo_var, L_11);
		bool L_15 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_14, L_13);
		*L_11 = *(int32_t*)UnBox(L_14);
		return L_15;
	}

IL_0059:
	{
		return (bool)1;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::ControlLocomotion()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_ControlLocomotion_m46D574FEB493A0166B64D830294500D14B3E7843 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = vThirdPersonMotor_get_freeLocomotionConditions_m158DB18E06FC15E80958A35F132EE7D02C24E304(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Invector.CharacterController.vThirdPersonMotor::FreeMovement() */, __this);
		return;
	}

IL_000f:
	{
		vThirdPersonMotor_StrafeMovement_m48CCCD7DCC3E6181E72B454DB4244DDD1A87A350(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::StrafeMovement()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_StrafeMovement_m48CCCD7DCC3E6181E72B454DB4244DDD1A87A350 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_StrafeMovement_m48CCCD7DCC3E6181E72B454DB4244DDD1A87A350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_input_46();
		float L_1 = L_0->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_1, (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_3 = __this->get_address_of_input_46();
		float L_4 = L_3->get_x_0();
		float L_5 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_4, (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = V_0;
		__this->set_speed_47(L_6);
		float L_7 = V_1;
		__this->set_direction_48(L_7);
		bool L_8 = __this->get_isSprinting_32();
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		float L_9 = __this->get_speed_47();
		__this->set_speed_47(((float)il2cpp_codegen_add((float)L_9, (float)(0.5f))));
	}

IL_005e:
	{
		float L_10 = __this->get_direction_48();
		if ((((double)(((double)((double)L_10)))) >= ((double)(0.7))))
		{
			goto IL_0094;
		}
	}
	{
		float L_11 = __this->get_direction_48();
		if ((((double)(((double)((double)L_11)))) <= ((double)(-0.7))))
		{
			goto IL_0094;
		}
	}
	{
		float L_12 = __this->get_speed_47();
		if ((!(((double)(((double)((double)L_12)))) <= ((double)(0.1)))))
		{
			goto IL_009b;
		}
	}

IL_0094:
	{
		__this->set_isSprinting_32((bool)0);
	}

IL_009b:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::FreeMovement()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_FreeMovement_mB6A22F1332081950BB69C4BC073ACCBAB01DE839 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_FreeMovement_mB6A22F1332081950BB69C4BC073ACCBAB01DE839_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_input_46();
		float L_1 = L_0->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_3 = __this->get_address_of_input_46();
		float L_4 = L_3->get_y_1();
		float L_5 = fabsf(L_4);
		__this->set_speed_47(((float)il2cpp_codegen_add((float)L_2, (float)L_5)));
		float L_6 = __this->get_speed_47();
		float L_7 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_6, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_speed_47(L_7);
		bool L_8 = __this->get_isSprinting_32();
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		float L_9 = __this->get_speed_47();
		__this->set_speed_47(((float)il2cpp_codegen_add((float)L_9, (float)(0.5f))));
	}

IL_005c:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = __this->get_input_46();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		bool L_12 = Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_016a;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_13 = __this->get_address_of_targetDirection_35();
		float L_14 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_13, /*hidden argument*/NULL);
		if ((!(((float)L_14) > ((float)(0.1f)))))
		{
			goto IL_016a;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_15 = __this->get_address_of_targetDirection_35();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_17, L_19, /*hidden argument*/NULL);
		__this->set_freeRotation_37(L_20);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_21 = __this->get_address_of_freeRotation_37();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_23, (float)L_26));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_3();
		V_2 = L_29;
		bool L_30 = __this->get_isGrounded_30();
		if (L_30)
		{
			goto IL_00f4;
		}
	}
	{
		bool L_31 = __this->get_isGrounded_30();
		if (L_31)
		{
			goto IL_016a;
		}
	}
	{
		bool L_32 = __this->get_jumpAirControl_11();
		if (!L_32)
		{
			goto IL_016a;
		}
	}

IL_00f4:
	{
		float L_33 = V_1;
		if ((((float)L_33) < ((float)(0.0f))))
		{
			goto IL_0104;
		}
	}
	{
		float L_34 = V_1;
		if ((!(((float)L_34) > ((float)(0.0f)))))
		{
			goto IL_0115;
		}
	}

IL_0104:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_35 = __this->get_address_of_freeRotation_37();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_35, /*hidden argument*/NULL);
		float L_37 = L_36.get_y_3();
		V_2 = L_37;
	}

IL_0115:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_x_2();
		float L_41 = V_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_z_4();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), L_40, L_41, L_44, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_47 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_46, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_48, /*hidden argument*/NULL);
		float L_50 = __this->get_freeRotationSpeed_9();
		float L_51 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_52 = Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27(L_47, L_49, ((float)il2cpp_codegen_multiply((float)L_50, (float)L_51)), /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_45, L_52, /*hidden argument*/NULL);
	}

IL_016a:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::ControlSpeed(System.Single)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_ControlSpeed_m2941913A911A6056A2C584B167A7F5C3C8D9CB96 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, float ___velocity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_ControlSpeed_m2941913A911A6056A2C584B167A7F5C3C8D9CB96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B5_0;
	memset(&G_B5_0, 0, sizeof(G_B5_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	float G_B6_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B6_1;
	memset(&G_B6_1, 0, sizeof(G_B6_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B10_0;
	memset(&G_B10_0, 0, sizeof(G_B10_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B9_0;
	memset(&G_B9_0, 0, sizeof(G_B9_0));
	float G_B11_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B11_1;
	memset(&G_B11_1, 0, sizeof(G_B11_1));
	{
		float L_0 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		bool L_1 = __this->get_useRootMotion_16();
		if (!L_1)
		{
			goto IL_007f;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_2 = __this->get_animator_39();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Animator_get_deltaPosition_m85287AA699C50B6AA7489CD313F8CFED5D998533(L_2, /*hidden argument*/NULL);
		float L_4 = ___velocity0;
		G_B4_0 = L_3;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			G_B5_0 = L_3;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B4_0;
		goto IL_0030;
	}

IL_002f:
	{
		float L_5 = ___velocity0;
		G_B6_0 = L_5;
		G_B6_1 = G_B5_0;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_9 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		(&V_0)->set_y_3(L_11);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_12 = __this->get__rigidbody_40();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_13 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_0;
		float L_16 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_14, L_15, ((float)il2cpp_codegen_multiply((float)(20.0f), (float)L_16)), /*hidden argument*/NULL);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_12, L_17, /*hidden argument*/NULL);
		return;
	}

IL_007f:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_18, /*hidden argument*/NULL);
		float L_20 = ___velocity0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_19, L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_speed_47();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_24 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		(&V_1)->set_y_3(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_27, /*hidden argument*/NULL);
		float L_29 = ___velocity0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_28, L_29, /*hidden argument*/NULL);
		float L_31 = __this->get_direction_48();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_30, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_33 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_x_2();
		(&V_2)->set_x_2(L_35);
		bool L_36 = __this->get_isStrafing_31();
		if (!L_36)
		{
			goto IL_0172;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_38 = __this->get_address_of_input_46();
		float L_39 = L_38->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_40 = __this->get_address_of_input_46();
		float L_41 = L_40->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42;
		memset(&L_42, 0, sizeof(L_42));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_42), L_39, (0.0f), L_41, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(L_37, L_42, /*hidden argument*/NULL);
		float L_44 = ___velocity0;
		G_B9_0 = L_43;
		if ((((float)L_44) > ((float)(0.0f))))
		{
			G_B10_0 = L_43;
			goto IL_012c;
		}
	}
	{
		G_B11_0 = (1.0f);
		G_B11_1 = G_B9_0;
		goto IL_012d;
	}

IL_012c:
	{
		float L_45 = ___velocity0;
		G_B11_0 = L_45;
		G_B11_1 = G_B10_0;
	}

IL_012d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(G_B11_1, G_B11_0, /*hidden argument*/NULL);
		V_3 = L_46;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_47 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_y_3();
		(&V_3)->set_y_3(L_49);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_50 = __this->get__rigidbody_40();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_51 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_51, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = V_3;
		float L_54 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_52, L_53, ((float)il2cpp_codegen_multiply((float)(20.0f), (float)L_54)), /*hidden argument*/NULL);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_50, L_55, /*hidden argument*/NULL);
		return;
	}

IL_0172:
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_56 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = V_1;
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_56, L_57, /*hidden argument*/NULL);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_58 = __this->get__rigidbody_40();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_59 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_59, /*hidden argument*/NULL);
		float L_61 = ___velocity0;
		float L_62 = __this->get_speed_47();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_60, ((float)il2cpp_codegen_multiply((float)L_61, (float)L_62)), /*hidden argument*/NULL);
		float L_64 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_63, L_64, /*hidden argument*/NULL);
		Rigidbody_AddForce_mD64ACF772614FE36CFD8A477A07A407B35DF1A54(L_58, L_65, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::ControlJumpBehaviour()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_ControlJumpBehaviour_m33E3924D77E3B0BB3266C05A99FC0CDB6BB44B31 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_isJumping_34();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		float L_1 = __this->get_jumpCounter_13();
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_jumpCounter_13(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		float L_3 = __this->get_jumpCounter_13();
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		__this->set_jumpCounter_13((0.0f));
		__this->set_isJumping_34((bool)0);
	}

IL_003a:
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_4 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6 = __this->get_jumpHeight_15();
		(&V_0)->set_y_3(L_6);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_7 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::AirControl()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_AirControl_m9959C777D90EDCA9B628A65D5F5AECA8A4F93486 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_AirControl_m9959C777D90EDCA9B628A65D5F5AECA8A4F93486_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		bool L_0 = __this->get_isGrounded_30();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		bool L_1 = vThirdPersonMotor_get_jumpFwdCondition_m5465BBCCD6A6ACC8A13CF5B8FE80C1B25D1FBC64(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_jumpForward_14();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_speed_47();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_8 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		(&V_0)->set_y_3(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_11, /*hidden argument*/NULL);
		float L_13 = __this->get_jumpForward_14();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_direction_48();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_14, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_17 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_2();
		(&V_1)->set_x_2(L_19);
		bool L_20 = __this->get_jumpAirControl_11();
		if (!L_20)
		{
			goto IL_017e;
		}
	}
	{
		bool L_21 = __this->get_isStrafing_31();
		if (!L_21)
		{
			goto IL_0133;
		}
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_22 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_1;
		float L_24 = L_23.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_0;
		float L_26 = L_25.get_y_3();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_27 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_30), L_24, L_26, L_29, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_22, L_30, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_31, /*hidden argument*/NULL);
		float L_33 = __this->get_jumpForward_14();
		float L_34 = __this->get_speed_47();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_32, ((float)il2cpp_codegen_multiply((float)L_33, (float)L_34)), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_36, /*hidden argument*/NULL);
		float L_38 = __this->get_jumpForward_14();
		float L_39 = __this->get_direction_48();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_37, ((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_35, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_42 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_2;
		float L_44 = L_43.get_x_2();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_45 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = V_2;
		float L_49 = L_48.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_50), L_44, L_47, L_49, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_42, L_50, /*hidden argument*/NULL);
		return;
	}

IL_0133:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_51, /*hidden argument*/NULL);
		float L_53 = __this->get_jumpForward_14();
		float L_54 = __this->get_speed_47();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_52, ((float)il2cpp_codegen_multiply((float)L_53, (float)L_54)), /*hidden argument*/NULL);
		V_3 = L_55;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_56 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = V_3;
		float L_58 = L_57.get_x_2();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_59 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_59, /*hidden argument*/NULL);
		float L_61 = L_60.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = V_3;
		float L_63 = L_62.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64;
		memset(&L_64, 0, sizeof(L_64));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_64), L_58, L_61, L_63, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_56, L_64, /*hidden argument*/NULL);
		return;
	}

IL_017e:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_65 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_65, /*hidden argument*/NULL);
		float L_67 = __this->get_jumpForward_14();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_66, L_67, /*hidden argument*/NULL);
		V_4 = L_68;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_69 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_70 = V_4;
		float L_71 = L_70.get_x_2();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_72 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_72, /*hidden argument*/NULL);
		float L_74 = L_73.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = V_4;
		float L_76 = L_75.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_77;
		memset(&L_77, 0, sizeof(L_77));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_77), L_71, L_74, L_76, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_69, L_77, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Invector.CharacterController.vThirdPersonMotor::get_jumpFwdCondition()
extern "C" IL2CPP_METHOD_ATTR bool vThirdPersonMotor_get_jumpFwdCondition_m5465BBCCD6A6ACC8A13CF5B8FE80C1B25D1FBC64 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_get_jumpFwdCondition_m5465BBCCD6A6ACC8A13CF5B8FE80C1B25D1FBC64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_2 = __this->get__capsuleCollider_44();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = CapsuleCollider_get_center_m415B40B8ADB6B1C29F3EF4C23839D5514BBA18AE(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_1, L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_6 = __this->get__capsuleCollider_44();
		float L_7 = CapsuleCollider_get_height_mA0F14683CEDB4F32B59D0262AB7507574228EF75(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, ((-L_7)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_8, (0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_4, L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = L_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_13 = __this->get__capsuleCollider_44();
		float L_14 = CapsuleCollider_get_height_mA0F14683CEDB4F32B59D0262AB7507574228EF75(L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_11, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_18 = __this->get__capsuleCollider_44();
		float L_19 = CapsuleCollider_get_radius_m8E753A625226A5AF557AAFEBF5B6D0720C00802D(L_18, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_20, /*hidden argument*/NULL);
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_22 = __this->get_groundLayer_4();
		int32_t L_23 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_22, /*hidden argument*/NULL);
		RaycastHitU5BU5D_tE9BB282384F0196211AD1A480477254188211F57* L_24 = Physics_CapsuleCastAll_m5F70E1568012DEEA00E9B60091B64EA55EBF620F(L_11, L_17, ((float)il2cpp_codegen_multiply((float)L_19, (float)(0.5f))), L_21, (0.6f), L_23, /*hidden argument*/NULL);
		return (bool)((((int32_t)(((RuntimeArray *)L_24)->max_length)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::CheckGround()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_CheckGround_mD2E750B9FFC5D4152808803B4A16A24BEAB95DB9 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_CheckGround_mD2E750B9FFC5D4152808803B4A16A24BEAB95DB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		vThirdPersonMotor_CheckGroundDistance_m353B2A3091AE768AADC7C4B87244190C48E0E893(__this, /*hidden argument*/NULL);
		bool L_0 = __this->get_isGrounded_30();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = __this->get_input_46();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		bool L_3 = Vector2_op_Equality_m0E86E1B1038DDB8554A8A0D58729A7788D989588(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_4 = __this->get__capsuleCollider_44();
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_5 = __this->get_maxFrictionPhysics_41();
		Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74(L_4, L_5, /*hidden argument*/NULL);
		goto IL_0071;
	}

IL_0033:
	{
		bool L_6 = __this->get_isGrounded_30();
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = __this->get_input_46();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		bool L_9 = Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_10 = __this->get__capsuleCollider_44();
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_11 = __this->get_frictionPhysics_42();
		Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74(L_10, L_11, /*hidden argument*/NULL);
		goto IL_0071;
	}

IL_0060:
	{
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_12 = __this->get__capsuleCollider_44();
		PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * L_13 = __this->get_slippyPhysics_43();
		Collider_set_material_m2978E803DF20381466E0BD1F41F759DA015C5E74(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0071:
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_14 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_17 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_20), L_16, (0.0f), L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_22 = Math_Round_m43E20353F30A47D0005BEC4431B380572B9A4932((((double)((double)L_21))), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_23 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507((((float)((float)L_22))), (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_24 = __this->get_groundMinDistance_5();
		V_0 = L_24;
		if ((!(((float)L_23) > ((float)(0.25f)))))
		{
			goto IL_00cf;
		}
	}
	{
		float L_25 = __this->get_groundMaxDistance_6();
		V_0 = L_25;
	}

IL_00cf:
	{
		bool L_26 = vThirdPersonMotor_StepOffset_m5F69945D3E8FED5DC65A503428A244EE5777DCBE(__this, /*hidden argument*/NULL);
		V_1 = L_26;
		float L_27 = __this->get_groundDistance_28();
		if ((!(((float)L_27) <= ((float)(0.05f)))))
		{
			goto IL_00f1;
		}
	}
	{
		__this->set_isGrounded_30((bool)1);
		vThirdPersonMotor_Sliding_m3A14617ACE0C1A43B78F015E7DA6EB8F9E9B4E32(__this, /*hidden argument*/NULL);
		return;
	}

IL_00f1:
	{
		float L_28 = __this->get_groundDistance_28();
		float L_29 = V_0;
		if ((!(((float)L_28) >= ((float)L_29))))
		{
			goto IL_014f;
		}
	}
	{
		__this->set_isGrounded_30((bool)0);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_30 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_3();
		__this->set_verticalVelocity_49(L_32);
		bool L_33 = V_1;
		if (L_33)
		{
			goto IL_0188;
		}
	}
	{
		bool L_34 = __this->get_isJumping_34();
		if (L_34)
		{
			goto IL_0188;
		}
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_35 = __this->get__rigidbody_40();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_36, /*hidden argument*/NULL);
		float L_38 = __this->get_extraGravity_27();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_37, L_38, /*hidden argument*/NULL);
		float L_40 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_39, L_40, /*hidden argument*/NULL);
		Rigidbody_AddForce_mD64ACF772614FE36CFD8A477A07A407B35DF1A54(L_35, L_41, 2, /*hidden argument*/NULL);
		return;
	}

IL_014f:
	{
		bool L_42 = V_1;
		if (L_42)
		{
			goto IL_0188;
		}
	}
	{
		bool L_43 = __this->get_isJumping_34();
		if (L_43)
		{
			goto IL_0188;
		}
	}
	{
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_44 = __this->get__rigidbody_40();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_45, /*hidden argument*/NULL);
		float L_47 = __this->get_extraGravity_27();
		float L_48 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_46, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_47, (float)(2.0f))), (float)L_48)), /*hidden argument*/NULL);
		Rigidbody_AddForce_mD64ACF772614FE36CFD8A477A07A407B35DF1A54(L_44, L_49, 2, /*hidden argument*/NULL);
	}

IL_0188:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::CheckGroundDistance()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_CheckGroundDistance_m353B2A3091AE768AADC7C4B87244190C48E0E893 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_CheckGroundDistance_m353B2A3091AE768AADC7C4B87244190C48E0E893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_0 = __this->get__capsuleCollider_44();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_015a;
		}
	}
	{
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_2 = __this->get__capsuleCollider_44();
		float L_3 = CapsuleCollider_get_radius_m8E753A625226A5AF557AAFEBF5B6D0720C00802D(L_2, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)(0.9f)));
		V_1 = (10.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_7 = __this->get__capsuleCollider_44();
		float L_8 = CapsuleCollider_get_radius_m8E753A625226A5AF557AAFEBF5B6D0720C00802D(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_6, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		float L_13 = __this->get_colliderHeight_45();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_14), (0.0f), ((float)((float)L_13/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_12, L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_17), L_15, L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_19, /*hidden argument*/NULL);
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_3), L_18, L_20, /*hidden argument*/NULL);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_21 = __this->get_address_of_groundHit_29();
		float L_22 = __this->get_colliderHeight_45();
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_23 = __this->get_groundLayer_4();
		int32_t L_24 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_23, /*hidden argument*/NULL);
		bool L_25 = Physics_Raycast_m9F5CAD8DA7923E897C5DCAF913BD411AD1A87950(L_17, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_21, ((float)il2cpp_codegen_add((float)((float)((float)L_22/(float)(2.0f))), (float)(2.0f))), L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00e2;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_y_3();
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_29 = __this->get_address_of_groundHit_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_28, (float)L_31));
	}

IL_00e2:
	{
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_32 = V_3;
		float L_33 = V_0;
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_34 = __this->get_address_of_groundHit_29();
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_35 = __this->get__capsuleCollider_44();
		float L_36 = CapsuleCollider_get_radius_m8E753A625226A5AF557AAFEBF5B6D0720C00802D(L_35, /*hidden argument*/NULL);
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_37 = __this->get_groundLayer_4();
		int32_t L_38 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_37, /*hidden argument*/NULL);
		bool L_39 = Physics_SphereCast_mE831E516D318F8928FD9020BF7E9FEAD95574D68(L_32, L_33, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_34, ((float)il2cpp_codegen_add((float)L_36, (float)(2.0f))), L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_014b;
		}
	}
	{
		float L_40 = V_1;
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_41 = __this->get_address_of_groundHit_29();
		float L_42 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_41, /*hidden argument*/NULL);
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_43 = __this->get__capsuleCollider_44();
		float L_44 = CapsuleCollider_get_radius_m8E753A625226A5AF557AAFEBF5B6D0720C00802D(L_43, /*hidden argument*/NULL);
		if ((!(((float)L_40) > ((float)((float)il2cpp_codegen_subtract((float)L_42, (float)((float)il2cpp_codegen_multiply((float)L_44, (float)(0.1f)))))))))
		{
			goto IL_014b;
		}
	}
	{
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_45 = __this->get_address_of_groundHit_29();
		float L_46 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_45, /*hidden argument*/NULL);
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_47 = __this->get__capsuleCollider_44();
		float L_48 = CapsuleCollider_get_radius_m8E753A625226A5AF557AAFEBF5B6D0720C00802D(L_47, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_subtract((float)L_46, (float)((float)il2cpp_codegen_multiply((float)L_48, (float)(0.1f)))));
	}

IL_014b:
	{
		float L_49 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_50 = Math_Round_m43E20353F30A47D0005BEC4431B380572B9A4932((((double)((double)L_49))), 2, /*hidden argument*/NULL);
		__this->set_groundDistance_28((((float)((float)L_50))));
	}

IL_015a:
	{
		return;
	}
}
// System.Single Invector.CharacterController.vThirdPersonMotor::GroundAngle()
extern "C" IL2CPP_METHOD_ATTR float vThirdPersonMotor_GroundAngle_m7E0A6E141879B0FBF8016CABF10FFEC78E330CBF (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_GroundAngle_m7E0A6E141879B0FBF8016CABF10FFEC78E330CBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_0 = __this->get_address_of_groundHit_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_3 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::Sliding()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_Sliding_m3A14617ACE0C1A43B78F015E7DA6EB8F9E9B4E32 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_Sliding_m3A14617ACE0C1A43B78F015E7DA6EB8F9E9B4E32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		bool L_0 = vThirdPersonMotor_StepOffset_m5F69945D3E8FED5DC65A503428A244EE5777DCBE(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = (0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_4, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_6), L_2, L_5, /*hidden argument*/NULL);
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_7 = __this->get_groundLayer_4();
		int32_t L_8 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_7, /*hidden argument*/NULL);
		bool L_9 = Physics_Raycast_m9F5CAD8DA7923E897C5DCAF913BD411AD1A87950(L_6, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_2), (1.0f), L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_2), /*hidden argument*/NULL);
		float L_12 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
	}

IL_0058:
	{
		float L_13 = vThirdPersonMotor_GroundAngle_m7E0A6E141879B0FBF8016CABF10FFEC78E330CBF(__this, /*hidden argument*/NULL);
		float L_14 = __this->get_slopeLimit_26();
		if ((!(((float)L_13) > ((float)((float)il2cpp_codegen_add((float)L_14, (float)(1.0f)))))))
		{
			goto IL_010c;
		}
	}
	{
		float L_15 = vThirdPersonMotor_GroundAngle_m7E0A6E141879B0FBF8016CABF10FFEC78E330CBF(__this, /*hidden argument*/NULL);
		if ((!(((float)L_15) <= ((float)(85.0f)))))
		{
			goto IL_010c;
		}
	}
	{
		float L_16 = V_1;
		float L_17 = __this->get_slopeLimit_26();
		if ((!(((float)L_16) > ((float)((float)il2cpp_codegen_add((float)L_17, (float)(1.0f)))))))
		{
			goto IL_010c;
		}
	}
	{
		float L_18 = V_1;
		if ((!(((float)L_18) <= ((float)(85.0f)))))
		{
			goto IL_010c;
		}
	}
	{
		float L_19 = __this->get_groundDistance_28();
		if ((!(((float)L_19) <= ((float)(0.05f)))))
		{
			goto IL_010c;
		}
	}
	{
		bool L_20 = V_0;
		if (L_20)
		{
			goto IL_010c;
		}
	}
	{
		__this->set_isSliding_33((bool)1);
		__this->set_isGrounded_30((bool)0);
		float L_21 = vThirdPersonMotor_GroundAngle_m7E0A6E141879B0FBF8016CABF10FFEC78E330CBF(__this, /*hidden argument*/NULL);
		float L_22 = __this->get_slopeLimit_26();
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_22)), (float)(2.0f)));
		float L_23 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_24 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_23, (0.0f), (10.0f), /*hidden argument*/NULL);
		V_3 = L_24;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_25 = __this->get__rigidbody_40();
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_26 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		float L_29 = V_3;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_30 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Rigidbody_get_velocity_m584A6D79C3657C21AE9CAA56BEE05582B8D5A2B8(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_33), L_28, ((-L_29)), L_32, /*hidden argument*/NULL);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(L_25, L_33, /*hidden argument*/NULL);
		return;
	}

IL_010c:
	{
		__this->set_isSliding_33((bool)0);
		__this->set_isGrounded_30((bool)1);
		return;
	}
}
// System.Boolean Invector.CharacterController.vThirdPersonMotor::StepOffset()
extern "C" IL2CPP_METHOD_ATTR bool vThirdPersonMotor_StepOffset_m5F69945D3E8FED5DC65A503428A244EE5777DCBE (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_StepOffset_m5F69945D3E8FED5DC65A503428A244EE5777DCBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B7_0;
	memset(&G_B7_0, 0, sizeof(G_B7_0));
	float G_B14_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B17_0;
	memset(&G_B17_0, 0, sizeof(G_B17_0));
	float G_B19_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B19_1;
	memset(&G_B19_1, 0, sizeof(G_B19_1));
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * G_B19_2 = NULL;
	float G_B18_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B18_1;
	memset(&G_B18_1, 0, sizeof(G_B18_1));
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * G_B18_2 = NULL;
	float G_B20_0 = 0.0f;
	float G_B20_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B20_2;
	memset(&G_B20_2, 0, sizeof(G_B20_2));
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * G_B20_3 = NULL;
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_input_46();
		float L_1 = Vector2_get_sqrMagnitude_mAEE10A8ECE7D5754E10727BA8C9068A759AD7002((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_0, /*hidden argument*/NULL);
		if ((((double)(((double)((double)L_1)))) < ((double)(0.1))))
		{
			goto IL_001f;
		}
	}
	{
		bool L_2 = __this->get_isGrounded_30();
		if (L_2)
		{
			goto IL_0021;
		}
	}

IL_001f:
	{
		return (bool)0;
	}

IL_0021:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 ));
		bool L_3 = __this->get_isStrafing_31();
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_4 = __this->get_address_of_input_46();
		float L_5 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_4, /*hidden argument*/NULL);
		if ((((float)L_5) > ((float)(0.0f))))
		{
			goto IL_0050;
		}
	}

IL_0043:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_6, /*hidden argument*/NULL);
		G_B7_0 = L_7;
		goto IL_0093;
	}

IL_0050:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_8, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_10 = __this->get_address_of_input_46();
		float L_11 = L_10->get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_9, L_11, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_13, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_15 = __this->get_address_of_input_46();
		float L_16 = L_15->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_14, L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_12, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		G_B7_0 = L_19;
	}

IL_0093:
	{
		V_1 = G_B7_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_stepOffsetEnd_23();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_23), (0.0f), L_22, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_1;
		CapsuleCollider_t5FD15B9E7BEEC4FFA8A2071E9FD2B8DEB3A826D1 * L_26 = __this->get__capsuleCollider_44();
		float L_27 = CapsuleCollider_get_radius_m8E753A625226A5AF557AAFEBF5B6D0720C00802D(L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_25, ((float)il2cpp_codegen_add((float)L_27, (float)(0.05f))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_31), L_29, L_30, /*hidden argument*/NULL);
		float L_32 = __this->get_stepOffsetEnd_23();
		float L_33 = __this->get_stepOffsetStart_24();
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_34 = __this->get_groundLayer_4();
		int32_t L_35 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_34, /*hidden argument*/NULL);
		bool L_36 = Physics_Raycast_m9F5CAD8DA7923E897C5DCAF913BD411AD1A87950(L_31, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), ((float)il2cpp_codegen_subtract((float)L_32, (float)L_33)), L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0205;
		}
	}
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_37 = RaycastHit_get_collider_mE70B84C4312B567344F60992A6067855F2C3A7A9((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		bool L_38 = Collider_get_isTrigger_m08B7B55C34B99492CE923444B5253A7812BC8D8E(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0205;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		float L_40 = L_39.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_y_3();
		if ((!(((float)L_40) >= ((float)L_43))))
		{
			goto IL_0205;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		float L_45 = L_44.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_y_3();
		float L_49 = __this->get_stepOffsetEnd_23();
		if ((!(((float)L_45) <= ((float)((float)il2cpp_codegen_add((float)L_48, (float)L_49))))))
		{
			goto IL_0205;
		}
	}
	{
		bool L_50 = __this->get_isStrafing_31();
		if (L_50)
		{
			goto IL_016d;
		}
	}
	{
		float L_51 = __this->get_speed_47();
		G_B14_0 = L_51;
		goto IL_0187;
	}

IL_016d:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_52 = __this->get_address_of_input_46();
		float L_53 = Vector2_get_magnitude_m66097AFDF9696BD3E88467D4398D4F82B8A4C7DF((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_54 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_53, (0.0f), (1.0f), /*hidden argument*/NULL);
		G_B14_0 = L_54;
	}

IL_0187:
	{
		V_3 = G_B14_0;
		bool L_55 = __this->get_isStrafing_31();
		if (L_55)
		{
			goto IL_01b1;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_57 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_56, L_58, /*hidden argument*/NULL);
		V_2 = L_59;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		G_B17_0 = L_60;
		goto IL_01c8;
	}

IL_01b1:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_61, L_63, /*hidden argument*/NULL);
		G_B17_0 = L_64;
	}

IL_01c8:
	{
		V_4 = G_B17_0;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_65 = __this->get__rigidbody_40();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = V_4;
		float L_67 = __this->get_stepSmooth_25();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_66, L_67, /*hidden argument*/NULL);
		float L_69 = V_3;
		float L_70 = __this->get_velocity_50();
		G_B18_0 = L_69;
		G_B18_1 = L_68;
		G_B18_2 = L_65;
		if ((((float)L_70) > ((float)(1.0f))))
		{
			G_B19_0 = L_69;
			G_B19_1 = L_68;
			G_B19_2 = L_65;
			goto IL_01f2;
		}
	}
	{
		G_B20_0 = (1.0f);
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		goto IL_01f8;
	}

IL_01f2:
	{
		float L_71 = __this->get_velocity_50();
		G_B20_0 = L_71;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
	}

IL_01f8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(G_B20_2, ((float)il2cpp_codegen_multiply((float)G_B20_1, (float)G_B20_0)), /*hidden argument*/NULL);
		Rigidbody_set_velocity_m8D129E88E62AD02AB81CFC8BE694C4A5A2B2B380(G_B20_3, L_72, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0205:
	{
		return (bool)0;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::RotateToTarget(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_RotateToTarget_m8EE1D23AAF84452720101D57B08D16A7052BA16C (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_RotateToTarget_m8EE1D23AAF84452720101D57B08D16A7052BA16C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0093;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_3, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), L_10, L_12, L_15, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_16, /*hidden argument*/NULL);
		__this->set_targetRotation_36(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_21, /*hidden argument*/NULL);
		float L_23 = __this->get_strafeRotationSpeed_10();
		float L_24 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Quaternion_Lerp_m749B3988EE2EF387CC9BFB76C81B7465A7534E27(L_20, L_22, ((float)il2cpp_codegen_multiply((float)L_23, (float)L_24)), /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_18, L_25, /*hidden argument*/NULL);
	}

IL_0093:
	{
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::UpdateTargetDirection(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor_UpdateTargetDirection_m8E839C0D87E77030F3EF24B7E2427B58B7EEAF57 (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___referenceTransform0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonMotor_UpdateTargetDirection_m8E839C0D87E77030F3EF24B7E2427B58B7EEAF57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B7_0;
	memset(&G_B7_0, 0, sizeof(G_B7_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B10_0;
	memset(&G_B10_0, 0, sizeof(G_B10_0));
	vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * G_B13_0 = NULL;
	vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * G_B12_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B14_0;
	memset(&G_B14_0, 0, sizeof(G_B14_0));
	vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * G_B14_1 = NULL;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___referenceTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00a0;
		}
	}
	{
		bool L_2 = __this->get_keepDirection_38();
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___referenceTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(L_3, L_4, /*hidden argument*/NULL);
		G_B4_0 = L_5;
		goto IL_0026;
	}

IL_0020:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___referenceTransform0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_6, /*hidden argument*/NULL);
		G_B4_0 = L_7;
	}

IL_0026:
	{
		V_0 = G_B4_0;
		(&V_0)->set_y_3((0.0f));
		bool L_8 = __this->get_keepDirection_38();
		if (L_8)
		{
			goto IL_0048;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___referenceTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(L_9, L_10, /*hidden argument*/NULL);
		G_B7_0 = L_11;
		goto IL_0049;
	}

IL_0048:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_0;
		G_B7_0 = L_12;
	}

IL_0049:
	{
		V_0 = G_B7_0;
		(&V_0)->set_y_3((0.0f));
		bool L_13 = __this->get_keepDirection_38();
		if (L_13)
		{
			goto IL_006b;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = ___referenceTransform0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(L_14, L_15, /*hidden argument*/NULL);
		G_B10_0 = L_16;
		goto IL_0071;
	}

IL_006b:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = ___referenceTransform0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_17, /*hidden argument*/NULL);
		G_B10_0 = L_18;
	}

IL_0071:
	{
		V_1 = G_B10_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_19 = __this->get_address_of_input_46();
		float L_20 = L_19->get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_20, L_21, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_23 = __this->get_address_of_input_46();
		float L_24 = L_23->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_22, L_26, /*hidden argument*/NULL);
		__this->set_targetDirection_35(L_27);
		return;
	}

IL_00a0:
	{
		bool L_28 = __this->get_keepDirection_38();
		G_B12_0 = __this;
		if (L_28)
		{
			G_B13_0 = __this;
			goto IL_00cb;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_29 = __this->get_address_of_input_46();
		float L_30 = L_29->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_31 = __this->get_address_of_input_46();
		float L_32 = L_31->get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_33), L_30, (0.0f), L_32, /*hidden argument*/NULL);
		G_B14_0 = L_33;
		G_B14_1 = G_B12_0;
		goto IL_00d1;
	}

IL_00cb:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = __this->get_targetDirection_35();
		G_B14_0 = L_34;
		G_B14_1 = G_B13_0;
	}

IL_00d1:
	{
		G_B14_1->set_targetDirection_35(G_B14_0);
		return;
	}
}
// System.Void Invector.CharacterController.vThirdPersonMotor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonMotor__ctor_mE6D73342E716F15BA25E7D47A5B3D50B6EBE00DB (vThirdPersonMotor_tF003CB66852886C054134EDFB6D948BACFC7862F * __this, const RuntimeMethod* method)
{
	{
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_0 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(1, /*hidden argument*/NULL);
		__this->set_groundLayer_4(L_0);
		__this->set_groundMinDistance_5((0.2f));
		__this->set_groundMaxDistance_6((0.5f));
		__this->set_freeRotationSpeed_9((10.0f));
		__this->set_strafeRotationSpeed_10((10.0f));
		__this->set_jumpAirControl_11((bool)1);
		__this->set_jumpTimer_12((0.3f));
		__this->set_jumpForward_14((3.0f));
		__this->set_jumpHeight_15((4.0f));
		__this->set_freeWalkSpeed_17((2.5f));
		__this->set_freeRunningSpeed_18((3.0f));
		__this->set_freeSprintSpeed_19((4.0f));
		__this->set_strafeWalkSpeed_20((2.5f));
		__this->set_strafeRunningSpeed_21((3.0f));
		__this->set_strafeSprintSpeed_22((4.0f));
		__this->set_stepOffsetEnd_23((0.45f));
		__this->set_stepOffsetStart_24((0.05f));
		__this->set_stepSmooth_25((4.0f));
		__this->set_slopeLimit_26((45.0f));
		__this->set_extraGravity_27((-10.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Invector.vExtensions::NormalizeAngle(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  vExtensions_NormalizeAngle_m1554BA7D4D86404FB605FE342D6FB19377A93F74 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___eulerAngle0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___eulerAngle0;
		V_0 = L_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		float L_2 = L_1.get_x_2();
		if ((!(((float)L_2) > ((float)(180.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		float* L_3 = (&V_0)->get_address_of_x_2();
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_subtract((float)L_5, (float)(360.0f)));
		goto IL_003e;
	}

IL_0021:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		float L_7 = L_6.get_x_2();
		if ((!(((float)L_7) < ((float)(-180.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		float* L_8 = (&V_0)->get_address_of_x_2();
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		*((float*)L_9) = (float)((float)il2cpp_codegen_add((float)L_10, (float)(360.0f)));
	}

IL_003e:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_0;
		float L_12 = L_11.get_y_3();
		if ((!(((float)L_12) > ((float)(180.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		float* L_13 = (&V_0)->get_address_of_y_3();
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		*((float*)L_14) = (float)((float)il2cpp_codegen_subtract((float)L_15, (float)(360.0f)));
		goto IL_007a;
	}

IL_005d:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_0;
		float L_17 = L_16.get_y_3();
		if ((!(((float)L_17) < ((float)(-180.0f)))))
		{
			goto IL_007a;
		}
	}
	{
		float* L_18 = (&V_0)->get_address_of_y_3();
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		*((float*)L_19) = (float)((float)il2cpp_codegen_add((float)L_20, (float)(360.0f)));
	}

IL_007a:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_0;
		float L_22 = L_21.get_z_4();
		if ((!(((float)L_22) > ((float)(180.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		float* L_23 = (&V_0)->get_address_of_z_4();
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		*((float*)L_24) = (float)((float)il2cpp_codegen_subtract((float)L_25, (float)(360.0f)));
		goto IL_00b6;
	}

IL_0099:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = V_0;
		float L_27 = L_26.get_z_4();
		if ((!(((float)L_27) < ((float)(-180.0f)))))
		{
			goto IL_00b6;
		}
	}
	{
		float* L_28 = (&V_0)->get_address_of_z_4();
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		*((float*)L_29) = (float)((float)il2cpp_codegen_add((float)L_30, (float)(360.0f)));
	}

IL_00b6:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_0;
		float L_32 = L_31.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_0;
		float L_34 = L_33.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_0;
		float L_36 = L_35.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_37), L_32, L_34, L_36, /*hidden argument*/NULL);
		return L_37;
	}
}
// UnityEngine.Vector3 Invector.vExtensions::Difference(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  vExtensions_Difference_mA2661F59E5710B34DF60A6FF441D3B502BC58760 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___otherVector1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vExtensions_Difference_mA2661F59E5710B34DF60A6FF441D3B502BC58760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___otherVector1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___vector0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Invector.vExtensions::SetActiveChildren(UnityEngine.GameObject,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void vExtensions_SetActiveChildren_m07D15FE9D0E85B678F52B6FB5BF70ACEF2EFBE92 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObjet0, bool ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vExtensions_SetActiveChildren_m07D15FE9D0E85B678F52B6FB5BF70ACEF2EFBE92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___gameObjet0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0024;
		}

IL_000e:
		{
			RuntimeObject* L_3 = V_0;
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_3);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_4, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			bool L_6 = ___value1;
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, L_6, /*hidden argument*/NULL);
		}

IL_0024:
		{
			RuntimeObject* L_7 = V_0;
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_1;
			if (!L_10)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			RuntimeObject* L_11 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_003e:
		{
			IL2CPP_END_FINALLY(46)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		return;
	}
}
// System.Void Invector.vExtensions::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void vExtensions_SetLayerRecursively_m138B5843B3F124A4FD2C185A2A96993ADD30483A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, int32_t ___layer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vExtensions_SetLayerRecursively_m138B5843B3F124A4FD2C185A2A96993ADD30483A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___obj0;
		int32_t L_1 = ___layer1;
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_0, L_1, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___obj0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_0015:
		{
			RuntimeObject* L_5 = V_0;
			RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_6, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			int32_t L_8 = ___layer1;
			vExtensions_SetLayerRecursively_m138B5843B3F124A4FD2C185A2A96993ADD30483A(L_7, L_8, /*hidden argument*/NULL);
		}

IL_002b:
		{
			RuntimeObject* L_9 = V_0;
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0015;
			}
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x46, FINALLY_0035);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_1;
			if (!L_12)
			{
				goto IL_0045;
			}
		}

IL_003f:
		{
			RuntimeObject* L_13 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
		}

IL_0045:
		{
			IL2CPP_END_FINALLY(53)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0046:
	{
		return;
	}
}
// System.Single Invector.vExtensions::ClampAngle(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float vExtensions_ClampAngle_m58ABF193781CA3AD4A3EDB941A8C55829E0A80B3 (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vExtensions_ClampAngle_m58ABF193781CA3AD4A3EDB941A8C55829E0A80B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}

IL_0000:
	{
		float L_0 = ___angle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		float L_1 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_add((float)L_1, (float)(360.0f)));
	}

IL_0011:
	{
		float L_2 = ___angle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		float L_3 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)(360.0f)));
	}

IL_0022:
	{
		float L_4 = ___angle0;
		if ((((float)L_4) < ((float)(-360.0f))))
		{
			goto IL_0000;
		}
	}
	{
		float L_5 = ___angle0;
		if ((((float)L_5) > ((float)(360.0f))))
		{
			goto IL_0000;
		}
	}
	{
		float L_6 = ___angle0;
		float L_7 = ___min1;
		float L_8 = ___max2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// Invector.ClipPlanePoints Invector.vExtensions::NearClipPlanePoints(UnityEngine.Camera,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  vExtensions_NearClipPlanePoints_mECAE3C1BF85D3F24483FAA364992B45B21908C3A (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos1, float ___clipPlaneMargin2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vExtensions_NearClipPlanePoints_mECAE3C1BF85D3F24483FAA364992B45B21908C3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717 ));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = ___camera0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = ___camera0;
		float L_3 = Camera_get_fieldOfView_m065A50B70AC3661337ACA482DDEFA29CCBD249D6(L_2, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_3/(float)(2.0f))), (float)(0.0174532924f)));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = ___camera0;
		float L_5 = Camera_get_aspect_m2ADA7982754920C3B58B4DB664801D6F2416E0C6(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = ___camera0;
		float L_7 = Camera_get_nearClipPlane_mD9D3E3D27186BBAC2CC354CE3609E6118A5BF66C(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		float L_8 = V_4;
		float L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_10 = tanf(L_9);
		V_5 = ((float)il2cpp_codegen_multiply((float)L_8, (float)L_10));
		float L_11 = V_5;
		float L_12 = V_3;
		V_6 = ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12));
		float L_13 = V_5;
		float L_14 = ___clipPlaneMargin2;
		V_5 = ((float)il2cpp_codegen_multiply((float)L_13, (float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_14))));
		float L_15 = V_6;
		float L_16 = ___clipPlaneMargin2;
		V_6 = ((float)il2cpp_codegen_multiply((float)L_15, (float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_16))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___pos1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_18, /*hidden argument*/NULL);
		float L_20 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_21, /*hidden argument*/NULL);
		(&V_0)->set_LowerRight_3(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_23 = (&V_0)->get_address_of_LowerRight_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_24 = L_23;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_26, /*hidden argument*/NULL);
		float L_28 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_27, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_25, L_29, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_24 = L_30;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_31 = (&V_0)->get_address_of_LowerRight_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_32 = L_31;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_32);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_34, /*hidden argument*/NULL);
		float L_36 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_35, L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_33, L_37, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_32 = L_38;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = ___pos1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_40, /*hidden argument*/NULL);
		float L_42 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_41, L_42, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_39, L_43, /*hidden argument*/NULL);
		(&V_0)->set_LowerLeft_2(L_44);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_45 = (&V_0)->get_address_of_LowerLeft_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_46 = L_45;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_46);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_48, /*hidden argument*/NULL);
		float L_50 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_49, L_50, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_47, L_51, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_46 = L_52;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_53 = (&V_0)->get_address_of_LowerLeft_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_54 = L_53;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_54);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_56 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_56, /*hidden argument*/NULL);
		float L_58 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_57, L_58, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_55, L_59, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_54 = L_60;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = ___pos1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_62, /*hidden argument*/NULL);
		float L_64 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_63, L_64, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_61, L_65, /*hidden argument*/NULL);
		(&V_0)->set_UpperRight_1(L_66);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_67 = (&V_0)->get_address_of_UpperRight_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_68 = L_67;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_68);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_70 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_70, /*hidden argument*/NULL);
		float L_72 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_71, L_72, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_69, L_73, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_68 = L_74;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_75 = (&V_0)->get_address_of_UpperRight_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_76 = L_75;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_77 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_76);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_78 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_78, /*hidden argument*/NULL);
		float L_80 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_81 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_79, L_80, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_77, L_81, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_76 = L_82;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_83 = ___pos1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_84 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_85 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_84, /*hidden argument*/NULL);
		float L_86 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_85, L_86, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_83, L_87, /*hidden argument*/NULL);
		(&V_0)->set_UpperLeft_0(L_88);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_89 = (&V_0)->get_address_of_UpperLeft_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_90 = L_89;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_90);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_92 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_92, /*hidden argument*/NULL);
		float L_94 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_93, L_94, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_96 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_91, L_95, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_90 = L_96;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_97 = (&V_0)->get_address_of_UpperLeft_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_98 = L_97;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_98);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_100 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_101 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_100, /*hidden argument*/NULL);
		float L_102 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_103 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_101, L_102, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_104 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_99, L_103, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_98 = L_104;
		ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  L_105 = V_0;
		return L_105;
	}
}
// Invector.HitBarPoints Invector.vExtensions::GetBoundPoint(UnityEngine.BoxCollider,UnityEngine.Transform,UnityEngine.LayerMask)
extern "C" IL2CPP_METHOD_ATTR int32_t vExtensions_GetBoundPoint_m013ECC6A65DB8A1E90A559C4C4F1C8036AE4B8C8 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___torso1, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___mask2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vExtensions_GetBoundPoint_m013ECC6A65DB8A1E90A559C4C4F1C8036AE4B8C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_4;
	memset(&V_4, 0, sizeof(V_4));
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	{
		V_0 = 0;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_0 = ___boxCollider0;
		BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  L_1 = vExtensions_GetBoxPoint_m498753849EAFB4E6F3A73F0001A835479D518A86(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  L_2 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = L_2.get_top_0();
		BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  L_4 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = L_4.get_top_0();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___torso1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_7, /*hidden argument*/NULL);
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_2), L_3, L_8, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___torso1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  L_11 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = L_11.get_center_1();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = ___torso1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_12, L_14, /*hidden argument*/NULL);
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_3), L_10, L_15, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = ___torso1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_16, /*hidden argument*/NULL);
		BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  L_18 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = L_18.get_bottom_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = ___torso1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_19, L_21, /*hidden argument*/NULL);
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_4), L_17, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_2), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_2), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_25 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawRay_mFAFA3E87963CE419BECBC6CEAD95D092F616F0C5(L_23, L_24, L_25, (2.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_3), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_3), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_28 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		Debug_DrawRay_mFAFA3E87963CE419BECBC6CEAD95D092F616F0C5(L_26, L_27, L_28, (2.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_4), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_4), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_31 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		Debug_DrawRay_mFAFA3E87963CE419BECBC6CEAD95D092F616F0C5(L_29, L_30, L_31, (2.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = ___torso1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  L_34 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = L_34.get_top_0();
		float L_36 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_33, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_37 = V_2;
		float L_38 = V_6;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_39 = ___mask2;
		int32_t L_40 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_39, /*hidden argument*/NULL);
		bool L_41 = Physics_Raycast_m9F5CAD8DA7923E897C5DCAF913BD411AD1A87950(L_37, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_5), L_38, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_42 = V_0;
		V_0 = ((int32_t)((int32_t)L_42|(int32_t)1));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_43 = RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_5), /*hidden argument*/NULL);
		String_t* L_44 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_44, /*hidden argument*/NULL);
	}

IL_00f4:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = ___torso1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_45, /*hidden argument*/NULL);
		BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  L_47 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = L_47.get_center_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_49 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_46, L_48, /*hidden argument*/NULL);
		V_6 = L_49;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_50 = V_3;
		float L_51 = V_6;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_52 = ___mask2;
		int32_t L_53 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_52, /*hidden argument*/NULL);
		bool L_54 = Physics_Raycast_m9F5CAD8DA7923E897C5DCAF913BD411AD1A87950(L_50, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_5), L_51, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_012e;
		}
	}
	{
		int32_t L_55 = V_0;
		V_0 = ((int32_t)((int32_t)L_55|(int32_t)2));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_56 = RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_5), /*hidden argument*/NULL);
		String_t* L_57 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_57, /*hidden argument*/NULL);
	}

IL_012e:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_58 = ___torso1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_58, /*hidden argument*/NULL);
		BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  L_60 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = L_60.get_bottom_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_62 = Vector3_Distance_mE316E10B9B319A5C2A29F86E028740FD528149E7(L_59, L_61, /*hidden argument*/NULL);
		V_6 = L_62;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_63 = V_4;
		float L_64 = V_6;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_65 = ___mask2;
		int32_t L_66 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_65, /*hidden argument*/NULL);
		bool L_67 = Physics_Raycast_m9F5CAD8DA7923E897C5DCAF913BD411AD1A87950(L_63, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_5), L_64, L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_68 = V_0;
		V_0 = ((int32_t)((int32_t)L_68|(int32_t)4));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_69 = RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_5), /*hidden argument*/NULL);
		String_t* L_70 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_70, /*hidden argument*/NULL);
	}

IL_0169:
	{
		int32_t L_71 = V_0;
		return L_71;
	}
}
// Invector.BoxPoint Invector.vExtensions::GetBoxPoint(UnityEngine.BoxCollider)
extern "C" IL2CPP_METHOD_ATTR BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  vExtensions_GetBoxPoint_m498753849EAFB4E6F3A73F0001A835479D518A86 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider0, const RuntimeMethod* method)
{
	BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32 ));
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_0 = ___boxCollider0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_2 = ___boxCollider0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = BoxCollider_get_center_mA9164B9949F419A35CC949685F1DC14588BC6402(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB(L_1, L_3, /*hidden argument*/NULL);
		(&V_0)->set_center_1(L_4);
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_5 = ___boxCollider0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_9 = ___boxCollider0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_8, (float)L_11));
		BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  L_12 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = L_12.get_center_1();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_14 = ___boxCollider0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_15, /*hidden argument*/NULL);
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_2), L_13, L_16, /*hidden argument*/NULL);
		float L_17 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Ray_GetPoint_mE8830D3BA68A184AD70514428B75F5664105ED08((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_2), ((float)il2cpp_codegen_multiply((float)L_17, (float)(0.5f))), /*hidden argument*/NULL);
		(&V_0)->set_top_0(L_18);
		float L_19 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Ray_GetPoint_mE8830D3BA68A184AD70514428B75F5664105ED08((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&V_2), ((-((float)il2cpp_codegen_multiply((float)L_19, (float)(0.5f))))), /*hidden argument*/NULL);
		(&V_0)->set_bottom_2(L_20);
		BoxPoint_t0DB72B4BFF55B92502866B73D47DCBECE6B08B32  L_21 = V_0;
		return L_21;
	}
}
// UnityEngine.Vector3 Invector.vExtensions::BoxSize(UnityEngine.BoxCollider)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  vExtensions_BoxSize_mD143777E95943A4C94E883585AC2161AAFC98225 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_0 = ___boxCollider0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_4 = ___boxCollider0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_7 = ___boxCollider0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_z_4();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_11 = ___boxCollider0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_10, (float)L_13));
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_14 = ___boxCollider0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_18 = ___boxCollider0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_y_3();
		V_1 = ((float)il2cpp_codegen_multiply((float)L_17, (float)L_20));
		float L_21 = V_1;
		float L_22 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_23), ((float)il2cpp_codegen_multiply((float)L_3, (float)L_6)), L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Boolean Invector.vExtensions::Contains(System.Enum,System.Enum)
extern "C" IL2CPP_METHOD_ATTR bool vExtensions_Contains_m6C5F59B2DEDE7B3D32602F7AE9B45E802659161A (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * ___keys0, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vExtensions_Contains_m6C5F59B2DEDE7B3D32602F7AE9B45E802659161A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * L_0 = ___keys0;
		Type_t * L_1 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_0, /*hidden argument*/NULL);
		Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * L_2 = ___flag1;
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, _stringLiteral92422CF7E9D6DAD8D348DC60D2E40DFD5CFCB32B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, vExtensions_Contains_m6C5F59B2DEDE7B3D32602F7AE9B45E802659161A_RuntimeMethod_var);
	}

IL_001e:
	{
		Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * L_6 = ___keys0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint64_t L_7 = Convert_ToUInt64_mEB7DC37A2F6E92B628AF5F5486C1B6A4556870E6(L_6, /*hidden argument*/NULL);
		Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * L_8 = ___flag1;
		uint64_t L_9 = Convert_ToUInt64_mEB7DC37A2F6E92B628AF5F5486C1B6A4556870E6(L_8, /*hidden argument*/NULL);
		return (bool)((!(((uint64_t)((int64_t)((int64_t)L_7&(int64_t)L_9))) <= ((uint64_t)(((int64_t)((int64_t)0))))))? 1 : 0);
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
// System.Void Movement::Start()
extern "C" IL2CPP_METHOD_ATTR void Movement_Start_mCEC8F4AE3FC9B1140E2497466130E5AF2DEE7DC6 (Movement_t0EE58EC6DE08B383697671C8720D14A34AFF7A2E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Movement::Update()
extern "C" IL2CPP_METHOD_ATTR void Movement_Update_m52C5E564F403608D8AF654430FD64687E5AF6548 (Movement_t0EE58EC6DE08B383697671C8720D14A34AFF7A2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Movement_Update_m52C5E564F403608D8AF654430FD64687E5AF6548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_1 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_3 = __this->get_rotationSpeed_5();
		Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9(L_0, (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), (float)L_3)), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_5 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		float L_6 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_7 = __this->get_movementSpeed_4();
		Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71(L_4, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), (float)L_7)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Movement::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Movement__ctor_m1611A5910E25AEB0A8B91660D64BABA1A91987B4 (Movement_t0EE58EC6DE08B383697671C8720D14A34AFF7A2E * __this, const RuntimeMethod* method)
{
	{
		__this->set_movementSpeed_4((5.0f));
		__this->set_rotationSpeed_5((200.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PlayerAction::Start()
extern "C" IL2CPP_METHOD_ATTR void PlayerAction_Start_m94C87DC882459A298238C04DBAF5ADF3B02B35DF (PlayerAction_t246178FC03C8D2122CE3815BBA800BC75AA5D3B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerAction_Start_m94C87DC882459A298238C04DBAF5ADF3B02B35DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_0 = GameObject_FindGameObjectsWithTag_mF49A195F19A598C5FD145FFE175ABE5B4885FAD9(_stringLiteral9A830C714BB2B52B8F817649335855437EBCB701, /*hidden argument*/NULL);
		__this->set_availableTools_6(L_0);
		return;
	}
}
// System.Void PlayerAction::Update()
extern "C" IL2CPP_METHOD_ATTR void PlayerAction_Update_mB3EDC6C8A5A19B79CE880C73A8E5FAAA8924F2FE (PlayerAction_t246178FC03C8D2122CE3815BBA800BC75AA5D3B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerAction_Update_mB3EDC6C8A5A19B79CE880C73A8E5FAAA8924F2FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		bool L_0 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1 = __this->get_toolTaken_5();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * L_2 = __this->get_tool_4();
		VirtActionInvoker0::Invoke(6 /* System.Void Tool::RemoveAction() */, L_2);
		__this->set_tool_4((Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 *)NULL);
		__this->set_toolTaken_5((bool)0);
		return;
	}

IL_002b:
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_3 = __this->get_availableTools_6();
		V_0 = L_3;
		V_1 = 0;
		goto IL_0097;
	}

IL_0036:
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = V_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_10, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		float L_14 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		if ((!(((float)L_14) < ((float)(25.0f)))))
		{
			goto IL_0093;
		}
	}
	{
		bool L_15 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)32), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0093;
		}
	}
	{
		bool L_16 = __this->get_toolTaken_5();
		if (L_16)
		{
			goto IL_0093;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = V_2;
		Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * L_18 = GameObject_GetComponent_TisTool_t3198B30B861349FB008BAD724A58D53AB36B3012_m551C8A996CA76450F4DA17A2B18EAF74A3B666F9(L_17, /*hidden argument*/GameObject_GetComponent_TisTool_t3198B30B861349FB008BAD724A58D53AB36B3012_m551C8A996CA76450F4DA17A2B18EAF74A3B666F9_RuntimeMethod_var);
		__this->set_tool_4(L_18);
		Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * L_19 = __this->get_tool_4();
		VirtActionInvoker0::Invoke(5 /* System.Void Tool::MoveAction() */, L_19);
		__this->set_toolTaken_5((bool)1);
	}

IL_0093:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0097:
	{
		int32_t L_21 = V_1;
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		bool L_23 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)109), /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c7;
		}
	}
	{
		bool L_24 = __this->get_toolTaken_5();
		if (!L_24)
		{
			goto IL_00c7;
		}
	}
	{
		Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * L_25 = __this->get_tool_4();
		bool L_26 = L_25->get_isActive_4();
		if (L_26)
		{
			goto IL_00c7;
		}
	}
	{
		Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * L_27 = __this->get_tool_4();
		VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean Tool::Action() */, L_27);
	}

IL_00c7:
	{
		return;
	}
}
// System.Void PlayerAction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerAction__ctor_mBA2A398212059A5926A7F690502BFB30C6365765 (PlayerAction_t246178FC03C8D2122CE3815BBA800BC75AA5D3B9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PlayerController::Start()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_Start_mC0C9B9461D0BDAC48EC43715818A4BA63C4F45EF (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_mC0C9B9461D0BDAC48EC43715818A4BA63C4F45EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_0 = atan2f((-1.0f), (-1.0f));
		float L_1 = ((float)il2cpp_codegen_multiply((float)L_0, (float)(57.29578f)));
		RuntimeObject * L_2 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_3, 0, /*hidden argument*/NULL);
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_5 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m7FAA3F910786B0B5F3E0CBA755F38E0453EAF7BA(L_4, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_m7FAA3F910786B0B5F3E0CBA755F38E0453EAF7BA_RuntimeMethod_var);
		__this->set_anim_12(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralC93491C01451C2A4EDC538F9777B98B3239349C6, /*hidden argument*/NULL);
		__this->set_cam_13(L_6);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_Update_m38903EF1C8F12B9388303741F8040EE26C33DC33 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_touchDetected_11();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		PlayerController_movePlayer_mFC367B200C7A575AC24C37A5969521E36FECEDEA(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		PlayerController_animatePlayer_mE886DF20647DB36DB772E5405560D7D583A5BDF0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::animatePlayer()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_animatePlayer_mE886DF20647DB36DB772E5405560D7D583A5BDF0 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_animatePlayer_mE886DF20647DB36DB772E5405560D7D583A5BDF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_vertical_8();
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_001a;
		}
	}
	{
		float L_1 = __this->get_horizontal_9();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_002e;
		}
	}

IL_001a:
	{
		float L_2 = __this->get_speed_10();
		__this->set_speed_10(((float)il2cpp_codegen_add((float)L_2, (float)(0.1f))));
		goto IL_0040;
	}

IL_002e:
	{
		float L_3 = __this->get_speed_10();
		__this->set_speed_10(((float)il2cpp_codegen_subtract((float)L_3, (float)(0.1f))));
	}

IL_0040:
	{
		float L_4 = __this->get_speed_10();
		if ((!(((float)L_4) > ((float)(1.5f)))))
		{
			goto IL_0058;
		}
	}
	{
		__this->set_speed_10((1.5f));
	}

IL_0058:
	{
		float L_5 = __this->get_speed_10();
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		__this->set_speed_10((0.0f));
	}

IL_0070:
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_6 = __this->get_anim_12();
		float L_7 = __this->get_speed_10();
		Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43(L_6, _stringLiteral42BC272E41ECB68FE544AA26C6F3AC14C8E21034, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::movePlayer()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_movePlayer_mFC367B200C7A575AC24C37A5969521E36FECEDEA (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_movePlayer_mFC367B200C7A575AC24C37A5969521E36FECEDEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		__this->set_vertical_8(L_1);
		float L_2 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		float L_3 = fabsf(L_2);
		__this->set_horizontal_9(L_3);
		float L_4 = __this->get_vertical_8();
		float L_5 = fabsf(L_4);
		float L_6 = __this->get_delay_4();
		if ((((float)L_5) > ((float)L_6)))
		{
			goto IL_0053;
		}
	}
	{
		float L_7 = __this->get_horizontal_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_8 = fabsf(L_7);
		float L_9 = __this->get_delay_4();
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_0114;
		}
	}

IL_0053:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_11 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		float L_12 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_13 = __this->get_movementSpeed_5();
		Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71(L_10, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), (float)L_13)), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_15 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		float L_16 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_17 = __this->get_movementSpeed_5();
		Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71(L_14, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)), (float)L_17)), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = (0.0f);
		float L_18 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		float L_19 = Input_GetAxis_mF334BDB532DF82E30273ABA0ACB5116AC8244496(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_20 = atan2f(L_18, L_19);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_20, (float)(57.29578f)));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_21, 0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_23, 0, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_24, /*hidden argument*/NULL);
		float L_26 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_26, (0.0f), /*hidden argument*/NULL);
		float L_28 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_29 = __this->get_rotationSpeed_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_25, L_27, ((float)il2cpp_codegen_multiply((float)L_28, (float)L_29)), /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_22, L_30, /*hidden argument*/NULL);
	}

IL_0114:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = __this->get_cam_13();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_31, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_33, 0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_37, 0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_z_4();
		float L_41 = __this->get_offsetCamera_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42;
		memset(&L_42, 0, sizeof(L_42));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_42), L_36, (10.0f), ((float)il2cpp_codegen_subtract((float)L_40, (float)L_41)), /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_32, L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::moveMobilePlayer(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void PlayerController_moveMobilePlayer_mCCE71985D6CB6479615179BA0A08C3508EDDF511 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_moveMobilePlayer_mCCE71985D6CB6479615179BA0A08C3508EDDF511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___direction0;
		float L_1 = L_0.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		__this->set_vertical_8(L_2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___direction0;
		float L_4 = L_3.get_x_0();
		float L_5 = fabsf(L_4);
		__this->set_horizontal_9(L_5);
		float L_6 = __this->get_vertical_8();
		float L_7 = fabsf(L_6);
		float L_8 = __this->get_delay_4();
		if ((((float)L_7) > ((float)L_8)))
		{
			goto IL_004b;
		}
	}
	{
		float L_9 = __this->get_horizontal_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_10 = fabsf(L_9);
		float L_11 = __this->get_delay_4();
		if ((!(((float)L_10) > ((float)L_11))))
		{
			goto IL_0149;
		}
	}

IL_004b:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = ___direction0;
		float L_14 = L_13.get_y_1();
		float L_15 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_16 = __this->get_movementSpeed_5();
		Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71(L_12, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), (float)L_16)), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = ___direction0;
		float L_19 = L_18.get_x_0();
		float L_20 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_21 = __this->get_movementSpeed_5();
		Transform_Translate_m3367DF1167F152D8801578EBA4C51A398A50FE71(L_17, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)), (float)L_21)), (0.0f), (0.0f), /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = __this->get_cam_13();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_22, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_24, 0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_28, 0, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_z_4();
		float L_32 = __this->get_offsetCamera_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_33), L_27, (10.0f), ((float)il2cpp_codegen_subtract((float)L_31, (float)L_32)), /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_23, L_33, /*hidden argument*/NULL);
		V_0 = (0.0f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = ___direction0;
		float L_35 = L_34.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = ___direction0;
		float L_37 = L_36.get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_38 = atan2f(L_35, L_37);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_38, (float)(57.29578f)));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_39, 0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_41, 0, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_42, /*hidden argument*/NULL);
		float L_44 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_45 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_44, (0.0f), /*hidden argument*/NULL);
		float L_46 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_47 = __this->get_rotationSpeed_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_48 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_43, L_45, ((float)il2cpp_codegen_multiply((float)L_46, (float)L_47)), /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_40, L_48, /*hidden argument*/NULL);
	}

IL_0149:
	{
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerController__ctor_m648E40092E37395F4307411E855445886113CD60 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	{
		__this->set_delay_4((0.1f));
		__this->set_movementSpeed_5((10.0f));
		__this->set_rotationSpeed_6((10.0f));
		__this->set_offsetCamera_7((10.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Tool::Start()
extern "C" IL2CPP_METHOD_ATTR void Tool_Start_m8AA9112A289F45B51E19EB641D51BB9C4AE22593 (Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tool_Start_m8AA9112A289F45B51E19EB641D51BB9C4AE22593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		__this->set_player_5(L_0);
		return;
	}
}
// System.Boolean Tool::Action()
extern "C" IL2CPP_METHOD_ATTR bool Tool_Action_m575863E9FD62EE76CFE49B430C7014182D63A907 (Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void Tool::MoveAction()
extern "C" IL2CPP_METHOD_ATTR void Tool_MoveAction_m77F3EE15ED94F8BEFA28D20EF0D6F03DC1C1024F (Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Tool::RemoveAction()
extern "C" IL2CPP_METHOD_ATTR void Tool_RemoveAction_m46CE9FA286780EEA9B25002029BDB42300B33C8B (Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Tool::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tool__ctor_m6D73DADFDDF8D765A98E87EEDB58D1901EB011BE (Tool_t3198B30B861349FB008BAD724A58D53AB36B3012 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void VirtualJoystick::Start()
extern "C" IL2CPP_METHOD_ATTR void VirtualJoystick_Start_mCA108CD5B7764FA4D4D551B873BB0DAEA890A81D (VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void VirtualJoystick::Update()
extern "C" IL2CPP_METHOD_ATTR void VirtualJoystick_Update_mEDA3846E36B7B229F1DD689C12DB79D626E37402 (VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualJoystick_Update_mEDA3846E36B7B229F1DD689C12DB79D626E37402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Input_GetMouseButtonDown_mBC5947EA49ED797F0DB1830BFC13AF6514B765FD(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00a9;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Input_get_mousePosition_mC8B181E5125330ECFB9F8C5D94AA8F4AD1ABD10C(/*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Input_get_mousePosition_mC8B181E5125330ECFB9F8C5D94AA8F4AD1ABD10C(/*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), L_2, L_4, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_5, /*hidden argument*/NULL);
		__this->set_pointA_7(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Input_get_mousePosition_mC8B181E5125330ECFB9F8C5D94AA8F4AD1ABD10C(/*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Input_get_mousePosition_mC8B181E5125330ECFB9F8C5D94AA8F4AD1ABD10C(/*hidden argument*/NULL);
		float L_10 = L_9.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_11), L_8, L_10, /*hidden argument*/NULL);
		__this->set_screenPoint_9(L_11);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_12 = __this->get_circle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = __this->get_screenPoint_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_13, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_12, L_14, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_15 = __this->get_outerCircle_11();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = __this->get_screenPoint_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_16, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_15, L_17, /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_18 = __this->get_circle_10();
		CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * L_19 = Component_GetComponent_TisCanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_m656D49904B3F94B59037C34C25609C7F992F3625(L_18, /*hidden argument*/Component_GetComponent_TisCanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_m656D49904B3F94B59037C34C25609C7F992F3625_RuntimeMethod_var);
		CanvasRenderer_SetAlpha_m54E7C6AEA9CD4D5C34F729B10B29F3B1146FB2BD(L_19, (1.0f), /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_20 = __this->get_outerCircle_11();
		CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * L_21 = Component_GetComponent_TisCanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_m656D49904B3F94B59037C34C25609C7F992F3625(L_20, /*hidden argument*/Component_GetComponent_TisCanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_m656D49904B3F94B59037C34C25609C7F992F3625_RuntimeMethod_var);
		CanvasRenderer_SetAlpha_m54E7C6AEA9CD4D5C34F729B10B29F3B1146FB2BD(L_21, (1.0f), /*hidden argument*/NULL);
	}

IL_00a9:
	{
		bool L_22 = Input_GetMouseButton_mFA83B0C0BABD3113D1AAB38FBB953C91EA7FFA30(0, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00ee;
		}
	}
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_23 = __this->get_player_4();
		L_23->set_touchDetected_11((bool)1);
		__this->set_touchStart_6((bool)1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Input_get_mousePosition_mC8B181E5125330ECFB9F8C5D94AA8F4AD1ABD10C(/*hidden argument*/NULL);
		float L_25 = L_24.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Input_get_mousePosition_mC8B181E5125330ECFB9F8C5D94AA8F4AD1ABD10C(/*hidden argument*/NULL);
		float L_27 = L_26.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28;
		memset(&L_28, 0, sizeof(L_28));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_28), L_25, L_27, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_28, /*hidden argument*/NULL);
		__this->set_pointB_8(L_29);
		return;
	}

IL_00ee:
	{
		__this->set_touchStart_6((bool)0);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_30 = __this->get_player_4();
		L_30->set_touchDetected_11((bool)0);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_31 = __this->get_player_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_32), (0.0f), (0.0f), /*hidden argument*/NULL);
		PlayerController_moveMobilePlayer_mCCE71985D6CB6479615179BA0A08C3508EDDF511(L_31, L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualJoystick::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void VirtualJoystick_FixedUpdate_m9991085820B15A4272B8730D5008CF3C8A88ACBC (VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VirtualJoystick_FixedUpdate_m9991085820B15A4272B8730D5008CF3C8A88ACBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = __this->get_touchStart_6();
		if (!L_0)
		{
			goto IL_0082;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = __this->get_pointB_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = __this->get_pointA_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_1, L_2, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_ClampMagnitude_m295C57C516C0F2B528CD9A80CE5B071927D3627F(L_3, (1.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = V_0;
		VirtualJoystick_moveCharacter_mB62E150CBEE26337B0D927D9CC23E75354A427BF(__this, L_5, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = V_0;
		float L_7 = __this->get_spriteSize_12();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_6, ((float)((float)L_7/(float)(2.0f))), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_8, (-1.0f), /*hidden argument*/NULL);
		V_1 = L_9;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_10 = __this->get_circle_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_11 = __this->get_address_of_screenPoint_9();
		float L_12 = L_11->get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = V_1;
		float L_14 = L_13.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_15 = __this->get_address_of_screenPoint_9();
		float L_16 = L_15->get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_1;
		float L_18 = L_17.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_19), ((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), ((float)il2cpp_codegen_subtract((float)L_16, (float)L_18)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_19, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_10, L_20, /*hidden argument*/NULL);
		return;
	}

IL_0082:
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_21 = __this->get_circle_10();
		CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * L_22 = Component_GetComponent_TisCanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_m656D49904B3F94B59037C34C25609C7F992F3625(L_21, /*hidden argument*/Component_GetComponent_TisCanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_m656D49904B3F94B59037C34C25609C7F992F3625_RuntimeMethod_var);
		CanvasRenderer_SetAlpha_m54E7C6AEA9CD4D5C34F729B10B29F3B1146FB2BD(L_22, (0.0f), /*hidden argument*/NULL);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_23 = __this->get_outerCircle_11();
		CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * L_24 = Component_GetComponent_TisCanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_m656D49904B3F94B59037C34C25609C7F992F3625(L_23, /*hidden argument*/Component_GetComponent_TisCanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_m656D49904B3F94B59037C34C25609C7F992F3625_RuntimeMethod_var);
		CanvasRenderer_SetAlpha_m54E7C6AEA9CD4D5C34F729B10B29F3B1146FB2BD(L_24, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualJoystick::moveCharacter(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void VirtualJoystick_moveCharacter_mB62E150CBEE26337B0D927D9CC23E75354A427BF (VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___direction0, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___direction0;
		float L_1 = L_0.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = ___direction0;
		float L_3 = L_2.get_y_1();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), L_1, L_3, /*hidden argument*/NULL);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_4 = __this->get_player_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = V_0;
		PlayerController_moveMobilePlayer_mCCE71985D6CB6479615179BA0A08C3508EDDF511(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void VirtualJoystick::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VirtualJoystick__ctor_mFC702FE499CA25C87AF453249E93FC149E2E9BA2 (VirtualJoystick_t39938024ED4CC57DF984C21458D1EE40EE307930 * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_5((5.0f));
		__this->set_spriteSize_12((50.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void vComment::.ctor()
extern "C" IL2CPP_METHOD_ATTR void vComment__ctor_m50F271B33444B2E680509FCF0B95EF75D5328D45 (vComment_tDF948C14C8C4D9C562D65468C8D2819BEB96ABD9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Collections.IEnumerator vDestroyGameObject::Start()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* vDestroyGameObject_Start_mD9715ADA8C30FD3D74D8D6B5F1A5BC00BF93ACA7 (vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vDestroyGameObject_Start_mD9715ADA8C30FD3D74D8D6B5F1A5BC00BF93ACA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F * L_0 = (U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F *)il2cpp_codegen_object_new(U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F_il2cpp_TypeInfo_var);
		U3CStartU3Ed__1__ctor_m2B6B51F19AED3BC4F41F97AFD3A13CD00A878B9A(L_0, 0, /*hidden argument*/NULL);
		U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void vDestroyGameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void vDestroyGameObject__ctor_m652FBAC7E8C059383171C19DC7E68C8A1941E96A (vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void vDestroyGameObject_<Start>d__1::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__1__ctor_m2B6B51F19AED3BC4F41F97AFD3A13CD00A878B9A (U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void vDestroyGameObject_<Start>d__1::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_System_IDisposable_Dispose_m776EAFA974237897E94FF62A94BB155B76E3C102 (U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean vDestroyGameObject_<Start>d__1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ed__1_MoveNext_m9DCDA2C7C9A155035336517EA81DC633CBE592C1 (U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__1_MoveNext_m9DCDA2C7C9A155035336517EA81DC633CBE592C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65 * L_4 = V_1;
		float L_5 = L_4->get_delay_4();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_6 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		vDestroyGameObject_t37A06AEAC4D7F733CF3769BFBF2C900C91FF1F65 * L_7 = V_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_8, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object vDestroyGameObject_<Start>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF079085A16744829BA220CA54F0660CF3DA36A75 (U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void vDestroyGameObject_<Start>d__1::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m598F88DED9D87264A81225A7F8360E1E2D1C92DE (U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m598F88DED9D87264A81225A7F8360E1E2D1C92DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m598F88DED9D87264A81225A7F8360E1E2D1C92DE_RuntimeMethod_var);
	}
}
// System.Object vDestroyGameObject_<Start>d__1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__1_System_Collections_IEnumerator_get_Current_mF8D874BD6E511E9211E1B35B7B558DF7B63F140F (U3CStartU3Ed__1_t2E188CE85DF5805FC3BF4E58AC62956C8EB8CD5F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void vPickupItem::Start()
extern "C" IL2CPP_METHOD_ATTR void vPickupItem_Start_mEF3E1EA4FCBFD588CE680BFEE5B5BB6900E019CF (vPickupItem_t147D3AF5E224CF1731EB7B243DFC5FFD6D2A1810 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vPickupItem_Start_mEF3E1EA4FCBFD588CE680BFEE5B5BB6900E019CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		__this->set__audioSource_4(L_0);
		return;
	}
}
// System.Void vPickupItem::OnTriggerEnter(UnityEngine.Collider)
extern "C" IL2CPP_METHOD_ATTR void vPickupItem_OnTriggerEnter_mEB7AA011410E65D1DFF65B9EB02E101B73121BA3 (vPickupItem_t147D3AF5E224CF1731EB7B243DFC5FFD6D2A1810 * __this, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vPickupItem_OnTriggerEnter_mEB7AA011410E65D1DFF65B9EB02E101B73121BA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_0 = ___other0;
		bool L_1 = Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_2 = Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mFF06011DFE2A1EC6DFC8FF1C1E78EF60CA07E9D9_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0025;
	}

IL_0018:
	{
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_6, (bool)0, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_1;
		RendererU5BU5D_t711BACBBBFC0E06179ADB8932DBA208665108C93* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0018;
		}
	}
	{
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_10 = __this->get__audioSource_4();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_11 = __this->get__audioClip_5();
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_10, L_11, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_13 = __this->get__audioClip_5();
		float L_14 = AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m09F51D8BDECFD2E8C618498EF7377029B669030D(L_12, L_14, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void vPickupItem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void vPickupItem__ctor_m86A9B4625170B812CC6A295A87C5BF2A395890E1 (vPickupItem_t147D3AF5E224CF1731EB7B243DFC5FFD6D2A1810 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// vThirdPersonCamera vThirdPersonCamera::get_instance()
extern "C" IL2CPP_METHOD_ATTR vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * vThirdPersonCamera_get_instance_m3028F15438CE49FDA398E11FBE0E7D7C46F30A44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonCamera_get_instance_m3028F15438CE49FDA398E11FBE0E7D7C46F30A44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_0 = ((vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_StaticFields*)il2cpp_codegen_static_fields_for(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_2 = Object_FindObjectOfType_TisvThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_m18DA38BDDF82025DCAD3D7CAB52576C327FE8F83(/*hidden argument*/Object_FindObjectOfType_TisvThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_m18DA38BDDF82025DCAD3D7CAB52576C327FE8F83_RuntimeMethod_var);
		((vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_StaticFields*)il2cpp_codegen_static_fields_for(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_il2cpp_TypeInfo_var))->set__instance_4(L_2);
	}

IL_0017:
	{
		vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * L_3 = ((vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_StaticFields*)il2cpp_codegen_static_fields_for(vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F_il2cpp_TypeInfo_var))->get__instance_4();
		return L_3;
	}
}
// System.Void vThirdPersonCamera::Start()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera_Start_m3F2BBABACE020E3DDF2F392CE7E8ACA3A00FDEDB (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, const RuntimeMethod* method)
{
	{
		vThirdPersonCamera_Init_m1EC8A56D50ED823044C0F65FAC3BB27B09A3BBCF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void vThirdPersonCamera::Init()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera_Init_m1EC8A56D50ED823044C0F65FAC3BB27B09A3BBCF (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonCamera_Init_m1EC8A56D50ED823044C0F65FAC3BB27B09A3BBCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		__this->set__camera_28(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = __this->get_target_5();
		__this->set_currentTarget_21(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_currentTarget_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = __this->get_currentTarget_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		float L_10 = __this->get_offSetPlayerPivot_19();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = __this->get_currentTarget_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_14), L_6, ((float)il2cpp_codegen_add((float)L_9, (float)L_10)), L_13, /*hidden argument*/NULL);
		__this->set_currentTargetPos_24(L_14);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_15, _stringLiteral2046D9B4E31DEBB56DCDECDE34F58F58104E0065, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_15, /*hidden argument*/NULL);
		__this->set_targetLookAt_23(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = __this->get_targetLookAt_23();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = __this->get_currentTarget_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_17, L_19, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = __this->get_targetLookAt_23();
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_20, 1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = __this->get_targetLookAt_23();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = __this->get_currentTarget_21();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_22, /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_21, L_23, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = __this->get_currentTarget_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_x_2();
		__this->set_mouseY_30(L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = __this->get_currentTarget_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_y_3();
		__this->set_mouseX_31(L_29);
		float L_30 = __this->get_defaultDistance_10();
		__this->set_distance_29(L_30);
		float L_31 = __this->get_height_11();
		__this->set_currentHeight_32(L_31);
		return;
	}
}
// System.Void vThirdPersonCamera::FixedUpdate()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera_FixedUpdate_m30A0543663B117F425E903470B9B341BE217E9AD (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonCamera_FixedUpdate_m30A0543663B117F425E903470B9B341BE217E9AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_targetLookAt_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		vThirdPersonCamera_CameraMovement_m0D8F5AF405A8FB779DE25AA313AA297283DA9644(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void vThirdPersonCamera::SetTarget(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera_SetTarget_mF82A2724E72F174A198EDDC00A9403D25F331233 (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___newTarget0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonCamera_SetTarget_mF82A2724E72F174A198EDDC00A9403D25F331233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * G_B2_0 = NULL;
	vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * G_B1_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B3_0 = NULL;
	vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * G_B3_1 = NULL;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___newTarget0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_target_5();
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___newTarget0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		G_B3_1->set_currentTarget_21(G_B3_0);
		return;
	}
}
// System.Void vThirdPersonCamera::SetMainTarget(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera_SetMainTarget_m9E74396CFD922D503F3F94975EB53B56CEBBD812 (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___newTarget0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___newTarget0;
		__this->set_target_5(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = ___newTarget0;
		__this->set_currentTarget_21(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_currentTarget_21();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		__this->set_mouseY_30(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = __this->get_currentTarget_21();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		__this->set_mouseX_31(L_9);
		vThirdPersonCamera_Init_m1EC8A56D50ED823044C0F65FAC3BB27B09A3BBCF(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Ray vThirdPersonCamera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  vThirdPersonCamera_ScreenPointToRay_m6A7A68AC0DF777B4BCA067E6243B7C1324B9761A (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonCamera_ScreenPointToRay_m6A7A68AC0DF777B4BCA067E6243B7C1324B9761A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m9560AE98225581598F654E6EEC19A77EBF186D2F_RuntimeMethod_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___Point0;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_2 = Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void vThirdPersonCamera::RotateCamera(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera_RotateCamera_m73CDBE5D7114F10B1A1F1BE2BA46F33D1BBD6F7B (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_mouseX_31();
		float L_1 = ___x0;
		float L_2 = __this->get_xMouseSensitivity_13();
		__this->set_mouseX_31(((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)))));
		float L_3 = __this->get_mouseY_30();
		float L_4 = ___y1;
		float L_5 = __this->get_yMouseSensitivity_14();
		__this->set_mouseY_30(((float)il2cpp_codegen_subtract((float)L_3, (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_6 = __this->get_address_of_movementSpeed_22();
		float L_7 = ___x0;
		L_6->set_x_0(L_7);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_8 = __this->get_address_of_movementSpeed_22();
		float L_9 = ___y1;
		L_8->set_y_1(((-L_9)));
		bool L_10 = __this->get_lockCamera_8();
		if (L_10)
		{
			goto IL_0086;
		}
	}
	{
		float L_11 = __this->get_mouseY_30();
		float L_12 = __this->get_yMinLimit_15();
		float L_13 = __this->get_yMaxLimit_16();
		float L_14 = vExtensions_ClampAngle_m58ABF193781CA3AD4A3EDB941A8C55829E0A80B3(L_11, L_12, L_13, /*hidden argument*/NULL);
		__this->set_mouseY_30(L_14);
		float L_15 = __this->get_mouseX_31();
		float L_16 = __this->get_xMinLimit_37();
		float L_17 = __this->get_xMaxLimit_38();
		float L_18 = vExtensions_ClampAngle_m58ABF193781CA3AD4A3EDB941A8C55829E0A80B3(L_15, L_16, L_17, /*hidden argument*/NULL);
		__this->set_mouseX_31(L_18);
		return;
	}

IL_0086:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = __this->get_currentTarget_21();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_2();
		__this->set_mouseY_30(L_22);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = __this->get_currentTarget_21();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Transform_get_root_m101A8B5C2CC6D868B6B66EEDBD5336FC1EB5DDD6(L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_localEulerAngles_m445AD7F6706B0BDABA8A875C899EB1E1DF1A2A2B(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		__this->set_mouseX_31(L_26);
		return;
	}
}
// System.Void vThirdPersonCamera::CameraMovement()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera_CameraMovement_m0D8F5AF405A8FB779DE25AA313AA297283DA9644 (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonCamera_CameraMovement_m0D8F5AF405A8FB779DE25AA313AA297283DA9644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_2;
	memset(&V_2, 0, sizeof(V_2));
	ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_6;
	memset(&V_6, 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_currentTarget_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		float L_2 = __this->get_distance_29();
		float L_3 = __this->get_defaultDistance_10();
		float L_4 = __this->get_smoothFollow_12();
		float L_5 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_2, L_3, ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		__this->set_distance_29(L_6);
		float L_7 = __this->get_cullingDistance_33();
		float L_8 = __this->get_distance_29();
		float L_9 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		float L_10 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_7, L_8, L_9, /*hidden argument*/NULL);
		__this->set_cullingDistance_33(L_10);
		float L_11 = __this->get_forward_36();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = __this->get_targetLookAt_23();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_11, L_13, /*hidden argument*/NULL);
		float L_15 = __this->get_rightOffset_9();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = __this->get_targetLookAt_23();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_16, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_15, L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_14, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		V_0 = L_20;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = __this->get_currentTarget_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = __this->get_currentTarget_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		float L_27 = __this->get_offSetPlayerPivot_19();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = __this->get_currentTarget_21();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_z_4();
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), L_23, ((float)il2cpp_codegen_add((float)L_26, (float)L_27)), L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_1;
		__this->set_currentTargetPos_24(L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_1;
		float L_33 = __this->get_height_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_34), (0.0f), L_33, (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_32, L_34, /*hidden argument*/NULL);
		__this->set_desired_cPos_27(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = __this->get_currentTargetPos_24();
		float L_37 = __this->get_currentHeight_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38;
		memset(&L_38, 0, sizeof(L_38));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_38), (0.0f), L_37, (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_36, L_38, /*hidden argument*/NULL);
		__this->set_current_cPos_26(L_39);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_40 = __this->get__camera_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = __this->get_current_cPos_26();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = V_0;
		float L_43 = __this->get_distance_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_42, L_43, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_41, L_44, /*hidden argument*/NULL);
		float L_46 = __this->get_clipPlaneMargin_35();
		ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  L_47 = vExtensions_NearClipPlanePoints_mECAE3C1BF85D3F24483FAA364992B45B21908C3A(L_40, L_45, L_46, /*hidden argument*/NULL);
		V_3 = L_47;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_48 = __this->get__camera_28();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = __this->get_desired_cPos_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = V_0;
		float L_51 = __this->get_distance_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_50, L_51, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_49, L_52, /*hidden argument*/NULL);
		float L_54 = __this->get_clipPlaneMargin_35();
		ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  L_55 = vExtensions_NearClipPlanePoints_mECAE3C1BF85D3F24483FAA364992B45B21908C3A(L_48, L_53, L_54, /*hidden argument*/NULL);
		V_4 = L_55;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = V_1;
		float L_57 = __this->get_checkHeightRadius_34();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_59 = __this->get_cullingHeight_39();
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_60 = __this->get_cullingLayer_7();
		int32_t L_61 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_60, /*hidden argument*/NULL);
		bool L_62 = Physics_SphereCast_m41B360D0B25BAADAD64F5D4BEAC07F92AF911837(L_56, L_57, L_58, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_2), ((float)il2cpp_codegen_add((float)L_59, (float)(0.2f))), L_61, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_01e7;
		}
	}
	{
		float L_63 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_2), /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_subtract((float)L_63, (float)(0.2f)));
		float L_64 = V_7;
		float L_65 = __this->get_height_11();
		V_7 = ((float)il2cpp_codegen_subtract((float)L_64, (float)L_65));
		float L_66 = V_7;
		float L_67 = __this->get_cullingHeight_39();
		float L_68 = __this->get_height_11();
		V_7 = ((float)((float)L_66/(float)((float)il2cpp_codegen_subtract((float)L_67, (float)L_68))));
		float L_69 = __this->get_height_11();
		float L_70 = __this->get_cullingHeight_39();
		float L_71 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_72 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_71, (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_73 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_69, L_70, L_72, /*hidden argument*/NULL);
		__this->set_cullingHeight_39(L_73);
	}

IL_01e7:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = __this->get_desired_cPos_27();
		ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  L_75 = V_4;
		float L_76 = __this->get_distance_29();
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_77 = __this->get_cullingLayer_7();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_78 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		bool L_79 = vThirdPersonCamera_CullingRayCast_mCA97CF765A52EBC171402401B674C82183F5E24E(__this, L_74, L_75, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_2), ((float)il2cpp_codegen_add((float)L_76, (float)(0.2f))), L_77, L_78, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_02a3;
		}
	}
	{
		float L_80 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_2), /*hidden argument*/NULL);
		__this->set_distance_29(((float)il2cpp_codegen_subtract((float)L_80, (float)(0.2f))));
		float L_81 = __this->get_distance_29();
		float L_82 = __this->get_defaultDistance_10();
		if ((!(((float)L_81) < ((float)L_82))))
		{
			goto IL_02af;
		}
	}
	{
		float L_83 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_2), /*hidden argument*/NULL);
		V_8 = L_83;
		float L_84 = V_8;
		float L_85 = __this->get_cullingMinDist_40();
		V_8 = ((float)il2cpp_codegen_subtract((float)L_84, (float)L_85));
		float L_86 = V_8;
		float L_87 = __this->get_cullingMinDist_40();
		V_8 = ((float)((float)L_86/(float)L_87));
		float L_88 = __this->get_cullingHeight_39();
		float L_89 = __this->get_height_11();
		float L_90 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_91 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_90, (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_92 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_88, L_89, L_91, /*hidden argument*/NULL);
		__this->set_currentHeight_32(L_92);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = __this->get_currentTargetPos_24();
		float L_94 = __this->get_currentHeight_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95;
		memset(&L_95, 0, sizeof(L_95));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_95), (0.0f), L_94, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_96 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_93, L_95, /*hidden argument*/NULL);
		__this->set_current_cPos_26(L_96);
		goto IL_02af;
	}

IL_02a3:
	{
		float L_97 = __this->get_height_11();
		__this->set_currentHeight_32(L_97);
	}

IL_02af:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = __this->get_current_cPos_26();
		ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  L_99 = V_3;
		float L_100 = __this->get_distance_29();
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_101 = __this->get_cullingLayer_7();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_102 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		bool L_103 = vThirdPersonCamera_CullingRayCast_mCA97CF765A52EBC171402401B674C82183F5E24E(__this, L_98, L_99, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_2), L_100, L_101, L_102, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_02ed;
		}
	}
	{
		float L_104 = __this->get_cullingDistance_33();
		float L_105 = __this->get_defaultDistance_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_106 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_104, (0.0f), L_105, /*hidden argument*/NULL);
		__this->set_distance_29(L_106);
	}

IL_02ed:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_107 = __this->get_current_cPos_26();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_108 = __this->get_targetLookAt_23();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_109 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_108, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_110 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_109, (2.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_111 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_107, L_110, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_112 = __this->get_targetLookAt_23();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_113 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_112, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_114 = V_0;
		float L_115 = __this->get_distance_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_116 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_114, L_115, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_117 = __this->get_targetLookAt_23();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_118 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_117, /*hidden argument*/NULL);
		float L_119 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_116, L_118, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_120 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_113, L_119, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_121 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_111, L_120, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_122 = __this->get_targetLookAt_23();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_123 = __this->get_current_cPos_26();
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_122, L_123, /*hidden argument*/NULL);
		float L_124 = __this->get_mouseY_30();
		float L_125 = __this->get_mouseX_31();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_126 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_124, L_125, (0.0f), /*hidden argument*/NULL);
		V_5 = L_126;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_127 = __this->get_targetLookAt_23();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_128 = __this->get_targetLookAt_23();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_129 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_128, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_130 = V_5;
		float L_131 = __this->get_smoothCameraRotation_6();
		float L_132 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_133 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_129, L_130, ((float)il2cpp_codegen_multiply((float)L_131, (float)L_132)), /*hidden argument*/NULL);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_127, L_133, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_134 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_135 = __this->get_current_cPos_26();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_136 = V_0;
		float L_137 = __this->get_distance_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_138 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_136, L_137, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_135, L_138, /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_134, L_139, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_140 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_141 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_140, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_142 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_121, L_141, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_143 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_142, /*hidden argument*/NULL);
		V_6 = L_143;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_144 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_145 = V_6;
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_144, L_145, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_146 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_movementSpeed_22(L_146);
		return;
	}
}
// System.Boolean vThirdPersonCamera::CullingRayCast(UnityEngine.Vector3,Invector.ClipPlanePoints,UnityEngine.RaycastHitU26,System.Single,UnityEngine.LayerMask,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR bool vThirdPersonCamera_CullingRayCast_mCA97CF765A52EBC171402401B674C82183F5E24E (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___from0, ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  ____to1, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___hitInfo2, float ___distance3, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___cullingLayer4, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vThirdPersonCamera_CullingRayCast_mCA97CF765A52EBC171402401B674C82183F5E24E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___from0;
		ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  L_1 = ____to1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = L_1.get_LowerLeft_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_3, /*hidden argument*/NULL);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_5 = ___hitInfo2;
		float L_6 = ___distance3;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_7 = ___cullingLayer4;
		int32_t L_8 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_7, /*hidden argument*/NULL);
		bool L_9 = Physics_Raycast_mFB0018A196CC9E45CA8A238899EA8B093264B024(L_0, L_4, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_5, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_002e;
		}
	}
	{
		V_0 = (bool)1;
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_10 = ___hitInfo2;
		float L_11 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_10, /*hidden argument*/NULL);
		__this->set_cullingDistance_33(L_11);
	}

IL_002e:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = ___from0;
		ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  L_13 = ____to1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = L_13.get_LowerRight_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_14, L_15, /*hidden argument*/NULL);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_17 = ___hitInfo2;
		float L_18 = ___distance3;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_19 = ___cullingLayer4;
		int32_t L_20 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_19, /*hidden argument*/NULL);
		bool L_21 = Physics_Raycast_mFB0018A196CC9E45CA8A238899EA8B093264B024(L_12, L_16, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_17, L_18, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0068;
		}
	}
	{
		V_0 = (bool)1;
		float L_22 = __this->get_cullingDistance_33();
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_23 = ___hitInfo2;
		float L_24 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_23, /*hidden argument*/NULL);
		if ((!(((float)L_22) > ((float)L_24))))
		{
			goto IL_0068;
		}
	}
	{
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_25 = ___hitInfo2;
		float L_26 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_25, /*hidden argument*/NULL);
		__this->set_cullingDistance_33(L_26);
	}

IL_0068:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = ___from0;
		ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  L_28 = ____to1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = L_28.get_UpperLeft_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_29, L_30, /*hidden argument*/NULL);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_32 = ___hitInfo2;
		float L_33 = ___distance3;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_34 = ___cullingLayer4;
		int32_t L_35 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_34, /*hidden argument*/NULL);
		bool L_36 = Physics_Raycast_mFB0018A196CC9E45CA8A238899EA8B093264B024(L_27, L_31, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_32, L_33, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00a2;
		}
	}
	{
		V_0 = (bool)1;
		float L_37 = __this->get_cullingDistance_33();
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_38 = ___hitInfo2;
		float L_39 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_38, /*hidden argument*/NULL);
		if ((!(((float)L_37) > ((float)L_39))))
		{
			goto IL_00a2;
		}
	}
	{
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_40 = ___hitInfo2;
		float L_41 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_40, /*hidden argument*/NULL);
		__this->set_cullingDistance_33(L_41);
	}

IL_00a2:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = ___from0;
		ClipPlanePoints_t20AE479CE67DB28A40559835C3B4E444F20CD717  L_43 = ____to1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = L_43.get_UpperRight_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = ___from0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_44, L_45, /*hidden argument*/NULL);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_47 = ___hitInfo2;
		float L_48 = ___distance3;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_49 = ___cullingLayer4;
		int32_t L_50 = LayerMask_op_Implicit_m2AFFC7F931005437E8F356C953F439829AF4CFA5(L_49, /*hidden argument*/NULL);
		bool L_51 = Physics_Raycast_mFB0018A196CC9E45CA8A238899EA8B093264B024(L_42, L_46, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_47, L_48, L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_00dc;
		}
	}
	{
		V_0 = (bool)1;
		float L_52 = __this->get_cullingDistance_33();
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_53 = ___hitInfo2;
		float L_54 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_53, /*hidden argument*/NULL);
		if ((!(((float)L_52) > ((float)L_54))))
		{
			goto IL_00dc;
		}
	}
	{
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_55 = ___hitInfo2;
		float L_56 = RaycastHit_get_distance_m1CBA60855C35F29BBC348D374BBC76386A243543((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_55, /*hidden argument*/NULL);
		__this->set_cullingDistance_33(L_56);
	}

IL_00dc:
	{
		bool L_57 = V_0;
		return L_57;
	}
}
// System.Void vThirdPersonCamera::.ctor()
extern "C" IL2CPP_METHOD_ATTR void vThirdPersonCamera__ctor_m357C7F4BD7275E24D58A8F65F4254BE324A4C487 (vThirdPersonCamera_t53F7E519595658746E0E202AD00AEF9AED0B4D2F * __this, const RuntimeMethod* method)
{
	{
		__this->set_smoothCameraRotation_6((12.0f));
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_0 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(1, /*hidden argument*/NULL);
		__this->set_cullingLayer_7(L_0);
		__this->set_defaultDistance_10((2.5f));
		__this->set_height_11((1.4f));
		__this->set_smoothFollow_12((10.0f));
		__this->set_xMouseSensitivity_13((3.0f));
		__this->set_yMouseSensitivity_14((3.0f));
		__this->set_yMinLimit_15((-40.0f));
		__this->set_yMaxLimit_16((80.0f));
		__this->set_distance_29((5.0f));
		__this->set_checkHeightRadius_34((0.4f));
		__this->set_forward_36((-1.0f));
		__this->set_xMinLimit_37((-360.0f));
		__this->set_xMaxLimit_38((360.0f));
		__this->set_cullingHeight_39((0.2f));
		__this->set_cullingMinDist_40((0.1f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
