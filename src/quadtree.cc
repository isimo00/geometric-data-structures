#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

class quadtree{
	private:
		struct node{
			pair<int, int> keys;
			node* nw;
			node* ne;
			node* sw;
			node* se;

			node(int first, int second): nw(NULL), ne(NULL), sw(NULL), se(NULL) {
				keys = make_pair(first, second);
			}
			~node(){
				delete nw; delete ne; delete sw; delete se;
			}
		};

	public:
		quadtree(){
			// test
		};
		~quadtree(){};
};

int main(){
	quadtree test;
}
