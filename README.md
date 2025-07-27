# Expense Tracker 🚀

**Salman's Expense Tracker** is a simple yet effective C++ program designed to help you track your daily expenses. With features like adding expenses, viewing by date, and sorting, this program makes managing your finances intuitive and efficient.

---

## 💡 Features
- **Add Expenses:** 
  - Enter item names and the amount spent.
  - Automatically records the date and time for each entry.

- **Display All Records:** 
  - View a detailed table of all expenses, including the item name, amount, and date.

- **Filter by Date:** 
  - Retrieve expenses for a specific date in the format `YYYY-MM-DD`.

- **Sorted Records:** 
  - View all entries in an ordered format for a clear financial overview.

- **User-Friendly Menu:**
  - Easy-to-navigate menu with clear options.

---

## 🛠️ How It Works
1. **Menu Options:**  
   - Select options from the menu to add, view, or filter expenses.
2. **Validation:**  
   - Ensures that item names don't contain numbers.
3. **Date Handling:**  
   - Captures the current date and time automatically for entries.
4. **Custom Date Search:**  
   - Search for expenses by entering a date in the format `YYYY-MM-DD`.

---

## ⚡ Requirements
- **C++ Compiler:**  
  The program requires a modern C++ compiler that supports `std::map`, `tm`, and `localtime`.  
  (e.g., GCC 5+, Clang 3.8+, or Visual Studio 2017+)

- **Date Format:**  
  Enter dates as `YYYY-MM-DD` for proper filtering.

---

## 🌟 Notes
1. **Compiler Compatibility:**  
   - Some compilers like Dev C++ may not fully support the range-based `for` loops used in the program. Use a modern IDE or an online compiler.
   
2. **Error Handling:**  
   - Inputs are validated to ensure proper functioning, like rejecting item names with numbers.

---

## 🚀 Future Enhancements
- Exporting expenses to a CSV file for better record-keeping.
- Adding categories to organize expenses.
- Enhanced date filtering options.

---

## 💬 Feedback
Feel free to suggest improvements or report issues in the repository's "Issues" section!

