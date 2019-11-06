#include "List.h"
#include <stdio.h>
#include <malloc.h>

typedef struct Node {
	int key;
	int data;
	List* next;
} *List;

void insertFirst(List* head, int key, int data)
{
	if (*head == NULL) {
		(*head) = malloc(sizeof(struct Node));
		(*head)->key = key;
		(*head)->data = data;
		(*head)->next = NULL;
	}
	else {
		List newOne = malloc(sizeof(struct Node));
		newOne->key = key;
		newOne->data = data;
		newOne->next = (*head);
		(*head) = newOne;
	}
}

/*
	В данной функции реализовано обычное, последовательное добавление в список
	Ваша задача - переписать логику в этой функции так, чтобы при добавлении
	происходила автоматическая сортировка по ключу (это не значит, что после добавления
	нового элемента нужно вызывать каждый раз функцию sort()) (за уточнением в лс)
*/
void add(List* head, int key, int data)
{
	if (*head == NULL) {
		*head = malloc(sizeof(struct Node));
		(*head)->key = key;
		(*head)->data = data;
		(*head)->next = NULL;
	}
	else {
		List current = (*head);
		while (current->next != NULL) {
			current = current->next;
		}
		List newOne = malloc(sizeof(struct Node));
		newOne->key = key;
		newOne->data = data;
		newOne->next = NULL;
		current->next = newOne;
	}
}

int del(List* head, int key)
{
	List current = (*head);
	List prev = NULL;
	while (current->key != key) {
		prev = current;
		current = current->next;
		if (current == NULL) return -1;
	}
	prev->next = current->next;
	int result = current->data;
	free(current);
	return result;
}

int findDataByKey(List* head, int key)
{
	List current = (*head);
	while (current != NULL) {
		if (current->key == key) return current->data;
		current = current->next;
	}
	return -1;
}

void print(List* head) {
	List current = (*head);
	if (current == NULL) {
		printf("Ñïèñîê ïóñòîé");
		return;
	}
	while (current != NULL) {
		printf("Êëþ÷: %d \nÇíà÷åíèå: %d\n", current->key, current->data);
		current = current->next;
	}
}

void sort(List* head) {
	/*
		Здесь должна быть ваша логика для пузырьковой сортировки списка
	*/
}
