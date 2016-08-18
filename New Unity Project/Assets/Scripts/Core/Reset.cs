using UnityEngine;
using System.Collections;

public class Reset : MonoBehaviour {

	// Use this for initialization
	void Update () {
		if (Input.GetKey (KeyCode.R)) {
			Application.LoadLevel("Stage01");
		}
		
	}
}
