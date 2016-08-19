using UnityEngine;
using System.Collections;
[RequireComponent (typeof (Rigidbody2D))]
public class AiChan : CanPause {
	Rigidbody2D rg;
	[SerializeField]Arm arm;
	//private AutoJump aj;
	public Vector2 maxVelocity = new Vector2(10f,4f);
	public float spd = 2;
	public float jump = 5;
	public float grav = 0.2f;
	public int hp = 3;  
	int jumpLeft = 0;
	bool isLand=false;
	bool isJump=false;
	bool isDamage=false;
	bool isMistake =false;
	bool isCleard = false;
	int  damageTime = 0;
	int  grabTime = 0;
	// Use this for initialization
	void Start () {
		rg = GetComponent<Rigidbody2D> ();
	//	aj = transform.GetChild (0).GetComponent<AutoJump> ();
	}
	void ModifyVelocity(){
		//if (rg.velocity.y > maxVelocity.y) {
	//		rg.velocity = new Vector2(rg.velocity.x,maxVelocity.y);
	//	}
		if (rg.velocity.y <= -maxVelocity.y) {
			rg.velocity = new Vector2(rg.velocity.x,-maxVelocity.y);
		}
		if (rg.velocity.y >= maxVelocity.x) {
			rg.velocity = new Vector2(rg.velocity.x,maxVelocity.y);
		}
		if (rg.velocity.y <= -maxVelocity.y) {
			rg.velocity = new Vector2(rg.velocity.x,-maxVelocity.y);
		}
	}
	void MoveRight(){
		rg.velocity = new Vector2 (spd,rg.velocity.y);
	}
	void MoveLeft(){
		rg.velocity = new Vector2 (-1f,rg.velocity.y);
	}
	void Stop(){
		rg.velocity = Vector2.zero;
	}
	void Jump(){

		if (jumpLeft > 0) {
			jumpLeft --;
			rg.velocity = new Vector2 (rg.velocity.x, jump);
			EventManager.Invoke(ref EventManager.OnJump);
		}
	}
	void Grav(){
		rg.velocity -= new Vector2 (0,grav);
	}
	void MoveToArm(){
		grabTime++;
		if (grabTime >= 5) {
			Vector3 dir = arm.transform.position - transform.position;
			if (dir.magnitude > 0.4f) {
				dir = dir.normalized / 5;
				transform.position += dir;
			}
			else {
				arm.EndAim();
			}
		} 
	}
	// Update is called once per frame
	override protected void NoPause() {
	}
	override protected void NoPauseFixed() {
		if (isMistake == false) {
			if (isDamage == true) {
				if (damageTime == 0) {
					rg.velocity = new Vector2 (rg.velocity.x, 1.4f);
				}
				if (isLand == true) {
					rg.velocity = new Vector2 (rg.velocity.x, 1.4f);
				}
				MoveLeft ();
				damageTime ++;
				if (damageTime > 40) {
					isDamage = false;
					damageTime = 0;
					jumpLeft = 0;
				}
			}
			if (arm.IsGrab () == false) {

				if (isDamage == false)
					MoveRight ();
				if (isLand == false) {
					isJump = true;
					if (isDamage == false){
						Jump ();
					}
					Grav ();
				} else {
					jumpLeft = 1;
				}
				isLand = false;
				grabTime = 0;
			} else {
				if (isDamage == false)
					jumpLeft = 1;
				Stop ();
				MoveToArm ();
			}
		}
		if(hp <= 0 || isMistake == true ){
			Miss ();
			Grav ();
		}
		ModifyVelocity ();


	}
	void Miss(){
		if (isMistake == false) {
			isMistake = true;
			transform.GetComponent<Collider2D> ().enabled = false;
			rg.velocity = new Vector2 (rg.velocity.x, 1.4f);
		}
	}
	void OnCollisionStay2D(Collision2D c){
		if (c.transform.tag == "Land") {
			//for (int aIndex = 0; aIndex < c.contacts.Length; ++ aIndex) {
			//	Debug.Log(c.contacts[aIndex].normal);
			//}
			if(c.contacts.Length>0){
				if(c.contacts[0].normal == new Vector2(0,1)){
					isLand = true;
					isJump = false;
				}
			}

		} 

	}
	void OnTriggerStay2D(Collider2D c){
		if (c.transform.tag == "Enemy") {
			if(isDamage == false)EventManager.Invoke(ref EventManager.OnDamaged);
			isDamage = true;

		}
	}
	public bool IsJump(){
		return isJump;
	}
	public bool IsDamaged(){
		return isDamage;
	}
}
