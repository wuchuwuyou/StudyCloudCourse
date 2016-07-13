#include "stdio.h"

#define MaxTree 10
#define ElementType char 
#define Tree int
#define Null -1

struct TreeNode
{
	ElementType element;
	Tree left;
	Tree right;
}T1[MaxTree],T2[MaxTree];