#include <iostream>
#include"SVM.h"



int main()
{
	vector<vector<float>> inputs = { {1,2},{7,1},{8.2,1},{1,3} };
	vector<float> labels = { -1,1,1,-1 };
	SVM mysvm(inputs, labels);

	for (int i = 0; i < 30; i++) {
		mysvm.train();
		mysvm.print_alpha();
		mysvm.print_v(mysvm.outputs);
		mysvm.print_v(mysvm.errors);
	}
	//cout << "alpha1 old: " << mysvm.alpha1_old << " alpha1 new: " << mysvm.alpha1_new<<endl;
	//cout << "alpha2 old: " << mysvm.alpha2_old << " alpha2 new: " << mysvm.alpha2_new<<endl;



}


