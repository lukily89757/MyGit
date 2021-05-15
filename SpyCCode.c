/**
 * @file SpyCCode.c
 * @brief 
 * @author wangh (wanghuan3037@fiberhome.com)
 * @version 1.0
 * @date 2021-01-06
 * 
 * @copyright Copyright (c) 2021  XX通信公司
 * 
 * @par 修改日志:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2021-01-06 <td>1.0     <td>wangh     <td>内容
 * </table>
 */
////////////////////////////////////////
// Spy C Code Implementation
////////////////////////////////////////
#include "vspy.h"

#ifdef SpyCode_EN

// module variables
/**
 * @brief 
 */
int a;
///this is char test variable
char b;

// TODO: add global variables here

// TODO: add event handlers here

static void Spy_EveryMessage(GenericMessage * p_Msg)
{
	// TODO: add something you want to do for every message
}

void Spy_EveryLongMessage(GenericLongMessage * p_Msg)
{
	// TODO: add something you want to do for every long message
}

void Spy_EveryLoop(unsigned int uiCurrentTime)
{
	// TODO: add something you want to do every millisecond
}
void Spy_EveryGUILoop()
{
	// TODO: write code to interact with the vehicle spy gui (this is called on the GUI thread)
}

void Spy_ErrorState(int iNetwork, int iTxErrorCount, int iRxErrorCount, int iErrorBitfield)
{
}

void Spy_ErrorFrame(int iNetwork, int iTxErrorCount, int iRxErrorCount, int iErrorBitfield)
{
}

void Spy_Stopped()
{

	// TODO: add stopped code
}

/**
 * @brief 
 * @param  iKey             My Param doc
 * @param  iCTRLPressed     My Param doc
 * @param  iALTPressed      My Param doc
 */
void Spy_KeyPress(int iKey, int iCTRLPressed, int iALTPressed)
{
	// TODO: add key handler code
}

/***************************************************************
*brief Spy_Started
*param void
*return void
***************************************************************/
void Spy_Started()
{
	// TODO: add started code
}

/**
 * @brief 
 */
void Spy_BeforeStarted()
{
	// TODO: add before started code
}

/**
* @brief main loop function
* @param void
* @return void
**/
void Spy_Main()
{
	// TODO: Add code here to run every time Spy is run
	do 
	{
			// delay for one second
			Sleep(1000);
			// write to the output window
			Printf("Another Second happened\n");

			// new line
			
	} while (1);
}

#endif
