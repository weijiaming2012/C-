#ifndef NODE_H

#define NODE_H

namespace linkedlistofclasses
{
	class Node
	{
		private:
			int data;
			Node* link;

		public:
			Node();
			Node(int value,Node *next);
			int getData() const;
			Node* getLink() const;
			void setData(int value);
			void setLink(Node *next);

	};

	typedef Node* NodePtr;
}

#endif
