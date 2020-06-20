//Exercise 13.28: Given the following classes, implement a default constructor
//and the necessary copy - control members.
//(a)
#include<string>
class TreeNode {
public://also include public specifiers in both classes since the example didn't have them and the class would not work properly without them.
	//default constructor
	TreeNode(std::string str = std::string("")) :value(str), count(new int(1)),left(nullptr),right(nullptr) {}
	//copy constructor
	TreeNode(const TreeNode& item) :value(item.value),count(item.count),left(item.left),right(item.right) { ++*count; }
	//assignment operator
	TreeNode operator=(const TreeNode& item) {
		++* item.count;
		if (-- * count == 0) {
			if (right)
				delete right;
			if (left)
				delete left;

		}
		value = item.value;
		count = item.count;
		left = item.left;
		right = item.right;
		return *this;
	}
	//destructor
	~TreeNode() {
		if (-- * count == 0) {
			if (right)
				delete right;
			if (left)
				delete left;
		}
		delete count;
	}

private:
	std::string value;
	int* count;// this was not a pointer in the example but its not possible to implements the copy members properly without having this as a pointer to int instead of an int.
	TreeNode* left;
	TreeNode* right;
};
//(b)
class BinStrTree {
public:
	//default constructor
	BinStrTree() :root(new TreeNode()) {}
	//copy constructor
	BinStrTree(const BinStrTree& c):root(new TreeNode(*c.root)){}
	//assignment operator
	BinStrTree operator=(const BinStrTree& item) {
		TreeNode* temp = item.root;
		delete root;
		root = temp;
		return *this;
	}

private:
	TreeNode* root;
};