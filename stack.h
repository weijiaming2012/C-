#ifndef STACK_H
#define StACK_H

namespace stacksavitch
{
	struct StackFrame
	{
		char data;
		StackFrame *link;
	};

	typedef StackFrame* StackFramePtr;

	class Stack
	{
		private:
			StackFramePtr top;
			
		public:
			Stack();

			Stack(const Stack& aStack);

			~Stack();
	
			void push(char theSymbol);

			void pop();

			bool empty() const;
	};
}

#endif
