using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class EnemyAnimation : CanPauseAnimation {
	[SerializeField] List<Sprite> walkImage;

	//[SerializeField] List<Sprite> jumpImage;
	//[SerializeField] List<Sprite> damageImage;
	//[SerializeField] List<Sprite> mistakeImage;
	float[] walkTransform = {0.01f,0};
	int time = 0;
	int num = 0;
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
		Walk ();
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
	void SetHeight(float h){
		transform.localPosition = new Vector3 (transform.localPosition.x,h,transform.localPosition.z);
	}
}
