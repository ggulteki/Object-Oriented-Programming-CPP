# ASSIGNMENT

- Write a program that calculates the quality of a neighborhood composed of two parks. For each park, the user will give the width and depth information as two doubles, the number of small trees as an integer, the number of big trees as an integer, and the monthly cleaning count as a double.

- Based on this information the program should calculate the total usable park size in the neighborhood as well as its overall park quality. Finally, the program should print out the total usable park size of the neigborhood as a double and overall park quality as a string.

- The usable size of a park is calculated as multiplying the width and depth of the park, subtracting 0.75 for each small tree and 1.2 for each big tree.

- Both the monthly cleaning count and ratio between the usable size and number of trees determine the park quality. If the monthly cleaning count is less than 2 and ratio is higher than 20 it is “bad”, if the monthly cleaning count is at least 2 and ratio is higher than 20 it is “poor”, if the monthly cleaning count is at lesst 2 and ratio is at most 20 it is “fine”, otherwise it is “good”.

- The overall park quality of a neighborhood is the worst park quality of the two parks.

## Requirements:

- All park related information should be kept as private inside a class.
- Class should take all related input in its constructor function.
- Park usable size calculation should be done in a function of the class.
- Park quality evaluation should be done in a function of the class.

NOTE: The total number of trees could be 0. In this case, the park quality should be “bad”.

| Test Case | Input                                   | Output       |
|-----------|-----------------------------------------|--------------|
| 1         | 10 10 3 4 2 20 24 6 12 3                  | 554.05 poor  |
| 2         | 45 6.4 7 1 2 50 15.24 4 20 3              | 1016.55 poor |
| 3         | 45 6.4 0 0 2 50 15.24 4 20 3              | 1023 bad     |