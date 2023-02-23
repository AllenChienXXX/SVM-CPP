#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>


using namespace std;

class SVM
{
public:
	//constructor
	SVM(vector<vector<float>>inputs, vector<float>labels float C = 200, float tolerence = 0.0001);
	
	//initializing alpha and bias vector
	void init_alpha_b(int len);

	//Calculate the output
	void get_output();

	//Calculate the error
	void get_error();
	
	//Training the model
	void train(int epoch = 10);

	//update alpha vector with SMO
	void update();

	//check lowerbound and upperbound
	void check_condition(int index1, int index2, float &Lbound, float &Hbound);

	//returns the new alpha
	float update_alpha(int index1, int index2);

	//adjust alpha with lower and upperbound
	void adjust_alpha(float Lbound, float Hbound);
	
	//update bias
	void update_bias(int index1, int index2);
	
	//select alpha through smo
	int select_alpha1();
	
	//select alpha with index
	int select_alpha2(int inde1R);
	
	//productthe vectors
	vector<float> v_product(vector<float> v1, vector<float> v2);
	
	//kernel function, default is linear
	float Kernel_function(vector<float> x1, vector<float> x2);

	//print out the alphas
	void print_alpha();
	
	//print out any vectors
	void print_v(vector<float> v);




	vector<vector<float>> inputs;
	vector<float> labels;
	vector<float> alpha;
	vector<float> outputs;
	vector<float> errors;
	vector<int> updatelist;

	//range C
	float C;
	//tolerence
	float tol;

	float bias;

	float alpha1_old;
	float alpha1_new;
	float alpha2_old;
	float alpha2_new;
};

