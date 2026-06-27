# Правила Git и Review

## Назначение

Документ описывает безопасную работу с Git, GitVerse, diff, status, review и историей изменений в проекте VR_Project.

Документ читается только тогда, когда задача связана с Git, GitVerse, commit, push, pull, ветками, diff, status, review, историей изменений или проверкой результата.

## Связи Obsidian

- [[Список_правил]]

## Репозиторий проекта

GitVerse repository:

```text
git@gitverse.ru:MLPGM/VR_Project.git
```

Рабочий путь проекта:

```text
M:\GITS_VERSE\VR_Project\VR_Projekt
```

Папка правил и задач:

```text
M:\GITS_VERSE\VR_Project\VR_Projekt\VR\Doc
```

## Главное правило Git

Git контролирует только пользователь.

Агенту запрещено без прямой команды пользователя выполнять действия, которые меняют состояние репозитория, рабочей копии, веток, remote, Git-конфига или истории.

Запрещены:

```bash
git add
git commit
git push
git pull
git merge
git rebase
git reset
git clean
git checkout
git switch
git branch
git tag
git remote
git config
```

Агент не создаёт commit.  
Агент не делает push.  
Агент не делает pull.  
Агент не создаёт ветки.  
Агент не переключает ветки.  
Агент не меняет remote.  
Агент не меняет Git-конфиг.  
Агент не переписывает историю Git.

## Что агенту разрешено

Агент может читать состояние Git только при необходимости текущей задачи.

Разрешены только безопасные команды просмотра:

```bash
git status
git status --short
git diff
git diff --stat
git diff --name-only
git log
git log --oneline
git show <commit>
git ls-files --modified
git ls-files --others --exclude-standard
```

Эти команды используются только для чтения. Если агент использовал Git-команды, он перечисляет их в отчёте.

## Статус чтения GitVerse

Если агент читает репозиторий GitVerse или данные, связанные с GitVerse, он явно указывает статус чтения:

```text
Repository: git@gitverse.ru:MLPGM/VR_Project.git
Branch/ref:
Commit SHA:
Commit message:
Files read:
Проверка:
```

Если пользователь дал конкретный commit, агент указывает, что чтение выполнено по этому commit.

Если commit или ветку подтвердить нельзя, агент пишет причину.

## Формат REVIEW

Review — это проверка результата, diff, commit или состояния репозитория.

Формат:

```text
REVIEW

Repository: git@gitverse.ru:MLPGM/VR_Project.git
Branch/ref:
Commit SHA:
Commit message:
Files read:

FINDINGS:
- найденные проблемы или "Проблем не найдено"

RISKS:
- риски, если есть

NEXT:
- следующий безопасный шаг
```

Если проблема найдена на review, агент не исправляет её сам без прямой команды пользователя. Агент описывает проблему и предлагает следующий безопасный шаг.

## Правило локальных изменений

Агент не утверждает, что видел локальные изменения, если он их реально не проверял.

Если проверялся локальный путь, указывается:

```text
Проверен локальный путь:
M:\GITS_VERSE\VR_Project\VR_Projekt
```

Если Git-команды чтения не выполнялись, отчёт должен прямо сказать:

```text
Git-команды чтения не выполнялись.
```

## Правило отчёта для Git-задачи

Если задача затрагивала Git, агент указывает:

```text
Branch/ref:
- текущая ветка или ref, если проверялись

Status:
- состояние, если проверялось

Changed files:
- изменённые файлы, если проверялись

Diff summary:
- краткое описание diff, если проверялся

Commit:
- не создавался агентом

Push:
- не выполнялся агентом

GitVerse check:
- проверялся или нет
```

## Главное правило

Git используется агентом только для чтения и анализа, если это нужно задаче.

Commit, push, pull, branch, merge, rebase, reset, checkout, switch, clean, изменение remote, изменение Git-конфига и переписывание истории выполняет только пользователь.
