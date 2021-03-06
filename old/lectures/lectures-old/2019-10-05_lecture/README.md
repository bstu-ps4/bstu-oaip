<!--
# 2019-10-05_lecture.marktext
-->

## Декаларация (объявление) объектов

Объекты программы должны быть явно декларированны по следующему формату:

```
<атрибуты> <список ID объектов>
```

Элементы списка разделяются запятыми, а атрибуты - разделителями.

Например:

```c
int i, j, k;
float a, b;
```

Объекты программы в общем случае имеют следующие атрибуты:

`<класс памяти>` - характеристика способа размещения объектов в памяти (статическая, динамическая), определяет область видимости и время жизни переменой (по умолчанию - auto), данные атрибуты будут рассмотрены позже.

`<тип>` - характеристика механизма интерпретации данных, т. е. это совокупность информации о том, сколько объекту нужно выделить памяти, какой вид имеет представление информации и какие действия под ней допустимы (по умолчанию - int).

Класс памяти и тип - атрибуты необязательные и могут отсутствовать, тогда их значения установятся по умолчанию.

Примеры декларации простых объектов:

```c
int i, j, k;
char r;
double gtd;
```

## Данные целого типа (int)

int - целое число, соответствующее естественому размеру целых в используемых ЭВМ.

С этим типом можно использовать квалификаторы short и long.

Не указывают на различные размеры целых, т. е. определяют размер памяти выделяемые под переменную.

Примеры:

```c
short int x;
long int x;
unsigned int x = 8; // декларация с одновременной инциализацией числа 8, атрибут int в таких случаях может быть опущен
```

Атрибуты signed и unsigned показывает как интерпретируется старший бит числа, как знак или как часть числа.

int

<table>
    <thead>
        <tr>
            <td>Знак</td>
            <td colspan="7">Знаковые числа</td>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>15</td>
            <td>14</td>
            <td>13</td>
            <td>12</td>
            <td>...</td>
            <td>2</td>
            <td>1</td>
            <td>0</td>
        </tr>
    </tbody>
</table>

unsigned int

<table>
    <thead>
        <tr>
            <td>Знак</td>
            <td colspan="7">Знаковые числа</td>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>15</td>
            <td>14</td>
            <td>13</td>
            <td>12</td>
            <td>...</td>
            <td>2</td>
            <td>1</td>
            <td>0</td>
        </tr>
    </tbody>
</table>

long

<table>
    <thead>
        <tr>
            <td>Знак</td>
            <td colspan="7">Знаковые числа</td>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>31</td>
            <td>30</td>
            <td>29</td>
            <td>28</td>
            <td>...</td>
            <td>2</td>
            <td>1</td>
            <td>0</td>
        </tr>
    </tbody>
</table>

unsigned long

<table>
    <thead>
        <tr>
            <td>Знак</td>
            <td colspan="7">Знаковые числа</td>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>31</td>
            <td>30</td>
            <td>29</td>
            <td>28</td>
            <td>...</td>
            <td>2</td>
            <td>1</td>
            <td>0</td>
        </tr>
    </tbody>
</table>

Если указан только атрибут int, это означает - short signed int.

## Данные символьного типа `(char)`

Символьная переменная занимает в памяти 1 байт, значит представляется кодом от 0 до 255. Закрепление конкретного символа за кодовых производится кодовыми таблицами.

Данные типа сhar рассмытриваются компилятором как целые поэтому возможность использовать `signed char`, т.  е. символы с кодами от -128 до 127 и `unsigned char` символы с кодом от 0 до 255.

Примеры декларации:

```c
char res;
char let = "s";
```

## Тип float - данные вещественного типа

В памяти занимает

- float - 4 байта

- double - 8 байт

- long double - 10 байт

Для размещения типа данных float обычно

8 бит выделяют для порядка и знака, 

24 бит под мантису.

| Тип         | Точность (мантиса)   | Порядок    |
| ----------- | -------------------- | ---------- |
| float       | 7 цифр после запятой | $^+_-38$   |
| double      | 15                   | $^+_-308$  |
| long double | 19                   | $^+_-4932$ |

## Константы в программах

Константы - это объекты не подлежащие использованию в левой части оператора присваивания, потому что константа является не адресуемой величиной - хранится в памяти, но способы узнать нет.

В Си константой являются:

1. Самопроизвольные арифметические символьные и строковые данные

2. Идинтификаторы массивов и функций

3. Элементы перечисления

Арифметические константы могут быть целогого и цещественного типа.

## Целочисленные константы

Общий формат $^+_-n$ (+ обычно не ставится)

Десятичные константы - последовательность цифр $0..9$, первая из которых  не должно быть 0.

Например, 22 и 273 - обычно целые константы.

Если нужно вывести длинную целую, константу, то указывается признак L(l) - 273L (273l). Для такой константы будет отведено 4 байта.

Обычно целая константа, которая слишком длинна для типа int рассматривается как long.

Существует системы обозначений для восьмиричных и шестнадцатиричных констант.

Восьмиричные константы - последовательность цифр от 0 до 7, первая из которых должна быть 0.

Например:

$020 = 16_{10}$.

Шеснадцатеричные константы - последовательность цифр от 0 до 9 и букв A до F (a..f), начинающая символами Ox (ox).

Например:

0x1F (= 0x1f) = $31_{10}$

Восьмиричные и шеснадцатеричные константы могут также заканчиваться буквой L(l) - long.

Например:

020L, 0x20L.

Примеры целочисленных констант:

|                   |       |        |          |
| ----------------- | ----- | ------ | -------- |
| десятичные        | 1992  | 13,777 | 1000L    |
| восьмиричные      | 07777 | 00033  | 01l      |
| шестнадцатиричные | 0x123 | 0x00FF | 0X88000l |

## Константы вещественного типа

Данные константы размещаются в памяти по формату double, а во внешнем представлении могут иметь 2-е формы:

1) с фиксированной десятичной точкой
   
    $^+_-n.m$, где
   
    n, m - целая и дробная части числа;

2) с плавающей десятичной точкой (экспонициальная форма):
   
    $^+_-n.mE^+_-p$, где
   
    n, m - целая и дробные части числа,
   
    p - порядок,
   
    $^+_-0.xxxE^+_-p$ - нормативный вид

Например:

$1.25*10^{-8}=0.125E-8$.

Пример констант с фиксированной и плавающей точками:

|     |        |         |              |
| --- | ------ | ------- | ------------ |
| 1.0 | -3.125 | 100e-10 | 0.125 37e+13 |

## Символьные константы

Символьная константа - это символ заключенный в одинарные кавычки: 'A', 'x' (занимает 1 байт)

Тип char -> целое int

Также используется специальные последовательности символов, это управляющие последовательности (escape - последовательности).

Основные из них:

``\n`` - новая строка

``\t`` - горизонтальная табуляция

``\o`` - нулевой символ (пусто)

При присваивании символьной переменной эти последовательности должны быть заключенны в апострафы.

Сивольная константа '``\o``' изображающая символ o (нуль-пусто), часто записывается вместо целой константы o, чтобы подчеркнуть символьную природу некоторого выражения.

Текстовые символы непосредственно вводятся с клавиатуры, а специальные и управляющие представляются в исходном тексте парами текстовых символов.

Примеры представления специальных символом языка Си:

``\\`` - обратная косая черта,

``\'`` - апостраф,

``\"`` - кавычки.

Примеры символьных констант:

|     |     |     |      |       |
| --- | --- | --- | ---- | ----- |
| 'A' | 'g' | '$' | '\n' | '\72' |

## Строковые константы

Строковые константы представляет собой последовательность символов кода ASCII, заключенная в кавычки (``''``) во внутренем представлении к строковым константам добавляется нулевой символ ``'\o'``, ещё называемый нуль терминатор, отмечающий конец строки. Кавычки не являются частью строки, а служат только для её ограничения.

**Строка** - массив состоящий из символов.

Внутренее представление константы "01234\oABCDEF":

'0', '1', '2', '3', '4', '\o', 'A', 'B', 'C', 'D', 'E', 'F', '\o'.

Пример строковых констант:

"Система", "\n\tАргумент\n", "Cостояние\"wait"".

В конце строковой константы компилятор автоматически помещает нуль-символ.

**Нуль символ** - не цифра 0, он на печать не выводится и в таблице кода ASCII имеет код 0.

Например:

Строка "" - пустая строка (нуль-строка).

## Операции выражения

Операции языка Си предназначены для управления данными (более 40).

Для их использования необходимо знать:

- синтаксис
- приоритеты (15 уровней)
- порядок выполнения

Выражения состоят из операндов, операция, скобок, и используются для вычисления некоторого значения определенного типа. Каждый операнд может быть, в свою очередь, выражением или одним из его частных случаев.

Большинство операций выполняются слева на право.

Например:

``a + b + c`` $\rightarrow$ ``(a + b) + c``

Исключение:

- унарные операции
- операции присваивания
- условная операция (?:)
  ``-`` справа на лево

## Арифметические операции (бинарные)

``+`` - сложение

``-`` - вычитание (либо унарная операция - приминения знака)

``/`` - деление (для int операндов - с отбрасыванием остатка)

``*`` - умножение

``%`` - остаток от деления целочисленных операндов со знаком первого операнда (деление по модулю)

``x + y * z - a / b`` $\Longleftrightarrow$ ``x + (y * z) - (a / b)``

Операнды арифметических операций могут быть:

- константы
- переменные
- индентификаторы функции
- элементы массива
- указатели
- любые арифметические выражения

Порядок выполнения операций:

- Первое в круглых скобках
- затем функции
- затем слева на право умножение, деление
- последнее слево на право плюсы, минусы

Унарная операция ``+``, ``-`` обладает высокими приоритетом. Определены только для целых и вещественных операндов. ``+`` носит информационный характер. ``-`` меняет знак на противоположный.

## Оператор присваивания

Формат присваивания:

```
<ID> = <выражение>;
```

```c
int i, j, k;
float x, y, z;
...
i = j = k = 0; // <=> k = 0; j = k; i = k;
x = i + (y = 3) - (z = 0) // <=> z = 0; y = 3; x = i + y - z;
```

Присваивание может включать несколько операция присваивания изменяя значение нескольких операндов.

Левым операцией присваивания может быть только именованого или косвено урицемая указателем.

Примеры недопустимых выражений:

- присваивание констант
  
  ```c
    z = x = y;
  ```

- присваивание функций
  
  ```c
    getch() = 1;
  ```

- присваивание результат операции
  
  ```c
    (i + 1) = 2 + y;
  ```

## Сокращенная запись операции присваивания

В языке Си допускается 2-е разновидности записи операций присваивания:

- вместо записи ``v = v @ e;``, где ``@`` - арифметическая операция либо операция над битовым представлением операндов, рекомендуется использовать запись ``v @= e;``
    Например: ``i = i + 2;`` $\longleftrightarrow$ ``i += z;``
- Вместо записи (автоувеличение) ``x = x # 1``, где
    ``#`` - символ ``+`` либо ``-``, обозначающий операцию инкремента, либо декремента,
    ``x`` - целочисленная переменная (переменная-указатель), рекомендуется использовать запись префиксная ``++xx;``, постфиксная

Примеры использования сокращений:

```c
int i, j, k;
float x, y;
...
x *= y;      //x = x * y;
i += 2;      //i = i + 2;
x /= y + 15; //x = x / (y + 15);
k--;         //k = k - 1;
--k;         //k = k - 1;
j = i++;     //j = i; i = i + 1;
j = ++i;     //i = i + 1; j = i;
```
