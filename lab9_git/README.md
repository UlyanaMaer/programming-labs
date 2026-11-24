# Лаба 9. Git
## Оценка 3
1.git_status - команда показывает на какой ветке мы находимся. На ветке mybranch:

![](screenshot/screenshot_1.png)

2.git_log - команда показывает журнал коммитов:

![](screenshot/screenshot_2.png)

3.Создаем файл sort.c и вставляем туда данную функцию сортировки:

![alt text](screenshot/screenshot_3.png)

4.Как сейчас выглядит вывод git status:

![](screenshot/screenshot_4.png)

5.Добавим файл в область stage (add):

![](screenshot/screenshot_5.png)

6.Как сейчас выглядит git status:

![](screenshot/screenshot_6.png)

7.Закоммим файл в репозиторий(комнада git commit записывает изменения в историю репозитория):

![alt text](screenshot/screenshot_7.png)

8.Как сейчас выглядит git status:

![alt text](screenshot/screenshot_8.png)

9.Добавим комментарий с любым текстом в этот же файл:

![alt text](screenshot/screenshot_9.png)

10.Как сейчас выглядит git status:

![alt text](screenshot/скрин_10.png)

11.Добавьте (add) изменение файла:

![alt text](screenshot/screenshot_11.png)

12.Как сейчас выглядит git status:

![alt text](screenshot/screenshot_12.png)

13.Изменим файл еще раз:

![alt text](screenshot/screenshot_13.png)

14.Сделать коммит:

![alt text](screenshot/screenshot_14.png)

15.Как сейчас выглядит status.Журнал (log):

![alt text](screenshot/screenshot_15.1.png)
![alt text](screenshot/screenshot_15.2.png)

16.Добавим в stage и закоммитьте последнее изменение:

![alt text](screenshot/screenshot_16.png)

17.Запушили на удалённый репо с помощью команды git push.

Ветки:
![alt text](screenshot/скрин_1-1.png)
![alt text](screenshot/скрин_2.png)
![alt text](screenshot/image.png)
![alt text](screenshot/image-1.png)
![alt text](screenshot/image-2.png)
![alt text](screenshot/image-3.png)
![alt text](screenshot/image-4.png)
![alt text](screenshot/image-5.png)
![alt text](screenshot/image-6.png)
![alt text](screenshot/image-7.png)

## Оценка 4
1.Убедимся, что находимся на ветке mybranch:

![alt text](screenshot/скр1.png)

2.Перезапишим содержимое в sort.c  добавив функцию main():

![alt text](screenshot/скр2.png)

3.git diff:

![alt text](screenshot/скр3-1.png)

4.git diff --staged:

![alt text](screenshot/скр4.png)

5.Добавим в staged файл sort.c:

![alt text](screenshot/скр5.png)

6.git diff:

![alt text](screenshot/скр6.png)

7.git diff --staged:

![alt text](screenshot/скр7.png)

8: ![alt text](screenshot/скр8.png)

9.git diff:

![alt text](screenshot/скр9-1.png)

10.git diff --staged:

![alt text](screenshot/скр10.png)

11.git diff сравнивает рабочую папку с индексом (stage), а
git diff --staged — индекс с последним коммитом.
Когда я удалила одно число из массива в файле, изменение оказалось только в рабочей папке: git diff показал именно удаление числа, а git diff --staged — только первую правку (добавление main и include).

12.Запустим git status:

![alt text](screenshot/скр12.png)

13.Запустим git restore --staged sort.c:

![alt text](screenshot/скр13.png)

14.git status:

![alt text](screenshot/скр14.png)

15.Проиндексируем изменение (add) и сделаем коммит:

![alt text](screenshot/скр15.png)

16.git log:

![alt text](screenshot/скр16.1.png)
![alt text](screenshot/скр16.2.png)

17.Добавим в sort.c в main() printf("hello git\n"):

![alt text](screenshot/скр17.png)

18.Посмотрим содержимое файла sort.c:

![alt text](screenshot/скр18.png)

19.git status:

![alt text](screenshot/скр19.png)

20.git restore sort.c:

![alt text](screenshot/скр20.png)

21.Содержимое sort.c:

![alt text](screenshot/скр21.png)

22.git status:

![alt text](screenshot/скр22.png)
 
23.Запушим на удаленный репо ветку