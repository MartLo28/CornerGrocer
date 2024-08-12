## Project Overview

This project is called **CornerGrocer**. It was created to help keep track of how often different grocery items are purchased. The program reads a list of grocery items from a file, counts how many times each item appears, and then gives the user several options to see this information. Users can find out how many times a specific item was bought, view a list of all items with their purchase counts, and even see a simple chart showing this information. The program also saves this data to another file, so it can be used again later.

## Project Summary

The main problem this project solves is the need to organize and track grocery purchases. By automatically counting how many times each item is bought, users can easily see which items are bought the most. This can help with planning future grocery shopping.

The project has three main parts:

1. **GroceryTracker Class:** This part of the program does the main work, like reading the grocery list, counting how many times each item was bought, and showing the results.
2. **Main Program:** This part of the program gives the user a menu to choose what they want to do, like looking up an item or seeing the full list of items.
3. **Input and Output Files:** The input file is a list of grocery items, and the program creates an output file that saves the item counts.

## Reflection on Project Execution

### What I Did Well

- I made sure the program correctly tracks and shows how many times each grocery item was bought. The code is organized in a way that makes it easy to understand and change if needed.
- The chart that shows how often each item was bought turned out well, making it easy to see which items are most common.

### Areas for Improvement

- **Speed:** The program could be made faster, especially if it needs to handle bigger lists of grocery items. Using more advanced tools could help make it quicker.
- **Security:** The program could be made safer by checking the user’s inputs more carefully, like making sure the file paths or item names are correct.
- **Error Handling:** Adding more checks for mistakes, like if a file is missing, would make the program more reliable.

### Challenges and Solutions

- **Challenge:** One of the hardest parts was making sure the program could handle different item names, even if they were spelled slightly differently or had different capital letters.
  - **Solution:** I solved this by making all item names the same (like changing them all to lowercase) before counting them, which made sure they were counted correctly.

### Transferable Skills

- The skills I learned in this project, like reading files and using maps (a type of data structure), are useful in many other areas of programming.
- Also, the experience of making a simple menu for the user to interact with will be helpful in other projects where users need to make choices.

### Maintainability and Readability

- **Organized Code:** The code is broken down into small parts, each with a specific job, which makes it easier to keep up and improve.
- **Documentation:** The code includes comments that explain what each part does, making it easier for someone else (or me in the future) to understand and work with the code.
- **Adaptability:** The program is made in a way that it can be easily changed to track other types of data, not just groceries. By changing the input, the same program can be used for different tasks.