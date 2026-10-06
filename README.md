<div align="center">

# 🛒 Purchase Management Application

**A console-based purchasing & sales management system built in C**

![C](https://img.shields.io/badge/C-Language-A8B9CC?style=for-the-badge&logo=c&logoColor=white)
![Gnuplot](https://img.shields.io/badge/Gnuplot-Visualization-2E8B57?style=for-the-badge)
![Python](https://img.shields.io/badge/Python-Sentiment_Analysis-3776AB?style=for-the-badge&logo=python&logoColor=white)
![Jupyter](https://img.shields.io/badge/Jupyter-Notebook-F37626?style=for-the-badge&logo=jupyter&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)

[Features](#-features) • [Architecture](#-architecture) • [Getting Started](#-getting-started) • [Roadmap](#-roadmap)

</div>

---

## 📖 About

This project simulates the core operations of a purchasing and sales environment. It offers dedicated workflows for **administrators**, **suppliers** and **customers**, stores all data in local files, and adds sales visualization with **Gnuplot** plus an experimental **sentiment analysis** notebook.

---

## ✨ Features

| | Module | Description |
|---|---|---|
| 👥 | **Role-based access** | Dedicated menus and authentication for admin, supplier and customer |
| 🛍️ | **Products** | Catalog organized by category, with prices and sales performance |
| 📦 | **Stock** | Current and minimum levels, replenishment tracking, per-supplier files |
| 🚚 | **Suppliers** | Authentication, stock updates and activity reports |
| 🧾 | **Orders** | Order placement and consultable order history |
| 🎟️ | **Promo codes** | Discount codes applied at purchase time |
| 💬 | **Feedback** | Customer complaints and messages forwarded to the admin |
| 📈 | **Sales charts** | Top-selling products displayed as a Gnuplot histogram |
| 🧠 | **Sentiment analysis** | Experimental notebook analyzing customer feedback |

---

## 🏗️ Architecture

```text
                      main.c
                         │
                   Global Menu
          ┌──────────────┼──────────────┐
          ▼              ▼              ▼
        Admin         Supplier       Customer
          └──────────────┼──────────────┘
                         ▼
        Products · Stock · Orders · Suppliers
              Promotions · Feedback
                         ▼
           File persistence (.txt / .dat)
```

<details>
<summary><b>📂 Project structure</b></summary>

```text
├── main.c                      # Entry point
├── anything.h / anything2.h    # Business logic
├── diagramme.h                 # Sales visualization
├── SentimentAnalysis.ipynb     # Sentiment analysis experiment
├── *.txt / *.dat               # Data files (users, products, stock, orders, promos, feedback)
├── gnuplot/                    # Gnuplot resources
└── Project.cbp                 # Code::Blocks project
```

</details>

---

## 🚀 Getting Started

**Prerequisites:** GCC (or Code::Blocks), Gnuplot, Windows environment

```bash
# Clone the repository
git clone https://github.com/hanaekhayyi/Application-gestion-des-achats.git
cd Application-gestion-des-achats

# Compile and run
gcc main.c -o purchase-management
./purchase-management
```

> 💡 You can also open `Project.cbp` directly in **Code::Blocks**.

---

## 🗺️ Roadmap

- [ ] Migrate to a database (SQLite, MySQL or PostgreSQL)
- [ ] Split code into separate `.c` / `.h` modules
- [ ] Add password hashing and input validation
- [ ] Add unit tests and better error handling
- [ ] Integrate sentiment analysis into the feedback workflow
- [ ] Build a GUI or web version

---

<div align="center">

### 👩‍💻 Author

**Hanae KHAYYI** · Data & AI Engineering Student

[![GitHub](https://img.shields.io/badge/GitHub-@hanaekhayyi-181717?style=flat-square&logo=github)](https://github.com/hanaekhayyi)

⭐ *If you found this project useful, feel free to star the repository.*

</div>
