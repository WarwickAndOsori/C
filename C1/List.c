#include <stdio.h>

typedef int element;
typedef struct ListNode {
	element data;  // ������ �ʵ�: elementŸ������ ������ ����

	struct ListNode* link; // ��ũ �ʵ� : ���� ����ü�� ����Ű�� ������ ����
}ListNode;


int main(void) {
	ListNode* ph; // ������ ����
	ph = (ListNode*)malloc(sizeof(ListNode)); // ��� ũ�⸸ŭ ���� �޸� �Ҵ�

	
}