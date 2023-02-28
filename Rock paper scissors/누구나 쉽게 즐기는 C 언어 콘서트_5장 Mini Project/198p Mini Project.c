#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int computer, user;

	printf("가위, 바위, 보 게임에 오신 것을 환영합니다.\n하나를 선택하세요(가위-0, 바위-1, 보-2): ");
	scanf_s("%d", &user);

	srand(time(NULL));	//시드값을 주지 않으면 난수가 제대로 생성되지 않는다.
	computer = rand() % 3;

	if ((user + 1) % 3 == computer)
	{
		printf("사용자: %d\n컴퓨터: %d\n컴퓨터 승리", user, computer);
	}
	else if (user == computer)
	{
		printf("사용자: %d\n컴퓨터: %d\n비겼습니다.", user, computer);
	}
	else
	{
		printf("사용자: %d\n컴퓨터: %d\n사용자 승리", user, computer);
	}

	return 0;
}