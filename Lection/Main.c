#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include "List.h"

int main() {
	char* locale = setlocale(LC_ALL,"");

	List head = NULL;
	add(&head, 1, 1);
	add(&head, 2, 2);
	add(&head, 14, 4);
	add(&head, 6, 8);
	insertFirst(&head, 12, 15);

	printf("�����:\n");
	print(&head);
	printf("������� ��������: %d �� �����: %d\n", findDataByKey(&head, 14), 14);
	printf("������� ��������: %d �� �����: %d\n", del(&head, 14), 14);
	print(&head);
	return 0;
}
