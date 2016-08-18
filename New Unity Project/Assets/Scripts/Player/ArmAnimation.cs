using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class ArmAnimation : MonoBehaviour {
	[SerializeField] List<Sprite> armImage;
	[SerializeField]private Arm arm;
	//int time = 0;
	//int num = 0;
	int motion = 0;
	SpriteRenderer r;

	void Start () {
		r = gameObject.GetComponent<SpriteRenderer>();
	}
	
	// Update is called once per frame
	void Update () {
		//time++;
		IsGrab ();

		/*switch (motion){
		case 0:Paper ();break;
		case 1:Rock ();break;
		}
		*/
	}
	void ChangeMotion(int m){
		if (motion != m) {
			motion = m;
			//num = 0;
			//time = 0;
			if(armImage.Count>motion){
				r.sprite = armImage[motion];
			}
		}
	}
	/*
	void Paper(){
		
	}
	void Rock(){

	}
	*/
	void IsGrab(){
		if (arm.IsGrab () == true) {
			ChangeMotion (1);
		} else {
			ChangeMotion (0);
		}


	}
}
