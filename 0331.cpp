
#include<iostream>
#include<conio.h>
using namespace std;

 //int main()
 //{
	// // 1부터 100까지 짝수의 합을 구해보시오. for문 사용
	// int Num = 0;
	// for (int i = 1; i <= 100; i++)
	// {
	//	 if (i % 2 == 0) {
	//		 Num += i;
	//	 }
	// }
	// cout << Num << endl;

	 /*
 *
 **
 ***
 ****
 *****
 for 문으로 프린트하기(cout, printf 제외)*/
//
//	 for (int i = 0; i < 5; i++)
//	 {
//		 for (int j = 0; j <= i; j++)
//		 {
//			 cout << '*';
//		 }
//		 cout << endl;
//	 }
//
////-----------------------------------------------------------
//	 	
//	int KoreanScore = 20;
//	cout << &KoreanScore << endl;
//
//	return 0;
//	 
//
//	 return 0;
//}

int main()
{
	int Map[10][10] = 
	{
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
	};

	int PlayerX = 1;
	int PlayerY = 1;
	bool blsRunning = true;
	//
	while (true) //GameLoop
	{
		//Frame
		//Input();
		char Key = 0;
		Key >> _getch();
		//Tick();
		if (Key == 'd')
		{
			PlayerX++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'w')
		{
			PlayerY++;
		}
		else if (Key == 's')
		{
			PlayerY--;
		}
		else if (Key == 'q')
		{
			blsRunning = false;
		}


		//Render();
		system("cls");

		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "#";
				}
				else if (Map[Y][X] == 0);
				{
					cout << "  ";
				}
			}
			cout << endl;
		}

	}
	return 0;
}