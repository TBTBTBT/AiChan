using UnityEngine;
using System.Collections;

public class BossModeStarter : MonoBehaviour {
	[SerializeField]AiChan player;

	public float bossPosX = 0;
	public float bossLoopPosXLeft = 0;
	public float bossLoopPosXRight = 0;
	float backPos = 0;
	// Use this for initialization
	void Start () {
		backPos = bossLoopPosXRight - bossLoopPosXLeft;
	}
	
	// Update is called once per frame
	void Update () {
	if (player) {
			if(player.transform.position.x > bossPosX)player.StartBossMode();
			if(player.transform.position.x > bossLoopPosXRight){
				player.transform.position -= new Vector3(backPos,0,0);
				EventManager.Invoke(ref EventManager.OnPlayerPosChange );
			}
		}
	}
}
