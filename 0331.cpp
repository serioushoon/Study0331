
#include<iostream>
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
	int Map[10][10] = {
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

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			cout << Map[Y][X];
		}
	}

	return 0;
}