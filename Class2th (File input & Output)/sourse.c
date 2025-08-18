#include <stdio.h>

#define SIZE 10

int main()
{
#pragma region GetAsynckeyState
	// Window API에서 제공되는 입력 처리 함수로, 지정된 키의 상태를
	// 비동적으로 확인할 때 사용되는 함수입니다.

	// Key state
	
	// 0x0000 : 이전에 누른 적이 없고, 호출 시점에도 눌려있지 않은 상태

	// 0x0001 : 이전에 누른 적이 있고, 호출 시점에는 눌려있지 않은 상태

	// 0x8000 : 이전에 누른 적이 없고, 호출 시점에는 눌려있는 상태

	// 0x8001 : 이전에 누른 적이 있고, 호출 시점에도 눌려있는 상태

	const char* dialog[SIZE];

	dialog[0] = "안녕하세요...?";
	dialog[1] = "누구신지...?";
	dialog[2] = "탐정입니다";
	dialog[3] = "아 네 탐정님 제때 오셨군요";
	dialog[4] = "그래서... 무슨 의뢰를....";
	dialog[5] = "저를 살해하려는 사람이 있는것 같아서요";
	dialog[6] = "살해미수범 색출이죠?";
	dialog[7] = "이해가 빠르시네요";
	dialog[8] = "살해범 색출은 내 전문이죠";
	dialog[9] = "그러시니 안심이 되네요";
	
#pragma endregion


	return 0;
}
