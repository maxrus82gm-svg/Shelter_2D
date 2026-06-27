# Проект 2D игры на C++

Это рабочая заметка для будущей 2D игры на C++ и SFML в проекте Shelter_2D.

## Текущее состояние

- Visual Studio 2022 проект создан;
- `.sln` найден;
- `.vcxproj` найден;
- `src` создан;
- `main.cpp` создан;
- SFML подключена локально;
- Debug x64 сборка успешно проверена.

## Проект

Корень проекта:

```text
M:\GitHub\Shelter_2D\Shelter_2D_Game
```

Solution:

```text
M:\GitHub\Shelter_2D\Shelter_2D_Game\Shelter_2D_Game.sln
```

Project:

```text
M:\GitHub\Shelter_2D\Shelter_2D_Game\Shelter_2D_Game.vcxproj
```

Main:

```text
M:\GitHub\Shelter_2D\Shelter_2D_Game\src\main.cpp
```

## SFML

Корень SFML:

```text
M:\GitHub\Shelter_2D\SFML-2.6.1
```

Include:

```text
M:\GitHub\Shelter_2D\SFML-2.6.1\include
```

Lib:

```text
M:\GitHub\Shelter_2D\SFML-2.6.1\lib
```

Bin:

```text
M:\GitHub\Shelter_2D\SFML-2.6.1\bin
```

## Подключение

В проекте настроены относительные пути от solution:

```text
$(SolutionDir)..\SFML-2.6.1\include
$(SolutionDir)..\SFML-2.6.1\lib
```

Debug x64 dependencies:

```text
sfml-graphics-d.lib
sfml-window-d.lib
sfml-system-d.lib
```

Release x64 dependencies:

```text
sfml-graphics.lib
sfml-window.lib
sfml-system.lib
```

DLL копируются автоматически через post-build event в `$(OutDir)`.

Debug DLL:

```text
sfml-graphics-d-2.dll
sfml-window-d-2.dll
sfml-system-d-2.dll
```

Release DLL:

```text
sfml-graphics-2.dll
sfml-window-2.dll
sfml-system-2.dll
```

## Сборка

Проверено:

```text
Debug x64: успешно
Warnings: 0
Errors: 0
```

Выходной файл:

```text
M:\GitHub\Shelter_2D\Shelter_2D_Game\bin\x64\Debug\Shelter_2D_Game.exe
```

## Следующие шаги

- открыть `Shelter_2D_Game.sln` в Visual Studio 2022;
- выбрать `x64` и `Debug`;
- запустить проект;
- после проверки окна можно отдельной задачей начинать учебную архитектуру игры.

## Ограничения текущего состояния

- создан только минимальный стартовый проект;
- классы `Game`, `Player`, `Map`, `TileMap` не создавались;
- ассеты, текстуры и система ресурсов не создавались;
- SFML не перемещалась и не изменялась;
- Git не использовался.
