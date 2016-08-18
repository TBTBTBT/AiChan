using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameSoundManager : MonoBehaviour {
	AudioSource audioSource; 
	AudioSource audioSourceLoop; 
	//public AudioClip bgm;
	//public AudioClip hitsword;

	public AudioClip bgm;
	public AudioClip punch;
	public AudioClip enemyHit;
	public AudioClip jump;
	public AudioClip grab;
	public AudioClip damage;
	// Use this for initialization
	void Start () {
		audioSource = gameObject.AddComponent<AudioSource>();
		audioSourceLoop = gameObject.AddComponent<AudioSource>();
		audioSourceLoop.loop = true;
		audioSourceLoop.clip = bgm;

		//audioSource.spatialBlend = 0;
		audioSourceLoop.spatialBlend = 0;
		StartBGM ();
		EventManager.OnPunchBegin.AddListener (Punch);
		EventManager.OnPunchEnemy.AddListener (EnemyHit);
		EventManager.OnJump.AddListener (Jump);
		EventManager.OnGrab.AddListener (Grab);
		EventManager.OnDamaged.AddListener (Damage);
		audioSource.volume = 1f;
	}
	
	// Update is called once per frame
	void StartBGM () {
		audioSourceLoop.volume = 0.5f;
		audioSourceLoop.Play();
	}
	void StopBGM (int arg) {
		audioSourceLoop.Stop();
	}
	void Damage(){
		audioSource.PlayOneShot(damage);
	}
	void Jump () {
		audioSource.PlayOneShot(jump);
	}
	void Grab(){

		audioSource.PlayOneShot (grab);
	}
	void Punch () {

		audioSource.PlayOneShot(punch);

	}
	void EnemyHit() {
		audioSource.PlayOneShot(enemyHit);
		
	}
}
