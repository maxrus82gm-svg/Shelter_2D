# Правила Git и Review

## Назначение

Документ описывает безопасную работу с Git, GitHub, diff, status, review и историей изменений в проекте `{{PROJECT_NAME}}`.

Репозиторий:

```text
{{REPOSITORY_URL}}
```

Политика Git:

```text
{{USER_GIT_POLICY}}
```

## Главное правило Git

Git контролирует пользователь.

Агент не делает commit, push, pull, merge, rebase, reset, clean, checkout, switch, создание веток, изменение remote, изменение Git-конфига или переписывание истории без прямой команды пользователя.

Read-only Git-команды разрешены только если текущая задача прямо разрешила Git-проверку.

Если текущая задача запрещает Git, не выполнять даже команды чтения.

## Review после отчёта агента

Любой review после отчёта агента начинается с:

```text
СТАТУС КОММИТА: "<commit message>"
Repository: owner/repo
Branch: main
Commit: <short sha>
Проверка: изменения найдены / push не обнаружен / требуется уточнение
```

Затем идут:

```text
GIT / REPOSITORY CHECK
REVIEW STATUS
FINDINGS
PROBLEMS
NEXT
```

Commit message указывается как есть. Если message `+`, `01`, `02`, `fix` или другой короткий текст, писать как есть.

Если message не подтверждён, писать `message не подтверждён`.

Если push не обнаружен, писать `push не обнаружен`.

GitHub не равен локальному Git: GitHub показывает только то, что уже попало в удалённый репозиторий.

## Формат проверки

```text
GIT / REPOSITORY CHECK

Repository:
-

Branch:
-

Status:
-

Changed files:
-

Diff summary:
-

Commit:
-

Push:
-

Pull:
-

GitHub check:
-
```
