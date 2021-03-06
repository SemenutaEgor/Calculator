Введение

Калькулятор предназначен для быстрого вычисления математических выражений. Наиболее эффективный вариант разработки калькулятора – разработка на основе стека.

Постановка задачи

Цель данной работы — разработка калькулятора на основе стека и постфиксной записи выражения.

Руководство пользователя

После запуска программы необходимо правильно ввести выражение и нажать на кнопку «=», чтобы получить результат.

Руководство программиста
Описание структуры программы

Программа содержит два класса:
•	Form1 – стандартный класс windows формы, который содержит все графические элементы программы
•	TCalculator – класс, который обеспечивает вычисления выражений, работает на основе одного из двух классов:
o	TStack на массивах
o	TStack на списках
После запуска программы и ввода выражения формируется постфиксная форма выражения, затем оно вычисляется и выдаётся результат.

Описание структур данных
Класс TStack на массивах (шаблонный)
Поля:
•	arr - массив элементов указанного типа
•	size – максимальное количество элементов массива
•	num – позиция элемента в массиве, который на вершине стека
Методы:
•	Push – положить элемент в стек
•	Pop – взять элемент из стека
•	Top – посмотреть, какой элемент находится на вершине стека
•	IsEmpty – проверка стека на пустоту
•	IsFull – проверка стека на переполнение
•	Clear – очищение стека

Класс TStack на списках (шаблонный)
Поля:
•	структура pFirst, которая имеет два поля:
o	val – значение
o	pNext – указатель на следующий элемент
Методы:
•	Push – положить элемент в стек
•	Pop – взять элемент из стека
•	Top – посмотреть, какой элемент находится на вершине стека
•	IsEmpty – проверка стека на пустоту
•	IsFull – проверка стека на переполнение
•	Clear – очищение стека
•	operator= - оператор присваивания

Класс TCalculator
Поля:
•	expr – исходное выражение
•	postfix – постфиксная форма выражения
•	st_c – символьный стек для хранения операций
•	st_d – числовой стек для хранения результатов вычисления
Методы:
•	SetExpr – присваивает expr заданное выражение
•	GetExp – возвращает заданное выражение
•	prior – возвращает приоритет арифметической операции
•	ToPostfix – переводит выражение в постфиксную форму
•	GetPostfix – возвращает постфиксную форму
•	calc – производит вычисления

Описание алгоритмов

Методы  TStack на массивах

Push – положить элемент в стек
Если стек не полный, добавляет указанный элемент на позицию num+1
 
Pop – взять элемент из стека
Если стек не пустой, возвращает последний добавленный в массив элемент и удаляет его из стека, уменьшая num на единицу.

Top – посмотреть, какой элемент находится на вершине стека
Если стек не пустой, возвращает последний добавленный в массив элемент (без его удаления из стека)

IsEmpty – проверка стека на пустоту
Возвращает true, если стек пустой, т.е. num=-1

IsFull – проверка стека на переполнение
Возвращает true, если стек полный, т.е. если num равен максимально возможному количеству элементов в массиве

Clear – очищение стека
 Устанавливает num на -1, тем самым из стека удаляются все элементы.

Методы  TStack на списках

operator= - оператор присваивания
Позволяет присвоить один стек другому. Если стек, которому присваивают, не пустой, он очищается. Затем создаётся временная структура TNode, которой присваивается указатель на первый элемент присваиваемого стека. Затем, переходя по указателю pNext по всем элементам списка, присваиваются значения.

Push – положить элемент в стек
Если стек не полный, создаётся временный TNode и под него выделяется память. Затем полю pNext временного TNode присваивается указатель на первый элемент в стеке. Потом присваивается его значение, и этот элемент сам становится первым (т.е. теперь он на «вершине» стека).

Pop – взять элемент из стека
Если стек не пустой, создается переменная res и ей присваивается значение первого элемента стека (т.е. того, который на «вершине»). Создаётся временный TNode и указатель pFirst перенаправляется на следующий элемент, после чего временный элемент удаляется.

Top – посмотреть, какой элемент находится на вершине стека
Возвращает значение последнего добавленного в стек элемента.

IsEmpty – проверка стека на пустоту
Возвращает true, если значение pFirst=NULL

IsFull – проверка стека на переполнение
Создаётся временный TNode. Если он равен NULL, то возвращается true, в противном случае возвращается false, и временный TNode удалается.

Clear – очищение стека
Создаётся временный TNode. Пока pFirst не начнёт указывать на пустоту, проходим по списку и удаляем все элементы.

Методы TCalculator

ToPostfix – переводит выражение в постфиксную форму
Создаётся временная строка, которая представляет собой исходное выражение в круглых скобках. Затем очищается символьный стек, чтобы там не осталось «мусора». Строке postfix присваивается пустая строка, чтобы убрать остатки от прошлых вычислений. Дальше в цикле посимвольно разбирается входящая строка. 
Если текущий символ – открывающая скобка, она заносится в стек операций. Если это цифра от 0 до 9 – прибавляется к постфиксной строке. Если одна из арифметических операций, то выталкиваем в postfix все более важные по приоритету операции (если такие есть), а саму текущую операцию записываем в стек. Если таких нет, то сразу записывается в postfix.

calc – производит вычисления
Очищается числовой стек, чтобы там не было остатков. Затем в цикле обрабатывается постфиксное выражение – числа по порядку заносятся в числовой стек. Когда счётчик доходит до операции, из числового стека выталкиваются два последних числа и используются в качестве операндов для текущей операции.

Заключение
Использование стеков в калькуляторе позволяет эффективно использовать память и производить вычисления не зависимо от того, какой стек используется, на массивах или на списках.
