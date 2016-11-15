using UnityEngine;
using System.Collections;

public class TextManager : MonoBehaviour {
	public GameObject text;
	// Use this for initialization
	void Start () {
		EventManager.OnCombo.AddListener (ComboText);

	}
	void ComboText(Vector2 v,int i){

		Instantiate (text,new Vector3 ( v.x,v.y,i ),Quaternion.identity);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
