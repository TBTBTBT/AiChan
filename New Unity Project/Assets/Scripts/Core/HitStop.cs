using UnityEngine;
using System.Collections;

public class HitStop : MonoBehaviour {

	// Use this for initialization
	void Start () {
		EventManager.OnPunchEnemy.AddListener (Stop);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	void Stop(){
		//Debug.Log ("aaa");
		//GlobalVariable.isPause = true;
		StartCoroutine ("Hit");
	}
	private IEnumerator Hit() {  
		GlobalVariable.isPause = true;
		for (int i = 0; i < 4; i++) {  
			if(i==3)GlobalVariable.isPause = false;
			yield return null;  
		}  
	}  
}
