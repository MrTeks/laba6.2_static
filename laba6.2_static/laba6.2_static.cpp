#include <iostream>

using namespace std;
// Вариант 8 Дана матрица размера M × N (M и N — четные числа). Поменять местами левую нижнюю и правую верхнюю четверти матрицы.

int main() {
	setlocale(LC_ALL, "ru");
	const int A = 10;
	const int B = 10;
	int M, N;
	int matrix[A][B];

	// Ввод размеров матрицы
	cout << "Введите количество строк M (четное число): ";
	cin >> M;
	cout << "Введите количество столбцов N (четное число): ";
	cin >> N;

	// Проверка на четность
	if (M % 2 != 0 || N % 2 != 0 || M > 10 || N > 10) {
		cout << "Ошибка: M и N должны быть четными числами, а также не превышать 10" << endl;
		return 0;
	}

	// Ввод элементов матрицы
	cout << "Введите элементы матрицы:" << endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << "Элемент [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> matrix[i][j];
		}
	}
	// Вывод исходной матрицы
	cout << "Исходная матрица:" << endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	// Обмен левой нижней и правой верхней четвертей матрицы
	for (int i = M / 2, i2 = 0; i < M && i2 < M / 2; i++, i2++) {
		for (int j = 0, j2 = N / 2; j < N / 2 && j2 < N; j++, j2++) {
			int temp = matrix[i][j];
			matrix[i][j] = matrix[i2][j2];
			matrix[i2][j2] = temp;
		}
	}

	// Вывод измененной матрицы
	cout << "Измененная матрица:" << endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}