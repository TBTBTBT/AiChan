using UnityEngine;
using System.Collections;

public class Arm : MonoBehaviour {
	private bool isPunching = false;
	private int punchTime = 0;
	private int punchTimeMax = 18;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	if (TouchInput.GetTouch() == TouchInfo.Ended) {
			if(isPunching == false)StartPunch();
	}
		Punching ();
	}
	/*private readonly float[] punchPos = new float[]{
		0f,0.5f,0.85f,0.9f,0.95f,1.0f,0.95f,0.9f,0.85f,0.8f,0.4f
	};*/
	float punchPos = 0;
	void StopPunching(){
		if (isPunching == true) {
		}
	}
	void Punching(){
		if (isPunching == true) {
		punchTime++;
			punchPos = 1;
			if(punchTime < 6)punchPos = 1 * punchTime/6.0f;
			if(punchTimeMax - punchTime < 6)punchPos = (punchTimeMax - punchTime) * 1 / 6.0f;
		//punchPos = Mathf.Sin(punchTime * (180 / punchTimeMax)  * Mathf.PI/180);
		//if(punchTime<punchPos.Length)transform.localPosition = new Vector3(-0.05f,punchPos[punchTime],0);
		transform.localPosition = new Vector3(-0.05f,punchPos,0);
		if(punchTime>punchTimeMax){
				transform.localPosition = new Vector3(-0.05f,-0f,0);
				punchTime = 0;
				isPunching = false;
			}
		}

	}
	void StartPunch(){
		isPunching = true;
	}
}
