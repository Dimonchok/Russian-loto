#include <iostream>

int lottery(int& tickets) {
	int ver_jeckpot = rand() % 100 + 1; // ����������� ��������
	
	if (ver_jeckpot <= 1) {
		std::cout << "�������: 200 000 ������ � 10 ������� \"������� ����\"!!!!" << "\n";
		tickets--; // ���������� 1 �����
		return 200000; // ���������� ����� ��������
		tickets += 10; // ���� ������� ������� �� � ���-�� ������� +10
	}
	if (ver_jeckpot <= 49) {
		tickets--; // ���������� ����� ��������
		return rand() % 500; // ���������� ����� ��������
	}
	else {
		tickets--; // ���������� ����� ��������
		return 0; // ���� ��� ��������
	}
}

int main() {
	setlocale(LC_ALL, "RU");

	int tickets = 10; // ���-�� �������
	int sumWin = 0; // ��������� �������

	while(tickets > 0)
	{
		int win = lottery(tickets); // ������� �� ���� �����
		sumWin += win; // ���������� ������� � ������ ������ � ����� �����

		std::cout << "�� ��������: " << win << " ������" << std::endl;
		std::cout << "�������� �������: " << tickets << "\n" << "\n";
	}
	std::cout << "����� ��������: " << sumWin << " ������" << std::endl;
	std::cout << "������� ����� ������� � Shift ����� ������� ��� ����";
	std::cin >> sumWin;

	return 0;
}