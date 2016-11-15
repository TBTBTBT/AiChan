using UnityEngine;
using System.Collections;
#if UNITY_EDITOR
using UnityEditor;
#endif
[CustomEditor(typeof(FloorCreater))] 
public class FloorCreaterEditor : Editor {
	//FloorCreater 
	// Use this for initialization
	#if UNITY_EDITOR
	public override void OnInspectorGUI()
	{

		FloorCreater floor = target as FloorCreater;
		floor.Normaltexture = EditorGUILayout.ObjectField("Normal",floor.Normaltexture, typeof(Texture2D), true) as Texture2D;
		floor.edgeTexture = EditorGUILayout.ObjectField("Edge",floor.edgeTexture, typeof(Texture2D), true) as Texture2D;
		floor.midTexture = EditorGUILayout.ObjectField("Mid",floor.midTexture, typeof(Texture2D), true) as Texture2D;
		//floor.pos = EditorGUILayout.Vector2Field("Position:", floor.pos);
		floor.widthNum      = EditorGUILayout.IntSlider (floor.widthNum , 1, 100);
		floor.heightNum      = EditorGUILayout.IntSlider (floor.heightNum , 1, 100);
		if (GUI.changed) {
			//floor.SetPos();
		}
		if (GUILayout.Button ("Create")) {
			floor.SetSprite();
			// 押下時に実行したい処理

		}


	}
	#endif
}
