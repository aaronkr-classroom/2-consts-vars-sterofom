#include <stdio.h>
void main() {
	int won;
	won = 3000;
	printf("�� ���忡 %d\\ �ֽ��ϴ�.\n", won);

	const char* easy_won = "1,000,000";
	printf("�� ���忡 %s\\ �ֽ��ϴ�.\n", easy_won);
	printf("+500,000\\ ����\n");
	easy_won = "1,500,000";
	printf("�����ؼ� %s\\ �ֽ��ϴ�.\n", easy_won);


	float bc = 10.123456789;
	printf("bitcoin ����: %.5fB\n",bc);
	bc = bc + 0.34567;
	printf("���� bitcoin ����: %.5fB\n", bc);

	return 0;
}