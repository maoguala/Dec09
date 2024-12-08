# Person, Student, Teacher, and Course Management System

## 簡介
這是一個用於管理學生與教師資訊的簡單 C++ 程式，支援以下功能：
- 定義 `Person` 類別，作為基底類別。
- 定義繼承自 `Person` 的 `Student` 和 `Teacher` 類別。
- 定義 `Course` 類別，代表課程資訊。
- 使用 `std::vector` 容器記錄教師所授課程。

## 使用方式
1. **編譯與執行**
   確保已安裝 C++ 編譯器 (如 g++)。
   編譯並執行程式：
   ```bash
   g++ -o program main.cpp
   ./program
