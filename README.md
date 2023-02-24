# **Support-Vector-Machine**

* [Introduction](#-Introduction)
* [Instruction](#-Instruction)
* [Conclusion](#-Conclusion)
* [License](#-License)

# Introduction
Support vector machine was based on optimizing linear classification which one of them was known as logistic regression. By adding the margins to expand the area, it alows more accurate and precise prediction than linear regression or logistic regression.

This project uses Sequential minimal optimization(SMO) to solve the dual problem.

### Dual problem of SVM
This is the dual problem of SVM
 α: Lagrange multiplyer
 y: Output of svm
 x: input
![C86CA530-08B2-4E30-A4D8-2AACEA90EC09_4_5005_c](https://user-images.githubusercontent.com/87592678/221047075-b28b8efd-78c1-4234-aebd-96faaf852ce9.jpeg)

### Solution
To find the maximum margin for SVM model, we have to find the correct value for α, which is the lagrange multiplyer
SMO is a algorithm that changes few datas at a time, which at this circumstances, we change 2 at a time, since the sum for all α*y is a constant
<img width="177" alt="Screenshot 2023-02-23 at 6 38 08 PM" src="https://user-images.githubusercontent.com/87592678/221055844-187530bc-ee42-4989-b49a-a416dcbfb5a4.png">
since y (label) can only be 1 or -1

We choose both α wich satisfy conditions.
And by adjusting 2 of a time, we will get the best result of α, then we use update bias.

# Instruction
This is a basic svm model, kernel functions are not tested in this code, so its better to use 2-d and linear separable data for testing results.

### 1. Download the header file (SVM.h) and .cpp file (SVM.cpp).
### 2. Include the header file in your workspace.
### 3. Create input and labels in vectors (Must be the same amounts !)

Example:
```
    vector<vector<float>> inputs = { {1,1},{1,3},{2,3},{3.5,5},{9,3},
        {-1,-5},{-4,-3},{-9.9,-1},{-5,-8},{-7,-8}};
    vector<float> labels = { 1,1,1,1,1,-1,-1,-1,-1,-1};
    SVM mysvm(inputs, labels);
    
    int train_steps = 100;

    for (int i = 0; i < train_steps; i++) {
        mysvm.train();
//print out the outputs to trace it
//        mysvm.print_v(mysvm.outputs);
    }
    
//print out the final result
//    mysvm.print_alpha();
    mysvm.print_v(mysvm.outputs);
//    mysvm.print_v(mysvm.errors);
```
# Conclusion
This is just a basic model for people who are interested in the algorithms and enjoy machine learning.

for simple data like this, the amount of steps for training doesn't need to be large.

### Thank you for using my model and hope you enjoy!:blush:	

# License
[MIT](https://github.com/AllenChienXXX/SVM-SMO/blob/main/LICENSE.txt)
