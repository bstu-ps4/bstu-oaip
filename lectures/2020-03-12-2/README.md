Перечисления
------------

- набор именованных целочисленных констант, определяющий все допустимые значения, которые может принимать переменная.

Перечисления определяются с помощбю ключевого слова `enum`, которое указывает на начало перечисления типа.

Перечисления можно встретить в повседневной жизни в качестве монет (центы США).

```c
enum ярлык
{
    список перечислений
} список переменных;
```

Ярлык или список переменных не обязателен, н он ...

Список перечислений разделеный запятыми...

Ярлык используется для переменных данного типа.

Следующий фрагмент определяет перечисления `coin` и объявляет переменную `money` этого типа:

```c
enum coin
{
    penny,
    nickel,
    dime,
    quarter,
    half_dollar,
    dollar
};

enum coin money;
```

Имея данное определение о объявление следующий тип присваивание совершенно корректен:

```c
money = dime;

if (money == quarter)
{
    printf("is a quarter\n");
}
```

В перечислениях каждому символу ставится в соотвествие целочисленное значение. И их можно использовать в любых целочисленных выражениях.

Например:

```c
printf("The value of quanter is %d", quanter);
```

Если явно не проводить инициализацию, значение первого символа перечисления будет 0, второго 1 и так далее.

Следовательно:

```c
    printf("%d %d", penny, dime); //0 2
    //выводит 0 2 на экран
```

Можно определить значение одного или несколько символов используя инициализатор. это...

При использовании инициализатора, символы следующие за инициализированным значением получают значение больше чем указанное перед этим.

Например:

В следующем объявлении `quanter` получает значение `100`:

```c
enum coin
{
    penny,
    nickel,
    dime,
    quanter = 100,
    half_dollar,
    dollar
};
```

Теперь символы получают следующие значения:

```
penny 0
nickel 1
dime 2
quanter 100
half_dollar 101
dollar 102
```

Заблуждением считается возможность прямого ввода или вывода символа перечислений.

Слудеющий фрагмент кода не работает как нужно:

```c
/* не работает */
money = dollar;
printf("%s", money);
```

`dollar` - это имя целого числа, следовательно, не возможно с помощью `ptintf()` вывести строку `dollar`.

Надо помнить, что символ `dollar` - это просто имя целого числа, а не строка, следовательно, не возможно с помощью `printf()` вывести строку `dollar`, используя значение `money`.

Аналогично нельзя сообщить значение переменной перечисления, используя строковый эквивалент.

Таким образом, следующий код не работает:
```c
/* этот код не будет работать */
money = "penny";
```

Следующий код необходим для вывода состояния `money` с помощью слов:

```c
switch(money) {
    case penny:
        printf("penny");
        break;
    case dime:
        printf("dime");
        break;
    case quarter:
        printf("quarter");
        break;
    case half_dollar:
        printf("half_dollar");
        break;
    case dollar:
        printf("dollar");
}
```

Использование перечислений типа для обращения к полям объекта
-------------------------------------------------------------

```c
int main()
{
    enum paytype
    {
        CARD,
        CHECK
    }; /* две формы оплаты с числовыми значениями 0, 1 */

    paytype ptype; /* определение переменной перечисления типа */

    union
    {
        char card[25];
        long check;
    } info;

```

Эту форма характеризует плату наличкой или карточкой.

Возможно присваение значения объединению:

```c
p type = CARD; /* переменная флаг получает значение CARD(0) */
strcpy(info.card, "12345"); /* объединение получает своё значение через none card или */
p type = pay type(1); /* переменная флаг получает значение CHECH(1) */
info.check = 105l; /* объединение получает своЁ значение через поле check */
```

Вывод значения переменной:

```c
    switch(ptype)
    {
        case CARD:
            cout << "card: " << info.card << endl;
            break;
        case CHECH:
            cout << "check: " << info.check << endl;
            break;
    }

    _getch();

    return 0;
}
```

Использование перечислений типа для обращения к полям объекта (второй вариант)
------------------------------------------------------------------------------

Реализуем пример по-другому.

Создадим структуру, включающую объединение и поле перечисляемого типа, характеризующее форму оплаты:

```c
int main()
{
    enum paytype
    {
        CARD,
        CHECK
    }; /* две формы оплаты */

    struct
    {
        paytype ptype; // поле-флаг включено в состав структуры
        union
        {
            char card[25];
            long check;
        } info;
    } str;

```

Возможное присваение значение объединению:

```c
str.ptype = paytype(0); // заполняет поле-флаг объединения, как элемента структуры
strcpy(str.info.card, "12345"); // объединения, как элемент структуры, получает своё значение через поле card или
str.ptype = paytype(1); // заполняет поле-флаг объединения, как элемента структуры
str.info.chech = 105l; // объединение как элемента структуры, получает свое значение через поле check
```

Классы памяти и области действия объектов. Динамическая и статическая память
----------------------------------------------------------------------------

Одним из атрибутов в декларации объектов является класс памяти. Он определяет время существования переменной (время жизни) и область видимости.

Есть 3 места, где объявляется переменные:
1.  внутри функции
2.  при определении параметра функции
3.  вне функции

Эти переменные соотвественно называются:
1.  локальные
2.  формальные параметры
3.  глобальные переменные

-   Динамическая память, которая выделяется при вызове функции и освобождается при выходе из неё
    -   auto - автоматический
    -   regiter - регистровый
-   Статическая память, которая распределяет на этапе трансляции и заполняется по умолчанию нулями
    -   extern - внешний
    -   static - статический

Автоматические переменные
-------------------------

Переменные декларируемые внутри функции являются внутреними (или локальными) и никакая другая функция не имеет прямого доступа к ним. Такие объекты существуют времено на этапеактивности функции.

Каждая локальная переменная существует только в блоке кода, в котором объявлена, и уничтожается при выходе из него. Эти переменные называют .

Атрибут класса памяти `auto` локальные объекты получаю поумолчанию, хотя и принадлежность к этому классу можно указать явно.

```c
void main()
{
    auto int max, lin;
    ...
}

int sp;
double val[20];

extern int sp;
extern double val[];
```

Так получают, если... , что определение переменной не нужно искать вне
функции.

Регистровая память
------------------

Объекты целого типа и символы рекомендуется разместить не в оперативной памяти, а в регистрах общего назначения процесса.

При нехватке регистров в стэковой памяти атрибут `register` имеет... Компилятор может проигнорировать данную рекомендацию.

Это обращение к регистровой памяти помогает повысить быстродействие программы.

Но к размещаемой регистровой памяти объекта в языке Си не пременима операция переадресация.

Также оэто не пременима для:
-   массивов
-   структур
-   объединений
-   переменной с плавающей точкой

Класс памяти static
-------------------

Объекта размещаемые ... с класом `static` и могут иметь любой атрибут области действия.

Глобальные объекты всегда являются статическими.

Атрибут `static` использованный при описании глобального объекта предписыввает ограничение области пременимости только в пределах остатка текущего файла.

Значение локальных статических объектов сохраняется при повторном вызове функции.

Таким образом в Си ключевое слово `static` имеет разный смысл для локальных и глобальных объектов.

Так как глобальные переменные доступны по всюду их можно использовать вместо списка аргументов для передачи значения между функциями, хотя это считается дурным тоном.

Внешние переменные существует постоянно сохраняют свои значения и после того как функция привсвоившее эти значения завершает функцию.

При отсутствии явной инициализации для внешних и статических переменных гарантируется их обнуление.

Автоматические регистровые имеют неопределённые начальные значения (мусор).

Внешние переменные должны быть определена вне всей функции. При этом этой ей выделяется фактическое место в памяти. Такая переменная должна быть описана в каждом функции, где она буудет использована. Это можно сделать явно, либо описание `extern`, либо по контексту.

Чтобу функция могла использовать внешнию переменную ей нужно сообщить..., то есть включить в функцию описание `extern`. Иногда описание `extern` может быть опущено. Если внешнее определение переменной находится в том же файле рание её использование в некоторой функции. В этом случае не обязательно включать описание `extern` для этой переменной в саму функцию.

Обычная практика заключается в помещение ... всех переме... в начале файла. Затем опускают написание `extern`.

Включение ключевого слова `extern` позволяет функции использовать внешнию переменную, даже если она определяется позже в этом или другом файле.

Важно различать описание внешней переменной и её определение описание указывают размер, тип и так далее. Определение вызывает ещё отведение памяти.