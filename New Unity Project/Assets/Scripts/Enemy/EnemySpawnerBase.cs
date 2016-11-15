using UnityEngine;
using System.Collections;
using System.Collections.Generic;
[System.Serializable] 
public struct SpawnInfo{
	public float spawnX;
	public float spawnY;
	public int spawnNum;
	public bool isSpawnLeft;

}
public class EnemySpawnerBase : MonoBehaviour {
	public List<GameObject> enemy;
	public List<SpawnInfo> pattern;
	public AiChan player;
	int enemySpawnNum = 0;

	// Use this for initialization
	void Start () {
		for(int i=0;i<pattern.Count;i++){
			if(pattern[i].spawnX < player.transform.position.x){
				enemySpawnNum ++;
			}
			else break;
		}
	}
	
	// Update is called once per frame
	void Update () {
		if(player){
			if (enemySpawnNum < pattern.Count) {
				if (pattern[enemySpawnNum].spawnX < player.transform.position.x) {
					if(enemy.Count > pattern[enemySpawnNum].spawnNum){
						if(pattern[enemySpawnNum].isSpawnLeft == false) {
						Instantiate(enemy[pattern[enemySpawnNum].spawnNum],new Vector3(player.transform.position.x + 5,pattern[enemySpawnNum].spawnY,0),Quaternion.identity);
						}
						else {
						Instantiate(enemy[pattern[enemySpawnNum].spawnNum],new Vector3(player.transform.position.x - 4,pattern[enemySpawnNum].spawnY,0),Quaternion.identity);
						}
					}
					enemySpawnNum ++;
				}
			}
		}
	}
}
