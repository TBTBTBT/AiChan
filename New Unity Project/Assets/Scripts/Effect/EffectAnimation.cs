using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class EffectAnimation : CanPauseAnimation {
	[SerializeField] List<Sprite> image;
	
	//[SerializeField] List<Sprite> jumpImage;
	//[SerializeField] List<Sprite> damageImage;
	//[SerializeField] List<Sprite> mistakeImage;
	int time = 0;
	int num = 0;
	SpriteRenderer r;
	// Use this for initialization
	void Start () {
		r = gameObject.GetComponent<SpriteRenderer>();
		if (image.Count > 0)
			r.sprite = image [0];
		
	}
	
	// Update is called once per frame
	override protected void NoPauseFixed() {
		time++;
		if (time > 2) {
			time = 0;
			num++;
			if(num >= image.Count) Destroy(this.gameObject);
		}
		if (time == 0) {
			if (image.Count > num) {
				r.sprite = image [num];
			}

		}
	}
}
