#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

class kdtree{
	private:
		struct node{
			int discr;
			node* left;
			node* right;
			int sz;

			node(int d): discr(d), left(NULL), right(NULL), sz(1){}
			~node(){
				delete left;
				delete right;
			}
		};
		node* root;
		int dim;

		kdtree(const kdtree& t){};
		node* insert(node* p, int key){
			// blah
		}

		int pm(node* p, int j, double z) const{
			// blah
		}
	public:
		kdtree(int K): root(NULL), dim(K) {};
		~kdtree(){
			delete root;
		}

		void insert(int key){
			root = insert(root, key);
		}

		int pm(int j, double z) const {
			return pm(root, j, z);
		}
};

int main(){
	kdtree test(2);

}
