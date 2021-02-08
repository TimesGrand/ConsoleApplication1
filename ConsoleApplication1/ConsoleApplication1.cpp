﻿
#include <iostream>

//=========================================================================================
// 1. Создать и инициализировать переменные пройденных типов данных 
//=========================================================================================

	short int nSmInt = 31;
	int nInt = 13;
	long long nLong = 1'000'000'000;
	char cChar = 'F';
	float fFloat = 4.444;
	double G = 8.888888;

//=========================================================================================
// 2. Создать перечисление enum с возможными вариантами символов для игры в крестики нолики
//=========================================================================================

	enum TicTacToeCell { TC_EMPTY, TC_CROSS, TC_ZERO};

//==============================================================================================
// 3. Создать массив, способный содержать значения такого перечисления и  инициалиризировать его
//==============================================================================================


	TicTacToeCell array[3][3] = { {TC_EMPTY, TC_EMPTY, TC_EMPTY},
								  {TC_EMPTY, TC_EMPTY, TC_EMPTY},
								  {TC_EMPTY, TC_EMPTY, TC_EMPTY} };


//==============================================================================================
// 4. ДЗ со звездочкой. Создать структуру данных и снабдить его всеми необходимыми свойствами
//==============================================================================================

	struct TicTacToe
	{
		TicTacToeCell array[3][3];
	    bool isGameFinished;
		bool isFirstPlayerWon;
		long long Player1ID, Player2ID;
		TicTacToeCell ePlayer1, ePlayer2;
		const unsigned int nFieldSize = 3;
	};

//==============================================================================================
// 5. ДЗ с двумя звездочками. Создать структуру объединяющую: union и 3 битовых поля
//==============================================================================================

	union MyVariantData {
		int MyInt;
		float MyFloat;
		char MyChar;
	};

	struct MyVariant {
		MyVariantData data;
		unsigned int isInt : 1;
		unsigned int isFloat : 1;
		unsigned int isChar : 1;
	};

	int main()
	{
		MyVariant var;

		var.data.MyFloat = 77.7777;
		var.isChar = 0;
		var.isFloat = 1;
		var.isInt = 0;

		var.data.MyChar = 'G';
		var.isChar = 1;
		var.isFloat = 0;
		var.isInt = 0;

		return 0;
	}