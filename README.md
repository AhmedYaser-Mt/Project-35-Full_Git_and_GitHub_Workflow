# 🔀 Project 35 — Full Git & GitHub Workflow

> The final project of the Git & GitHub course — a small C++ Task Manager taken through the complete workflow: init, commits, feature branches, push, two Pull Requests, merge, and cleanup.

---

<img width="800" height="460" alt="image" src="https://github.com/user-attachments/assets/971d307c-581d-492b-ad65-963ddc937b3b" />

---

## 🚀 Project Overview

No UI this time. No new controls. A workflow.

The app is a tiny C++ Task Manager: three files and a few placeholder functions. That's on purpose — the code is just something to version. The real project is the history around it.

Files edited in VS Code. Every command typed in the terminal. The whole run screen-recorded from start to finish.

Two commits on `main`. Two feature branches. Everything pushed to GitHub. Two Pull Requests, reviewed and merged. Local branches deleted. A clean `main` at the end.

---

## 🏗️ Architecture Design

```
Project 35 — Task Manager (main.cpp · TaskManager.cpp · TaskManager.h)
 │
 ├── Local repository
 │    ├── main
 │    │    ├── 0abb172  Create initial Task Manager project
 │    │    └── abcdafd  Add basic task creation
 │    ├── feature-delete-task
 │    │    └── 322ae7b  Add delete task feature
 │    └── feature-edit-task
 │         └── 95d1297  Add edit task feature
 │
 └── GitHub (origin)
      ├── Pull Request #1   feature-delete-task → main   merged
      └── Pull Request #2   feature-edit-task   → main   merged
```

---

## ⚙️ The Workflow

| Stage | Commands | What happened |
|---|---|---|
| **Start** | `git init` · `git status` | Turned the project folder into a repository; Git listed the three files as untracked |
| **First commits on main** | `git add .` · `git commit -m` | "Create initial Task Manager project", then "Add basic task creation" |
| **Review before committing** | `git diff` | Checked each change before staging it |
| **Feature branches** | `git switch -c feature-delete-task` · `git switch -c feature-edit-task` | One branch per feature, each with its own commit |
| **Publish** | `git remote add origin` · `git push -u origin <branch>` | Pushed `main` and both feature branches to GitHub |
| **Pull Requests** | GitHub | PR #1 and PR #2 — opened, reviewed, merged |
| **Sync** | `git switch main` · `git pull` | Local `main` fast-forwarded to include the merged features |
| **Cleanup** | `git branch -d` | Deleted the merged local branches |
| **Verify** | `git status` · `git log --oneline --graph` | Clean working tree, up to date with `origin/main` |

### The final history

```
*   c9c4a55 Merge pull request #2 from AhmedYaser-Mt/feature-edit-task
|\
| *   cc829f4 Merge branch 'main' into feature-edit-task
| |\
| |/
|/|
* |   04ba0cc Merge pull request #1 from AhmedYaser-Mt/feature-delete-task
|\ \
| * | 322ae7b Add delete task feature
|/ /
| * 95d1297 Add edit task feature
|/
* abcdafd Add basic task creation
* 0abb172 Create initial Task Manager project
```

The shape tells the story: two feature branches, two merged Pull Requests, and one extra merge commit in the middle.

---

## 🧠 Design Decisions Worth Noting

### Main only changes through Pull Requests

After the first two commits — made directly on `main`, before the branching strategy kicked in — no feature went straight into `main`. Each one lived on its own branch until it was reviewed and merged on GitHub. Local `main` only moved by pulling the result:

```bash
git switch main
git pull
```

Both pulls were fast-forwards — nothing was merged by hand on the local side.

---

### Review before every commit

```bash
git status
git diff
git add .
git commit -m "Add delete task feature"
```

Look first, stage second. `git diff` shows exactly what is about to become history.

---

### `-u` once per branch

```bash
git push -u origin feature-delete-task
```

`-u` links the local branch to its GitHub counterpart, so later pushes and pulls on that branch need no extra arguments.

---

### The second Pull Request is where it got real

After Pull Request #1 was merged, `feature-edit-task` was behind `main`, so `main` was merged into it before Pull Request #2 went through. That's the extra merge commit in the history: `cc829f4 Merge branch 'main' into feature-edit-task`.

One feature walks through cleanly. The second one shows what happens when branches live side by side.

---

### Cleaning up with the safe delete

```bash
git branch -d feature-delete-task
git branch -d feature-edit-task
```

`-d` only deletes a branch that's already merged, so it can't throw away unfinished work. The last `git branch` showed a single branch: `main`.

---

### Worth being upfront about

The Task Manager is a placeholder — its functions print messages and don't store anything. This project practices the workflow, not the app. The history is real; the program is a prop.

---

## 🆕 Concepts Practiced in This Project

| Concept | Commands / Tools |
|---|---|
| **Repository, staging, commits** | `git init` · `git add` · `git commit` |
| **Reviewing changes** | `git status` · `git diff` |
| **Branching** | `git switch -c` · `git branch` |
| **Remotes** | `git remote add origin` · `git push -u` |
| **Pull Requests** | Open, review, and merge on GitHub |
| **Syncing** | `git pull` (fast-forward) |
| **Cleanup** | `git branch -d` |
| **History** | `git log --oneline --graph` |

---

## 🛠️ Tech Stack

| | |
|---|---|
| **Version Control** | Git |
| **Hosting** | GitHub |
| **Editor** | Visual Studio Code |
| **Terminal** | PowerShell |
| **Sample Project** | C++ (Task Manager) |
| **Type** | Workflow practice project |

---

## 🏁 Course & Milestone Context

- ✅ Final project (Module 10) of the Git & GitHub for Beginners course
- ✅ Completed the course's final challenge too: a second feature and a second Pull Request
- ✅ Part of the **Programming Advices Platform**

---

## 🙏 Gratitude

Thank you to:

**[Programming Advices Platform](https://programmingadvices.com)**

**Eng. Mohammad Aljaber** — instructor of the Git & GitHub for Beginners course

**Dr. Mohammed Abu-Hadhoud** — founder of the Programming Advices Platform

---
