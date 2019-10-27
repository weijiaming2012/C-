#include<iostream>
#include<cstddef>
#include "stack.h"
using namespace std;

namespace stacksavitch
{
	Stack::Stack():top(NULL){}

	Stack::Stack(const Stack& aStack)
	{
		
	}

	Stack::~Stack()
	{
		char next;
		while(!empty())
		{
			next=pop();
		}
	}

	bool Stack::empty() const
	{
		return top==NULL;
	}

	void Stack::push(char theSymbol)
	{
		
	}

	char Stack::pop()
	{
		if(empty())
		{
			cout<<"Errpr ...";
			exit(1);
		}

		char result=top->data;

		StackFramePtr tempPtr;
		tempPtr=top;
		top=top->link;

		delete tempPtr;

		return result;
	}

}
