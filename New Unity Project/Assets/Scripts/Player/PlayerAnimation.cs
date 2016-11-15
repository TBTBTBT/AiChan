using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class PlayerAnimation : CanPauseAnimation {
	[SerializeField] AiChan ai;
	[SerializeField] List<Sprite> walkImage;
	[SerializeField] List<Sprite> jumpImage;
	[SerializeField] List<Sprite> damageImage;
	[SerializeField] List<Sprite> mistakeImage;
	float[] walkTransform = {0.01f,0,0.01f,0};
	int time = 0;
	int num = 0;
	int motion = 0;
	SpriteRenderer r;
	// Use this for initialization
	void Start () {
		r = gameObject.GetComponent<SpriteRenderer>();
		if (walkImage.Count > 0)
			r.sprite = walkImage [0];
	}

	// Update is called once per frame
	override protected void NoPauseFixed() {
		time++;
		AiStatus ();
			switch (motion){
			case 0:Walk ();break;
			case 1:Jump ();break;
			case 2:Damage();break;
			case 3:Mistake();break;
			}



	}
	void AiStatus(){
		if (ai.IsMistake () == true) {
			ChangeMotion(3);
		}
		else if (ai.IsDamaged () == true) {
			ChangeMotion(2);
		}
		else if (ai.IsJump () == true) {
			ChangeMotion(1);
		} else {
			ChangeMotion(0);
		}
	}
	void ChangeMotion(int m){
		if (motion != m) {
			motion = m;
			num = 0;
			time = 0;
		}
	}
	void Walk(){
		if (time > 8) {
			time = 0;
			num++;
		}
		if (time == 0) {
			if (walkImage.Count <= num) {
				num = 0;
			}
			if (walkImage.Count > num) {
				r.sprite = walkImage [num];
			}
			if (walkTransform.Length > num) {
				SetHeight (walkTransform [num]);
			}
		}
	}
	void Jump(){
		if (time > 1) {
			time = 0;
			num++;
		}
		if (time == 0) {
			if (jumpImage.Count <= num) {
				num = jumpImage.Count - 1;
			}
			if (jumpImage.Count > num) {
				r.sprite = jumpImage [num];
				SetHeight (0);
			}
		}

	}
	void Damage(){
		if (time > 8) {
			time = 0;
			num++;
		}
		if (time == 0) {
			if (damageImage.Count <= num) {
				num = damageImage.Count - 1;
			}
			if (damageImage.Count > num) {
				r.sprite = damageImage [num];
				SetHeight (0);
			}
		}

	}
	void Mistake(){
		if (time > 8) {
			time = 0;
			num++;
		}
		if (time == 0) {
			if (mistakeImage.Count <= num) {
				num = 0;
			}
			if (mistakeImage.Count > num) {
				r.sprite = mistakeImage [num];
				SetHeight (0);
			}
		}

	}
	void SetHeight(float h){
		transform.localPosition = new Vector3 (transform.localPosition.x,h,transform.localPosition.z);
	}
}
