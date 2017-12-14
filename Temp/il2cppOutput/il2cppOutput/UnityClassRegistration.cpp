template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Wind();
	RegisterModule_Wind();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; 
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>();
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; template <> void RegisterClass<Terrain>();
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; 
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; template <> void RegisterClass<TerrainCollider>();
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; template <> void RegisterClass<NavMeshData>();
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>();
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; template <> void RegisterClass<TerrainData>();
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; template <> void RegisterClass<BaseVideoTexture>();
class MovieTexture; 
class WebCamTexture; template <> void RegisterClass<WebCamTexture>();
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 89 non stripped classes
	//0. ParticleSystem
	RegisterClass<ParticleSystem>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Behaviour
	RegisterClass<Behaviour>();
	//4. Camera
	RegisterClass<Camera>();
	//5. GameObject
	RegisterClass<GameObject>();
	//6. QualitySettings
	RegisterClass<QualitySettings>();
	//7. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//8. GameManager
	RegisterClass<GameManager>();
	//9. Renderer
	RegisterClass<Renderer>();
	//10. GUIElement
	RegisterClass<GUIElement>();
	//11. GUILayer
	RegisterClass<GUILayer>();
	//12. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//13. Shader
	RegisterClass<Shader>();
	//14. NamedObject
	RegisterClass<NamedObject>();
	//15. Material
	RegisterClass<Material>();
	//16. Sprite
	RegisterClass<Sprite>();
	//17. TextAsset
	RegisterClass<TextAsset>();
	//18. Texture
	RegisterClass<Texture>();
	//19. Texture2D
	RegisterClass<Texture2D>();
	//20. RenderTexture
	RegisterClass<RenderTexture>();
	//21. Transform
	RegisterClass<Transform>();
	//22. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//23. MeshFilter
	RegisterClass<MeshFilter>();
	//24. Mesh
	RegisterClass<Mesh>();
	//25. Animator
	RegisterClass<Animator>();
	//26. Rigidbody
	RegisterClass<Rigidbody>();
	//27. Collider
	RegisterClass<Collider>();
	//28. MeshCollider
	RegisterClass<MeshCollider>();
	//29. PhysicMaterial
	RegisterClass<PhysicMaterial>();
	//30. NavMeshAgent
	RegisterClass<NavMeshAgent>();
	//31. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//32. UI::Canvas
	RegisterClass<UI::Canvas>();
	//33. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//34. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//35. AudioClip
	RegisterClass<AudioClip>();
	//36. SampleClip
	RegisterClass<SampleClip>();
	//37. AudioListener
	RegisterClass<AudioListener>();
	//38. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//39. AudioSource
	RegisterClass<AudioSource>();
	//40. WebCamTexture
	RegisterClass<WebCamTexture>();
	//41. BaseVideoTexture
	RegisterClass<BaseVideoTexture>();
	//42. TerrainData
	RegisterClass<TerrainData>();
	//43. MeshRenderer
	RegisterClass<MeshRenderer>();
	//44. BoxCollider
	RegisterClass<BoxCollider>();
	//45. SphereCollider
	RegisterClass<SphereCollider>();
	//46. PreloadData
	RegisterClass<PreloadData>();
	//47. Cubemap
	RegisterClass<Cubemap>();
	//48. Texture3D
	RegisterClass<Texture3D>();
	//49. Texture2DArray
	RegisterClass<Texture2DArray>();
	//50. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//51. BuildSettings
	RegisterClass<BuildSettings>();
	//52. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//53. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//54. InputManager
	RegisterClass<InputManager>();
	//55. PlayerSettings
	RegisterClass<PlayerSettings>();
	//56. ResourceManager
	RegisterClass<ResourceManager>();
	//57. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//58. ScriptMapper
	RegisterClass<ScriptMapper>();
	//59. TagManager
	RegisterClass<TagManager>();
	//60. TimeManager
	RegisterClass<TimeManager>();
	//61. MonoManager
	RegisterClass<MonoManager>();
	//62. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//63. NetworkManager
	RegisterClass<NetworkManager>();
	//64. MonoScript
	RegisterClass<MonoScript>();
	//65. PhysicsManager
	RegisterClass<PhysicsManager>();
	//66. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();
	//67. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//68. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//69. AudioManager
	RegisterClass<AudioManager>();
	//70. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//71. AnimatorController
	RegisterClass<AnimatorController>();
	//72. FlareLayer
	RegisterClass<FlareLayer>();
	//73. LightProbes
	RegisterClass<LightProbes>();
	//74. RenderSettings
	RegisterClass<RenderSettings>();
	//75. LevelGameManager
	RegisterClass<LevelGameManager>();
	//76. LightmapSettings
	RegisterClass<LightmapSettings>();
	//77. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//78. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//79. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//80. AnimationClip
	RegisterClass<AnimationClip>();
	//81. Motion
	RegisterClass<Motion>();
	//82. Light
	RegisterClass<Light>();
	//83. Avatar
	RegisterClass<Avatar>();
	//84. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//85. Terrain
	RegisterClass<Terrain>();
	//86. NavMeshData
	RegisterClass<NavMeshData>();
	//87. NavMeshSettings
	RegisterClass<NavMeshSettings>();
	//88. TerrainCollider
	RegisterClass<TerrainCollider>();

}
