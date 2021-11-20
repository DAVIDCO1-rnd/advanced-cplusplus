#include <iostream>

//didn't really listen to this auto lecture

using namespace std;

auto test1() -> int {
	return 100;
}

template <class T>
auto test2(T value) -> decltype(value) {
	return value;
}

template <class T, class S>
auto test3(T value1, S value2) -> decltype(value1 + value2) {
	return value1 + value2;
}

int get() {
	return 999;
}

auto test4() -> decltype(get()) {
	return get();
}

int main()
{
	auto value = 7;
	auto text = "Hello";

	cout << "test1() = " << test1() << endl;
	cout << "test2(\"Hello there\") = " << test2("Hello there") << endl;
	cout << "test3(5, 6) = " << test3(5, 6) << endl;
	cout << "test4() = " << test4() << endl;
}
