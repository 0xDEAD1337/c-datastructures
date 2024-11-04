/*****************************************************************//**
 * \file   cllist.h
 * \brief  Header file for circularly-linked list.
 * 
 * \author 
 * \date   
 *********************************************************************/

#pragma once

#include <stdio.h>
#include <Windows.h>

typedef INT(*destroyData)(void* data);
typedef INT(*compareData)(void* arg1, void* arg2);

typedef struct _CLLNODE {

	struct _CLLNODE* next;
	void* data;

} cllNode;

typedef struct _CLLIST {

	INT size;
	cllNode* head;
	cllNode* tail;
	destroyData* destroyFunc;
	compareData* compareFunc;

} cllist;

/**
 * @brief creates a circularly linked list.
 * @param destroyFunc Pointer to a function that properly destroys data stored in a cllNode.
 * @param retList Pointer to a pointer to the cllist that is created.
 * @returns 0 on success.
 */
UINT8 cllCreate(destroyData* destroyFunc, cllist** retList);


/**
 * @brief Gets the first occurrence of an item in a linked list.
 * @param list Pointer to the cllist to retrieve data from.
 * @param compareFunc Pointer to a function that compares data stored in two cllNodes.
 * @param retData Pointer to a pointer of the sought item.
 * @returns 0 on success.
 */
UINT8 cllGet(cllist* list, compareData* compareFunc, void** retData);


/**
 * @brief Sorts a circular linked list.
 * @param list Pointer to the cllist to sort.
 * @param compareFunc Pointer to a function that properly compares data stored in two cllNodes.
 * @returns 0 on success.
 */
UINT8 cllSort(cllist* list, compareData* compareFunc);


/**
 * @brief Removes an item from a circularly linked list.
 * @param list Pointer to the cllist to remove the item from.
 * @param compareFunc Pointer to a function that properly compares data stored in two cllNodes.
 * @param retData Pointer to a pointer of the removed item.
 * @returns 0 on success.
 */
UINT8 cllRemove(cllist* list, compareData* compareFunc);


/**
 * @brief Inserts an item at a specific index in the circularly linked list.
 * @param list Pointer to the cllist to intsert data at.
 * @param compareFunc Pointer to a function that properly compares data stored in two cllNodes.
 * @returns 0 on success.
 */
UINT8 cllInsert(cllist* list, compareData* compareFunc, void* data);


/**
 * @brief creates a circularly linked list.
 * @param list Pointer to the cllist to remove the item from.
 * @returns 0 on success.
 */
UINT8 cllClear(cllist* list);


/**
 * @brief creates a circularly linked list.
 * @param list Pointer to the cllist to remove the item from.
 * @returns 0 on success.
 */
UINT8 cllDestroy(cllist* list);


// End of cllist.h

