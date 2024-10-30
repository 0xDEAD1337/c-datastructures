
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


INT cllCreate(cllist* list, destroyData* destroyFunc, compareData* compareFunc);

INT cllGet(cllist* list, cllNode* retData);

INT cllSort(cllist* list);

INT cllRemove(cllist* list, void * retData);

INT cllInsert(cllist* list);

INT cllClear(cllist* list);

INT cllDestroy(cllist* list);


// End of cllist.h
