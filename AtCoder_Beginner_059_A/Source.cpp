/*
��蕶
�p����������Ȃ� 3 �̒P�� s1, s2, s3 ���󔒋�؂�ŗ^������̂ŁA�P��̐擪�̕������Ȃ��A�啶���ɂ���������o�͂��Ă��������B
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main() {
	std::vector<std::string> v;
	std::string answer;

	v.resize(3);


	for (auto&& x : v) {
		std::cin >> x;
	}

	for (int i = 0; i < 3; i++) {
		answer+= v[i].substr(0, 1);
	}

	std::transform(answer.begin(), answer.end(), answer.begin(), toupper);

	std::cout << answer << std::endl;

	return 0;
}