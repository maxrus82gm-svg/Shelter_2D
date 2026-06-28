# Personal Codex Guidance

- Keep the main conversation on the current primary model unless the user explicitly asks to switch it.
- For simple, low-risk tasks that benefit from a fast local model, prefer spawning the `simple_local` custom agent first.
- Good `simple_local` tasks: read-only codebase exploration, grep-heavy searches, quick summaries, draft snippets, boilerplate, and lightweight debugging hypotheses.
- Keep final decisions, high-risk edits, final reviews, and tasks that need current web facts on the main agent.
- If `simple_local` is unavailable for any reason, continue on the main agent instead of blocking.

## Agent Route Terms

Before any task involving delegation, subagents, external agents, local agents, or parallel review, read:

```text
M:\GitHub\Shelter_2D\Shelter_2D\doc\Правила_использования_субагентов.md
```

If the user asks for a universal chat task template, a prompt for another environment, or a freer external-agent template that may create folders inside a specified workspace, also read:

```text
M:\GitHub\Shelter_2D\Shelter_2D\doc\UNIVERSAL_CHAT_TASK_RULES.md
```

- Internal Codex agents are strictly Codex-native agents launched by Codex tools, such as `explorer`, `worker`, and `default`.
- Local agents can be launched from Codex but are not native internal Codex agents, such as `simple_local / qwen3-coder:30b / локальный`.
- External agents are launched from other environments, not from Codex. The user transfers the prepared task into that external chat.
- If the user asks for an external agent, do not launch Codex internal agents or `simple_local`; prepare the external-agent task route instead.
- Any task statement that mentions agents, subagents, delegation, external agents, local agents, internal agents, parallel review, or independent analysis must include the `КОНТРОЛЬ МАРШРУТА АГЕНТОВ` block from the project rules.
- Universal chat templates are a separate route: Codex prepares the template, but the user is the final distributor and may edit the rules before sending it.
- Files created for external-agent prompts, universal chat templates, and agent reports should use ASCII names by default, such as `AGENT_REPORT.md`.
