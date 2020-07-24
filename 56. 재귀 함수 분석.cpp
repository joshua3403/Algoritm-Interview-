#include "stdafx.h"

// 내 답안
void recursion(int x)
{
	if (x == 0)
		return;
	else
	{
		recursion(x - 1);
		printf("%d ", x);
	}
}

int main()
{
	int input = 0;
	scanf("%d", &input);
	recursion(input);
	return 0;
}

// 재귀로 경우의 수를 찾을 때 종료지점 설정을 명확히 하자
// 재귀는 스택 프레임을 사용해서 운용한다.
// 스택 프레임 맨 첫 번째에는 main() 함수의 정보가 저장된다.(매개변수, 지역변수, 복귀주소)
// 다음 호출된 함수의 정보가 스택 프레임에 저장된다.