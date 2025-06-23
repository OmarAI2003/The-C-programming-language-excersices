This question is asking you to write a program that processes long lines of input and breaks (or "folds") them into multiple shorter lines. The breaking point should be the last non-blank (non-space) character before reaching a specified column number `n`. 

### **Key Points:**
1. **Input:** A long line of text.
2. **Output:** The same text, but split into multiple shorter lines.
3. **Column Limit (`n`)**: You should not exceed the `n`-th column when breaking a line.
4. **Breaking Rule:** The break should happen **at the last non-blank character** before `n`.  
5. **Continuation:** The remaining part of the input should continue on the next line, following the same rule.

### **Example**
#### **Given Input (assuming `n = 10`):**
```
This is a long line that needs to be folded correctly.
```
#### **Output:**
```
This is a
long line
that needs
to be folded
correctly.
```
Here, each line is folded at or before the 10th column, without breaking words in the middle.

---
