#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1 и отрицательные числа не являются простыми
    }
    if (num <= 3) {
        return true; // 2 и 3  простые числа
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // числа кратные 2 или 3, не являются простыми
    }
    //  делители до квадратного корня из числа
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

bool isPowerOf22(int N) {
    // является ли N положительным и больше 1
    if (N <= 0 || N == 1) {
        return false;
    }

    // делится ли N на 22 и оставляет ли остаток 0
    while (N % 22 == 0) {
        N /= 22;
    }

    // если после деления N не равно 1, то это не степень 22
    return N == 1;
}

void printDigitsInReverse(int N) { //возвращаемый тип функции, без возврата значения
    if (N == 0) {
        return; //  N стало равным 0, завершение
    }

    // вывод последней цифры числа N
    std::cout << N % 10;

    // рекурсивно вызываем функцию для оставшихся цифр числа N
    printDigitsInReverse(N / 10);
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    //1
    printf("#1\n");
    int num1 = 12;
    int num2 = 600;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;

    //2
    printf("----\n#2\n");
    double side1 = 120.0;
    double side2 = 90.0;
    double hypotenuse = sqrt(side1 * side1 + side2 * side2);
    std::cout << "Длина гипотенузы равна: " << hypotenuse << std::endl;

    //3
    printf("----\n#3\n");
    int inputNumber = 155;
    std::cout << inputNumber % 10 << std::endl;

    //4
    printf("----\n#4\n");
    int secondInputNumber = 225;
    std::cout << (secondInputNumber / 10) % 10 << std::endl;

    //5
    printf("----\n#5\n");
    int thirdInputNumber = 45;
    std::cout << thirdInputNumber / 10 << std::endl;

    //6
    printf("----\n#6\n");
    int firstInteger, secondInteger;
    std::cout << "Введите первое целое число: ";
    std::cin >> firstInteger;
    std::cout << "Введите второе целое число: ";
    std::cin >> secondInteger;
    std::cout << "Среднее арифметическое: " << (firstInteger + secondInteger) / 2 << std::endl;

    //7
    printf("----\n#7\n");
    int thirdInteger, fourthInteger;
    std::cout << "Введите первое целое число: ";
    std::cin >> thirdInteger;
    std::cout << "Введите второе целое число: ";
    std::cin >> fourthInteger;
    std::cout << "Среднее геометрическое: " << sqrt(thirdInteger * fourthInteger) << std::endl;

    //8
    printf("----\n#8\n");
    double x1, y1, x2, y2;
    std::cout << "(x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "(x2 y2): ";
    std::cin >> x2 >> y2;
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    std::cout << "Расстояние между точками: " << distance << std::endl;

    //9
    printf("----\n#9\n");
    double firstNum, secondNum, thirdNum;
    std::cout << "Введите первое, второе и третье число: ";
    std::cin >> firstNum >> secondNum >> thirdNum;
    double middleValue;
    if ((firstNum < secondNum && secondNum < thirdNum) || (thirdNum < secondNum && secondNum < firstNum)) {
        middleValue = secondNum;
    } else if ((secondNum < firstNum && firstNum < thirdNum) || (thirdNum < firstNum && firstNum < secondNum)) {
        middleValue = firstNum;
    } else {
        middleValue = thirdNum;
    }
    std::cout << "Среднее число: " << middleValue << std::endl;

    //10
    printf("----\n#10\n");
    double a, b, c;
    std::cout << "Введите a, b и c: ";
    std::cin >> a >> b >> c;
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Корень 1: " << root1 << std::endl;
        std::cout << "Корень 2: " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Уравнение имеет один корень: " << root << std::endl;
    } else {
        std::cout << "Корней нет." << std::endl;
    }

    //11
    printf("----\n#11\n");
    double time1, time2, time3;
    std::cout << "Введите t1, t2 и t3: ";
    std::cin >> time1 >> time2 >> time3;
    double maxTime;
    if (time1 > time2 && time1 > time3) {
        maxTime = time1;
    } else if (time2 > time1 && time2 > time3) {
        maxTime = time2;
    } else {
        maxTime = time3;
    }
    std::cout << "Максимальное число: " << maxTime << std::endl;

    //12
    printf("----\n#12\n");
    double length1, length2, length3;
    std::cout << "Введите длины трех отрезков: ";
    std::cin >> length1 >> length2 >> length3;
    if (length1 + length2 > length3 && length1 + length3 > length2 && length2 + length3 > length1) {
        if (length1 == length2 && length2 == length3) {
            std::cout << "Треугольник равносторонний" << std::endl;
        } else if (length1 == length2 || length2 == length3 || length1 == length3) {
            std::cout << "Треугольник равнобедренный" << std::endl;
        } else {
            std::cout << "Треугольник разносторонний" << std::endl;
        }
    } else {
        std::cout << "Треугольника не существует" << std::endl;
    }

    //13
    printf("----\n#13\n");
    double point1, point2;
    std::cout << "Введите точки 1 и 2: ";
    std::cin >> point1 >> point2;
    if (point1 > 0 && point2 > 0) {
        std::cout << "Точка принадлежит I четверти" << std::endl;
    } else if (point1 < 0 && point2 > 0) {
        std::cout << "Точка принадлежит II четверти" << std::endl;
    } else if (point1 < 0 && point2 < 0) {
        std::cout << "Точка принадлежит III четверти" << std::endl;
    } else if (point1 > 0 && point2 < 0) {
        std::cout << "Точка принадлежит IV четверти" << std::endl;
    } else if (point1 == 0 && point2 == 0) {
        std::cout << "Точка находится в начале координат" << std::endl;
    } else if (point1 == 0) {
        std::cout << "Точка лежит на оси X" << std::endl;
    } else {
        std::cout << "Точка лежит на оси Y" << std::endl;
    }

    //14
    printf("----\n#14\n");
    int factorialNumber;
    std::cout << "Введите число n: ";
    std::cin >> factorialNumber;
    int doubleFactorial = 1;
    while (factorialNumber > 0) {
        doubleFactorial *= factorialNumber;
        factorialNumber -= 2;
    }
    std::cout << "Двойной факториал: " << doubleFactorial << std::endl;

    //15
    printf("----\n#15\n");
    int factorialNumber2;
    std::cout << "Введите число n: ";
    std::cin >> factorialNumber2;
    int doubleFactorial2 = 1;
    for (int i = factorialNumber2; i > 0; i -= 2) {
        doubleFactorial2 *= i;
    }
    std::cout << "Двойной факториал: " << doubleFactorial2 << std::endl;

    //16
    printf("----\n#16\n");
    int startInterval, endInterval;
    std::cout << "Введите интервал [a, b]: ";
    std::cin >> startInterval >> endInterval;
    if (startInterval <= 2) {
        std::cout << "Простые числа в интервале [" << 2 << ", " << endInterval << "]: 2 ";
    }
    for (int i = (startInterval % 2 == 0 ? startInterval + 1 : startInterval); i <= endInterval; i += 2) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    //17
    printf("----\n#17\n");
    int sequenceNumber;
    int sequenceSum = 0;
    std::cout << "Введите последовательность чисел, закончите ввод числом -9999:" << std::endl;
    while (true) {
        std::cin >> sequenceNumber;
        if (sequenceNumber == -9999) {
            break;
        }
        std::cout << "Прочитано число: " << sequenceNumber << std::endl;
        sequenceSum += sequenceNumber;
    }
    std::cout << "Сумма всех элементов последовательности (без -9999): " << sequenceSum << std::endl;

    //18
    printf("----\n#18\n");
    int sequenceNumber18;
    int min18 = INT_MAX;
    int max18 = INT_MIN;
    std::cout << "Введите последовательность чисел, оканчивающуюся нулём:" << std::endl;
    while (true) {
        std::cin >> sequenceNumber18;
        if (sequenceNumber18 == 0) {
            break;
        }
        if (sequenceNumber18 > max18) {
            max18 = sequenceNumber18;
        }
        if (sequenceNumber18 < min18) {
            min18 = sequenceNumber18;
        }
    }
    if (min18 == INT_MAX || max18 == INT_MIN) {
        std::cout << "В последовательности нет чисел, отличных от нуля." << std::endl;
    } else {
        std::cout << "Минимальное значение: " << min18 << std::endl;
        std::cout << "Максимальное значение: " << max18 << std::endl;
    }

    //19
    printf("----\n#19\n");
    int naturalNumber;
    std::cout << "Введите число N: ";
    std::cin >> naturalNumber;
    int item = 1;
    int squareItem = item * item;
    std::cout << "Точные квадраты натуральных чисел, не превосходящие " << naturalNumber << ":" << std::endl;
    while (squareItem <= naturalNumber) {
        std::cout << squareItem << " ";
        item++;
        squareItem = item * item;
    }
    std::cout << std::endl;

    //20
    printf("----\n#20\n");
    if (isPowerOf22(naturalNumber)) {
        std::cout << naturalNumber << " является степенью числа 22" << std::endl;
    } else {
        std::cout << naturalNumber << " не является степенью числа 22" << std::endl;
    }

    //21
    printf("----\n#21\n");
    if (naturalNumber < 0) {
        std::cout << "Число должно быть натуральным" << std::endl;
        return 1;
    }
    std::cout << "Цифры числа " << naturalNumber << " в обратном порядке: ";
    printDigitsInReverse(naturalNumber);
    std::cout << std::endl;

    //22
    printf("----\n#22\n");
    int numberOne, numberTwo;
    std::cout << "Введите два положительных целых числа: ";
    std::cin >> numberOne >> numberTwo;

    if (numberOne <= 0 || numberTwo <= 0) {
        std::cout << "Числа должны быть положительными." << std::endl;
        return 1;
    }

    int greatestCommonDivisor = gcd(numberOne, numberTwo);
    std::cout << "Наибольший общий делитель (НОД) чисел " << numberOne << " и " << numberTwo << " = " << greatestCommonDivisor << std::endl;

    //23
    printf("----\n#23\n");
    int schoolMark;
    std::cout << "Введите школьную оценку (1-5): ";
    std::cin >> schoolMark;
    std::string description;
    switch (schoolMark) {
        case 1:
            description = "плохо";
            break;
        case 2:
            description = "неудовлетворительно";
            break;
        case 3:
            description = "удовлетворительно";
            break;
        case 4:
            description = "хорошо";
            break;
        case 5:
            description = "отлично";
            break;
        default:
            description = "некорректный ввод";
            break;
    }
    std::cout << "Словесное описание оценки: " << description << std::endl;

    //24
    printf("----\n#24\n");
}
