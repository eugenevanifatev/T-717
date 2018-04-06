#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{
	int b,player=0,comp=0;
	srand(time(NULL));
	cout<<"press enter to begin game..."<<endl;
	getch();
	b=rand()%2+1;
	switch(b)
	{
	case 1:
		{
			for(int i=0;i<4;i++)
			{
				cout<<"player first to do cast"<<endl;
				cout<<"press enter..."<<endl;
				getch();
				b=rand()%6+1;
				player+=b;
				cout<<"throw from player = "<<b<<endl;
				cout<<"copucter to do a throw"<<endl;
				Sleep(100);
				b=rand()%6+1;
				comp+=b;
				cout<<"throw from compucter = "<<b<<endl;
			}
			break;
		}
	case 2:
		{
			for(int i=0;i<4;i++)
			{
				cout<<"copucter first to do a throw"<<endl;
				Sleep(1);
				b=rand()%6+1;
				comp+=b;
				cout<<"throw from compucter = "<<b<<endl;
				cout<<"player to do cast"<<endl;
				cout<<"press enter..."<<endl;
				getch();
				b=rand()%6+1;
				player+=b;
				cout<<"throw from player = "<<b<<endl;
			}
			break;
		}
	}
			if(player>comp)
		{
			cout<<"player win, with score= "<<player<<endl;
		}
			else
			{
				cout<<"computer win, with score= "<<comp<<endl;
			}
	getch();
	return 0;
}