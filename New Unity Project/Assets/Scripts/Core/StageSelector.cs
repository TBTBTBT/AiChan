using UnityEngine;
using System.Collections;

public class StageSelector : MonoBehaviour {
	int selectTime = 0;
	// Use this for initialization
	void Start () {
		selectTime = 0;
	}
	
	// Update is called once per frame
	void Update () {
		selectTime ++;
		if(selectTime>100)
		Application.LoadLevel("Stage01");
	}
}
