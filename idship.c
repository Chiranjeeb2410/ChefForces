#include <stdio.h>
int main(void) {
	// your code goes here
	int i,n;
	char x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("\n%c",&x);
	if(x=='b'||x=='B')
	printf("BattleShip\n");
	if(x=='c'||x=='C')
	printf("Cruiser\n");
	if(x=='d'||x=='D')
	printf("Destroyer\n");
	if(x=='f'||x=='F')
	printf("Frigate\n");
	}
	return 0;
}