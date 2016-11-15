using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
public class Reset : MonoBehaviour {
	[SerializeField]AiChan ai;
	int missTime = 0;
	// Use this for initialization
	void Start(){
		missTime = 0;

	}
	void Update () {
		if (Input.GetKey (KeyCode.R) || missTime > 120) {

			if (GlobalVariable.left > 0) {
				//Application.LoadLevel (this);
				SceneManager.LoadScene(SceneManager.GetActiveScene ().name);
			}
			else {
				SceneManager.LoadScene("title");
				GlobalVariable.Reset ();
			}
		}
		if (ai.IsMistake() == true) {
			missTime ++;
		}
	}
}
