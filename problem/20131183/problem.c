#include "stdio.h"
#include "stdlib.h"
#include "string.h"
typedef struct CharacterListNode {
	char* ch;
	struct CharacterListNode NextNode;
} Node

int main(void) {
	printf("====================WORD INPUT PROGRAM====================\n");
	printf("This program aims for the following purposes.\n\n");
	printf("1. First, input the character word you want.\n");
	printf("2. And, the character word that input store to value Ioc, and this type is char, \n    and copy this character to LinkedList. Each node in linkedlist contains one character type value\n");
	printf("3. Then, you can expect standard output that the character word what you input\n");
	printf("4. Next, make a new File 'Note.txt' and record the character word what you input to new File 'Note.txt'\n");
	printf("5. Finally, read the contents of the file just created and display it on the screen. Thank you.\n");
	printf("\n\n\n"); //print blank line for easy to distinguish

					  //Code Start
	char* Ioc;
	char* Ioc_read_from_file;
	FILE writeNote;
	FILE readNote;
	Node* Clist = NULL;
	Node* p, prev;

	printf("Please input the word that you want anythings : ");
	scanf("%s", &Ioc);
	printf("\n1. Success to input the character word value..\n");

	for (int i = 0;i<500;i++) {
		if ((Ioc(i)) == "\0") {
			printf("2. Success to copy character word to LinkedList..\n");
			break;
		}

		p = (Node)malloc(sizeof(Node));
		p.ch = Ioc[i];

		if (Clist = NULL) Clist = p;
		else prev.NextNode = p;

		p.NextNode == NULL;
		p = prev;
	}


	printf("3. Print the character word from LinkedList..\n    '");

	while (p != NULL) {
		printf("%d", p.ch);
		p = p.NextNode;
	}
	printf("'  << Success!!\n");
	writeNote = fopen(Note.txt, r);

	while (p != NULL) {
		fputc(p.ch, writeNote);
		p = p.NextNode;
	}
	fputc('\n', writeNote);
	fclose(writeNote);
	puts("4. Success the write to File 'Note.txt'..");

	readNote = fopen(Note.txt, r);
	fscanf("%s", "readNote,Ioc_read_from_file");

	printf("5. Success to read string from file, and the value that you read is '%s'. Goodjob..\n\n\n", Ioc_read_from_file);

	return 0;

}
