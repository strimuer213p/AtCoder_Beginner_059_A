/*
問題文
英小文字からなる 3 つの単語 s1, s2, s3 が空白区切りで与えられるので、単語の先頭の文字をつなげ、大文字にした略語を出力してください。
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