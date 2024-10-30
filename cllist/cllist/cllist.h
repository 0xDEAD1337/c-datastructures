/*****************************************************************//**
 * \file   cllist.h
 * \brief  
 * 
 * \author Miller K.
 * \date   October 2024
 *********************************************************************/

#pragma once
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
 * @param compareFunc Pointer to a function that properly compares data stored in two cllNodes.
 * @param retList Pointer to a pointer to the cllist that is created.
 * @returns 0 on failure, 1 on success
 */
INT cllCreate(destroyData* destroyFunc, compareData* compareFunc, cllist** retList);


/**
 * @brief creates a circularly linked list.
 * @param destroyFunc Pointer to a function that properly destroys data stored in a cllNode.
 * @param compareFunc Pointer to a function that properly compares data stored in two cllNodes.
 * @param retList Pointer to a pointer to the cllist that is created.
 * @returns 0 on failure, 1 on success
 */
INT cllGet(cllist* list, cllNode* retData);


/**
 * @brief creates a circularly linked list.
 * @param destroyFunc Pointer to a function that properly destroys data stored in a cllNode.
 * @param compareFunc Pointer to a function that properly compares data stored in two cllNodes.
 * @param retList Pointer to a pointer to the cllist that is created.
 * @returns 0 on failure, 1 on success
 */
INT cllSort(cllist* list);


/**
 * @brief creates a circularly linked list.
 * @param destroyFunc Pointer to a function that properly destroys data stored in a cllNode.
 * @param compareFunc Pointer to a function that properly compares data stored in two cllNodes.
 * @param retList Pointer to a pointer to the cllist that is created.
 * @returns 0 on failure, 1 on success
 */
INT cllRemove(cllist* list, void * retData);


/**
 * @brief creates a circularly linked list.
 * @param destroyFunc Pointer to a function that properly destroys data stored in a cllNode.
 * @param compareFunc Pointer to a function that properly compares data stored in two cllNodes.
 * @param retList Pointer to a pointer to the cllist that is created.
 * @returns 0 on failure, 1 on success
 */
INT cllInsert(cllist* list);


/**
 * @brief creates a circularly linked list.
 * @param destroyFunc Pointer to a function that properly destroys data stored in a cllNode.
 * @param compareFunc Pointer to a function that properly compares data stored in two cllNodes.
 * @param retList Pointer to a pointer to the cllist that is created.
 * @returns 0 on failure, 1 on success
 */
INT cllClear(cllist* list);


/**
 * @brief creates a circularly linked list.
 * @param destroyFunc Pointer to a function that properly destroys data stored in a cllNode.
 * @param compareFunc Pointer to a function that properly compares data stored in two cllNodes.
 * @param retList Pointer to a pointer to the cllist that is created.
 * @returns 0 on failure, 1 on success
 */
INT cllDestroy(cllist* list);


// End of cllist.h
