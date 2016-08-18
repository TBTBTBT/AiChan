using UnityEngine;
using System.Collections;

public class Title : MonoBehaviour {

	// Use this for initialization
	void Start () {
		EventManager.OnTouchBegin.AddListener(StartGame);
	}
	
	// Update is called once per frame
	void StartGame () {
		Application.LoadLevel("Stage01");
	}
}
