# AGENT REPORT

Форма итогового отчёта агента-исполнителя.

Агент не пишет блок `СТАТУС КОММИТА`, не указывает `Последний проверенный commit` как итоговый commit результата и не определяет актуальную верхушку репозитория для ChatGPT-review.

В разделе `GIT` агент пишет только:

```text
commit не создавался
push не выполнялся
Git-история не изменялась
```

Read-only Git-проверки, если они разрешены задачей, перечисляются в `CHECKS`.

```text
AGENT REPORT

TASK:
-

STATUS:
- успешно / частично / неуспешно

DONE:
-

CHANGED:
-

UNCHANGED:
-

UNEXPECTED CHANGES:
-

UNTRACKED:
-

CHECKS:
-

GIT:
-

EXECUTOR:
-

PROBLEMS:
-

NEXT:
-
```
