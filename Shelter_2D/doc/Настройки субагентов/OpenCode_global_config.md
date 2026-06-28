# OpenCode global config

## Связи Obsidian

- [[Настройка_прав_субагентов]]

## Оригинальный путь

```text
C:\Users\REX\.config\opencode\opencode.jsonc
```

Это справочная копия для Obsidian и агентов.

Если нужно проверить или изменить реальную настройку OpenCode, искать и править нужно оригинальный файл по пути выше. Эта заметка нужна, чтобы человек и агенты быстро понимали, где лежит глобальный конфиг OpenCode.

## За что отвечает

Файл задаёт модель по умолчанию, провайдер Ollama/OpenCode и permissions для локальных инструментов.

Главные значения для контролируемой записи:

```json
"permission": {
  "edit": "ask",
  "bash": "ask",
  "external_directory": "ask"
}
```

Это значит: OpenCode может писать файлы и запускать shell-команды только после подтверждения пользователя.

## Справочная копия содержимого

```json
{
  "$schema": "https://opencode.ai/config.json",
  "model": "ollama/qwen3-coder:30b",
  "permission": {
    "edit": "ask",
    "bash": "ask",
    "external_directory": "ask"
  },
  "provider": {
    "ollama": {
      "npm": "@ai-sdk/openai-compatible",
      "name": "Ollama (local)",
      "options": {
        "baseURL": "http://localhost:11434/v1"
      },
      "models": {
        "qwen3-coder:30b": {
          "name": "qwen3-coder:30b"
        },
        "deepseek-r1:8b": {
          "name": "deepseek-r1:8b"
        },
        "qwen3.6:latest": {
          "name": "qwen3.6:latest"
        },
        "qwen2.5-coder:7b": {
          "name": "qwen2.5-coder:7b"
        },
        "kimi-k2.7-code:cloud": {
          "name": "kimi-k2.7-code:cloud"
        },
        "deepseek-v4-pro:cloud": {
          "name": "deepseek-v4-pro:cloud"
        },
        "qwen3-coder:480b-cloud": {
          "name": "qwen3-coder:480b-cloud"
        }
      }
    }
  }
}
```
