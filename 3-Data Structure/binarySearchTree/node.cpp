#include "node.h"
node::node(int Data, node *Lc,node *Rc) 
{
	data = Data;
	Lchild = Lc;
	Rchild = Rc;
}

