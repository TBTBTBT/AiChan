using UnityEngine;
using System.Collections;

public class Arm : CanPause {
	private bool isPunching = false;
	private int punchStatus = 0;//0:end 1:start
	private bool isGrab = false;
	private bool playerEndAim = false;
	private int punchTimeMax = 18;
	private float armSize = 1f;
	private Vector3 grabPos;
	private Vector3 TouchPos;
	private BoxCollider2D col;
	[SerializeField]private Camera cam;
	[SerializeField]private AiChan player;
	//
	float GetRad(Vector2 len){
		float angle = - Mathf.Atan2(len.x, len.y) * Mathf.Rad2Deg;
		angle += 90f;
		if (angle > 0) {
			return angle;
		} 
		else {
			return 360.0f+angle;
		}
	}
	float EightDirection(Vector2 len){
		float rad = GetRad (len);
		return rad;
		//EightDirection Mode
		/*
		int dir = (int)((rad + 22.5f)/45f);
		return (float)(dir * 45f);
		*/
	}



	void Start () {
		EventManager.OnTouchBegin.AddListener (SetTouchPos);
		EventManager.OnTouchMove.AddListener (StartPunching);
		EventManager.OnTouchEnd.AddListener (EndPunching);
		EventManager.OnGetProtein.AddListener (UpArmSize);
		col = transform.GetComponent<BoxCollider2D> ();
	}
	void SetTouchPos(){
		TouchPos = TouchInput.GetTouchPosition ();
		Debug.Log ("a");
	}
	void StartPunching(){
		if (player.IsMistake () == false) {
			if (isPunching == false && (TouchPos - TouchInput.GetTouchPosition()).magnitude > 100f) {
				EventManager.Invoke (ref EventManager.OnPunchBegin);
				isPunching = true;
				punchPos = 0;
				SetAngle (TouchPos,TouchInput.GetTouchPosition());
				transform.localPosition = new Vector3 (0, 0, 0);
				isGrab = false;
				punchStatus = 1;

				SetColSize ();

			}
		}
	}
	void SetAngle(Vector3 a,Vector3 b){
		//touch only
		//float radius = (GetRad(-(player.transform.position - TouchInput.GetTouchWorldPosition(cam))) - 90);
		//touch move
		float radius = (GetRad(-(a - b)) - 90);
		transform.parent.rotation = Quaternion.AngleAxis (radius,new Vector3(0,0,1));
		//transform.parent.rotation = transform.parent.rotation.SetLookRotation (transform.position - TouchInput.GetTouchWorldPosition(cam),new Vector3(0,0,1));
	}
	void SetColSize(){
		if (punchPos > 0.4f) {
			col.offset = new Vector2 (0,-0.2f);
			col.size = new Vector2 (0.1f,0.4f);
		} else {
			col.offset = new Vector2 (0,-punchPos / 2f);
			col.size = new Vector2 (0.1f,punchPos);
		}
	}
	void Punching(){
		if(player.IsMistake() == true)isGrab = false;
		if (isPunching == true) {
			if(col.enabled == false)col.enabled = true;
			if(isGrab == false){
			//	SetAngle();
			if(punchStatus == 1){
				punchPos +=0.1f;
					if(punchPos>=1 * armSize)punchPos = 1 * armSize;
			}
			if(punchStatus == 0){
				punchPos -=0.1f;
				if(punchPos<=0){
					punchPos = 0;
					isPunching = false;
					isGrab = false;
				}
				
			}
			}
			if(isGrab == false)transform.localPosition = new Vector3(-0f,punchPos - 0.1f,0);

			if(isGrab == true){

				if(playerEndAim == true){
					if(punchStatus == 0){
					punchPos = transform.localPosition.y;
					transform.localPosition = new Vector3(-0f,punchPos - 0.1f,0);
					isGrab = false;
					playerEndAim = false;
					}
				//	EndPunching();
				}
			}
			if(isGrab == true)transform.position = grabPos;

			SetColSize();
			//Debug.Log (col.size);
		}
		if (isPunching == false) {
			if(col.enabled == true)col.enabled = false;
		}
	}
	void EndPunching(){
		if(punchStatus == 1)punchStatus = 0;
	}

	// Update is called once per frame
	override protected void NoPauseFixed() {
		Punching ();
	}
	/*private readonly float[] punchPos = new float[]{
		0f,0.5f,0.85f,0.9f,0.95f,1.0f,0.95f,0.9f,0.85f,0.8f,0.4f
	};*/
	float punchPos = 0;
	public void StopPunching(){
		if (isPunching == true && isGrab == false) {
			isGrab = true;
			grabPos = transform.position;
			EventManager.Invoke(ref EventManager.OnGrab);
		}
	}
	void UpArmSize(){
		if (armSize < 1.4f)
			armSize += 0.2f;
		transform.localScale = new Vector3 (armSize, armSize, 1);
	}
	/*
	void OnTriggerEnter2D(Collider2D c){

		if (c.transform.tag == "Grab") {
			StopPunching();
		}
	}*/
	public bool IsGrab(){
		return isGrab;
	}
	public void EndAim(){
		playerEndAim = true;
	}
}
