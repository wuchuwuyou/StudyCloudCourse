#include "stdio.h"
#define MAXH 1001
#define MINH -10001
int H[MAXH],size;

void creat();
void insert(int x);

int main(int argc, char const *argv[])
{
	int m,n;
	scanf("%d %d",&n,&m);
	creat();
	int i,x;
	for (i = 0;i<n;i++) {
		scanf("%d",&x);
		insert(x);
	}
	int j;
	for (int i = 0; i < m; ++i)
	{
		scanf("%d",&j);
		printf("%d",H[j]);
		while(j>1) {
			j/=2;
			printf(" %d",H[j]);
		}
		printf("\n");
	}

	return 0;
}
void creat() {
	H[0] = MINH;
	size = 0;
}
void insert(int x) {

	if (size >= MAXH -1)	
	{
		// printf("%s\n", );
		return;
	}
	int i;
	for (i = ++size; H[i/2]>x; i/=2)
	{
		H[i] = H[i/2];
	}
	H[i] = x;

}