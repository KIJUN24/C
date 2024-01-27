/*
	step01 실행결과

	-----Menu-----
	1. 계좌개설
	2. 입 금
	3. 출 금
	4. 계좌정보 전체 출력
	5. 프로그램 종료

	선택(1~5까지 정수를 입력해주세요) : 2

	[입   금]
	계좌ID : 115
	입금액 : 70
	입금완료

	-----Menu-----
	1. 계좌개설
	2. 입 금
	3. 출 금
	4. 계좌정보 전체 출력
	5. 프로그램 종료

	선택(1~5까지 정수를 입력해주세요) : 4

	[계좌정보]
	계좌ID : 115
	이 름 : 이기준
	잔 액 : 15070
*/
#include<iostream>
using namespace std;

void MenuPrint(void);
void make_account(void);
int choice_menu(void);
void deposit_money(void);
void withdraw_money(void);
void program_end(void);


static int money = 0, id = 0;
static char name[] = { ' ' };


int main(void)
{
	int choice = 0;

	do
	{
re:		MenuPrint();
		choice = choice_menu();
		cout << choice << endl;
		switch (choice)
		{
			case 1:
				make_account();
				cout << id << endl;
				cout << name << endl;
				cout << money << endl;
				goto re;

			/*case 2:
				withdraw_money();*/

			case 5:
				program_end();
				break;

			default:
				cout << "다시 입력해주세요" << endl;
				goto re;
		}
		
		if (choice == 5)
		{
			break;
		}

	} while (1);
	
	return 0;
}

void MenuPrint(void)
// 매뉴를 보여주는 함수
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;

	return;
}

int choice_menu(void)
// 정수 입력하는 함수
{
	int choice = 0;
	cout << endl;
	cout << "(1~5 중에서 정수를 입력해주세요.) 선택 : ";
	cin >> choice;
	return choice;
}

void make_account(void)
{

	cout << "[계좌개설]" << endl;
	cout << "계좌ID : ";
	cin >> id;
	cout << "이름 : ";
	cin >> name;
	getchar();
	cout << "입금액 : ";
	cin >> money;

	return;
}

void program_end(void)
{
	cout << "프로그램을 종료합니다." << endl << endl;
	return;
}