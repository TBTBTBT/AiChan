using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class LeftDrawer : MonoBehaviour {
	TextMesh text;
	// Use this for initialization
	void Start () {
		text = GetComponent<TextMesh> ();
	}
	
	// Update is called once per frame
	void Update () {
		text.text = "" + GlobalVariable.left;
	}
}
