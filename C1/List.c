#include <stdio.h>

typedef int element;
typedef struct ListNode {
	element data;  // 데이터 필드: element타입으로 데이터 저장

	struct ListNode* link; // 링크 필드 : 현제 구조체를 가르키는 포인터 정의
}ListNode;


int main(void) {
	ListNode* ph; // 포인터 생성
	ph = (ListNode*)malloc(sizeof(ListNode)); // 노드 크기만큼 동적 메모리 할당

	
}