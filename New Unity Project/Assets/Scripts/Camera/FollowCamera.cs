using UnityEngine;
using System.Collections;

public class FollowCamera : MonoBehaviour {
	[SerializeField]AiChan p ;
	Vector3 camModPos;
	float bosModPosX = 0;
	float scrollPos = 1.5f;
	float ModPosY = 0;
	// Use this for initialization
	void Start () {
		camModPos = new Vector3(0.4f,0.51f,0);
		bosModPosX = 1.8f;
	}
	
	// Update is called once per frame
	void Update () {
		if (p != null) {
			if(p.IsMistake() == false){
				if (p.transform.position.y <= scrollPos) {
					if(ModPosY>0)ModPosY -= 0.05f; 
					else ModPosY = 0;
					transform.position = new Vector3 (p.transform.position.x + camModPos.x, camModPos.y + ModPosY , transform.position.z);
			} else {

					if(ModPosY<0.5f)ModPosY += 0.05f;
					else ModPosY = 0.5f;
					transform.position = new Vector3 (p.transform.position.x + camModPos.x, p.transform.position.y + camModPos.y - scrollPos + ModPosY , transform.position.z);
			}
			}

			if(p.IsBossMode() == true)
			{
				if(bosModPosX > camModPos.x){
					camModPos += new Vector3(0.05f,0,0); 
				}
				transform.position = new Vector3 (p.transform.position.x + camModPos.x,  camModPos.y, transform.position.z);

			}

		}
	}
}
