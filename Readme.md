simple cat command execution with sys call



 Command [feature4]

./dog abcd.txt > dcba.txt


 Description

* This command uses output redirection (`>`) provided by the shell.
* The shell redirects the program’s standard output (stdout, fd = 1)** to the file `dcba.txt`.

fd -> 1 -> dcba.txt
---

 What happens internally

* The shell opens/creates `dcba.txt`
* It connects:

  * `fd 1 (stdout)` → `dcba.txt`
* Then it executes `./dog abcd.txt`

---
 Program behavior

* The program reads input from `abcd.txt`
* Any output produced (via `write`) is written to `dcba.txt` instead of the terminal

---

 Result

* Contents of `abcd.txt` are written into `dcba.txt`
* Terminal will not display the output

---

## 🔹 Important Notes

* The program does not know that redirection (`>`) was used
* It simply writes to stdout
* Redirection is completely handled by the shell