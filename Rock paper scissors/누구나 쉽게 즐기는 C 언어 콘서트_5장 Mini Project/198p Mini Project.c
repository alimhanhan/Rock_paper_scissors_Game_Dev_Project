#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int computer, user;

	printf("����, ����, �� ���ӿ� ���� ���� ȯ���մϴ�.\n�ϳ��� �����ϼ���(����-0, ����-1, ��-2): ");
	scanf_s("%d", &user);

	srand(time(NULL));	//�õ尪�� ���� ������ ������ ����� �������� �ʴ´�.
	computer = rand() % 3;

	if ((user + 1) % 3 == computer)
	{
		printf("�����: %d\n��ǻ��: %d\n��ǻ�� �¸�", user, computer);
	}
	else if (user == computer)
	{
		printf("�����: %d\n��ǻ��: %d\n�����ϴ�.", user, computer);
	}
	else
	{
		printf("�����: %d\n��ǻ��: %d\n����� �¸�", user, computer);
	}

	return 0;
}