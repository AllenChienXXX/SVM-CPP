# **Support-Vector-Machine**
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
