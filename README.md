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

### Constructer 
First we input the len of input datas, labels, penalty factor(customize), tolerence.
Initialize the vectors to store the same amount of datas
```
SVM::SVM(vector<vector<float>>inputs, vector<float>labels, float C, float tolerence) {
	this->inputs = inputs;
	this->labels = labels;
	this->C = C;
	this->tol = tolerence;
	int len = inputs.size();
	init_alpha_b(len);
}
```

To train the model, we need to get the output, whis is W transpose X + b
According the algorithm, because of the weights and bias are not solved, we can use a different polynomial to get the same value as the output.
![92E58D3E-CA96-4C75-9207-1E92358BE196_4_5005_c](https://user-images.githubusercontent.com/87592678/221054707-2a61aec2-d0cf-4a26-af2f-4a102bcb1d21.jpeg)

```
void SVM::get_output() {
	for (int i = 0; i < outputs.size(); i++) {
		float sum = 0.0;
		for (int j = 0; j < outputs.size(); j++) {
			sum += alpha[j] * labels[j] * Kernel_function(inputs[i], inputs[j]);
		}
		sum += bias;
		outputs[i] = sum;
	}
}
```

And the error terms
<img width="209" alt="Screenshot 2023-02-23 at 6 31 10 PM" src="https://user-images.githubusercontent.com/87592678/221055130-e5644f88-fad2-48e3-9f65-6c1fa56a04e1.png">

Where E stands for error terms and O stands for output for input sequence i

To find the maximum margin for SVM model, we have to find the correct value for α, which is the lagrange multiplyer
SMO is a algorithm that changes few datas at a time, which at this circumstances, we change 2 at a time, since the sum for all α*y is a constant
<img width="177" alt="Screenshot 2023-02-23 at 6 38 08 PM" src="https://user-images.githubusercontent.com/87592678/221055844-187530bc-ee42-4989-b49a-a416dcbfb5a4.png">
since y (label) can only be 1 or -1

