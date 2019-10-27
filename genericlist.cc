#ifndef GENERICLIST_H
#define GENERICLIST_H

#include<iostream>
#include<cstdlib>
#include"genericlist.h"
using namespace std;

namespace listsavitch
{
	template<class ItemType>
	GenericList<ItemType>::GenericList(int max):maxLength(max),currentLength(0){
		item=new ItemType[maxLength];
	}

	template<class ItemType>
	GenericList<ItemType>::~GenericList()
	{
		delete [] item;
	}

	template<class ItemType>
	int GenericList<ItemType>::length() const
	{
		return currentLength;
	}

	template<class ItemType>
	void GenericList<ItemType>::add(ItemType newItem)
	{
		if(full())
		{
			cout<<"Error: Full.\n";
			exit(1);
		}
		else
		{
			item[currentLength]=newItem;
			currentLength=currentLength+1;
		}
	}

	template<class ItemType>
	bool GenericList<ItemType>::full() const
	{
		return currentLength==maxLength;
	}

	template<class ItemType>
	void GenericList<ItemType>::erase()
	{
		currentLength=0;
	}
}

#endif
