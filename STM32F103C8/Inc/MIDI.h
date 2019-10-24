/*
*********************************************************************************************************
*
* Filename      : MIDI.h
* Version       : V1.00
* Programmer(s) : Julian Schotborgh
*
*  21-10-19 	libs - defines - functies
*********************************************************************************************************
*/

/*
*********************************************************************************************************
 * Libraries
*********************************************************************************************************
*/
#include 	"includes.h"

/*
*********************************************************************************************************
 * Defines
*********************************************************************************************************
*/
#define NOTE_ON			9
#define NOTE_OFF		8
#define CONT_CHANGE		11
#define PROG_CHANGE		12
#define PITCH			14

/*
*********************************************************************************************************
 * Functions
*********************************************************************************************************
*/
void MIDI_PROC(uint8_t MIDI_DATA[2],uint8_t buflen);
