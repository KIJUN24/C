/*
	����ڷκ��� ��й�ȣ 4�ڸ��� �Է¹޴µ� �ý��ۿ� ����Ǿ� �ִ� ��й�ȣ�� ���� ��쿡��
	"��й�ȣ�� Ȯ�εǾ����ϴ�.", ������ �ϰ� "�α��� �Ǿ����ϴ�." ������ �ϰ�"���α׷��� �����մϴ�."�� ����Ѵ�.
	��й�ȣ�� Ʋ���ٸ� "��й�ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է����ּ���."�� ����ϰ� ���ѷ����� �����Ѵ�.
	�ý����� ��й�ȣ�� "code"�� �����ϵ��� �Ѵ�.

	������
	��й�ȣ 4�ڸ��� �Է��ϼ���. : abcd
	��й�ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է����ּ���.
	��й�ȣ 4�ڸ��� �Է��ϼ���. : 12ss
	��й�ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է����ּ���.
	��й�ȣ 4�ڸ��� �Է��ϼ���. : code
	��й�ȣ�� Ȯ�εǾ����ϴ�.
	�α��� �Ǿ����ϴ�.
	���α׷��� �����մϴ�.
*/

#include<stdio.h>
#include<string.h>
#define LENGTH 5

int main(void)
{
	char inputNum[LENGTH] = { NULL };
	char secretNum[LENGTH] = "code";
	int cnt = 0, length = 0;

	char cmp1[LENGTH] = "dcba";
	char cmp2[LENGTH] = "code";
	char cmp3[LENGTH] = "abcd";

	printf("strcmp(secretNum, cmp1)�� ���ϰ� : %d\n", strcmp(secretNum, cmp1));	// d�� c���� �ڿ� �����Ƿ� -1���
	printf("strcmp(secretNum, cmp2)�� ���ϰ� : %d\n", strcmp(secretNum, cmp2));	// �� ���ڿ��� �����Ƿ� 0���
	printf("strcmp(secretNum, cmp3)�� ���ϰ� : %d\n", strcmp(secretNum, cmp3));	// a�� c���� �տ� �����Ƿ� 1���

	do
	{
again:	
		printf("��й�ȣ�� �Է��ϼ���. : ");
		scanf_s(" %s", inputNum, sizeof(inputNum));
		/*printf("\ninput : %d %s\n\n",sizeof(inputNum)/sizeof(char), inputNum);
		printf("secret : %d %s\n\n",sizeof(secretNum)/sizeof(char), secretNum);*/
		

		//for (cnt = 0; inputNum[cnt] != NULL; cnt++)
		//{
		//	//if (inputNum[cnt] >= 0 && inputNum[cnt] <= 9)
		//	//{
		//	//	printf("��й�ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է����ּ���.\n");
		//	//	goto again;
		//	//}

		//	if (inputNum[cnt] != secretNum[cnt])
		//	{
		//		printf("��й�ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է����ּ���.\n");
		//		goto again;
		//	}
		//	else
		//	{
		//		//printf("check\n");
		//		continue;
		//	}
		//}


		//if (inputNum[0] == 'c' && inputNum[1] == 'o' && inputNum[2] == 'd' && inputNum[3] == 'e')
		if(strcmp(secretNum, inputNum) == 0)
		// strcmp()�Լ��� ���� 2���� ���ڿ��� ������ 0�� ����,
		// ù ��° �Ű����� ���ڿ��� �ι�° ���ڿ����� ���ĺ� ������ �տ� ������ ������ ����(-1),
		// �ݴ�� ���ĺ� ������ �ڿ� �ִٸ� ���(1)�� ����.
		{
			printf("��й�ȣ�� Ȯ�εǾ����ϴ�.\n");
			printf("�α��� �Ǿ����ϴ�.\n");
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else
		{
			printf("��й�ȣ�� �ٽ� �Է����ּ���.\n");
			goto again;
		}

		

	} while (1);

	return 0;
}