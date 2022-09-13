#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t78693409E5147276425329CB69C1414D43C8CCE5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<WeightBlocks.WeightBlock>
struct List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_tE9183007A5785689F86BDBB22CB72D19AB5E1192;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.String>[]
struct EntryU5BU5D_t8551361338B9BF5705CA61FFE9EA2EDEA1B1EF34;
// Challenges.Challenge[]
struct ChallengeU5BU5D_tBE5FA42E6444FE5F42E06825679AAAA7019B08D7;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// Balance.Hook[]
struct HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// WeightBlocks.WeightBlock[]
struct WeightBlockU5BU5D_t0C111F02D25DA1E01345D2EB9693D3456E704D85;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Balance.BallancePlateLEGACY
struct BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// Common.Controllers.BlockController
struct BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Challenges.Challenge
struct Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87;
// Challenges.ChallengeSequence
struct ChallengeSequence_tBFA81EAEA62F450F410E732B51E3699883F41CEB;
// Challenges.Challenge_1
struct Challenge_1_tFA63A292DB82E298B96723D20F7CDCD0E4E8901C;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// WeightBlocks.CustomWeightBlock
struct CustomWeightBlock_t5DE9318DEE4D26DF9B97A516A99313D1AB307A39;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Common.Controllers.GameController
struct GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Assets.Technical.Classes.HUD.HUD
struct HUD_tBF0E2B0A92D944E6D5886EFF31260D8EA50DE34F;
// Balance.Hook
struct Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A;
// HUD.HoverScaleText
struct HoverScaleText_t615179AC5594CC1AB07FBA42EE8E20BE35978B58;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// Common.Controllers.JoystickController
struct JoystickController_tA559A1D466780F0EC3768437F76DF73DE77F9869;
// Common.Controllers.LevelController
struct LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261;
// Balance.MainBalance
struct MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// WeightBlocks.PremadeWeightBlock
struct PremadeWeightBlock_tF0E611B182B04B04F0A6C18A8E335A6709AC7B30;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// WeightBlocks.WeightBlock
struct WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5;
// WeightBlockChallenge_2
struct WeightBlockChallenge_2_tD239437EB5EAA96906A45071D3A5B25DEEA7F946;
// WeightBlocks.WeightBlockCreator
struct WeightBlockCreator_t5503BC96E118C9715C567EEC8C33A088D0C21040;
// Assets.Technical.Classes.Utility.WeightLEGACY
struct WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// Common.Controllers.JoystickController/JoystickState
struct JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral1E99C7898F08F0F5F3BED7966C0E522176214E7F;
IL2CPP_EXTERN_C String_t* _stringLiteral1F4F4B3052EF7A84F1F473991F7150C3FE239EE7;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1;
IL2CPP_EXTERN_C String_t* _stringLiteral575D0C8B1F678CB54C37447C1FB337262DAB309B;
IL2CPP_EXTERN_C String_t* _stringLiteral648EC1E776B0B86096D1F6155AE60D40F3EAA48B;
IL2CPP_EXTERN_C String_t* _stringLiteral673F1ED543EAAC79A58724482A319C28C36D9AB6;
IL2CPP_EXTERN_C String_t* _stringLiteral70C10BF59D6B7DD31DBB201F25233B19B90AE6DD;
IL2CPP_EXTERN_C String_t* _stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E;
IL2CPP_EXTERN_C String_t* _stringLiteral7D2A59C8AC0EE7CAABA9B50BEEF7C72871934216;
IL2CPP_EXTERN_C String_t* _stringLiteral7FAD0955501342E2B4CC98C452288A3927477593;
IL2CPP_EXTERN_C String_t* _stringLiteralAAB8DE1C5AA2317DAA13F5800200D4DD49FCC3DB;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC1D34694A980D82C6E470271B5697C52635BD0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* BallancePlateLEGACY_addPeso_m28C18903ACCD27041D2CACE043A559ED3205E89F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BallancePlateLEGACY_remPeso_m8480CB375B0E1EB3405AADFFA5DE6581BC60255A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535_mCC3C74510A9DD2627B68D58D17CAD4C9DD890E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A_m8968314DE2A337EA2C69F94EC59B121326EA2BE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0B3F0890A541814147F62AEAD00D740D8AF246FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m820E95922AE57E9B6BA62B7640269205642D0C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m21EF7A9C580E7145010FFF666FFC1FDD6F92450F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDEC9555BCB29C5F76211BC468E35ED0BCC7AD0F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0334E04DB891548DCA8AB91659DD1EEF74968E0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JoystickController_DragState_m1BF888E295709F1EC7B248D38BC7518A6A7D79EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JoystickController_IdleState_m717DD35C5CE6E7CF743B5FC3D3DBC62922D93B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCCD7D323DB48BDCCB3E8A8A0A62DE7F073B8A0B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB14C5C73EAE3A79C4A9401FB85741FEC03A89E4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m538C9213A28B180E4741BAB46F58F2770824ABFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m30760684F56603A4A3A87F6FC240849A9BF766B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m70A5DA25BD7EF11E34213716A9D67DC95858DA04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0D19CF19E639DEB60CB0526CFEDC66021F61BDC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m69ED3E6C2B47B44DE1568155A51425B53568E050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ChallengeU5BU5D_tBE5FA42E6444FE5F42E06825679AAAA7019B08D7;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8551361338B9BF5705CA61FFE9EA2EDEA1B1EF34* ____entries_1;
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
	KeyCollection_t78693409E5147276425329CB69C1414D43C8CCE5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE9183007A5785689F86BDBB22CB72D19AB5E1192* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<WeightBlocks.WeightBlock>
struct List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WeightBlockU5BU5D_t0C111F02D25DA1E01345D2EB9693D3456E704D85* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WeightBlockU5BU5D_t0C111F02D25DA1E01345D2EB9693D3456E704D85* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// Utility.WeightUnitConverter
struct WeightUnitConverter_t0DB4BA33B9BFBF240ECB8E5A3013CD32CEA4E153  : public RuntimeObject
{
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

// System.Collections.Generic.List`1/Enumerator<WeightBlocks.WeightBlock>
struct Enumerator_tF1876FE773CC8FFA86A74835913CDCAE07C20E2A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ____current_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
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

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// Common.Controllers.JoystickController/JoystickState
struct JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Balance.BallancePlateLEGACY
struct BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Common.Controllers.BlockController
struct BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<WeightBlocks.WeightBlock> Common.Controllers.BlockController::_blocks
	List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* ____blocks_4;
	// UnityEngine.GameObject[] Common.Controllers.BlockController::_weightBlockPrefab
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____weightBlockPrefab_6;
	// UnityEngine.GameObject[] Common.Controllers.BlockController::_weightBlockKitInitialPositions
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____weightBlockKitInitialPositions_7;
};

struct BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_StaticFields
{
	// WeightBlocks.WeightBlock Common.Controllers.BlockController::<SelectedWeightBlock>k__BackingField
	WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___U3CSelectedWeightBlockU3Ek__BackingField_5;
};

// Challenges.Challenge
struct Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Common.Controllers.GameController
struct GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Common.Controllers.LevelController Common.Controllers.GameController::LevelController
	LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* ___LevelController_5;
	// Common.Controllers.BlockController Common.Controllers.GameController::BlockController
	BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* ___BlockController_6;
	// Common.Controllers.JoystickController Common.Controllers.GameController::JoystickController
	JoystickController_tA559A1D466780F0EC3768437F76DF73DE77F9869* ___JoystickController_7;
	// UnityEngine.GameObject Common.Controllers.GameController::Menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Menu_8;
	// UnityEngine.GameObject Common.Controllers.GameController::Game
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Game_9;
	// UnityEngine.AudioSource Common.Controllers.GameController::ClickSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___ClickSound_10;
};

struct GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_StaticFields
{
	// Common.Controllers.GameController Common.Controllers.GameController::<Singleton>k__BackingField
	GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* ___U3CSingletonU3Ek__BackingField_4;
};

// Assets.Technical.Classes.HUD.HUD
struct HUD_tBF0E2B0A92D944E6D5886EFF31260D8EA50DE34F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Assets.Technical.Classes.HUD.HUD::_activityPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____activityPanel_4;
	// UnityEngine.UI.Dropdown Assets.Technical.Classes.HUD.HUD::_weightUnit
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ____weightUnit_5;
	// UnityEngine.GameObject Assets.Technical.Classes.HUD.HUD::_weightBlockCreationPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____weightBlockCreationPanel_6;
	// UnityEngine.GameObject Assets.Technical.Classes.HUD.HUD::_authorCreditPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____authorCreditPanel_7;
};

// Balance.Hook
struct Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Quaternion[] Balance.Hook::_weightBlockRotationInSameHook
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____weightBlockRotationInSameHook_4;
	// Balance.MainBalance Balance.Hook::_mainBalance
	MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* ____mainBalance_5;
	// System.Collections.Generic.List`1<WeightBlocks.WeightBlock> Balance.Hook::_weightBlocks
	List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* ____weightBlocks_6;
	// System.Single Balance.Hook::_hookCoefficient
	float ____hookCoefficient_7;
};

// HUD.HoverScaleText
struct HoverScaleText_t615179AC5594CC1AB07FBA42EE8E20BE35978B58  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject HUD.HoverScaleText::_textToScale
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____textToScale_4;
};

// Common.Controllers.JoystickController
struct JoystickController_tA559A1D466780F0EC3768437F76DF73DE77F9869  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Common.Controllers.JoystickController/JoystickState Common.Controllers.JoystickController::_actualJoystickState
	JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* ____actualJoystickState_4;
	// UnityEngine.Ray Common.Controllers.JoystickController::ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray_5;
	// UnityEngine.RaycastHit Common.Controllers.JoystickController::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_6;
	// UnityEngine.Texture2D Common.Controllers.JoystickController::cursorOpenSprite
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cursorOpenSprite_7;
	// UnityEngine.Texture2D Common.Controllers.JoystickController::cursorGrabSprite
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cursorGrabSprite_8;
	// UnityEngine.CursorMode Common.Controllers.JoystickController::cursorMode
	int32_t ___cursorMode_9;
};

// Common.Controllers.LevelController
struct LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Balance.MainBalance Common.Controllers.LevelController::MainBalance
	MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* ___MainBalance_4;
	// Challenges.Challenge[] Common.Controllers.LevelController::PlayableChallenges
	ChallengeU5BU5D_tBE5FA42E6444FE5F42E06825679AAAA7019B08D7* ___PlayableChallenges_5;
};

// Balance.MainBalance
struct MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Balance.MainBalance::_totalWeight
	float ____totalWeight_4;
	// System.Single Balance.MainBalance::_totalWeightRightSide
	float ____totalWeightRightSide_5;
	// System.Single Balance.MainBalance::_totalWeightLeftSide
	float ____totalWeightLeftSide_6;
	// UnityEngine.AudioSource Balance.MainBalance::_winSoundFeedback
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____winSoundFeedback_7;
	// UnityEngine.GameObject Balance.MainBalance::_balancedVisualFeedback
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____balancedVisualFeedback_8;
	// UnityEngine.GameObject Balance.MainBalance::_unbalancedVisualFeedback
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____unbalancedVisualFeedback_9;
	// System.Single Balance.MainBalance::_desiredRotationZ
	float ____desiredRotationZ_10;
	// System.Single Balance.MainBalance::_rotationSpeedFlag
	float ____rotationSpeedFlag_11;
	// UnityEngine.GameObject Balance.MainBalance::BalanceAxis
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BalanceAxis_12;
	// Balance.Hook[] Balance.MainBalance::_hooks
	HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* ____hooks_13;
	// System.Single Balance.MainBalance::_minDistanceToHookCollision
	float ____minDistanceToHookCollision_14;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WeightBlocks.WeightBlock
struct WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody WeightBlocks.WeightBlock::_rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rb_4;
	// UnityEngine.Renderer WeightBlocks.WeightBlock::_textRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____textRenderer_5;
	// UnityEngine.TextMesh WeightBlocks.WeightBlock::_weightValueVisualText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ____weightValueVisualText_6;
	// UnityEngine.TextMesh WeightBlocks.WeightBlock::_weightUnitVisualText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ____weightUnitVisualText_7;
	// System.Collections.IDictionary WeightBlocks.WeightBlock::weightUnitDictionary
	RuntimeObject* ___weightUnitDictionary_8;
	// System.Single WeightBlocks.WeightBlock::_boundaryPositionY
	float ____boundaryPositionY_9;
	// System.Single WeightBlocks.WeightBlock::_boundaryPositionX
	float ____boundaryPositionX_10;
	// System.Boolean WeightBlocks.WeightBlock::_gravityEnabledFlag
	bool ____gravityEnabledFlag_11;
	// System.Single WeightBlocks.WeightBlock::<Mass>k__BackingField
	float ___U3CMassU3Ek__BackingField_12;
	// UnityEngine.AudioSource WeightBlocks.WeightBlock::_impactSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____impactSound_13;
	// UnityEngine.GameObject WeightBlocks.WeightBlock::_impactVfxPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____impactVfxPrefab_14;
	// Balance.Hook WeightBlocks.WeightBlock::_hookBelonging
	Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* ____hookBelonging_15;
	// UnityEngine.Vector3 WeightBlocks.WeightBlock::_actualPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____actualPosition_16;
	// UnityEngine.AudioSource WeightBlocks.WeightBlock::_grabSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____grabSound_17;
	// UnityEngine.GameObject WeightBlocks.WeightBlock::_puffVfxPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____puffVfxPrefab_18;
	// System.Single WeightBlocks.WeightBlock::_puffVfxPositionAdjustment
	float ____puffVfxPositionAdjustment_19;
};

// WeightBlocks.WeightBlockCreator
struct WeightBlockCreator_t5503BC96E118C9715C567EEC8C33A088D0C21040  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single WeightBlocks.WeightBlockCreator::_weightValue
	float ____weightValue_4;
	// System.Int32 WeightBlocks.WeightBlockCreator::_unitValue
	int32_t ____unitValue_5;
};

// Assets.Technical.Classes.Utility.WeightLEGACY
struct WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Assets.Technical.Classes.Utility.WeightLEGACY::audioImpact
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioImpact_4;
	// UnityEngine.AudioSource Assets.Technical.Classes.Utility.WeightLEGACY::audioGrab
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioGrab_5;
	// UnityEngine.GameObject Assets.Technical.Classes.Utility.WeightLEGACY::smokeImpact
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___smokeImpact_6;
	// UnityEngine.Texture2D Assets.Technical.Classes.Utility.WeightLEGACY::cursorOpen
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cursorOpen_7;
	// UnityEngine.Texture2D Assets.Technical.Classes.Utility.WeightLEGACY::cursorGrab
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___cursorGrab_8;
	// UnityEngine.CursorMode Assets.Technical.Classes.Utility.WeightLEGACY::cursorMode
	int32_t ___cursorMode_9;
	// UnityEngine.Vector2 Assets.Technical.Classes.Utility.WeightLEGACY::hotSpot
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___hotSpot_10;
	// UnityEngine.GameObject Assets.Technical.Classes.Utility.WeightLEGACY::particulaPuff
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___particulaPuff_11;
	// System.Single Assets.Technical.Classes.Utility.WeightLEGACY::massa
	float ___massa_12;
	// UnityEngine.Rigidbody Assets.Technical.Classes.Utility.WeightLEGACY::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_13;
	// System.Boolean Assets.Technical.Classes.Utility.WeightLEGACY::podeAdicionarMassa
	bool ___podeAdicionarMassa_14;
	// UnityEngine.TextMesh Assets.Technical.Classes.Utility.WeightLEGACY::texto
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___texto_15;
	// UnityEngine.RaycastHit Assets.Technical.Classes.Utility.WeightLEGACY::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_16;
	// UnityEngine.RaycastHit Assets.Technical.Classes.Utility.WeightLEGACY::hitTarg
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hitTarg_17;
	// System.Int32 Assets.Technical.Classes.Utility.WeightLEGACY::layerHit
	int32_t ___layerHit_18;
	// System.Boolean Assets.Technical.Classes.Utility.WeightLEGACY::arrastando
	bool ___arrastando_19;
	// UnityEngine.Vector3 Assets.Technical.Classes.Utility.WeightLEGACY::pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_20;
	// UnityEngine.Vector3 Assets.Technical.Classes.Utility.WeightLEGACY::finalPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___finalPos_21;
};

// Challenges.ChallengeSequence
struct ChallengeSequence_tBFA81EAEA62F450F410E732B51E3699883F41CEB  : public Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87
{
	// UnityEngine.GameObject Challenges.ChallengeSequence::_nextChallengeButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____nextChallengeButton_4;
	// System.Int32 Challenges.ChallengeSequence::_desiredHook
	int32_t ____desiredHook_5;
	// System.Int32 Challenges.ChallengeSequence::_numberOfWeightBlocks
	int32_t ____numberOfWeightBlocks_6;
	// System.Single Challenges.ChallengeSequence::_trueWeight
	float ____trueWeight_7;
	// System.Single Challenges.ChallengeSequence::_convertedWeight
	float ____convertedWeight_8;
	// UnityEngine.UI.InputField Challenges.ChallengeSequence::_answerInputValue
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ____answerInputValue_9;
	// UnityEngine.UI.Dropdown Challenges.ChallengeSequence::_answerInputUnit
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ____answerInputUnit_10;
	// UnityEngine.GameObject Challenges.ChallengeSequence::_confirmAnswerButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____confirmAnswerButton_11;
	// UnityEngine.UI.Text Challenges.ChallengeSequence::_answerCorrectionFeedback
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____answerCorrectionFeedback_12;
};

// Challenges.Challenge_1
struct Challenge_1_tFA63A292DB82E298B96723D20F7CDCD0E4E8901C  : public Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87
{
	// UnityEngine.GameObject Challenges.Challenge_1::_nextChallengeButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____nextChallengeButton_4;
	// System.Int32 Challenges.Challenge_1::_desiredHook
	int32_t ____desiredHook_5;
	// System.Int32 Challenges.Challenge_1::_numberOfWeightBlocks
	int32_t ____numberOfWeightBlocks_6;
	// System.Single Challenges.Challenge_1::_trueWeight
	float ____trueWeight_7;
	// System.Single Challenges.Challenge_1::_convertedWeight
	float ____convertedWeight_8;
	// UnityEngine.UI.InputField Challenges.Challenge_1::_answerInputValue
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ____answerInputValue_9;
	// UnityEngine.UI.Dropdown Challenges.Challenge_1::_answerInputUnit
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ____answerInputUnit_10;
	// UnityEngine.GameObject Challenges.Challenge_1::_confirmAnswerButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____confirmAnswerButton_11;
	// UnityEngine.UI.Text Challenges.Challenge_1::_answerCorrectionFeedback
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____answerCorrectionFeedback_12;
};

// WeightBlocks.CustomWeightBlock
struct CustomWeightBlock_t5DE9318DEE4D26DF9B97A516A99313D1AB307A39  : public WeightBlockCreator_t5503BC96E118C9715C567EEC8C33A088D0C21040
{
	// UnityEngine.UI.InputField WeightBlocks.CustomWeightBlock::weightField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___weightField_6;
	// UnityEngine.UI.Dropdown WeightBlocks.CustomWeightBlock::weightUnit
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___weightUnit_7;
	// System.Int32 WeightBlocks.CustomWeightBlock::prefabIndex
	int32_t ___prefabIndex_8;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// WeightBlocks.PremadeWeightBlock
struct PremadeWeightBlock_tF0E611B182B04B04F0A6C18A8E335A6709AC7B30  : public WeightBlockCreator_t5503BC96E118C9715C567EEC8C33A088D0C21040
{
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

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// WeightBlockChallenge_2
struct WeightBlockChallenge_2_tD239437EB5EAA96906A45071D3A5B25DEEA7F946  : public WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5
{
	// UnityEngine.GameObject WeightBlockChallenge_2::_blockObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____blockObject_20;
	// UnityEngine.GameObject WeightBlockChallenge_2::_balloonObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____balloonObject_21;
	// System.Single WeightBlockChallenge_2::_shapeshiftMinimumPositionY
	float ____shapeshiftMinimumPositionY_22;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_32;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_33;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_34;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_36;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_38;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_39;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_41;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_42;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_45;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_46;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_47;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_48;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_49;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_50;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_51;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_52;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_53;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_54;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_55;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_59;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_62;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_63;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_64;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_65;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_66;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_67;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_68;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_70;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Challenges.Challenge[]
struct ChallengeU5BU5D_tBE5FA42E6444FE5F42E06825679AAAA7019B08D7  : public RuntimeArray
{
	ALIGN_FIELD (8) Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87* m_Items[1];

	inline Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Balance.Hook[]
struct HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B  : public RuntimeArray
{
	ALIGN_FIELD (8) Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* m_Items[1];

	inline Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
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


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Void WeightBlocks.WeightBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock__ctor_m91903CF43289EE06F846C0A1800A47CE37FE3E4B (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// Common.Controllers.GameController Common.Controllers.GameController::get_Singleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline (const RuntimeMethod* method) ;
// System.Void Common.Controllers.GameController::PlayClickSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PlayClickSound_m42A545C88300B4E658658AE3739E7742EED94B0B (GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<WeightBlocks.WeightBlock>()
inline WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* GameObject_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0334E04DB891548DCA8AB91659DD1EEF74968E0A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<WeightBlocks.WeightBlock>::Add(T)
inline void List_1_Add_mCCD7D323DB48BDCCB3E8A8A0A62DE7F073B8A0B6_inline (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* __this, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001*, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void WeightBlocks.WeightBlock::SetBlock(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_SetBlock_mA49A6AD7C91E23752930D16DA085ED0AE6E10003 (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, float ___weightValue0, int32_t ___unitValue1, const RuntimeMethod* method) ;
// System.Void WeightBlocks.WeightBlock::Deselect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_Deselect_m83011123DB763ADEB690D34E5045DDDFCB4AA47D (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Common.Controllers.BlockController::CreateDefaultBlock(System.Single,System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockController_CreateDefaultBlock_m4F4F2345011B0F471ADE41CAF6B54713C0A29061 (BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* __this, float ___weightValue0, int32_t ___unitValue1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___weightBlockPosition2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<WeightBlocks.WeightBlock>::Remove(T)
inline bool List_1_Remove_m30760684F56603A4A3A87F6FC240849A9BF766B3 (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* __this, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001*, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<WeightBlocks.WeightBlock>::get_Item(System.Int32)
inline WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* List_1_get_Item_m69ED3E6C2B47B44DE1568155A51425B53568E050 (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* (*) (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void WeightBlocks.WeightBlock::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_Destroy_mA38EFB25F77E9C2F2487F5C83EE79C9ABA98408E (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<WeightBlocks.WeightBlock>::get_Count()
inline int32_t List_1_get_Count_m0D19CF19E639DEB60CB0526CFEDC66021F61BDC3_inline (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<WeightBlocks.WeightBlock>::.ctor()
inline void List_1__ctor_m70A5DA25BD7EF11E34213716A9D67DC95858DA04 (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Common.Controllers.GameController::set_Singleton(Common.Controllers.GameController)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameController_set_Singleton_mB4D1BE2DFD24F275A355BE9F66F8E8ECDAED5F32_inline (GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Common.Controllers.BlockController::ResetWeightBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockController_ResetWeightBlocks_m4C4389811F8129C2B4840FDDC466CA7D241FFCB5 (BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* __this, const RuntimeMethod* method) ;
// System.Void Common.Controllers.LevelController::StartChallenge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelController_StartChallenge_m1A8E4CCCE699F0FE1AA1F9ECD57FF0CD6B338F86 (LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* __this, int32_t ___challengeId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void Common.Controllers.JoystickController/JoystickState::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickState__ctor_m5F53048BF9C9147E28E87BFCFE8B687BAD47C728 (JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Common.Controllers.JoystickController/JoystickState::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631_inline (JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::SetCursor(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.CursorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_SetCursor_m04453993587B6E24034859C1B4FF36423BC493EE (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___texture0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___hotspot1, int32_t ___cursorMode2, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<WeightBlocks.WeightBlock>()
inline WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* Component_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0B3F0890A541814147F62AEAD00D740D8AF246FE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void WeightBlocks.WeightBlock::Select()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_Select_m8E53E772E580C5AD76549FC71AD89945CFFE3D20 (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// WeightBlocks.WeightBlock Common.Controllers.BlockController::get_SelectedWeightBlock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* BlockController_get_SelectedWeightBlock_mD145EE1DC9E39FCA2D7D55AFF248897406D9A7D6_inline (const RuntimeMethod* method) ;
// System.Void WeightBlocks.WeightBlock::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_Move_m0CBEDCE4F4DF7588F482C8762EC2BE42517ABE47 (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___desiredPosition0, const RuntimeMethod* method) ;
// System.Void Common.Controllers.LevelController::SetChallenges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelController_SetChallenges_m092A4DADCA7C9707572561ED9990F8811AD1203D (LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Single Utility.WeightUnitConverter::TrueWeight(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WeightUnitConverter_TrueWeight_mF1171485818132BC79D454DFE02A7A20B4D2B6F3 (float ___weight0, int32_t ___unit1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Balance.Hook[] Balance.MainBalance::GetHooks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* MainBalance_GetHooks_m45D4CAFE761461733251C20E6E822B28F9D7F379_inline (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Common.Controllers.BlockController::CreateChallengeBlock(System.Int32,System.Single,System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockController_CreateChallengeBlock_m9A12AA9F364FF483D647359D0DF0664964B8F1E4 (BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* __this, int32_t ___randomWeight0, float ___weightValue1, int32_t ___weightUnit2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___weightBlockPosition3, const RuntimeMethod* method) ;
// System.Single Balance.MainBalance::GetTotalWeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MainBalance_GetTotalWeight_m2A0ACA7AD3C5A91ECBF98522EA40E31EAB455FD9_inline (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void Challenges.Challenge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Challenge__ctor_m279391907EB4CCD636876E377D7DE9A9BF6F28F8 (Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_useGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m6140FC91F32547F11C687FA1A002850598B74A0D (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Balance.BallancePlateLEGACY>()
inline BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535* Component_GetComponent_TisBallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535_mCC3C74510A9DD2627B68D58D17CAD4C9DD890E5D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Balance.BallancePlateLEGACY::remPeso(Assets.Technical.Classes.Utility.WeightLEGACY)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallancePlateLEGACY_remPeso_m8480CB375B0E1EB3405AADFFA5DE6581BC60255A (BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535* __this, WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F* ___weight0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE2B4DD419E8995D4086EA47457A6C36435A67F49 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method) ;
// System.Void Balance.BallancePlateLEGACY::addPeso(Assets.Technical.Classes.Utility.WeightLEGACY)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallancePlateLEGACY_addPeso_m28C18903ACCD27041D2CACE043A559ED3205E89F (BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535* __this, WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F* ___weight0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void WeightBlocks.WeightBlockCreator::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlockCreator_OnPointerDown_m5BCDBA5FAF850A4BBF9DF0A217850DFE98227B75 (WeightBlockCreator_t5503BC96E118C9715C567EEC8C33A088D0C21040* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void WeightBlocks.WeightBlockCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlockCreator__ctor_m44C17325E07A6AD16C3A6A4785F8FA03A0DCF6B9 (WeightBlockCreator_t5503BC96E118C9715C567EEC8C33A088D0C21040* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void WeightBlocks.WeightBlock::set_Mass(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WeightBlock_set_Mass_mC05C659B1080B745553399C1E332CA2B9817712D_inline (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single WeightBlocks.WeightBlock::get_Mass()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WeightBlock_get_Mass_m2102C2802E3A322682EC42ED2C33FB182BA15C81_inline (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) ;
// System.Void Common.Controllers.BlockController::set_SelectedWeightBlock(WeightBlocks.WeightBlock)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockController_set_SelectedWeightBlock_m12ECA4AD9DBE40A1A75AEC71BF05C456589B9698_inline (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Collision::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Balance.Hook>()
inline Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* Component_GetComponent_TisHook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A_m8968314DE2A337EA2C69F94EC59B121326EA2BE0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Balance.Hook Balance.Hook::UnhookWeightBlock(WeightBlocks.WeightBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* Hook_UnhookWeightBlock_m069D376497A93E1DA3F96D4F7DE763266C92ED86 (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* __this, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___weightBlock0, const RuntimeMethod* method) ;
// Balance.Hook Balance.MainBalance::CheckHookCollision(WeightBlocks.WeightBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* MainBalance_CheckHookCollision_m93089C4DCC381BDC56A406258FEEEF0C582D30BE (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___weightBlock0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Common.Controllers.BlockController::RemoveWeightBlockReferenceFromGame(WeightBlocks.WeightBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockController_RemoveWeightBlockReferenceFromGame_m9FD2ECF9E8D6F403808432A38C517DBD03BBE665 (BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* __this, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___weightBlock0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4 (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128 (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* __this, int32_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9*, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void Balance.MainBalance::RemoveWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance_RemoveWeight_m32B1B800C2F840C8BBD07972B6AA431DC84702DB (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, float ___weightValue0, const RuntimeMethod* method) ;
// System.Void Balance.Hook::UpdateWeightBlocksRotationInHook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hook_UpdateWeightBlocksRotationInHook_mC7BF729804456FE52EAD006C4281D7904D4E1977 (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* __this, const RuntimeMethod* method) ;
// System.Void Balance.MainBalance::AddWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance_AddWeight_m67C0C05E177D98FA4810A734E1500EA620F3B704 (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, float ___weightValue0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<WeightBlocks.WeightBlock>::GetEnumerator()
inline Enumerator_tF1876FE773CC8FFA86A74835913CDCAE07C20E2A List_1_GetEnumerator_mB14C5C73EAE3A79C4A9401FB85741FEC03A89E4A (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF1876FE773CC8FFA86A74835913CDCAE07C20E2A (*) (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<WeightBlocks.WeightBlock>::Dispose()
inline void Enumerator_Dispose_m820E95922AE57E9B6BA62B7640269205642D0C7F (Enumerator_tF1876FE773CC8FFA86A74835913CDCAE07C20E2A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF1876FE773CC8FFA86A74835913CDCAE07C20E2A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<WeightBlocks.WeightBlock>::get_Current()
inline WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* Enumerator_get_Current_mDEC9555BCB29C5F76211BC468E35ED0BCC7AD0F2_inline (Enumerator_tF1876FE773CC8FFA86A74835913CDCAE07C20E2A* __this, const RuntimeMethod* method)
{
	return ((  WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* (*) (Enumerator_tF1876FE773CC8FFA86A74835913CDCAE07C20E2A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<WeightBlocks.WeightBlock>::IndexOf(T)
inline int32_t List_1_IndexOf_m538C9213A28B180E4741BAB46F58F2770824ABFC (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* __this, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001*, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<WeightBlocks.WeightBlock>::MoveNext()
inline bool Enumerator_MoveNext_m21EF7A9C580E7145010FFF666FFC1FDD6F92450F (Enumerator_tF1876FE773CC8FFA86A74835913CDCAE07C20E2A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF1876FE773CC8FFA86A74835913CDCAE07C20E2A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Balance.MainBalance::RecalculateTotalWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance_RecalculateTotalWeight_m3F387D2EA9DDCAC54EF9CCD147CF4DC4DBCE3DE6 (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) ;
// System.Void Balance.MainBalance::BalancedState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance_BalancedState_m8CBAE5C49544ACDFF84C30CA23264E0AB96A6232 (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) ;
// System.Void Balance.MainBalance::UnbalancedState(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance_UnbalancedState_mF6A763C2D4B915CF68ACB196916C3A3990D42553 (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, float ___totalWeight0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// Balance.Hook Balance.Hook::HookWeightBlock(WeightBlocks.WeightBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* Hook_HookWeightBlock_mC0F687C4E852506631A8D8559B39ECFB5EE8A549 (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* __this, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___weightBlock0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void WeightBlockChallenge_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlockChallenge_2__ctor_m06C67B0E61D76DF768144C7409A5E77FAE350E55 (WeightBlockChallenge_2_tD239437EB5EAA96906A45071D3A5B25DEEA7F946* __this, const RuntimeMethod* method) 
{
	{
		WeightBlock__ctor_m91903CF43289EE06F846C0A1800A47CE37FE3E4B(__this, NULL);
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
// System.Single Utility.WeightUnitConverter::TrueWeight(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WeightUnitConverter_TrueWeight_mF1171485818132BC79D454DFE02A7A20B4D2B6F3 (float ___weight0, int32_t ___unit1, const RuntimeMethod* method) 
{
	{
		// return weight * Mathf.Pow(10, 3 - unit);
		float L_0 = ___weight0;
		int32_t L_1 = ___unit1;
		float L_2;
		L_2 = powf((10.0f), ((float)((int32_t)il2cpp_codegen_subtract(3, L_1))));
		return ((float)il2cpp_codegen_multiply(L_0, L_2));
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
// System.Void HUD.HoverScaleText::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoverScaleText_OnPointerEnter_m2F8B797DCC34EBB53A30EEAB2FDB2A88F591F7BE (HoverScaleText_t615179AC5594CC1AB07FBA42EE8E20BE35978B58* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// _textToScale.transform.localScale = Vector3.one * 1.1f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____textToScale_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, (1.10000002f), NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void HUD.HoverScaleText::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoverScaleText_OnPointerExit_m3D301FEBCDE857C54115456784CD37546139BD3B (HoverScaleText_t615179AC5594CC1AB07FBA42EE8E20BE35978B58* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// _textToScale.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____textToScale_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void HUD.HoverScaleText::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoverScaleText_OnPointerClick_m2083C4D6A28C97DC9B32E862EDB4CA2401B5C1D4 (HoverScaleText_t615179AC5594CC1AB07FBA42EE8E20BE35978B58* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// _textToScale.transform.localScale = Vector3.one * 0.9f;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____textToScale_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, (0.899999976f), NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void HUD.HoverScaleText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoverScaleText__ctor_m9DF677D139CFBFA0C731CB0CB3807ADC07B1EA65 (HoverScaleText_t615179AC5594CC1AB07FBA42EE8E20BE35978B58* __this, const RuntimeMethod* method) 
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
// WeightBlocks.WeightBlock Common.Controllers.BlockController::get_SelectedWeightBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* BlockController_get_SelectedWeightBlock_mD145EE1DC9E39FCA2D7D55AFF248897406D9A7D6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WeightBlock SelectedWeightBlock { get; set; } = null;
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_0 = ((BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_StaticFields*)il2cpp_codegen_static_fields_for(BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_il2cpp_TypeInfo_var))->___U3CSelectedWeightBlockU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Common.Controllers.BlockController::set_SelectedWeightBlock(WeightBlocks.WeightBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockController_set_SelectedWeightBlock_m12ECA4AD9DBE40A1A75AEC71BF05C456589B9698 (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WeightBlock SelectedWeightBlock { get; set; } = null;
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_0 = ___value0;
		((BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_StaticFields*)il2cpp_codegen_static_fields_for(BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_il2cpp_TypeInfo_var))->___U3CSelectedWeightBlockU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_StaticFields*)il2cpp_codegen_static_fields_for(BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_il2cpp_TypeInfo_var))->___U3CSelectedWeightBlockU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Common.Controllers.BlockController::CreateDefaultBlock(System.Single,System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockController_CreateDefaultBlock_m4F4F2345011B0F471ADE41CAF6B54713C0A29061 (BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* __this, float ___weightValue0, int32_t ___unitValue1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___weightBlockPosition2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0334E04DB891548DCA8AB91659DD1EEF74968E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCCD7D323DB48BDCCB3E8A8A0A62DE7F073B8A0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* V_1 = NULL;
	{
		// GameController.Singleton.PlayClickSound();
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_0;
		L_0 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_0);
		GameController_PlayClickSound_m42A545C88300B4E658658AE3739E7742EED94B0B(L_0, NULL);
		// weightBlockPosition.z = 2.148f;
		(&___weightBlockPosition2)->___z_4 = (2.148f);
		// var weightBlockPrefabIndex = 0;
		V_0 = 0;
		// if (weightValue > 0)
		float L_1 = ___weightValue0;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		// if (weightValue <= 1)
		float L_2 = ___weightValue0;
		if ((!(((float)L_2) <= ((float)(1.0f)))))
		{
			goto IL_002c;
		}
	}
	{
		// weightBlockPrefabIndex = 0;
		V_0 = 0;
		goto IL_003b;
	}

IL_002c:
	{
		// weightBlockPrefabIndex = Mathf.Min(3, (int)weightValue - 1);
		float L_3 = ___weightValue0;
		int32_t L_4;
		L_4 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(3, ((int32_t)il2cpp_codegen_subtract(il2cpp_codegen_cast_double_to_int<int32_t>(L_3), 1)), NULL);
		V_0 = L_4;
		goto IL_003b;
	}

IL_0039:
	{
		// weightBlockPrefabIndex = 4;
		V_0 = 4;
	}

IL_003b:
	{
		// WeightBlock newWeightBlock = Instantiate(_weightBlockPrefab[weightBlockPrefabIndex], weightBlockPosition, Quaternion.Euler(-6.378f, 0, 0)).GetComponent<WeightBlock>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->____weightBlockPrefab_6;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___weightBlockPosition2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-6.37799978f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_8, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_11);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_12;
		L_12 = GameObject_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0334E04DB891548DCA8AB91659DD1EEF74968E0A(L_11, GameObject_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0334E04DB891548DCA8AB91659DD1EEF74968E0A_RuntimeMethod_var);
		V_1 = L_12;
		// _blocks.Add(newWeightBlock);
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_13 = __this->____blocks_4;
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_mCCD7D323DB48BDCCB3E8A8A0A62DE7F073B8A0B6_inline(L_13, L_14, List_1_Add_mCCD7D323DB48BDCCB3E8A8A0A62DE7F073B8A0B6_RuntimeMethod_var);
		// newWeightBlock.SetBlock(weightValue, unitValue);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_15 = V_1;
		float L_16 = ___weightValue0;
		int32_t L_17 = ___unitValue1;
		NullCheck(L_15);
		WeightBlock_SetBlock_mA49A6AD7C91E23752930D16DA085ED0AE6E10003(L_15, L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void Common.Controllers.BlockController::CreateChallengeBlock(System.Int32,System.Single,System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockController_CreateChallengeBlock_m9A12AA9F364FF483D647359D0DF0664964B8F1E4 (BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* __this, int32_t ___randomWeight0, float ___weightValue1, int32_t ___weightUnit2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___weightBlockPosition3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0334E04DB891548DCA8AB91659DD1EEF74968E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCCD7D323DB48BDCCB3E8A8A0A62DE7F073B8A0B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* V_0 = NULL;
	{
		// weightBlockPosition.z = 2.148f;
		(&___weightBlockPosition3)->___z_4 = (2.148f);
		// if (randomWeight < 0)
		int32_t L_0 = ___randomWeight0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		// newWeightBlock = Instantiate(_weightBlockPrefab[6], weightBlockPosition, Quaternion.Euler(-6.378f, 0, 0)).GetComponent<WeightBlock>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->____weightBlockPrefab_6;
		NullCheck(L_1);
		int32_t L_2 = 6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___weightBlockPosition3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-6.37799978f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_6);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_7;
		L_7 = GameObject_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0334E04DB891548DCA8AB91659DD1EEF74968E0A(L_6, GameObject_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0334E04DB891548DCA8AB91659DD1EEF74968E0A_RuntimeMethod_var);
		V_0 = L_7;
		goto IL_0064;
	}

IL_003b:
	{
		// newWeightBlock = Instantiate(_weightBlockPrefab[5], weightBlockPosition, Quaternion.Euler(-6.378f, 0, 0)).GetComponent<WeightBlock>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->____weightBlockPrefab_6;
		NullCheck(L_8);
		int32_t L_9 = 5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___weightBlockPosition3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-6.37799978f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_10, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		NullCheck(L_13);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_14;
		L_14 = GameObject_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0334E04DB891548DCA8AB91659DD1EEF74968E0A(L_13, GameObject_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0334E04DB891548DCA8AB91659DD1EEF74968E0A_RuntimeMethod_var);
		V_0 = L_14;
	}

IL_0064:
	{
		// _blocks.Add(newWeightBlock);
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_15 = __this->____blocks_4;
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_16 = V_0;
		NullCheck(L_15);
		List_1_Add_mCCD7D323DB48BDCCB3E8A8A0A62DE7F073B8A0B6_inline(L_15, L_16, List_1_Add_mCCD7D323DB48BDCCB3E8A8A0A62DE7F073B8A0B6_RuntimeMethod_var);
		// newWeightBlock.SetBlock(weightValue, weightUnit);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_17 = V_0;
		float L_18 = ___weightValue1;
		int32_t L_19 = ___weightUnit2;
		NullCheck(L_17);
		WeightBlock_SetBlock_mA49A6AD7C91E23752930D16DA085ED0AE6E10003(L_17, L_18, L_19, NULL);
		// newWeightBlock.Deselect();
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_20 = V_0;
		NullCheck(L_20);
		WeightBlock_Deselect_m83011123DB763ADEB690D34E5045DDDFCB4AA47D(L_20, NULL);
		// }
		return;
	}
}
// System.Void Common.Controllers.BlockController::CreateBlockKit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockController_CreateBlockKit_mF288BC6D6665A95B82E7ECDAEFFFE2B3E6EBD20A (BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// GameController.Singleton.PlayClickSound();
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_0;
		L_0 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_0);
		GameController_PlayClickSound_m42A545C88300B4E658658AE3739E7742EED94B0B(L_0, NULL);
		// for (int i = 0; i < 16; i++)
		V_0 = 0;
		goto IL_00a5;
	}

IL_0011:
	{
		// if (i < 4)
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)4)))
		{
			goto IL_0035;
		}
	}
	{
		// CreateDefaultBlock(1, 0, _weightBlockKitInitialPositions[i].transform.position);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->____weightBlockKitInitialPositions_7;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		BlockController_CreateDefaultBlock_m4F4F2345011B0F471ADE41CAF6B54713C0A29061(__this, (1.0f), 0, L_7, NULL);
		goto IL_00a1;
	}

IL_0035:
	{
		// else if (i < 8)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)8)))
		{
			goto IL_0059;
		}
	}
	{
		// CreateDefaultBlock(2, 0, _weightBlockKitInitialPositions[i].transform.position);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->____weightBlockKitInitialPositions_7;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		BlockController_CreateDefaultBlock_m4F4F2345011B0F471ADE41CAF6B54713C0A29061(__this, (2.0f), 0, L_14, NULL);
		goto IL_00a1;
	}

IL_0059:
	{
		// else if (i < 12)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)12))))
		{
			goto IL_007e;
		}
	}
	{
		// CreateDefaultBlock(3, 0, _weightBlockKitInitialPositions[i].transform.position);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->____weightBlockKitInitialPositions_7;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		BlockController_CreateDefaultBlock_m4F4F2345011B0F471ADE41CAF6B54713C0A29061(__this, (3.0f), 0, L_21, NULL);
		goto IL_00a1;
	}

IL_007e:
	{
		// else if (i < 16)
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)16))))
		{
			goto IL_00a1;
		}
	}
	{
		// CreateDefaultBlock(4, 0, _weightBlockKitInitialPositions[i].transform.position);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = __this->____weightBlockKitInitialPositions_7;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		BlockController_CreateDefaultBlock_m4F4F2345011B0F471ADE41CAF6B54713C0A29061(__this, (4.0f), 0, L_28, NULL);
	}

IL_00a1:
	{
		// for (int i = 0; i < 16; i++)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00a5:
	{
		// for (int i = 0; i < 16; i++)
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)16))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Common.Controllers.BlockController::RemoveWeightBlockReferenceFromGame(WeightBlocks.WeightBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockController_RemoveWeightBlockReferenceFromGame_m9FD2ECF9E8D6F403808432A38C517DBD03BBE665 (BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* __this, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___weightBlock0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m30760684F56603A4A3A87F6FC240849A9BF766B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _blocks.Remove(weightBlock);
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_0 = __this->____blocks_4;
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_1 = ___weightBlock0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m30760684F56603A4A3A87F6FC240849A9BF766B3(L_0, L_1, List_1_Remove_m30760684F56603A4A3A87F6FC240849A9BF766B3_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Common.Controllers.BlockController::ResetWeightBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockController_ResetWeightBlocks_m4C4389811F8129C2B4840FDDC466CA7D241FFCB5 (BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0D19CF19E639DEB60CB0526CFEDC66021F61BDC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69ED3E6C2B47B44DE1568155A51425B53568E050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0013;
	}

IL_0002:
	{
		// _blocks[0].Destroy();
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_0 = __this->____blocks_4;
		NullCheck(L_0);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_1;
		L_1 = List_1_get_Item_m69ED3E6C2B47B44DE1568155A51425B53568E050(L_0, 0, List_1_get_Item_m69ED3E6C2B47B44DE1568155A51425B53568E050_RuntimeMethod_var);
		NullCheck(L_1);
		WeightBlock_Destroy_mA38EFB25F77E9C2F2487F5C83EE79C9ABA98408E(L_1, NULL);
	}

IL_0013:
	{
		// while (_blocks.Count > 0)
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_2 = __this->____blocks_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m0D19CF19E639DEB60CB0526CFEDC66021F61BDC3_inline(L_2, List_1_get_Count_m0D19CF19E639DEB60CB0526CFEDC66021F61BDC3_RuntimeMethod_var);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Common.Controllers.BlockController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlockController__ctor_m4923D1F71035A9BE5C9873C23F4B6D8BF6BF428E (BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m70A5DA25BD7EF11E34213716A9D67DC95858DA04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<WeightBlock> _blocks = new List<WeightBlock>();
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_0 = (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001*)il2cpp_codegen_object_new(List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m70A5DA25BD7EF11E34213716A9D67DC95858DA04(L_0, List_1__ctor_m70A5DA25BD7EF11E34213716A9D67DC95858DA04_RuntimeMethod_var);
		__this->____blocks_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____blocks_4), (void*)L_0);
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
// Common.Controllers.GameController Common.Controllers.GameController::get_Singleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameController Singleton { get; set; }
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_0 = ((GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Common.Controllers.GameController::set_Singleton(Common.Controllers.GameController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_set_Singleton_mB4D1BE2DFD24F275A355BE9F66F8E8ECDAED5F32 (GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameController Singleton { get; set; }
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_0 = ___value0;
		((GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Common.Controllers.GameController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Awake_m8920FF5F7CE822F11E716771E540F9F315800291 (GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Singleton == null)
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_0;
		L_0 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Singleton = this;
		GameController_set_Singleton_mB4D1BE2DFD24F275A355BE9F66F8E8ECDAED5F32_inline(__this, NULL);
		return;
	}

IL_0014:
	{
		// else if (Singleton != this)
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_2;
		L_2 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Common.Controllers.GameController::StartGame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StartGame_m8DC6351180E9FE886A2724741EC15353D356B8B7 (GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* __this, int32_t ___gameModeId0, const RuntimeMethod* method) 
{
	{
		// Menu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Menu_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Game.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Game_9;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// GameController.Singleton.BlockController.ResetWeightBlocks();
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_2;
		L_2 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_2);
		BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* L_3 = L_2->___BlockController_6;
		NullCheck(L_3);
		BlockController_ResetWeightBlocks_m4C4389811F8129C2B4840FDDC466CA7D241FFCB5(L_3, NULL);
		// LevelController.StartChallenge(challengeId: gameModeId);
		LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* L_4 = __this->___LevelController_5;
		int32_t L_5 = ___gameModeId0;
		NullCheck(L_4);
		LevelController_StartChallenge_m1A8E4CCCE699F0FE1AA1F9ECD57FF0CD6B338F86(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Common.Controllers.GameController::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ExitGame_m8A233772422DC5A8A33E2904701B23381D99663E (GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void Common.Controllers.GameController::PlayClickSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PlayClickSound_m42A545C88300B4E658658AE3739E7742EED94B0B (GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* __this, const RuntimeMethod* method) 
{
	{
		// ClickSound.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___ClickSound_10;
		NullCheck(L_0);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// ClickSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___ClickSound_10;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// }
		return;
	}
}
// System.Void Common.Controllers.GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m8678B9200B9460377893FC2964AEBB3A82D038E7 (GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* __this, const RuntimeMethod* method) 
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
// System.Void Common.Controllers.JoystickController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_Start_m6A57F5CF593EB80D9D1A79B586D6171547E8784B (JoystickController_tA559A1D466780F0EC3768437F76DF73DE77F9869* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickController_IdleState_m717DD35C5CE6E7CF743B5FC3D3DBC62922D93B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _actualJoystickState = IdleState;
		JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* L_0 = (JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25*)il2cpp_codegen_object_new(JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JoystickState__ctor_m5F53048BF9C9147E28E87BFCFE8B687BAD47C728(L_0, __this, (intptr_t)((void*)JoystickController_IdleState_m717DD35C5CE6E7CF743B5FC3D3DBC62922D93B6A_RuntimeMethod_var), NULL);
		__this->____actualJoystickState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____actualJoystickState_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Common.Controllers.JoystickController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_Update_mFCF0000C4CBEE307D8BD7E456F806D5287BCD49F (JoystickController_tA559A1D466780F0EC3768437F76DF73DE77F9869* __this, const RuntimeMethod* method) 
{
	{
		// _actualJoystickState();
		JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* L_0 = __this->____actualJoystickState_4;
		NullCheck(L_0);
		JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631_inline(L_0, NULL);
		// }
		return;
	}
}
// System.Void Common.Controllers.JoystickController::IdleState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_IdleState_m717DD35C5CE6E7CF743B5FC3D3DBC62922D93B6A (JoystickController_tA559A1D466780F0EC3768437F76DF73DE77F9869* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0B3F0890A541814147F62AEAD00D740D8AF246FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickController_DragState_m1BF888E295709F1EC7B248D38BC7518A6A7D79EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		if (!L_0)
		{
			goto IL_008d;
		}
	}
	{
		// Cursor.SetCursor(cursorGrabSprite, Vector2.zero, cursorMode);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->___cursorGrabSprite_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		int32_t L_3 = __this->___cursorMode_9;
		Cursor_SetCursor_m04453993587B6E24034859C1B4FF36423BC493EE(L_1, L_2, L_3, NULL);
		// ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_4);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6;
		L_6 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_4, L_5, NULL);
		__this->___ray_5 = L_6;
		// if (Physics.Raycast(ray, out hit, 20))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7 = __this->___ray_5;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_8 = (&__this->___hit_6);
		bool L_9;
		L_9 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_7, L_8, (20.0f), NULL);
		if (!L_9)
		{
			goto IL_008d;
		}
	}
	{
		// if (hit.transform.gameObject.layer == 8)
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_10 = (&__this->___hit_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_10, NULL);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_12, NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)8))))
		{
			goto IL_008d;
		}
	}
	{
		// hit.transform.GetComponent<WeightBlock>().Select();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_14 = (&__this->___hit_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_14, NULL);
		NullCheck(L_15);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_16;
		L_16 = Component_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0B3F0890A541814147F62AEAD00D740D8AF246FE(L_15, Component_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0B3F0890A541814147F62AEAD00D740D8AF246FE_RuntimeMethod_var);
		NullCheck(L_16);
		WeightBlock_Select_m8E53E772E580C5AD76549FC71AD89945CFFE3D20(L_16, NULL);
		// _actualJoystickState = DragState;
		JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* L_17 = (JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25*)il2cpp_codegen_object_new(JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		JoystickState__ctor_m5F53048BF9C9147E28E87BFCFE8B687BAD47C728(L_17, __this, (intptr_t)((void*)JoystickController_DragState_m1BF888E295709F1EC7B248D38BC7518A6A7D79EF_RuntimeMethod_var), NULL);
		__this->____actualJoystickState_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____actualJoystickState_4), (void*)L_17);
	}

IL_008d:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_18;
		L_18 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(1, NULL);
		if (!L_18)
		{
			goto IL_00ef;
		}
	}
	{
		// ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19;
		L_19 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_19);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_21;
		L_21 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_19, L_20, NULL);
		__this->___ray_5 = L_21;
		// if (Physics.Raycast(ray, out hit, 20))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_22 = __this->___ray_5;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_23 = (&__this->___hit_6);
		bool L_24;
		L_24 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_22, L_23, (20.0f), NULL);
		if (!L_24)
		{
			goto IL_00ef;
		}
	}
	{
		// if (hit.transform.gameObject.layer == 8)
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_25 = (&__this->___hit_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_25, NULL);
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_27, NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)8))))
		{
			goto IL_00ef;
		}
	}
	{
		// hit.transform.GetComponent<WeightBlock>().Destroy();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_29 = (&__this->___hit_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_29, NULL);
		NullCheck(L_30);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_31;
		L_31 = Component_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0B3F0890A541814147F62AEAD00D740D8AF246FE(L_30, Component_GetComponent_TisWeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5_m0B3F0890A541814147F62AEAD00D740D8AF246FE_RuntimeMethod_var);
		NullCheck(L_31);
		WeightBlock_Destroy_mA38EFB25F77E9C2F2487F5C83EE79C9ABA98408E(L_31, NULL);
	}

IL_00ef:
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_32;
		L_32 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_32)
		{
			goto IL_010d;
		}
	}
	{
		// Cursor.SetCursor(cursorOpenSprite, Vector2.zero, cursorMode);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33 = __this->___cursorOpenSprite_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		int32_t L_35 = __this->___cursorMode_9;
		Cursor_SetCursor_m04453993587B6E24034859C1B4FF36423BC493EE(L_33, L_34, L_35, NULL);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Common.Controllers.JoystickController::DragState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController_DragState_m1BF888E295709F1EC7B248D38BC7518A6A7D79EF (JoystickController_tA559A1D466780F0EC3768437F76DF73DE77F9869* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickController_IdleState_m717DD35C5CE6E7CF743B5FC3D3DBC62922D93B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// BlockController.SelectedWeightBlock.Move(Input.mousePosition);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_1;
		L_1 = BlockController_get_SelectedWeightBlock_mD145EE1DC9E39FCA2D7D55AFF248897406D9A7D6_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_1);
		WeightBlock_Move_m0CBEDCE4F4DF7588F482C8762EC2BE42517ABE47(L_1, L_2, NULL);
	}

IL_0017:
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_3;
		L_3 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		// Cursor.SetCursor(cursorOpenSprite, Vector2.zero, cursorMode);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___cursorOpenSprite_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		int32_t L_6 = __this->___cursorMode_9;
		Cursor_SetCursor_m04453993587B6E24034859C1B4FF36423BC493EE(L_4, L_5, L_6, NULL);
		// BlockController.SelectedWeightBlock.Deselect();
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_7;
		L_7 = BlockController_get_SelectedWeightBlock_mD145EE1DC9E39FCA2D7D55AFF248897406D9A7D6_inline(NULL);
		NullCheck(L_7);
		WeightBlock_Deselect_m83011123DB763ADEB690D34E5045DDDFCB4AA47D(L_7, NULL);
		// _actualJoystickState = IdleState;
		JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* L_8 = (JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25*)il2cpp_codegen_object_new(JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		JoystickState__ctor_m5F53048BF9C9147E28E87BFCFE8B687BAD47C728(L_8, __this, (intptr_t)((void*)JoystickController_IdleState_m717DD35C5CE6E7CF743B5FC3D3DBC62922D93B6A_RuntimeMethod_var), NULL);
		__this->____actualJoystickState_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____actualJoystickState_4), (void*)L_8);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Common.Controllers.JoystickController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickController__ctor_mAADAAC4ECD9914BE5ABAC61F7117D62DBE98D90B (JoystickController_tA559A1D466780F0EC3768437F76DF73DE77F9869* __this, const RuntimeMethod* method) 
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
void JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631_Multicast(JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* currentDelegate = reinterpret_cast<JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631_Open(JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631_OpenStaticInvoker(JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631_ClosedStaticInvoker(JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25 (JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Common.Controllers.JoystickController/JoystickState::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickState__ctor_m5F53048BF9C9147E28E87BFCFE8B687BAD47C728 (JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631_Multicast;
}
// System.Void Common.Controllers.JoystickController/JoystickState::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631 (JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Common.Controllers.JoystickController/JoystickState::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JoystickState_BeginInvoke_m8D31A66F8C35D39747070B2C83630E238A2C0D24 (JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Common.Controllers.JoystickController/JoystickState::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickState_EndInvoke_m35D472198A91BD602E8C8F6ACC54E66AE8919C96 (JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void Common.Controllers.LevelController::SetChallenges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelController_SetChallenges_m092A4DADCA7C9707572561ED9990F8811AD1203D (LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < PlayableChallenges.Length; i++)
		V_0 = 0;
		goto IL_001b;
	}

IL_0004:
	{
		// PlayableChallenges[i].gameObject.SetActive(false);
		ChallengeU5BU5D_tBE5FA42E6444FE5F42E06825679AAAA7019B08D7* L_0 = __this->___PlayableChallenges_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// for (int i = 0; i < PlayableChallenges.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001b:
	{
		// for (int i = 0; i < PlayableChallenges.Length; i++)
		int32_t L_6 = V_0;
		ChallengeU5BU5D_tBE5FA42E6444FE5F42E06825679AAAA7019B08D7* L_7 = __this->___PlayableChallenges_5;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Common.Controllers.LevelController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelController_OnEnable_m44BA83139676D390EA07ECDCB5C124B01E2061AE (LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* __this, const RuntimeMethod* method) 
{
	{
		// SetChallenges();
		LevelController_SetChallenges_m092A4DADCA7C9707572561ED9990F8811AD1203D(__this, NULL);
		// }
		return;
	}
}
// System.Void Common.Controllers.LevelController::StartChallenge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelController_StartChallenge_m1A8E4CCCE699F0FE1AA1F9ECD57FF0CD6B338F86 (LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* __this, int32_t ___challengeId0, const RuntimeMethod* method) 
{
	{
		// if (challengeId != -1)
		int32_t L_0 = ___challengeId0;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0024;
		}
	}
	{
		// PlayableChallenges[challengeId].gameObject.SetActive(true);
		ChallengeU5BU5D_tBE5FA42E6444FE5F42E06825679AAAA7019B08D7* L_1 = __this->___PlayableChallenges_5;
		int32_t L_2 = ___challengeId0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// PlayableChallenges[challengeId].StartChallenge();
		ChallengeU5BU5D_tBE5FA42E6444FE5F42E06825679AAAA7019B08D7* L_6 = __this->___PlayableChallenges_5;
		int32_t L_7 = ___challengeId0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(4 /* System.Void Challenges.Challenge::StartChallenge() */, L_9);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Common.Controllers.LevelController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelController__ctor_m44B4D1C5AD4320A28F4D9A1A3FD2604889C08CDB (LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* __this, const RuntimeMethod* method) 
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
// System.Void Challenges.Challenge::StartChallenge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Challenge_StartChallenge_m969EF0BE46191B19D5CBE72E09A9BF8980A86845 (Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void StartChallenge() { }
		return;
	}
}
// System.Void Challenges.Challenge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Challenge__ctor_m279391907EB4CCD636876E377D7DE9A9BF6F28F8 (Challenge_t0448CDA92CC4C66891719B9B58C1AFEE633E6E87* __this, const RuntimeMethod* method) 
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
// System.Void Challenges.ChallengeSequence::StartChallenge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChallengeSequence_StartChallenge_m616A3108FE89DD094F094C32572C9F163439B128 (ChallengeSequence_tBFA81EAEA62F450F410E732B51E3699883F41CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FAD0955501342E2B4CC98C452288A3927477593);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// _confirmAnswerButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____confirmAnswerButton_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// _nextChallengeButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____nextChallengeButton_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// GameController.Singleton.BlockController.ResetWeightBlocks();
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_2;
		L_2 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_2);
		BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* L_3 = L_2->___BlockController_6;
		NullCheck(L_3);
		BlockController_ResetWeightBlocks_m4C4389811F8129C2B4840FDDC466CA7D241FFCB5(L_3, NULL);
		// _numberOfWeightBlocks = Random.Range(1, 4);
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		__this->____numberOfWeightBlocks_6 = L_4;
		// int randomWeight = Random.Range(-1, 1);
		int32_t L_5;
		L_5 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 1, NULL);
		V_0 = L_5;
	}

IL_003c:
	{
		// _convertedWeight = Random.Range(-100, 100);
		int32_t L_6;
		L_6 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)-100), ((int32_t)100), NULL);
		__this->____convertedWeight_8 = ((float)L_6);
		// _convertedWeight /= 10;
		float L_7 = __this->____convertedWeight_8;
		__this->____convertedWeight_8 = ((float)(L_7/(10.0f)));
		// } while (_convertedWeight == 0);
		float L_8 = __this->____convertedWeight_8;
		if ((((float)L_8) == ((float)(0.0f))))
		{
			goto IL_003c;
		}
	}
	{
		// _trueWeight = WeightUnitConverter.TrueWeight(_convertedWeight, 0);
		float L_9 = __this->____convertedWeight_8;
		float L_10;
		L_10 = WeightUnitConverter_TrueWeight_mF1171485818132BC79D454DFE02A7A20B4D2B6F3(L_9, 0, NULL);
		__this->____trueWeight_7 = L_10;
		// _answerInputValue.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_11 = __this->____answerInputValue_9;
		NullCheck(L_11);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// _answerCorrectionFeedback.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->____answerCorrectionFeedback_12;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// for (int i = 0; i < _numberOfWeightBlocks; i++)
		V_1 = 0;
		goto IL_0102;
	}

IL_00a1:
	{
		// if (randomWeight < 0)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		// _desiredHook = Random.Range(8, 16);
		int32_t L_14;
		L_14 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(8, ((int32_t)16), NULL);
		__this->____desiredHook_5 = L_14;
		goto IL_00c2;
	}

IL_00b5:
	{
		// _desiredHook = Random.Range(0, 8);
		int32_t L_15;
		L_15 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 8, NULL);
		__this->____desiredHook_5 = L_15;
	}

IL_00c2:
	{
		// GameController.Singleton.BlockController.CreateChallengeBlock(randomWeight, _convertedWeight, 0, GameController.Singleton.LevelController.MainBalance.GetHooks()[_desiredHook].transform.position);
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_16;
		L_16 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_16);
		BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* L_17 = L_16->___BlockController_6;
		int32_t L_18 = V_0;
		float L_19 = __this->____convertedWeight_8;
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_20;
		L_20 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_20);
		LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* L_21 = L_20->___LevelController_5;
		NullCheck(L_21);
		MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* L_22 = L_21->___MainBalance_4;
		NullCheck(L_22);
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_23;
		L_23 = MainBalance_GetHooks_m45D4CAFE761461733251C20E6E822B28F9D7F379_inline(L_22, NULL);
		int32_t L_24 = __this->____desiredHook_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		NullCheck(L_17);
		BlockController_CreateChallengeBlock_m9A12AA9F364FF483D647359D0DF0664964B8F1E4(L_17, L_18, L_19, 0, L_28, NULL);
		// for (int i = 0; i < _numberOfWeightBlocks; i++)
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0102:
	{
		// for (int i = 0; i < _numberOfWeightBlocks; i++)
		int32_t L_30 = V_1;
		int32_t L_31 = __this->____numberOfWeightBlocks_6;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_00a1;
		}
	}
	{
		// if (GameController.Singleton.LevelController.MainBalance.GetTotalWeight() == 0)
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_32;
		L_32 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_32);
		LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* L_33 = L_32->___LevelController_5;
		NullCheck(L_33);
		MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* L_34 = L_33->___MainBalance_4;
		NullCheck(L_34);
		float L_35;
		L_35 = MainBalance_GetTotalWeight_m2A0ACA7AD3C5A91ECBF98522EA40E31EAB455FD9_inline(L_34, NULL);
		if ((!(((float)L_35) == ((float)(0.0f)))))
		{
			goto IL_0162;
		}
	}
	{
		// GameController.Singleton.BlockController.CreateChallengeBlock(randomWeight, _convertedWeight, 0, GameController.Singleton.LevelController.MainBalance.GetHooks()[_desiredHook].transform.position);
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_36;
		L_36 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_36);
		BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* L_37 = L_36->___BlockController_6;
		int32_t L_38 = V_0;
		float L_39 = __this->____convertedWeight_8;
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_40;
		L_40 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_40);
		LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* L_41 = L_40->___LevelController_5;
		NullCheck(L_41);
		MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* L_42 = L_41->___MainBalance_4;
		NullCheck(L_42);
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_43;
		L_43 = MainBalance_GetHooks_m45D4CAFE761461733251C20E6E822B28F9D7F379_inline(L_42, NULL);
		int32_t L_44 = __this->____desiredHook_5;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_47, NULL);
		NullCheck(L_37);
		BlockController_CreateChallengeBlock_m9A12AA9F364FF483D647359D0DF0664964B8F1E4(L_37, L_38, L_39, 0, L_48, NULL);
	}

IL_0162:
	{
		// Debug.Log("True Weight: " + _trueWeight);
		float* L_49 = (&__this->____trueWeight_7);
		String_t* L_50;
		L_50 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_49, NULL);
		String_t* L_51;
		L_51 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7FAD0955501342E2B4CC98C452288A3927477593, L_50, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_51, NULL);
		// }
		return;
	}
}
// System.Void Challenges.ChallengeSequence::CheckAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChallengeSequence_CheckAnswer_m0B9994BEF7763A9FBD85E3F4330434337EE7C6CA (ChallengeSequence_tBFA81EAEA62F450F410E732B51E3699883F41CEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673F1ED543EAAC79A58724482A319C28C36D9AB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEC1D34694A980D82C6E470271B5697C52635BD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_answerInputValue.text != "")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->____answerInputValue_9;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_2)
		{
			goto IL_0078;
		}
	}
	{
		// float answer = WeightUnitConverter.TrueWeight(float.Parse(_answerInputValue.text), _answerInputUnit.value);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->____answerInputValue_9;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		float L_5;
		L_5 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_4, NULL);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->____answerInputUnit_10;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_6, NULL);
		float L_8;
		L_8 = WeightUnitConverter_TrueWeight_mF1171485818132BC79D454DFE02A7A20B4D2B6F3(L_5, L_7, NULL);
		// if (answer == _trueWeight)
		float L_9 = __this->____trueWeight_7;
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0068;
		}
	}
	{
		// _answerCorrectionFeedback.text = "Correto !";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->____answerCorrectionFeedback_12;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral673F1ED543EAAC79A58724482A319C28C36D9AB6);
		// _confirmAnswerButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->____confirmAnswerButton_11;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// _nextChallengeButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____nextChallengeButton_4;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		return;
	}

IL_0068:
	{
		// _answerCorrectionFeedback.text = "Incorreto !";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->____answerCorrectionFeedback_12;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteralBEC1D34694A980D82C6E470271B5697C52635BD0);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Challenges.ChallengeSequence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChallengeSequence__ctor_mD0DE02BBE1282186C9961AFA3F07B9654C450FAE (ChallengeSequence_tBFA81EAEA62F450F410E732B51E3699883F41CEB* __this, const RuntimeMethod* method) 
{
	{
		Challenge__ctor_m279391907EB4CCD636876E377D7DE9A9BF6F28F8(__this, NULL);
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
// System.Void Challenges.Challenge_1::StartChallenge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Challenge_1_StartChallenge_mA80F65DF61F8EEDF7953633CD41720717BF11AD6 (Challenge_1_tFA63A292DB82E298B96723D20F7CDCD0E4E8901C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FAD0955501342E2B4CC98C452288A3927477593);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// _confirmAnswerButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____confirmAnswerButton_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// _nextChallengeButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____nextChallengeButton_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// GameController.Singleton.BlockController.ResetWeightBlocks();
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_2;
		L_2 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_2);
		BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* L_3 = L_2->___BlockController_6;
		NullCheck(L_3);
		BlockController_ResetWeightBlocks_m4C4389811F8129C2B4840FDDC466CA7D241FFCB5(L_3, NULL);
		// _numberOfWeightBlocks = Random.Range(1, 4);
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(1, 4, NULL);
		__this->____numberOfWeightBlocks_6 = L_4;
		// int randomWeight = Random.Range(-1, 1);
		int32_t L_5;
		L_5 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8((-1), 1, NULL);
		V_0 = L_5;
	}

IL_003c:
	{
		// _convertedWeight = Random.Range(-100, 100);
		int32_t L_6;
		L_6 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)-100), ((int32_t)100), NULL);
		__this->____convertedWeight_8 = ((float)L_6);
		// _convertedWeight /= 10;
		float L_7 = __this->____convertedWeight_8;
		__this->____convertedWeight_8 = ((float)(L_7/(10.0f)));
		// } while (_convertedWeight == 0);
		float L_8 = __this->____convertedWeight_8;
		if ((((float)L_8) == ((float)(0.0f))))
		{
			goto IL_003c;
		}
	}
	{
		// _trueWeight = WeightUnitConverter.TrueWeight(_convertedWeight, 0);
		float L_9 = __this->____convertedWeight_8;
		float L_10;
		L_10 = WeightUnitConverter_TrueWeight_mF1171485818132BC79D454DFE02A7A20B4D2B6F3(L_9, 0, NULL);
		__this->____trueWeight_7 = L_10;
		// _answerInputValue.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_11 = __this->____answerInputValue_9;
		NullCheck(L_11);
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// _answerCorrectionFeedback.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->____answerCorrectionFeedback_12;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// for (int i = 0; i < _numberOfWeightBlocks; i++)
		V_1 = 0;
		goto IL_0102;
	}

IL_00a1:
	{
		// if (randomWeight < 0)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		// _desiredHook = Random.Range(8, 16);
		int32_t L_14;
		L_14 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(8, ((int32_t)16), NULL);
		__this->____desiredHook_5 = L_14;
		goto IL_00c2;
	}

IL_00b5:
	{
		// _desiredHook = Random.Range(0, 8);
		int32_t L_15;
		L_15 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 8, NULL);
		__this->____desiredHook_5 = L_15;
	}

IL_00c2:
	{
		// GameController.Singleton.BlockController.CreateChallengeBlock(randomWeight, _convertedWeight, 0, GameController.Singleton.LevelController.MainBalance.GetHooks()[_desiredHook].transform.position);
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_16;
		L_16 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_16);
		BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* L_17 = L_16->___BlockController_6;
		int32_t L_18 = V_0;
		float L_19 = __this->____convertedWeight_8;
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_20;
		L_20 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_20);
		LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* L_21 = L_20->___LevelController_5;
		NullCheck(L_21);
		MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* L_22 = L_21->___MainBalance_4;
		NullCheck(L_22);
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_23;
		L_23 = MainBalance_GetHooks_m45D4CAFE761461733251C20E6E822B28F9D7F379_inline(L_22, NULL);
		int32_t L_24 = __this->____desiredHook_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		NullCheck(L_17);
		BlockController_CreateChallengeBlock_m9A12AA9F364FF483D647359D0DF0664964B8F1E4(L_17, L_18, L_19, 0, L_28, NULL);
		// for (int i = 0; i < _numberOfWeightBlocks; i++)
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0102:
	{
		// for (int i = 0; i < _numberOfWeightBlocks; i++)
		int32_t L_30 = V_1;
		int32_t L_31 = __this->____numberOfWeightBlocks_6;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_00a1;
		}
	}
	{
		// if (GameController.Singleton.LevelController.MainBalance.GetTotalWeight() == 0)
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_32;
		L_32 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_32);
		LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* L_33 = L_32->___LevelController_5;
		NullCheck(L_33);
		MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* L_34 = L_33->___MainBalance_4;
		NullCheck(L_34);
		float L_35;
		L_35 = MainBalance_GetTotalWeight_m2A0ACA7AD3C5A91ECBF98522EA40E31EAB455FD9_inline(L_34, NULL);
		if ((!(((float)L_35) == ((float)(0.0f)))))
		{
			goto IL_0162;
		}
	}
	{
		// GameController.Singleton.BlockController.CreateChallengeBlock(randomWeight, _convertedWeight, 0, GameController.Singleton.LevelController.MainBalance.GetHooks()[_desiredHook].transform.position);
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_36;
		L_36 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_36);
		BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* L_37 = L_36->___BlockController_6;
		int32_t L_38 = V_0;
		float L_39 = __this->____convertedWeight_8;
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_40;
		L_40 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_40);
		LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* L_41 = L_40->___LevelController_5;
		NullCheck(L_41);
		MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* L_42 = L_41->___MainBalance_4;
		NullCheck(L_42);
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_43;
		L_43 = MainBalance_GetHooks_m45D4CAFE761461733251C20E6E822B28F9D7F379_inline(L_42, NULL);
		int32_t L_44 = __this->____desiredHook_5;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_46, NULL);
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_47, NULL);
		NullCheck(L_37);
		BlockController_CreateChallengeBlock_m9A12AA9F364FF483D647359D0DF0664964B8F1E4(L_37, L_38, L_39, 0, L_48, NULL);
	}

IL_0162:
	{
		// Debug.Log("True Weight: " + _trueWeight);
		float* L_49 = (&__this->____trueWeight_7);
		String_t* L_50;
		L_50 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_49, NULL);
		String_t* L_51;
		L_51 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7FAD0955501342E2B4CC98C452288A3927477593, L_50, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_51, NULL);
		// }
		return;
	}
}
// System.Void Challenges.Challenge_1::CheckAnswer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Challenge_1_CheckAnswer_m9422276316846FE5FEED56432807A036918D27DA (Challenge_1_tFA63A292DB82E298B96723D20F7CDCD0E4E8901C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673F1ED543EAAC79A58724482A319C28C36D9AB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEC1D34694A980D82C6E470271B5697C52635BD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_answerInputValue.text != "")
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->____answerInputValue_9;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		bool L_2;
		L_2 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_2)
		{
			goto IL_0078;
		}
	}
	{
		// float answer = WeightUnitConverter.TrueWeight(float.Parse(_answerInputValue.text), _answerInputUnit.value);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->____answerInputValue_9;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_3, NULL);
		float L_5;
		L_5 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_4, NULL);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_6 = __this->____answerInputUnit_10;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_6, NULL);
		float L_8;
		L_8 = WeightUnitConverter_TrueWeight_mF1171485818132BC79D454DFE02A7A20B4D2B6F3(L_5, L_7, NULL);
		// if (answer == _trueWeight)
		float L_9 = __this->____trueWeight_7;
		if ((!(((float)L_8) == ((float)L_9))))
		{
			goto IL_0068;
		}
	}
	{
		// _answerCorrectionFeedback.text = "Correto !";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->____answerCorrectionFeedback_12;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral673F1ED543EAAC79A58724482A319C28C36D9AB6);
		// _confirmAnswerButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->____confirmAnswerButton_11;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// _nextChallengeButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____nextChallengeButton_4;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		return;
	}

IL_0068:
	{
		// _answerCorrectionFeedback.text = "Incorreto !";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->____answerCorrectionFeedback_12;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteralBEC1D34694A980D82C6E470271B5697C52635BD0);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Challenges.Challenge_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Challenge_1__ctor_mA065F72BCB44271EAACF2EAE01F90B69B48D6756 (Challenge_1_tFA63A292DB82E298B96723D20F7CDCD0E4E8901C* __this, const RuntimeMethod* method) 
{
	{
		Challenge__ctor_m279391907EB4CCD636876E377D7DE9A9BF6F28F8(__this, NULL);
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
// System.Void Assets.Technical.Classes.HUD.HUD::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUD_Start_mF8F8C98A251BF2803486CDE9D9F85C02FFB507B2 (HUD_tBF0E2B0A92D944E6D5886EFF31260D8EA50DE34F* __this, const RuntimeMethod* method) 
{
	{
		// _weightBlockCreationPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____weightBlockCreationPanel_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Assets.Technical.Classes.HUD.HUD::SetJanela()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUD_SetJanela_mB1D9C998516CCD948AA0C34D41A530EA59BD3386 (HUD_tBF0E2B0A92D944E6D5886EFF31260D8EA50DE34F* __this, const RuntimeMethod* method) 
{
	{
		// _weightBlockCreationPanel.SetActive(!_weightBlockCreationPanel.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____weightBlockCreationPanel_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____weightBlockCreationPanel_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// GameController.Singleton.PlayClickSound();
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_3;
		L_3 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_3);
		GameController_PlayClickSound_m42A545C88300B4E658658AE3739E7742EED94B0B(L_3, NULL);
		// }
		return;
	}
}
// System.Void Assets.Technical.Classes.HUD.HUD::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HUD__ctor_m48326745745AC45167F32C0A28402F762EDDADF0 (HUD_tBF0E2B0A92D944E6D5886EFF31260D8EA50DE34F* __this, const RuntimeMethod* method) 
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
// System.Void Assets.Technical.Classes.Utility.WeightLEGACY::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightLEGACY_Start_m440ED94C68EB0E78B1C47BB5833B98E410EC12DD (WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject p = Instantiate(particulaPuff, this.transform.position + new Vector3(0, 0, -4.5f), this.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___particulaPuff_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (0.0f), (-4.5f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(p, 2.0f);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_7, (2.0f), NULL);
		// rb = this.GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8;
		L_8 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_13 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_13), (void*)L_8);
		// podeAdicionarMassa = false;
		__this->___podeAdicionarMassa_14 = (bool)0;
		// layerHit = 0;
		__this->___layerHit_18 = 0;
		// smokeImpact.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___smokeImpact_6;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Assets.Technical.Classes.Utility.WeightLEGACY::setMassa(System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightLEGACY_setMassa_mF0FE58D0F5E9C9C69C9B0DF81C2C851C1177E7F5 (WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F* __this, float ___valorMassa0, float ___valorRelativoMassa1, String_t* ___tipo2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	{
		// massa = valorMassa;
		float L_0 = ___valorMassa0;
		__this->___massa_12 = L_0;
		// if (valorRelativoMassa < 99) texto.text = valorRelativoMassa + " " + tipo;
		float L_1 = ___valorRelativoMassa1;
		if ((!(((float)L_1) < ((float)(99.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		// if (valorRelativoMassa < 99) texto.text = valorRelativoMassa + " " + tipo;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_2 = __this->___texto_15;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___valorRelativoMassa1), NULL);
		String_t* L_4 = ___tipo2;
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_4, NULL);
		NullCheck(L_2);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_2, L_5, NULL);
		return;
	}

IL_002d:
	{
		// else texto.text = valorRelativoMassa + "\n" + tipo;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_6 = __this->___texto_15;
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___valorRelativoMassa1), NULL);
		String_t* L_8 = ___tipo2;
		String_t* L_9;
		L_9 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_7, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_8, NULL);
		NullCheck(L_6);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_6, L_9, NULL);
		// }
		return;
	}
}
// System.Single Assets.Technical.Classes.Utility.WeightLEGACY::getMassa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WeightLEGACY_getMassa_mBA439355AD6A6D62DDA650F1E968754D02D1AB26 (WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F* __this, const RuntimeMethod* method) 
{
	{
		// return massa;
		float L_0 = __this->___massa_12;
		return L_0;
	}
}
// System.Void Assets.Technical.Classes.Utility.WeightLEGACY::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightLEGACY_Update_m8CBD0EDE917B9225486C8D74D8229F26EA844F50 (WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535_mCC3C74510A9DD2627B68D58D17CAD4C9DD890E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F4F4B3052EF7A84F1F473991F7150C3FE239EE7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (arrastando)
		bool L_0 = __this->___arrastando_19;
		if (!L_0)
		{
			goto IL_00f1;
		}
	}
	{
		// pos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		__this->___pos_20 = L_1;
		// pos.z = transform.position.z - Camera.main.transform.position.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___pos_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___z_4;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___z_4;
		L_2->___z_4 = ((float)il2cpp_codegen_subtract(L_5, L_9));
		// finalPos = Camera.main.ScreenToWorldPoint(pos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___pos_20;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_10, L_11, NULL);
		__this->___finalPos_21 = L_12;
		// if (finalPos.x > -13.6f && finalPos.x < 13.6f && finalPos.y > -4.8f && finalPos.y < 8.75f) transform.position = finalPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___finalPos_21);
		float L_14 = L_13->___x_2;
		if ((!(((float)L_14) > ((float)(-13.6000004f)))))
		{
			goto IL_00b7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->___finalPos_21);
		float L_16 = L_15->___x_2;
		if ((!(((float)L_16) < ((float)(13.6000004f)))))
		{
			goto IL_00b7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->___finalPos_21);
		float L_18 = L_17->___y_3;
		if ((!(((float)L_18) > ((float)(-4.80000019f)))))
		{
			goto IL_00b7;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___finalPos_21);
		float L_20 = L_19->___y_3;
		if ((!(((float)L_20) < ((float)(8.75f)))))
		{
			goto IL_00b7;
		}
	}
	{
		// if (finalPos.x > -13.6f && finalPos.x < 13.6f && finalPos.y > -4.8f && finalPos.y < 8.75f) transform.position = finalPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___finalPos_21;
		NullCheck(L_21);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_21, L_22, NULL);
		goto IL_00be;
	}

IL_00b7:
	{
		// else arrastando = false;
		__this->___arrastando_19 = (bool)0;
	}

IL_00be:
	{
		// if (rb.useGravity) rb.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_23 = __this->___rb_13;
		NullCheck(L_23);
		bool L_24;
		L_24 = Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16(L_23, NULL);
		if (!L_24)
		{
			goto IL_00d7;
		}
	}
	{
		// if (rb.useGravity) rb.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25 = __this->___rb_13;
		NullCheck(L_25);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_25, (bool)0, NULL);
	}

IL_00d7:
	{
		// this.gameObject.GetComponent<BoxCollider>().isTrigger = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_26);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_27;
		L_27 = GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C(L_26, GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var);
		NullCheck(L_27);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_27, (bool)1, NULL);
		// podeAdicionarMassa = true;
		__this->___podeAdicionarMassa_14 = (bool)1;
		goto IL_011b;
	}

IL_00f1:
	{
		// this.gameObject.GetComponent<BoxCollider>().isTrigger = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_28);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_29;
		L_29 = GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C(L_28, GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var);
		NullCheck(L_29);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_29, (bool)0, NULL);
		// if (!rb.useGravity) rb.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_30 = __this->___rb_13;
		NullCheck(L_30);
		bool L_31;
		L_31 = Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16(L_30, NULL);
		if (L_31)
		{
			goto IL_011b;
		}
	}
	{
		// if (!rb.useGravity) rb.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_32 = __this->___rb_13;
		NullCheck(L_32);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_32, (bool)1, NULL);
	}

IL_011b:
	{
		// if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 100, 1 << LayerMask.NameToLayer("Bloco")))
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33;
		L_33 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		NullCheck(L_33);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_35;
		L_35 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_33, L_34, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_36 = (&__this->___hit_16);
		int32_t L_37;
		L_37 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral1F4F4B3052EF7A84F1F473991F7150C3FE239EE7, NULL);
		bool L_38;
		L_38 = Physics_Raycast_m6140FC91F32547F11C687FA1A002850598B74A0D(L_35, L_36, (100.0f), ((int32_t)(1<<((int32_t)(L_37&((int32_t)31))))), NULL);
		if (!L_38)
		{
			goto IL_01da;
		}
	}
	{
		// if (hit.transform == this.transform && Input.GetMouseButton(0) && !arrastando)
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_39 = (&__this->___hit_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_39, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_40, L_41, NULL);
		if (!L_42)
		{
			goto IL_019f;
		}
	}
	{
		bool L_43;
		L_43 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		if (!L_43)
		{
			goto IL_019f;
		}
	}
	{
		bool L_44 = __this->___arrastando_19;
		if (L_44)
		{
			goto IL_019f;
		}
	}
	{
		// audioGrab.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_45 = __this->___audioGrab_5;
		NullCheck(L_45);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_45, NULL);
		// Cursor.SetCursor(cursorGrab, hotSpot, cursorMode);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_46 = __this->___cursorGrab_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = __this->___hotSpot_10;
		int32_t L_48 = __this->___cursorMode_9;
		Cursor_SetCursor_m04453993587B6E24034859C1B4FF36423BC493EE(L_46, L_47, L_48, NULL);
		// arrastando = true;
		__this->___arrastando_19 = (bool)1;
	}

IL_019f:
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_49;
		L_49 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_49)
		{
			goto IL_0204;
		}
	}
	{
		// if (arrastando)
		bool L_50 = __this->___arrastando_19;
		if (!L_50)
		{
			goto IL_0204;
		}
	}
	{
		// audioGrab.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_51 = __this->___audioGrab_5;
		NullCheck(L_51);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_51, NULL);
		// arrastando = false;
		__this->___arrastando_19 = (bool)0;
		// Cursor.SetCursor(cursorOpen, hotSpot, cursorMode);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_52 = __this->___cursorOpen_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = __this->___hotSpot_10;
		int32_t L_54 = __this->___cursorMode_9;
		Cursor_SetCursor_m04453993587B6E24034859C1B4FF36423BC493EE(L_52, L_53, L_54, NULL);
		goto IL_0204;
	}

IL_01da:
	{
		// this.gameObject.GetComponent<BoxCollider>().isTrigger = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_55);
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_56;
		L_56 = GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C(L_55, GameObject_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m704160C10BDAB9B54429D2DEB921575D3DF7622C_RuntimeMethod_var);
		NullCheck(L_56);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_56, (bool)0, NULL);
		// if (!rb.useGravity) rb.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_57 = __this->___rb_13;
		NullCheck(L_57);
		bool L_58;
		L_58 = Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16(L_57, NULL);
		if (L_58)
		{
			goto IL_0204;
		}
	}
	{
		// if (!rb.useGravity) rb.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_59 = __this->___rb_13;
		NullCheck(L_59);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_59, (bool)1, NULL);
	}

IL_0204:
	{
		// if (hit.transform == this.transform && Input.GetMouseButton(1))
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_60 = (&__this->___hit_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_60, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_61, L_62, NULL);
		if (!L_63)
		{
			goto IL_0293;
		}
	}
	{
		bool L_64;
		L_64 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(1, NULL);
		if (!L_64)
		{
			goto IL_0293;
		}
	}
	{
		// if (layerHit == 9) hitTarg.transform.GetComponent<BallancePlateLEGACY>().remPeso(this);
		int32_t L_65 = __this->___layerHit_18;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0244;
		}
	}
	{
		// if (layerHit == 9) hitTarg.transform.GetComponent<BallancePlateLEGACY>().remPeso(this);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_66 = (&__this->___hitTarg_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67;
		L_67 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_66, NULL);
		NullCheck(L_67);
		BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535* L_68;
		L_68 = Component_GetComponent_TisBallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535_mCC3C74510A9DD2627B68D58D17CAD4C9DD890E5D(L_67, Component_GetComponent_TisBallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535_mCC3C74510A9DD2627B68D58D17CAD4C9DD890E5D_RuntimeMethod_var);
		NullCheck(L_68);
		BallancePlateLEGACY_remPeso_m8480CB375B0E1EB3405AADFFA5DE6581BC60255A(L_68, __this, NULL);
	}

IL_0244:
	{
		// GameObject p = Instantiate(particulaPuff, this.transform.position + new Vector3(0, 0, -4.5f), this.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = __this->___particulaPuff_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		memset((&L_72), 0, sizeof(L_72));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_72), (0.0f), (0.0f), (-4.5f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_71, L_72, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_74);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_75;
		L_75 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_74, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76;
		L_76 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_69, L_73, L_75, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(p, 2.0f);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_76, (2.0f), NULL);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77;
		L_77 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_77, NULL);
	}

IL_0293:
	{
		// }
		return;
	}
}
// System.Void Assets.Technical.Classes.Utility.WeightLEGACY::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightLEGACY_OnCollisionEnter_mA4CDEF75AC723AD1A375C8CB9C1DC316EEDBFC8B (WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535_mCC3C74510A9DD2627B68D58D17CAD4C9DD890E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D2A59C8AC0EE7CAABA9B50BEEF7C72871934216);
		s_Il2CppMethodInitialized = true;
	}
	{
		// smokeImpact.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___smokeImpact_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// smokeImpact.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___smokeImpact_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// if (!audioImpact.isPlaying) audioImpact.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioImpact_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_2, NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// if (!audioImpact.isPlaying) audioImpact.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___audioImpact_4;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
	}

IL_0030:
	{
		// if (Physics.Raycast(transform.position, -Vector3.up, out hitTarg, 10, 1 << LayerMask.NameToLayer("Prato")) && podeAdicionarMassa)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_7, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_9 = (&__this->___hitTarg_17);
		int32_t L_10;
		L_10 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral7D2A59C8AC0EE7CAABA9B50BEEF7C72871934216, NULL);
		bool L_11;
		L_11 = Physics_Raycast_mE2B4DD419E8995D4086EA47457A6C36435A67F49(L_6, L_8, L_9, (10.0f), ((int32_t)(1<<((int32_t)(L_10&((int32_t)31))))), NULL);
		if (!L_11)
		{
			goto IL_00a9;
		}
	}
	{
		bool L_12 = __this->___podeAdicionarMassa_14;
		if (!L_12)
		{
			goto IL_00a9;
		}
	}
	{
		// hitTarg.transform.GetComponent<BallancePlateLEGACY>().addPeso(this);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_13 = (&__this->___hitTarg_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_13, NULL);
		NullCheck(L_14);
		BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535* L_15;
		L_15 = Component_GetComponent_TisBallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535_mCC3C74510A9DD2627B68D58D17CAD4C9DD890E5D(L_14, Component_GetComponent_TisBallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535_mCC3C74510A9DD2627B68D58D17CAD4C9DD890E5D_RuntimeMethod_var);
		NullCheck(L_15);
		BallancePlateLEGACY_addPeso_m28C18903ACCD27041D2CACE043A559ED3205E89F(L_15, __this, NULL);
		// this.transform.SetParent(hitTarg.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_17 = (&__this->___hitTarg_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_17, NULL);
		NullCheck(L_16);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_16, L_18, NULL);
		// podeAdicionarMassa = false;
		__this->___podeAdicionarMassa_14 = (bool)0;
		// layerHit = 9;
		__this->___layerHit_18 = ((int32_t)9);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void Assets.Technical.Classes.Utility.WeightLEGACY::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightLEGACY_OnCollisionExit_mA6A45C40F17D42E8D364AD012BCACAC996BBE43B (WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535_mCC3C74510A9DD2627B68D58D17CAD4C9DD890E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D2A59C8AC0EE7CAABA9B50BEEF7C72871934216);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Physics.Raycast(transform.position, -Vector3.up, out hitTarg, 10, 1 << LayerMask.NameToLayer("Prato")) && podeAdicionarMassa)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_2, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->___hitTarg_17);
		int32_t L_5;
		L_5 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral7D2A59C8AC0EE7CAABA9B50BEEF7C72871934216, NULL);
		bool L_6;
		L_6 = Physics_Raycast_mE2B4DD419E8995D4086EA47457A6C36435A67F49(L_1, L_3, L_4, (10.0f), ((int32_t)(1<<((int32_t)(L_5&((int32_t)31))))), NULL);
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		bool L_7 = __this->___podeAdicionarMassa_14;
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		// hitTarg.transform.GetComponent<BallancePlateLEGACY>().remPeso(this);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_8 = (&__this->___hitTarg_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_8, NULL);
		NullCheck(L_9);
		BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535* L_10;
		L_10 = Component_GetComponent_TisBallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535_mCC3C74510A9DD2627B68D58D17CAD4C9DD890E5D(L_9, Component_GetComponent_TisBallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535_mCC3C74510A9DD2627B68D58D17CAD4C9DD890E5D_RuntimeMethod_var);
		NullCheck(L_10);
		BallancePlateLEGACY_remPeso_m8480CB375B0E1EB3405AADFFA5DE6581BC60255A(L_10, __this, NULL);
		// this.transform.SetParent(null);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_11, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// podeAdicionarMassa = false;
		__this->___podeAdicionarMassa_14 = (bool)0;
		// layerHit = 0;
		__this->___layerHit_18 = 0;
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Assets.Technical.Classes.Utility.WeightLEGACY::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightLEGACY__ctor_m1F63C65331B0E11C8B4A96ABFB7424EFD86E6CC7 (WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 hotSpot = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___hotSpot_10 = L_0;
		// float massa = 30;
		__this->___massa_12 = (30.0f);
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
// System.Void WeightBlocks.CustomWeightBlock::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomWeightBlock_OnPointerDown_mD9AF51F4BD279CA284B1C55EA3CCA57D94E1E02E (CustomWeightBlock_t5DE9318DEE4D26DF9B97A516A99313D1AB307A39* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// _weightValue = float.Parse(weightField.text);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___weightField_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		float L_2;
		L_2 = Single_Parse_m349A7F699C77834259812ABE86909825C1F93CF4(L_1, NULL);
		((WeightBlockCreator_t5503BC96E118C9715C567EEC8C33A088D0C21040*)__this)->____weightValue_4 = L_2;
		// _unitValue = weightUnit.value;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_3 = __this->___weightUnit_7;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline(L_3, NULL);
		((WeightBlockCreator_t5503BC96E118C9715C567EEC8C33A088D0C21040*)__this)->____unitValue_5 = L_4;
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___eventData0;
		WeightBlockCreator_OnPointerDown_m5BCDBA5FAF850A4BBF9DF0A217850DFE98227B75(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void WeightBlocks.CustomWeightBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomWeightBlock__ctor_mCCADFA573B263FDEF2AFC600DE61368D8648136B (CustomWeightBlock_t5DE9318DEE4D26DF9B97A516A99313D1AB307A39* __this, const RuntimeMethod* method) 
{
	{
		WeightBlockCreator__ctor_m44C17325E07A6AD16C3A6A4785F8FA03A0DCF6B9(__this, NULL);
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
// System.Void WeightBlocks.PremadeWeightBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PremadeWeightBlock__ctor_mE472AEE70470DD398F7ACAB63A59A7648A4CA85B (PremadeWeightBlock_tF0E611B182B04B04F0A6C18A8E335A6709AC7B30* __this, const RuntimeMethod* method) 
{
	{
		WeightBlockCreator__ctor_m44C17325E07A6AD16C3A6A4785F8FA03A0DCF6B9(__this, NULL);
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
// System.Void WeightBlocks.WeightBlock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_Start_m83ECB270A7D79E61ED7F4A9F147AE6F8F5005F3D (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _textRenderer.material.renderQueue = 3990;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->____textRenderer_5;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		NullCheck(L_1);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_1, ((int32_t)3990), NULL);
		// _rb = this.GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->____rb_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rb_4), (void*)L_2);
		// }
		return;
	}
}
// System.Void WeightBlocks.WeightBlock::SetBlock(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_SetBlock_mA49A6AD7C91E23752930D16DA085ED0AE6E10003 (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, float ___weightValue0, int32_t ___unitValue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Mass = WeightUnitConverter.TrueWeight(weightValue, unitValue); ;
		float L_0 = ___weightValue0;
		int32_t L_1 = ___unitValue1;
		float L_2;
		L_2 = WeightUnitConverter_TrueWeight_mF1171485818132BC79D454DFE02A7A20B4D2B6F3(L_0, L_1, NULL);
		WeightBlock_set_Mass_mC05C659B1080B745553399C1E332CA2B9817712D_inline(__this, L_2, NULL);
		// if (_weightValueVisualText != null)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_3 = __this->____weightValueVisualText_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// _weightValueVisualText.text = weightValue.ToString();
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_5 = __this->____weightValueVisualText_6;
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___weightValue0), NULL);
		NullCheck(L_5);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_5, L_6, NULL);
	}

IL_002d:
	{
		// if (_weightUnitVisualText != null)
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_7 = __this->____weightUnitVisualText_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// _weightUnitVisualText.text = weightUnitDictionary[unitValue].ToString();
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_9 = __this->____weightUnitVisualText_7;
		RuntimeObject* L_10 = __this->___weightUnitDictionary_8;
		int32_t L_11 = ___unitValue1;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_10, L_13);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		NullCheck(L_9);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_9, L_15, NULL);
	}

IL_005c:
	{
		// if (Mass > 0)
		float L_16;
		L_16 = WeightBlock_get_Mass_m2102C2802E3A322682EC42ED2C33FB182BA15C81_inline(__this, NULL);
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_0081;
		}
	}
	{
		// _boundaryPositionY = 11.4f;
		__this->____boundaryPositionY_9 = (11.3999996f);
		// _boundaryPositionX = 16.42f;
		__this->____boundaryPositionX_10 = (16.4200001f);
		goto IL_0097;
	}

IL_0081:
	{
		// _boundaryPositionY = 8.2f;
		__this->____boundaryPositionY_9 = (8.19999981f);
		// _boundaryPositionX = 16.25f;
		__this->____boundaryPositionX_10 = (16.25f);
	}

IL_0097:
	{
		// BlockController.SelectedWeightBlock = this;
		BlockController_set_SelectedWeightBlock_m12ECA4AD9DBE40A1A75AEC71BF05C456589B9698_inline(__this, NULL);
		// }
		return;
	}
}
// System.Single WeightBlocks.WeightBlock::get_Mass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WeightBlock_get_Mass_m2102C2802E3A322682EC42ED2C33FB182BA15C81 (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) 
{
	{
		// public float Mass { get; private set; } = 0;
		float L_0 = __this->___U3CMassU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void WeightBlocks.WeightBlock::set_Mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_set_Mass_mC05C659B1080B745553399C1E332CA2B9817712D (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Mass { get; private set; } = 0;
		float L_0 = ___value0;
		__this->___U3CMassU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void WeightBlocks.WeightBlock::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_FixedUpdate_mA3D6D26D3C338BCB2FB92EAC7ADA93F74D97C537 (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) 
{
	{
		// if (_gravityEnabledFlag)
		bool L_0 = __this->____gravityEnabledFlag_11;
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		// if (Mass >= 0)
		float L_1;
		L_1 = WeightBlock_get_Mass_m2102C2802E3A322682EC42ED2C33FB182BA15C81_inline(__this, NULL);
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		// _rb.velocity += Physics.gravity * Time.fixedDeltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->____rb_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = L_2;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		float L_6;
		L_6 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_4, L_7, NULL);
		NullCheck(L_3);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_3, L_8, NULL);
		return;
	}

IL_003b:
	{
		// _rb.velocity -= Physics.gravity * Time.fixedDeltaTime;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->____rb_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = L_9;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_11, L_14, NULL);
		NullCheck(L_10);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_10, L_15, NULL);
		return;
	}

IL_0061:
	{
		// _rb.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_16);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void WeightBlocks.WeightBlock::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_OnCollisionEnter_m8A23123A7003962C33C89E4C39184959ACF4C766 (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_impactVfxPrefab != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____impactVfxPrefab_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// if (collision.transform.gameObject.layer == 10)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_2 = ___collision0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6(L_2, NULL);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0045;
		}
	}
	{
		// _impactVfxPrefab.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->____impactVfxPrefab_14;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// _impactVfxPrefab.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->____impactVfxPrefab_14;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// _impactSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->____impactSound_13;
		NullCheck(L_8);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_8, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void WeightBlocks.WeightBlock::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_Move_m0CBEDCE4F4DF7588F482C8762EC2BE42517ABE47 (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___desiredPosition0, const RuntimeMethod* method) 
{
	{
		// if (this.transform.rotation.z != 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		float L_2 = L_1.___z_2;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0036;
		}
	}
	{
		// this.transform.rotation = Quaternion.Euler(-6.378f, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-6.37799978f), (0.0f), (0.0f), NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_4, NULL);
	}

IL_0036:
	{
		// _actualPosition = Camera.main.ScreenToWorldPoint(desiredPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___desiredPosition0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_5, L_6, NULL);
		__this->____actualPosition_16 = L_7;
		// _actualPosition.z = 2.17f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->____actualPosition_16);
		L_8->___z_4 = (2.17000008f);
		// _actualPosition.x = Mathf.Clamp(_actualPosition.x, -1 * _boundaryPositionX, _boundaryPositionX);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->____actualPosition_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->____actualPosition_16);
		float L_11 = L_10->___x_2;
		float L_12 = __this->____boundaryPositionX_10;
		float L_13 = __this->____boundaryPositionX_10;
		float L_14;
		L_14 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_11, ((float)il2cpp_codegen_multiply((-1.0f), L_12)), L_13, NULL);
		L_9->___x_2 = L_14;
		// _actualPosition.y = Mathf.Clamp(_actualPosition.y, -2.57f, _boundaryPositionY);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&__this->____actualPosition_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->____actualPosition_16);
		float L_17 = L_16->___y_3;
		float L_18 = __this->____boundaryPositionY_9;
		float L_19;
		L_19 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_17, (-2.56999993f), L_18, NULL);
		L_15->___y_3 = L_19;
		// this.transform.position = _actualPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->____actualPosition_16;
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_21, NULL);
		// }
		return;
	}
}
// System.Void WeightBlocks.WeightBlock::Select()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_Select_m8E53E772E580C5AD76549FC71AD89945CFFE3D20 (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A_m8968314DE2A337EA2C69F94EC59B121326EA2BE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_hookBelonging != null)
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_0 = __this->____hookBelonging_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// _hookBelonging.GetComponent<Hook>().UnhookWeightBlock(this);
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_2 = __this->____hookBelonging_15;
		NullCheck(L_2);
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_3;
		L_3 = Component_GetComponent_TisHook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A_m8968314DE2A337EA2C69F94EC59B121326EA2BE0(L_2, Component_GetComponent_TisHook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A_m8968314DE2A337EA2C69F94EC59B121326EA2BE0_RuntimeMethod_var);
		NullCheck(L_3);
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_4;
		L_4 = Hook_UnhookWeightBlock_m069D376497A93E1DA3F96D4F7DE763266C92ED86(L_3, __this, NULL);
		// this.transform.SetParent(null);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_5, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// _hookBelonging = null;
		__this->____hookBelonging_15 = (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hookBelonging_15), (void*)(Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A*)NULL);
	}

IL_0033:
	{
		// _gravityEnabledFlag = false;
		__this->____gravityEnabledFlag_11 = (bool)0;
		// _grabSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->____grabSound_17;
		NullCheck(L_6);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// BlockController.SelectedWeightBlock = this;
		BlockController_set_SelectedWeightBlock_m12ECA4AD9DBE40A1A75AEC71BF05C456589B9698_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void WeightBlocks.WeightBlock::Deselect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_Deselect_m83011123DB763ADEB690D34E5045DDDFCB4AA47D (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BlockController.SelectedWeightBlock = null;
		BlockController_set_SelectedWeightBlock_m12ECA4AD9DBE40A1A75AEC71BF05C456589B9698_inline((WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5*)NULL, NULL);
		// _hookBelonging = GameController.Singleton.LevelController.MainBalance.CheckHookCollision(this);
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_0;
		L_0 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_0);
		LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* L_1 = L_0->___LevelController_5;
		NullCheck(L_1);
		MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* L_2 = L_1->___MainBalance_4;
		NullCheck(L_2);
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_3;
		L_3 = MainBalance_CheckHookCollision_m93089C4DCC381BDC56A406258FEEEF0C582D30BE(L_2, __this, NULL);
		__this->____hookBelonging_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hookBelonging_15), (void*)L_3);
		// if (_hookBelonging != null)
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_4 = __this->____hookBelonging_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	{
		// this.transform.position = _hookBelonging.transform.position + new Vector3(0, -0.123f, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_7 = __this->____hookBelonging_15;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (-0.123000003f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_9, L_10, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_11, NULL);
		// this.transform.parent = _hookBelonging.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_13 = __this->____hookBelonging_15;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_12);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_12, L_14, NULL);
		// _gravityEnabledFlag = false;
		__this->____gravityEnabledFlag_11 = (bool)0;
		return;
	}

IL_0081:
	{
		// _gravityEnabledFlag = true;
		__this->____gravityEnabledFlag_11 = (bool)1;
		// }
		return;
	}
}
// System.Void WeightBlocks.WeightBlock::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock_Destroy_mA38EFB25F77E9C2F2487F5C83EE79C9ABA98408E (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A_m8968314DE2A337EA2C69F94EC59B121326EA2BE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_hookBelonging != null)
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_0 = __this->____hookBelonging_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// _hookBelonging.GetComponent<Hook>().UnhookWeightBlock(this);
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_2 = __this->____hookBelonging_15;
		NullCheck(L_2);
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_3;
		L_3 = Component_GetComponent_TisHook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A_m8968314DE2A337EA2C69F94EC59B121326EA2BE0(L_2, Component_GetComponent_TisHook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A_m8968314DE2A337EA2C69F94EC59B121326EA2BE0_RuntimeMethod_var);
		NullCheck(L_3);
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_4;
		L_4 = Hook_UnhookWeightBlock_m069D376497A93E1DA3F96D4F7DE763266C92ED86(L_3, __this, NULL);
	}

IL_0020:
	{
		// if (_puffVfxPrefab != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____puffVfxPrefab_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0078;
		}
	}
	{
		// GameObject g = Instantiate(_puffVfxPrefab, this.transform.position + new Vector3(0, _puffVfxPositionAdjustment, -4.5f), this.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->____puffVfxPrefab_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = __this->____puffVfxPositionAdjustment_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (0.0f), L_10, (-4.5f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_9, L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_7, L_12, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(g.gameObject, 2.0f);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_15, NULL);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_16, (2.0f), NULL);
	}

IL_0078:
	{
		// GameController.Singleton.BlockController.RemoveWeightBlockReferenceFromGame(this);
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_17;
		L_17 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_17);
		BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* L_18 = L_17->___BlockController_6;
		NullCheck(L_18);
		BlockController_RemoveWeightBlockReferenceFromGame_m9FD2ECF9E8D6F403808432A38C517DBD03BBE665(L_18, __this, NULL);
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_19, NULL);
		// }
		return;
	}
}
// System.Void WeightBlocks.WeightBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlock__ctor_m91903CF43289EE06F846C0A1800A47CE37FE3E4B (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E99C7898F08F0F5F3BED7966C0E522176214E7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral575D0C8B1F678CB54C37447C1FB337262DAB309B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral648EC1E776B0B86096D1F6155AE60D40F3EAA48B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70C10BF59D6B7DD31DBB201F25233B19B90AE6DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAB8DE1C5AA2317DAA13F5800200D4DD49FCC3DB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IDictionary weightUnitDictionary = new Dictionary<int, string>()
		// {
		//     { 0, "Kg" },
		//     { 1, "Hg" },
		//     { 2, "Dg" },
		//     { 3, "g" },
		//     { 4, "dg" },
		//     { 5, "cg" },
		//     { 6, "mg" },
		// };
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_0 = (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9*)il2cpp_codegen_object_new(Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4(L_0, Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_1, 0, _stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_2, 1, _stringLiteral575D0C8B1F678CB54C37447C1FB337262DAB309B, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_3, 2, _stringLiteralAAB8DE1C5AA2317DAA13F5800200D4DD49FCC3DB, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_4, 3, _stringLiteral2B9B6C84CC15492CCB290C4B79418FA6D7DD24C1, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_5, 4, _stringLiteral1E99C7898F08F0F5F3BED7966C0E522176214E7F, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_6, 5, _stringLiteral648EC1E776B0B86096D1F6155AE60D40F3EAA48B, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128(L_7, 6, _stringLiteral70C10BF59D6B7DD31DBB201F25233B19B90AE6DD, Dictionary_2_Add_m3531FBDB13EF62AAB20F8EB6598955DF14243128_RuntimeMethod_var);
		__this->___weightUnitDictionary_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___weightUnitDictionary_8), (void*)L_7);
		// private bool _gravityEnabledFlag = true;
		__this->____gravityEnabledFlag_11 = (bool)1;
		// private Vector3 _actualPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____actualPosition_16 = L_8;
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
// System.Void WeightBlocks.WeightBlockCreator::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlockCreator_OnPointerDown_m5BCDBA5FAF850A4BBF9DF0A217850DFE98227B75 (WeightBlockCreator_t5503BC96E118C9715C567EEC8C33A088D0C21040* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// GameController.Singleton.BlockController.CreateDefaultBlock(_weightValue, _unitValue, this.transform.position);
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_0;
		L_0 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_0);
		BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50* L_1 = L_0->___BlockController_6;
		float L_2 = __this->____weightValue_4;
		int32_t L_3 = __this->____unitValue_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		NullCheck(L_1);
		BlockController_CreateDefaultBlock_m4F4F2345011B0F471ADE41CAF6B54713C0A29061(L_1, L_2, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void WeightBlocks.WeightBlockCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeightBlockCreator__ctor_m44C17325E07A6AD16C3A6A4785F8FA03A0DCF6B9 (WeightBlockCreator_t5503BC96E118C9715C567EEC8C33A088D0C21040* __this, const RuntimeMethod* method) 
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
// System.Void Balance.BallancePlateLEGACY::remPeso(Assets.Technical.Classes.Utility.WeightLEGACY)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallancePlateLEGACY_remPeso_m8480CB375B0E1EB3405AADFFA5DE6581BC60255A (BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535* __this, WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F* ___weight0, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BallancePlateLEGACY_remPeso_m8480CB375B0E1EB3405AADFFA5DE6581BC60255A_RuntimeMethod_var)));
	}
}
// System.Void Balance.BallancePlateLEGACY::addPeso(Assets.Technical.Classes.Utility.WeightLEGACY)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallancePlateLEGACY_addPeso_m28C18903ACCD27041D2CACE043A559ED3205E89F (BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535* __this, WeightLEGACY_t3D945D7DD62EC9D3F8921BF4A682AE763E65429F* ___weight0, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BallancePlateLEGACY_addPeso_m28C18903ACCD27041D2CACE043A559ED3205E89F_RuntimeMethod_var)));
	}
}
// System.Void Balance.BallancePlateLEGACY::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BallancePlateLEGACY__ctor_m00AA9A81253B8C69A9C93ABFA741D575C51CD07C (BallancePlateLEGACY_t7D85716BEA9CEDCB3A626FD3FA675886F070C535* __this, const RuntimeMethod* method) 
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
// System.Void Balance.Hook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hook_Start_mB8A41BD76CE840BB61644CBFE67CC1FE8DBCAEEE (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* __this, const RuntimeMethod* method) 
{
	{
		// _mainBalance = GameController.Singleton.LevelController.MainBalance;
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_0;
		L_0 = GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline(NULL);
		NullCheck(L_0);
		LevelController_tFF6B9E9437EAB35C1C8659CE2C42DA3BAF45D261* L_1 = L_0->___LevelController_5;
		NullCheck(L_1);
		MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* L_2 = L_1->___MainBalance_4;
		__this->____mainBalance_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainBalance_5), (void*)L_2);
		// _weightBlockRotationInSameHook[0] = Quaternion.Euler(-6.222f, 1.405f, -21.31f);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_3 = __this->____weightBlockRotationInSameHook_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-6.22200012f), (1.40499997f), (-21.3099995f), NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_4);
		// _weightBlockRotationInSameHook[1] = Quaternion.Euler(-6.036f, -2.065f, 18.924f);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_5 = __this->____weightBlockRotationInSameHook_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-6.03599977f), (-2.06500006f), (18.9239998f), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_6);
		// _weightBlockRotationInSameHook[2] = Quaternion.Euler(-1.914f, -6.085001f, 72.60101f);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_7 = __this->____weightBlockRotationInSameHook_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-1.91400003f), (-6.08500099f), (72.6010132f), NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_8);
		// _weightBlockRotationInSameHook[3] = Quaternion.Euler(43.628f, 40.179f, -53.327f);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_9 = __this->____weightBlockRotationInSameHook_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((43.6279984f), (40.1790009f), (-53.3269997f), NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_10);
		// _weightBlockRotationInSameHook[4] = Quaternion.Euler(-38.809f, 7.916f, 4.55f);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_11 = __this->____weightBlockRotationInSameHook_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-38.8089981f), (7.91599989f), (4.55000019f), NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_12);
		// _weightBlockRotationInSameHook[5] = Quaternion.Euler(-36.648f, -27.702f, 41.337f);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_13 = __this->____weightBlockRotationInSameHook_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-36.6479988f), (-27.7019997f), (41.3370018f), NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_14);
		// }
		return;
	}
}
// System.Void Balance.Hook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hook_Update_m982825E4ACC1627EC34FFF5E73BC9FB3BF590C46 (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.rotation = Quaternion.Euler(0.0f, 0.0f, _mainBalance.BalanceAxis.transform.rotation.z * -1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* L_1 = __this->____mainBalance_5;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1->___BalanceAxis_12;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		float L_5 = L_4.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_5, (-1.0f))), NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_6, NULL);
		// }
		return;
	}
}
// Balance.Hook Balance.Hook::UnhookWeightBlock(WeightBlocks.WeightBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* Hook_UnhookWeightBlock_m069D376497A93E1DA3F96D4F7DE763266C92ED86 (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* __this, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___weightBlock0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m30760684F56603A4A3A87F6FC240849A9BF766B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mainBalance.RemoveWeight(weightBlock.Mass * _hookCoefficient);
		MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* L_0 = __this->____mainBalance_5;
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_1 = ___weightBlock0;
		NullCheck(L_1);
		float L_2;
		L_2 = WeightBlock_get_Mass_m2102C2802E3A322682EC42ED2C33FB182BA15C81_inline(L_1, NULL);
		float L_3 = __this->____hookCoefficient_7;
		NullCheck(L_0);
		MainBalance_RemoveWeight_m32B1B800C2F840C8BBD07972B6AA431DC84702DB(L_0, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// _weightBlocks.Remove(weightBlock);
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_4 = __this->____weightBlocks_6;
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_5 = ___weightBlock0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_m30760684F56603A4A3A87F6FC240849A9BF766B3(L_4, L_5, List_1_Remove_m30760684F56603A4A3A87F6FC240849A9BF766B3_RuntimeMethod_var);
		// UpdateWeightBlocksRotationInHook();
		Hook_UpdateWeightBlocksRotationInHook_mC7BF729804456FE52EAD006C4281D7904D4E1977(__this, NULL);
		// return null;
		return (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A*)NULL;
	}
}
// Balance.Hook Balance.Hook::HookWeightBlock(WeightBlocks.WeightBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* Hook_HookWeightBlock_mC0F687C4E852506631A8D8559B39ECFB5EE8A549 (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* __this, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___weightBlock0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCCD7D323DB48BDCCB3E8A8A0A62DE7F073B8A0B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _weightBlocks.Add(weightBlock);
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_0 = __this->____weightBlocks_6;
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_1 = ___weightBlock0;
		NullCheck(L_0);
		List_1_Add_mCCD7D323DB48BDCCB3E8A8A0A62DE7F073B8A0B6_inline(L_0, L_1, List_1_Add_mCCD7D323DB48BDCCB3E8A8A0A62DE7F073B8A0B6_RuntimeMethod_var);
		// _mainBalance.AddWeight(weightBlock.Mass * _hookCoefficient);
		MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* L_2 = __this->____mainBalance_5;
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_3 = ___weightBlock0;
		NullCheck(L_3);
		float L_4;
		L_4 = WeightBlock_get_Mass_m2102C2802E3A322682EC42ED2C33FB182BA15C81_inline(L_3, NULL);
		float L_5 = __this->____hookCoefficient_7;
		NullCheck(L_2);
		MainBalance_AddWeight_m67C0C05E177D98FA4810A734E1500EA620F3B704(L_2, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		// UpdateWeightBlocksRotationInHook();
		Hook_UpdateWeightBlocksRotationInHook_mC7BF729804456FE52EAD006C4281D7904D4E1977(__this, NULL);
		// return this;
		return __this;
	}
}
// System.Void Balance.Hook::UpdateWeightBlocksRotationInHook()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hook_UpdateWeightBlocksRotationInHook_mC7BF729804456FE52EAD006C4281D7904D4E1977 (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m820E95922AE57E9B6BA62B7640269205642D0C7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m21EF7A9C580E7145010FFF666FFC1FDD6F92450F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDEC9555BCB29C5F76211BC468E35ED0BCC7AD0F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB14C5C73EAE3A79C4A9401FB85741FEC03A89E4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m538C9213A28B180E4741BAB46F58F2770824ABFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0D19CF19E639DEB60CB0526CFEDC66021F61BDC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69ED3E6C2B47B44DE1568155A51425B53568E050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF1876FE773CC8FFA86A74835913CDCAE07C20E2A V_0;
	memset((&V_0), 0, sizeof(V_0));
	WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* V_1 = NULL;
	{
		// if (_weightBlocks.Count == 1)
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_0 = __this->____weightBlocks_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m0D19CF19E639DEB60CB0526CFEDC66021F61BDC3_inline(L_0, List_1_get_Count_m0D19CF19E639DEB60CB0526CFEDC66021F61BDC3_RuntimeMethod_var);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0039;
		}
	}
	{
		// _weightBlocks[0].transform.rotation = Quaternion.Euler(-6.378f, 0, 0);
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_2 = __this->____weightBlocks_6;
		NullCheck(L_2);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_3;
		L_3 = List_1_get_Item_m69ED3E6C2B47B44DE1568155A51425B53568E050(L_2, 0, List_1_get_Item_m69ED3E6C2B47B44DE1568155A51425B53568E050_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((-6.37799978f), (0.0f), (0.0f), NULL);
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		return;
	}

IL_0039:
	{
		// foreach (WeightBlock weightBlock in _weightBlocks)
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_6 = __this->____weightBlocks_6;
		NullCheck(L_6);
		Enumerator_tF1876FE773CC8FFA86A74835913CDCAE07C20E2A L_7;
		L_7 = List_1_GetEnumerator_mB14C5C73EAE3A79C4A9401FB85741FEC03A89E4A(L_6, List_1_GetEnumerator_mB14C5C73EAE3A79C4A9401FB85741FEC03A89E4A_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m820E95922AE57E9B6BA62B7640269205642D0C7F((&V_0), Enumerator_Dispose_m820E95922AE57E9B6BA62B7640269205642D0C7F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0099_1;
			}

IL_0047_1:
			{
				// foreach (WeightBlock weightBlock in _weightBlocks)
				WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_8;
				L_8 = Enumerator_get_Current_mDEC9555BCB29C5F76211BC468E35ED0BCC7AD0F2_inline((&V_0), Enumerator_get_Current_mDEC9555BCB29C5F76211BC468E35ED0BCC7AD0F2_RuntimeMethod_var);
				V_1 = L_8;
				// if (_weightBlocks.IndexOf(weightBlock) < 6)
				List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_9 = __this->____weightBlocks_6;
				WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_10 = V_1;
				NullCheck(L_9);
				int32_t L_11;
				L_11 = List_1_IndexOf_m538C9213A28B180E4741BAB46F58F2770824ABFC(L_9, L_10, List_1_IndexOf_m538C9213A28B180E4741BAB46F58F2770824ABFC_RuntimeMethod_var);
				if ((((int32_t)L_11) >= ((int32_t)6)))
				{
					goto IL_0082_1;
				}
			}
			{
				// weightBlock.transform.rotation = _weightBlockRotationInSameHook[_weightBlocks.IndexOf(weightBlock)];
				WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_12 = V_1;
				NullCheck(L_12);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
				L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
				QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_14 = __this->____weightBlockRotationInSameHook_4;
				List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_15 = __this->____weightBlocks_6;
				WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_16 = V_1;
				NullCheck(L_15);
				int32_t L_17;
				L_17 = List_1_IndexOf_m538C9213A28B180E4741BAB46F58F2770824ABFC(L_15, L_16, List_1_IndexOf_m538C9213A28B180E4741BAB46F58F2770824ABFC_RuntimeMethod_var);
				NullCheck(L_14);
				int32_t L_18 = L_17;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				NullCheck(L_13);
				Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_13, L_19, NULL);
				goto IL_0099_1;
			}

IL_0082_1:
			{
				// weightBlock.transform.rotation = _weightBlockRotationInSameHook[5];
				WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_20 = V_1;
				NullCheck(L_20);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
				L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
				QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_22 = __this->____weightBlockRotationInSameHook_4;
				NullCheck(L_22);
				int32_t L_23 = 5;
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				NullCheck(L_21);
				Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_21, L_24, NULL);
			}

IL_0099_1:
			{
				// foreach (WeightBlock weightBlock in _weightBlocks)
				bool L_25;
				L_25 = Enumerator_MoveNext_m21EF7A9C580E7145010FFF666FFC1FDD6F92450F((&V_0), Enumerator_MoveNext_m21EF7A9C580E7145010FFF666FFC1FDD6F92450F_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0047_1;
				}
			}
			{
				goto IL_00b2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void Balance.Hook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hook__ctor_mDAABB7174074B86A2282F33CBFB52BC0EF2CC1A2 (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m70A5DA25BD7EF11E34213716A9D67DC95858DA04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Quaternion[] _weightBlockRotationInSameHook = new Quaternion[6];
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->____weightBlockRotationInSameHook_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____weightBlockRotationInSameHook_4), (void*)L_0);
		// List<WeightBlock> _weightBlocks = new List<WeightBlock>();
		List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001* L_1 = (List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001*)il2cpp_codegen_object_new(List_1_tE2F6D4C68022F05E1E3646F92C246BEA4B0FC001_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m70A5DA25BD7EF11E34213716A9D67DC95858DA04(L_1, List_1__ctor_m70A5DA25BD7EF11E34213716A9D67DC95858DA04_RuntimeMethod_var);
		__this->____weightBlocks_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____weightBlocks_6), (void*)L_1);
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
// System.Single Balance.MainBalance::GetTotalWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainBalance_GetTotalWeight_m2A0ACA7AD3C5A91ECBF98522EA40E31EAB455FD9 (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) 
{
	{
		// public float GetTotalWeight() => _totalWeight;
		float L_0 = __this->____totalWeight_4;
		return L_0;
	}
}
// System.Void Balance.MainBalance::AddWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance_AddWeight_m67C0C05E177D98FA4810A734E1500EA620F3B704 (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, float ___weightValue0, const RuntimeMethod* method) 
{
	{
		// if (weightValue < 0)
		float L_0 = ___weightValue0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		// _totalWeightRightSide -= weightValue;
		float L_1 = __this->____totalWeightRightSide_5;
		float L_2 = ___weightValue0;
		__this->____totalWeightRightSide_5 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		goto IL_0026;
	}

IL_0018:
	{
		// _totalWeightLeftSide += weightValue;
		float L_3 = __this->____totalWeightLeftSide_6;
		float L_4 = ___weightValue0;
		__this->____totalWeightLeftSide_6 = ((float)il2cpp_codegen_add(L_3, L_4));
	}

IL_0026:
	{
		// RecalculateTotalWeight();
		MainBalance_RecalculateTotalWeight_m3F387D2EA9DDCAC54EF9CCD147CF4DC4DBCE3DE6(__this, NULL);
		// }
		return;
	}
}
// System.Void Balance.MainBalance::RemoveWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance_RemoveWeight_m32B1B800C2F840C8BBD07972B6AA431DC84702DB (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, float ___weightValue0, const RuntimeMethod* method) 
{
	{
		// if (weightValue < 0)
		float L_0 = ___weightValue0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		// _totalWeightRightSide += weightValue;
		float L_1 = __this->____totalWeightRightSide_5;
		float L_2 = ___weightValue0;
		__this->____totalWeightRightSide_5 = ((float)il2cpp_codegen_add(L_1, L_2));
		goto IL_0026;
	}

IL_0018:
	{
		// _totalWeightLeftSide -= weightValue;
		float L_3 = __this->____totalWeightLeftSide_6;
		float L_4 = ___weightValue0;
		__this->____totalWeightLeftSide_6 = ((float)il2cpp_codegen_subtract(L_3, L_4));
	}

IL_0026:
	{
		// RecalculateTotalWeight();
		MainBalance_RecalculateTotalWeight_m3F387D2EA9DDCAC54EF9CCD147CF4DC4DBCE3DE6(__this, NULL);
		// }
		return;
	}
}
// System.Void Balance.MainBalance::RecalculateTotalWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance_RecalculateTotalWeight_m3F387D2EA9DDCAC54EF9CCD147CF4DC4DBCE3DE6 (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) 
{
	{
		// _totalWeight = _totalWeightLeftSide - _totalWeightRightSide;
		float L_0 = __this->____totalWeightLeftSide_6;
		float L_1 = __this->____totalWeightRightSide_5;
		__this->____totalWeight_4 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (_totalWeight == 0)
		float L_2 = __this->____totalWeight_4;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// BalancedState();
		MainBalance_BalancedState_m8CBAE5C49544ACDFF84C30CA23264E0AB96A6232(__this, NULL);
		return;
	}

IL_0027:
	{
		// UnbalancedState(_totalWeight);
		float L_3 = __this->____totalWeight_4;
		MainBalance_UnbalancedState_mF6A763C2D4B915CF68ACB196916C3A3990D42553(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Balance.MainBalance::BalancedState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance_BalancedState_m8CBAE5C49544ACDFF84C30CA23264E0AB96A6232 (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) 
{
	{
		// _desiredRotationZ = 0;
		__this->____desiredRotationZ_10 = (0.0f);
		// if (!_balancedVisualFeedback.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____balancedVisualFeedback_8;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		// _balancedVisualFeedback.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____balancedVisualFeedback_8;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// _unbalancedVisualFeedback.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____unbalancedVisualFeedback_9;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_0030:
	{
		// if (_totalWeightLeftSide == 0 && _totalWeightRightSide == 0)
		float L_4 = __this->____totalWeightLeftSide_6;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		float L_5 = __this->____totalWeightRightSide_5;
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		// _winSoundFeedback.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->____winSoundFeedback_7;
		NullCheck(L_6);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Balance.MainBalance::UnbalancedState(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance_UnbalancedState_mF6A763C2D4B915CF68ACB196916C3A3990D42553 (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, float ___totalWeight0, const RuntimeMethod* method) 
{
	{
		// if (totalWeight > 0)
		float L_0 = ___totalWeight0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		// _desiredRotationZ = Mathf.Min(25.0f, (_totalWeightLeftSide / _totalWeightRightSide) * 6.875f);
		float L_1 = __this->____totalWeightLeftSide_6;
		float L_2 = __this->____totalWeightRightSide_5;
		float L_3;
		L_3 = Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline((25.0f), ((float)il2cpp_codegen_multiply(((float)(L_1/L_2)), (6.875f))), NULL);
		__this->____desiredRotationZ_10 = L_3;
		goto IL_0051;
	}

IL_002d:
	{
		// _desiredRotationZ = Mathf.Max(-25.0f, -(_totalWeightRightSide / _totalWeightLeftSide) * 6.875f);
		float L_4 = __this->____totalWeightRightSide_5;
		float L_5 = __this->____totalWeightLeftSide_6;
		float L_6;
		L_6 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((-25.0f), ((float)il2cpp_codegen_multiply(((-((float)(L_4/L_5)))), (6.875f))), NULL);
		__this->____desiredRotationZ_10 = L_6;
	}

IL_0051:
	{
		// if (_balancedVisualFeedback.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->____balancedVisualFeedback_8;
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_7, NULL);
		if (!L_8)
		{
			goto IL_0076;
		}
	}
	{
		// _unbalancedVisualFeedback.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->____unbalancedVisualFeedback_9;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// _balancedVisualFeedback.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->____balancedVisualFeedback_8;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void Balance.MainBalance::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance_FixedUpdate_m045A3384737DC292FED42C7C057F66C68674D3F0 (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) 
{
	{
		// if (_totalWeight == 0 && _totalWeightLeftSide == 0 && _totalWeightRightSide == 0)
		float L_0 = __this->____totalWeight_4;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_003d;
		}
	}
	{
		float L_1 = __this->____totalWeightLeftSide_6;
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_003d;
		}
	}
	{
		float L_2 = __this->____totalWeightRightSide_5;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_003d;
		}
	}
	{
		// _desiredRotationZ = 5 * Mathf.Sin(Time.time);
		float L_3;
		L_3 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_4;
		L_4 = sinf(L_3);
		__this->____desiredRotationZ_10 = ((float)il2cpp_codegen_multiply((5.0f), L_4));
	}

IL_003d:
	{
		// BalanceAxis.transform.rotation = Quaternion.Slerp(BalanceAxis.transform.rotation, Quaternion.Euler(0, 0, _desiredRotationZ), Time.fixedDeltaTime * _rotationSpeedFlag);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___BalanceAxis_12;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___BalanceAxis_12;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		float L_10 = __this->____desiredRotationZ_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), L_10, NULL);
		float L_12;
		L_12 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		float L_13 = __this->____rotationSpeedFlag_11;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_9, L_11, ((float)il2cpp_codegen_multiply(L_12, L_13)), NULL);
		NullCheck(L_6);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_6, L_14, NULL);
		// }
		return;
	}
}
// Balance.Hook[] Balance.MainBalance::GetHooks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* MainBalance_GetHooks_m45D4CAFE761461733251C20E6E822B28F9D7F379 (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) 
{
	{
		// return _hooks;
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_0 = __this->____hooks_13;
		return L_0;
	}
}
// Balance.Hook Balance.MainBalance::CheckHookCollision(WeightBlocks.WeightBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* MainBalance_CheckHookCollision_m93089C4DCC381BDC56A406258FEEEF0C582D30BE (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___weightBlock0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (weightBlock.Mass > 0)
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_0 = ___weightBlock0;
		NullCheck(L_0);
		float L_1;
		L_1 = WeightBlock_get_Mass_m2102C2802E3A322682EC42ED2C33FB182BA15C81_inline(L_0, NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// for (int i = 0; i < _hooks.Length / 2; i++)
		V_0 = 0;
		goto IL_004e;
	}

IL_0011:
	{
		// if (Vector3.Distance(_hooks[i].transform.position, weightBlock.transform.position) <= _minDistanceToHookCollision)
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_2 = __this->____hooks_13;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_8 = ___weightBlock0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_7, L_10, NULL);
		float L_12 = __this->____minDistanceToHookCollision_14;
		if ((!(((float)L_11) <= ((float)L_12))))
		{
			goto IL_004a;
		}
	}
	{
		// return _hooks[i].HookWeightBlock(weightBlock);
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_13 = __this->____hooks_13;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_17 = ___weightBlock0;
		NullCheck(L_16);
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_18;
		L_18 = Hook_HookWeightBlock_mC0F687C4E852506631A8D8559B39ECFB5EE8A549(L_16, L_17, NULL);
		return L_18;
	}

IL_004a:
	{
		// for (int i = 0; i < _hooks.Length / 2; i++)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004e:
	{
		// for (int i = 0; i < _hooks.Length / 2; i++)
		int32_t L_20 = V_0;
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_21 = __this->____hooks_13;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_21)->max_length))/2)))))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_00b2;
	}

IL_005d:
	{
		// for (int i = _hooks.Length / 2; i < _hooks.Length; i++)
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_22 = __this->____hooks_13;
		NullCheck(L_22);
		V_1 = ((int32_t)(((int32_t)(((RuntimeArray*)L_22)->max_length))/2));
		goto IL_00a7;
	}

IL_006a:
	{
		// if (Vector3.Distance(_hooks[i].transform.position, weightBlock.transform.position) <= _minDistanceToHookCollision)
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_23 = __this->____hooks_13;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_29 = ___weightBlock0;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		float L_32;
		L_32 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_28, L_31, NULL);
		float L_33 = __this->____minDistanceToHookCollision_14;
		if ((!(((float)L_32) <= ((float)L_33))))
		{
			goto IL_00a3;
		}
	}
	{
		// return _hooks[i].HookWeightBlock(weightBlock);
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_34 = __this->____hooks_13;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_38 = ___weightBlock0;
		NullCheck(L_37);
		Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A* L_39;
		L_39 = Hook_HookWeightBlock_mC0F687C4E852506631A8D8559B39ECFB5EE8A549(L_37, L_38, NULL);
		return L_39;
	}

IL_00a3:
	{
		// for (int i = _hooks.Length / 2; i < _hooks.Length; i++)
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00a7:
	{
		// for (int i = _hooks.Length / 2; i < _hooks.Length; i++)
		int32_t L_41 = V_1;
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_42 = __this->____hooks_13;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_006a;
		}
	}

IL_00b2:
	{
		// return null;
		return (Hook_t06B639EB23DC99D33CE5F6E028DC8C3E9E085E2A*)NULL;
	}
}
// System.Void Balance.MainBalance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainBalance__ctor_m64F71B73CE4EB7254B03AB8D522A31DFB7113D9F (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) 
{
	{
		// private float _rotationSpeedFlag = 2;
		__this->____rotationSpeedFlag_11 = (2.0f);
		// private float _minDistanceToHookCollision = 2;
		__this->____minDistanceToHookCollision_14 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* GameController_get_Singleton_mFC2B70F8708EC6F419CAA7A630F4EECE90368682_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameController Singleton { get; set; }
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_0 = ((GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameController_set_Singleton_mB4D1BE2DFD24F275A355BE9F66F8E8ECDAED5F32_inline (GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameController Singleton { get; set; }
		GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0* L_0 = ___value0;
		((GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8ED335E51CE33F89EC92E04A7067F7A6CA72F2C0_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JoystickState_Invoke_mA35672A3EE35AFC3BBF47EAAD29CA90C57B04631_inline (JoystickState_t9D98F4EBE7B843AD8E03A93ACFC5BFBCC186EE25* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* BlockController_get_SelectedWeightBlock_mD145EE1DC9E39FCA2D7D55AFF248897406D9A7D6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WeightBlock SelectedWeightBlock { get; set; } = null;
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_0 = ((BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_StaticFields*)il2cpp_codegen_static_fields_for(BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_il2cpp_TypeInfo_var))->___U3CSelectedWeightBlockU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* MainBalance_GetHooks_m45D4CAFE761461733251C20E6E822B28F9D7F379_inline (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) 
{
	{
		// return _hooks;
		HookU5BU5D_tD13E84791F0C8B0A00424A353FFB58F7C787579B* L_0 = __this->____hooks_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MainBalance_GetTotalWeight_m2A0ACA7AD3C5A91ECBF98522EA40E31EAB455FD9_inline (MainBalance_tA0E9110F6099A8819DBCE3F7ECA7E3278E30FF82* __this, const RuntimeMethod* method) 
{
	{
		// public float GetTotalWeight() => _totalWeight;
		float L_0 = __this->____totalWeight_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_m386913162D5E273B762657FE5156DC567602BC3C_inline (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) 
{
	{
		// return m_Value;
		int32_t L_0 = __this->___m_Value_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WeightBlock_set_Mass_mC05C659B1080B745553399C1E332CA2B9817712D_inline (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float Mass { get; private set; } = 0;
		float L_0 = ___value0;
		__this->___U3CMassU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WeightBlock_get_Mass_m2102C2802E3A322682EC42ED2C33FB182BA15C81_inline (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* __this, const RuntimeMethod* method) 
{
	{
		// public float Mass { get; private set; } = 0;
		float L_0 = __this->___U3CMassU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BlockController_set_SelectedWeightBlock_m12ECA4AD9DBE40A1A75AEC71BF05C456589B9698_inline (WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static WeightBlock SelectedWeightBlock { get; set; } = null;
		WeightBlock_t4B2D606D23D24B54064A4434E81124CB7EB948A5* L_0 = ___value0;
		((BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_StaticFields*)il2cpp_codegen_static_fields_for(BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_il2cpp_TypeInfo_var))->___U3CSelectedWeightBlockU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_StaticFields*)il2cpp_codegen_static_fields_for(BlockController_t43E50727C18C1DC0F22D2F5108BB6EBDB2BB9B50_il2cpp_TypeInfo_var))->___U3CSelectedWeightBlockU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m4F2A9C5128DC3F9E84865EE7ADA8DB5DA6B8B507_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
