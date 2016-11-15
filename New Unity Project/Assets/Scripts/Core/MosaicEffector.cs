using UnityEngine;
using System.Collections;

[RequireComponent(typeof(Camera))]
public class MosaicEffector : MonoBehaviour
{
	#region Fields
	public float m_Size;
	private Material m_Material;
	
	#endregion
	
	#region Properties

	
	protected Material Material { get { return m_Material; } }
	
	#endregion
	
	#region Messages
	
	protected virtual void Awake()
	{
		Shader shader = Shader.Find("Custom/Mosaic");
		m_Material = new Material(shader);
	}
	
	protected virtual void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
		Material.SetFloat("_Size", m_Size);
		
		Graphics.Blit(source, destination, m_Material);
	}
	
	#endregion

	
}
