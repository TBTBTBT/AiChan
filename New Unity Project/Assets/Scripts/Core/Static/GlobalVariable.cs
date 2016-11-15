using UnityEngine;
using System.Collections;

public class GlobalVariable : MonoBehaviour {
	public static bool isPause = false;
	public static int left = 4;
	// Use this for initialization
	void Start () {
		isPause = false;
		left--;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	public static void Reset(){
		left = 4;

	}
}
